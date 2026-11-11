#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_divisionExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_divisionExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_divisionExpressionNoOverflowAST_2E_weak::GGS_divisionExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak & GGS_divisionExpressionNoOverflowAST_2E_weak::operator = (const GGS_divisionExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak::GGS_divisionExpressionNoOverflowAST_2E_weak (const GGS_divisionExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST_2E_weak GGS_divisionExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_divisionExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_divisionExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_divisionExpressionNoOverflowAST * p = (cPtr_divisionExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_divisionExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_divisionExpressionNoOverflowAST GGS_divisionExpressionNoOverflowAST_2E_weak::bang_divisionExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_divisionExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_divisionExpressionNoOverflowAST) ;
      result = GGS_divisionExpressionNoOverflowAST ((cPtr_divisionExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @divisionExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2E_weak ("divisionExpressionNoOverflowAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_divisionExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @moduloExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_moduloExpressionAST::objectCompare (const GGS_moduloExpressionAST & inOperand) const {
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

GGS_moduloExpressionAST::GGS_moduloExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_moduloExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_moduloExpressionAST (inCompiler COMMA_THERE)) ;
  object->moduloExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_moduloExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_moduloExpressionAST::
moduloExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mLeftExpression,
                                      const GGS_semanticExpressionAST & in_mRightExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST::GGS_moduloExpressionAST (const cPtr_moduloExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_moduloExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_moduloExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_moduloExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_moduloExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_moduloExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @moduloExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_moduloExpressionAST::cPtr_moduloExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_moduloExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

void cPtr_moduloExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@moduloExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_moduloExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_moduloExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_moduloExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @moduloExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST ("moduloExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_moduloExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_moduloExpressionAST_2E_weak::objectCompare (const GGS_moduloExpressionAST_2E_weak & inOperand) const {
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

GGS_moduloExpressionAST_2E_weak::GGS_moduloExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak & GGS_moduloExpressionAST_2E_weak::operator = (const GGS_moduloExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak::GGS_moduloExpressionAST_2E_weak (const GGS_moduloExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST_2E_weak GGS_moduloExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_moduloExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_moduloExpressionAST result ;
  if (isValid ()) {
    const cPtr_moduloExpressionAST * p = (cPtr_moduloExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_moduloExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_moduloExpressionAST GGS_moduloExpressionAST_2E_weak::bang_moduloExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_moduloExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_moduloExpressionAST) ;
      result = GGS_moduloExpressionAST ((cPtr_moduloExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @moduloExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ("moduloExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_moduloExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_moduloExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionAST::objectCompare (const GGS_selfInExpressionAST & inOperand) const {
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

GGS_selfInExpressionAST::GGS_selfInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST::
init_21_ (const GGS_location & in_mSelfLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_selfInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfInExpressionAST (inCompiler COMMA_THERE)) ;
  object->selfInExpressionAST_init_21_ (in_mSelfLocation, inCompiler) ;
  const GGS_selfInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfInExpressionAST::
selfInExpressionAST_init_21_ (const GGS_location & in_mSelfLocation,
                              Compiler * /* inCompiler */) {
  mProperty_mSelfLocation = in_mSelfLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST::GGS_selfInExpressionAST (const cPtr_selfInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_selfInExpressionAST::readProperty_mSelfLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfInExpressionAST) ;
    return p->mProperty_mSelfLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mSelfLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfInExpressionAST::cPtr_selfInExpressionAST (const GGS_location & in_mSelfLocation,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mSelfLocation () {
  mProperty_mSelfLocation = in_mSelfLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

void cPtr_selfInExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selfInExpressionAST:") ;
  mProperty_mSelfLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfInExpressionAST (mProperty_mSelfLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelfLocation.printNonNullClassInstanceProperties ("mSelfLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST ("selfInExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionAST_2E_weak::objectCompare (const GGS_selfInExpressionAST_2E_weak & inOperand) const {
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

GGS_selfInExpressionAST_2E_weak::GGS_selfInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak & GGS_selfInExpressionAST_2E_weak::operator = (const GGS_selfInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak::GGS_selfInExpressionAST_2E_weak (const GGS_selfInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST_2E_weak GGS_selfInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfInExpressionAST result ;
  if (isValid ()) {
    const cPtr_selfInExpressionAST * p = (cPtr_selfInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionAST GGS_selfInExpressionAST_2E_weak::bang_selfInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfInExpressionAST) ;
      result = GGS_selfInExpressionAST ((cPtr_selfInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionAST_2E_weak ("selfInExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfInExpressionForGeneration_2E_weak::objectCompare (const GGS_selfInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_selfInExpressionForGeneration_2E_weak::GGS_selfInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak & GGS_selfInExpressionForGeneration_2E_weak::operator = (const GGS_selfInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak::GGS_selfInExpressionForGeneration_2E_weak (const GGS_selfInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration_2E_weak GGS_selfInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selfInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_selfInExpressionForGeneration * p = (cPtr_selfInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfInExpressionForGeneration GGS_selfInExpressionForGeneration_2E_weak::bang_selfInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfInExpressionForGeneration) ;
      result = GGS_selfInExpressionForGeneration ((cPtr_selfInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2E_weak ("selfInExpressionForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @trueExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionAST::objectCompare (const GGS_trueExpressionAST & inOperand) const {
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

GGS_trueExpressionAST::GGS_trueExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_trueExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_trueExpressionAST (inCompiler COMMA_THERE)) ;
  object->trueExpressionAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_trueExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_trueExpressionAST::
trueExpressionAST_init_21_ (const GGS_location & in_mLocation,
                            Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST::GGS_trueExpressionAST (const cPtr_trueExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_trueExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_trueExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_trueExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @trueExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_trueExpressionAST::cPtr_trueExpressionAST (const GGS_location & in_mLocation,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_trueExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

void cPtr_trueExpressionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@trueExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_trueExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_trueExpressionAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_trueExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @trueExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST ("trueExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionAST_2E_weak::objectCompare (const GGS_trueExpressionAST_2E_weak & inOperand) const {
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

GGS_trueExpressionAST_2E_weak::GGS_trueExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak & GGS_trueExpressionAST_2E_weak::operator = (const GGS_trueExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak::GGS_trueExpressionAST_2E_weak (const GGS_trueExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST_2E_weak GGS_trueExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_trueExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_trueExpressionAST result ;
  if (isValid ()) {
    const cPtr_trueExpressionAST * p = (cPtr_trueExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_trueExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionAST GGS_trueExpressionAST_2E_weak::bang_trueExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_trueExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionAST) ;
      result = GGS_trueExpressionAST ((cPtr_trueExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @trueExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionAST_2E_weak ("trueExpressionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @falseExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionAST::objectCompare (const GGS_falseExpressionAST & inOperand) const {
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

GGS_falseExpressionAST::GGS_falseExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_falseExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_falseExpressionAST (inCompiler COMMA_THERE)) ;
  object->falseExpressionAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_falseExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_falseExpressionAST::
falseExpressionAST_init_21_ (const GGS_location & in_mLocation,
                             Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST::GGS_falseExpressionAST (const cPtr_falseExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_falseExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_falseExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_falseExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @falseExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_falseExpressionAST::cPtr_falseExpressionAST (const GGS_location & in_mLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_falseExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

void cPtr_falseExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@falseExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_falseExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_falseExpressionAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_falseExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @falseExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST ("falseExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionAST_2E_weak::objectCompare (const GGS_falseExpressionAST_2E_weak & inOperand) const {
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

GGS_falseExpressionAST_2E_weak::GGS_falseExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak & GGS_falseExpressionAST_2E_weak::operator = (const GGS_falseExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak::GGS_falseExpressionAST_2E_weak (const GGS_falseExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST_2E_weak GGS_falseExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_falseExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_falseExpressionAST result ;
  if (isValid ()) {
    const cPtr_falseExpressionAST * p = (cPtr_falseExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_falseExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionAST GGS_falseExpressionAST_2E_weak::bang_falseExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_falseExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionAST) ;
      result = GGS_falseExpressionAST ((cPtr_falseExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @falseExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionAST_2E_weak ("falseExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_trueExpressionForGeneration_2E_weak::objectCompare (const GGS_trueExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_trueExpressionForGeneration_2E_weak::GGS_trueExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak & GGS_trueExpressionForGeneration_2E_weak::operator = (const GGS_trueExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak::GGS_trueExpressionForGeneration_2E_weak (const GGS_trueExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration_2E_weak GGS_trueExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_trueExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_trueExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_trueExpressionForGeneration * p = (cPtr_trueExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_trueExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_trueExpressionForGeneration GGS_trueExpressionForGeneration_2E_weak::bang_trueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_trueExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_trueExpressionForGeneration) ;
      result = GGS_trueExpressionForGeneration ((cPtr_trueExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @trueExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_trueExpressionForGeneration_2E_weak ("trueExpressionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_trueExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_trueExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_falseExpressionForGeneration_2E_weak::objectCompare (const GGS_falseExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_falseExpressionForGeneration_2E_weak::GGS_falseExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak & GGS_falseExpressionForGeneration_2E_weak::operator = (const GGS_falseExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak::GGS_falseExpressionForGeneration_2E_weak (const GGS_falseExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration_2E_weak GGS_falseExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_falseExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_falseExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_falseExpressionForGeneration * p = (cPtr_falseExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_falseExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_falseExpressionForGeneration GGS_falseExpressionForGeneration_2E_weak::bang_falseExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_falseExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_falseExpressionForGeneration) ;
      result = GGS_falseExpressionForGeneration ((cPtr_falseExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @falseExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_falseExpressionForGeneration_2E_weak ("falseExpressionForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_falseExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_falseExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @unaryPlusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST::objectCompare (const GGS_unaryPlusExpressionAST & inOperand) const {
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

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryPlusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryPlusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryPlusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryPlusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::
unaryPlusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                     const GGS_semanticExpressionAST & in_mExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryPlusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryPlusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryPlusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryPlusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_unaryPlusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

void cPtr_unaryPlusExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryPlusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryPlusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryPlusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryPlusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ("unaryPlusExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryPlusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST_2E_weak::objectCompare (const GGS_unaryPlusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak & GGS_unaryPlusExpressionAST_2E_weak::operator = (const GGS_unaryPlusExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (const GGS_unaryPlusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak GGS_unaryPlusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryPlusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryPlusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::bang_unaryPlusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryPlusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryPlusExpressionAST) ;
      result = GGS_unaryPlusExpressionAST ((cPtr_unaryPlusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ("unaryPlusExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryPlusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @bangExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionAST::objectCompare (const GGS_bangExpressionAST & inOperand) const {
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

GGS_bangExpressionAST::GGS_bangExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_bangExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_bangExpressionAST (inCompiler COMMA_THERE)) ;
  object->bangExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_bangExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bangExpressionAST::
bangExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                const GGS_semanticExpressionAST & in_mExpression,
                                Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST::GGS_bangExpressionAST (const cPtr_bangExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bangExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_bangExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_bangExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_bangExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @bangExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionAST::cPtr_bangExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_bangExpressionAST::cPtr_bangExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_bangExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

void cPtr_bangExpressionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@bangExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bangExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bangExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bangExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bangExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST ("bangExpressionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionAST_2E_weak::objectCompare (const GGS_bangExpressionAST_2E_weak & inOperand) const {
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

GGS_bangExpressionAST_2E_weak::GGS_bangExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak & GGS_bangExpressionAST_2E_weak::operator = (const GGS_bangExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak::GGS_bangExpressionAST_2E_weak (const GGS_bangExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST_2E_weak GGS_bangExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bangExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_bangExpressionAST result ;
  if (isValid ()) {
    const cPtr_bangExpressionAST * p = (cPtr_bangExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_bangExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionAST GGS_bangExpressionAST_2E_weak::bang_bangExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bangExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bangExpressionAST) ;
      result = GGS_bangExpressionAST ((cPtr_bangExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bangExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionAST_2E_weak ("bangExpressionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bangExpressionForGeneration_2E_weak::objectCompare (const GGS_bangExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_bangExpressionForGeneration_2E_weak::GGS_bangExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak & GGS_bangExpressionForGeneration_2E_weak::operator = (const GGS_bangExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak::GGS_bangExpressionForGeneration_2E_weak (const GGS_bangExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration_2E_weak GGS_bangExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bangExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_bangExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_bangExpressionForGeneration * p = (cPtr_bangExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_bangExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bangExpressionForGeneration GGS_bangExpressionForGeneration_2E_weak::bang_bangExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bangExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bangExpressionForGeneration) ;
      result = GGS_bangExpressionForGeneration ((cPtr_bangExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bangExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bangExpressionForGeneration_2E_weak ("bangExpressionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bangExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bangExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @testDynamicClassInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST::objectCompare (const GGS_testDynamicClassInExpressionAST & inOperand) const {
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

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_testDynamicClassInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_testDynamicClassInExpressionAST (inCompiler COMMA_THERE)) ;
  object->testDynamicClassInExpressionAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_testDynamicClassInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_testDynamicClassInExpressionAST::
testDynamicClassInExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                  const GGS_location & in_mEndOfReceiverExpression,
                                                  const GGS_lstring & in_mTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST::GGS_testDynamicClassInExpressionAST (const cPtr_testDynamicClassInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_testDynamicClassInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_testDynamicClassInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_testDynamicClassInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_testDynamicClassInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_testDynamicClassInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @testDynamicClassInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_testDynamicClassInExpressionAST::cPtr_testDynamicClassInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                                            const GGS_location & in_mEndOfReceiverExpression,
                                                                            const GGS_lstring & in_mTypeName,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_testDynamicClassInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

void cPtr_testDynamicClassInExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@testDynamicClassInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_testDynamicClassInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_testDynamicClassInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_testDynamicClassInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ("testDynamicClassInExpressionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionAST_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionAST_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak & GGS_testDynamicClassInExpressionAST_2E_weak::operator = (const GGS_testDynamicClassInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak::GGS_testDynamicClassInExpressionAST_2E_weak (const GGS_testDynamicClassInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST_2E_weak GGS_testDynamicClassInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_testDynamicClassInExpressionAST result ;
  if (isValid ()) {
    const cPtr_testDynamicClassInExpressionAST * p = (cPtr_testDynamicClassInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_testDynamicClassInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionAST GGS_testDynamicClassInExpressionAST_2E_weak::bang_testDynamicClassInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionAST) ;
      result = GGS_testDynamicClassInExpressionAST ((cPtr_testDynamicClassInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ("testDynamicClassInExpressionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @castInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST::objectCompare (const GGS_castInExpressionAST & inOperand) const {
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

GGS_castInExpressionAST::GGS_castInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionAST (inCompiler COMMA_THERE)) ;
  object->castInExpressionAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_castInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionAST::
castInExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                      const GGS_location & in_mEndOfReceiverExpression,
                                      const GGS_lstring & in_mTypeName,
                                      Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST::GGS_castInExpressionAST (const cPtr_castInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_castInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_castInExpressionAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_castInExpressionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionAST::cPtr_castInExpressionAST (const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                    const GGS_lstring & in_mTypeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_castInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

void cPtr_castInExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_castInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST ("castInExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionAST_2E_weak::objectCompare (const GGS_castInExpressionAST_2E_weak & inOperand) const {
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

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak & GGS_castInExpressionAST_2E_weak::operator = (const GGS_castInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak::GGS_castInExpressionAST_2E_weak (const GGS_castInExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST_2E_weak GGS_castInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_castInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_castInExpressionAST result ;
  if (isValid ()) {
    const cPtr_castInExpressionAST * p = (cPtr_castInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_castInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionAST GGS_castInExpressionAST_2E_weak::bang_castInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_castInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_castInExpressionAST) ;
      result = GGS_castInExpressionAST ((cPtr_castInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @castInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ("castInExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_testDynamicClassInExpressionForGeneration_2E_weak::objectCompare (const GGS_testDynamicClassInExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak & GGS_testDynamicClassInExpressionForGeneration_2E_weak::operator = (const GGS_testDynamicClassInExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak::GGS_testDynamicClassInExpressionForGeneration_2E_weak (const GGS_testDynamicClassInExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration_2E_weak GGS_testDynamicClassInExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_testDynamicClassInExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_testDynamicClassInExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_testDynamicClassInExpressionForGeneration * p = (cPtr_testDynamicClassInExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_testDynamicClassInExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_testDynamicClassInExpressionForGeneration GGS_testDynamicClassInExpressionForGeneration_2E_weak::bang_testDynamicClassInExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_testDynamicClassInExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_testDynamicClassInExpressionForGeneration) ;
      result = GGS_testDynamicClassInExpressionForGeneration ((cPtr_testDynamicClassInExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @testDynamicClassInExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ("testDynamicClassInExpressionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_testDynamicClassInExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @rightShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST::objectCompare (const GGS_rightShiftExpressionAST & inOperand) const {
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

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_rightShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_rightShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->rightShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_rightShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_rightShiftExpressionAST::
rightShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_semanticExpressionAST & in_mLeftExpression,
                                          const GGS_semanticExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST::GGS_rightShiftExpressionAST (const cPtr_rightShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rightShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_rightShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_rightShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rightShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @rightShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_rightShiftExpressionAST::cPtr_rightShiftExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_rightShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

void cPtr_rightShiftExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@rightShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_rightShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_rightShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_rightShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST ("rightShiftExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rightShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rightShiftExpressionAST_2E_weak::objectCompare (const GGS_rightShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak & GGS_rightShiftExpressionAST_2E_weak::operator = (const GGS_rightShiftExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak::GGS_rightShiftExpressionAST_2E_weak (const GGS_rightShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST_2E_weak GGS_rightShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_rightShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_rightShiftExpressionAST result ;
  if (isValid ()) {
    const cPtr_rightShiftExpressionAST * p = (cPtr_rightShiftExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_rightShiftExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rightShiftExpressionAST GGS_rightShiftExpressionAST_2E_weak::bang_rightShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_rightShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_rightShiftExpressionAST) ;
      result = GGS_rightShiftExpressionAST ((cPtr_rightShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @rightShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ("rightShiftExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rightShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rightShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @leftShiftExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST::objectCompare (const GGS_leftShiftExpressionAST & inOperand) const {
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

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_leftShiftExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_leftShiftExpressionAST (inCompiler COMMA_THERE)) ;
  object->leftShiftExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_leftShiftExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_leftShiftExpressionAST::
leftShiftExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                         const GGS_semanticExpressionAST & in_mLeftExpression,
                                         const GGS_semanticExpressionAST & in_mRightExpression,
                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST::GGS_leftShiftExpressionAST (const cPtr_leftShiftExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_leftShiftExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_leftShiftExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_leftShiftExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_leftShiftExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @leftShiftExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_leftShiftExpressionAST::cPtr_leftShiftExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_leftShiftExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

void cPtr_leftShiftExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@leftShiftExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_leftShiftExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_leftShiftExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_leftShiftExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST ("leftShiftExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_leftShiftExpressionAST_2E_weak::objectCompare (const GGS_leftShiftExpressionAST_2E_weak & inOperand) const {
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

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak & GGS_leftShiftExpressionAST_2E_weak::operator = (const GGS_leftShiftExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak::GGS_leftShiftExpressionAST_2E_weak (const GGS_leftShiftExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST_2E_weak GGS_leftShiftExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_leftShiftExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_leftShiftExpressionAST result ;
  if (isValid ()) {
    const cPtr_leftShiftExpressionAST * p = (cPtr_leftShiftExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_leftShiftExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_leftShiftExpressionAST GGS_leftShiftExpressionAST_2E_weak::bang_leftShiftExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_leftShiftExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_leftShiftExpressionAST) ;
      result = GGS_leftShiftExpressionAST ((cPtr_leftShiftExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @leftShiftExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ("leftShiftExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_leftShiftExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_leftShiftExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST::objectCompare (const GGS_addExpressionAST & inOperand) const {
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

GGS_addExpressionAST::GGS_addExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionAST (inCompiler COMMA_THERE)) ;
  object->addExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionAST::
addExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST::GGS_addExpressionAST (const cPtr_addExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionAST::cPtr_addExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_addExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

void cPtr_addExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_addExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST ("addExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionAST_2E_weak::objectCompare (const GGS_addExpressionAST_2E_weak & inOperand) const {
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

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak & GGS_addExpressionAST_2E_weak::operator = (const GGS_addExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak::GGS_addExpressionAST_2E_weak (const GGS_addExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST_2E_weak GGS_addExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_addExpressionAST result ;
  if (isValid ()) {
    const cPtr_addExpressionAST * p = (cPtr_addExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionAST GGS_addExpressionAST_2E_weak::bang_addExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionAST) ;
      result = GGS_addExpressionAST ((cPtr_addExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ("addExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @addExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST::objectCompare (const GGS_addExpressionNoOverflowAST & inOperand) const {
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

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_addExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_addExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->addExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_addExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_addExpressionNoOverflowAST::
addExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST::GGS_addExpressionNoOverflowAST (const cPtr_addExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_addExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_addExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_addExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_addExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @addExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_addExpressionNoOverflowAST::cPtr_addExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_addExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

void cPtr_addExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@addExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_addExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_addExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_addExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ("addExpressionNoOverflowAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_addExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_addExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak & GGS_addExpressionNoOverflowAST_2E_weak::operator = (const GGS_addExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak::GGS_addExpressionNoOverflowAST_2E_weak (const GGS_addExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST_2E_weak GGS_addExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_addExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_addExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_addExpressionNoOverflowAST * p = (cPtr_addExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_addExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_addExpressionNoOverflowAST GGS_addExpressionNoOverflowAST_2E_weak::bang_addExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_addExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_addExpressionNoOverflowAST) ;
      result = GGS_addExpressionNoOverflowAST ((cPtr_addExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @addExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ("addExpressionNoOverflowAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_addExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_addExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST::objectCompare (const GGS_subExpressionAST & inOperand) const {
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

GGS_subExpressionAST::GGS_subExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionAST (inCompiler COMMA_THERE)) ;
  object->subExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionAST::
subExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST::GGS_subExpressionAST (const cPtr_subExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionAST::cPtr_subExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_subExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

void cPtr_subExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST ("subExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionAST_2E_weak::objectCompare (const GGS_subExpressionAST_2E_weak & inOperand) const {
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

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak & GGS_subExpressionAST_2E_weak::operator = (const GGS_subExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak::GGS_subExpressionAST_2E_weak (const GGS_subExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST_2E_weak GGS_subExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_subExpressionAST result ;
  if (isValid ()) {
    const cPtr_subExpressionAST * p = (cPtr_subExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_subExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionAST GGS_subExpressionAST_2E_weak::bang_subExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionAST) ;
      result = GGS_subExpressionAST ((cPtr_subExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ("subExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @subExpressionNoOverflowAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST::objectCompare (const GGS_subExpressionNoOverflowAST & inOperand) const {
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

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subExpressionNoOverflowAST * object = nullptr ;
  macroMyNew (object, cPtr_subExpressionNoOverflowAST (inCompiler COMMA_THERE)) ;
  object->subExpressionNoOverflowAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_subExpressionNoOverflowAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subExpressionNoOverflowAST::
subExpressionNoOverflowAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                             const GGS_semanticExpressionAST & in_mLeftExpression,
                                             const GGS_semanticExpressionAST & in_mRightExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST::GGS_subExpressionNoOverflowAST (const cPtr_subExpressionNoOverflowAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subExpressionNoOverflowAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_subExpressionNoOverflowAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subExpressionNoOverflowAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subExpressionNoOverflowAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subExpressionNoOverflowAST class
//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subExpressionNoOverflowAST::cPtr_subExpressionNoOverflowAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_subExpressionNoOverflowAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

void cPtr_subExpressionNoOverflowAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subExpressionNoOverflowAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subExpressionNoOverflowAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subExpressionNoOverflowAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subExpressionNoOverflowAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ("subExpressionNoOverflowAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionNoOverflowAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subExpressionNoOverflowAST_2E_weak::objectCompare (const GGS_subExpressionNoOverflowAST_2E_weak & inOperand) const {
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

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak & GGS_subExpressionNoOverflowAST_2E_weak::operator = (const GGS_subExpressionNoOverflowAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak::GGS_subExpressionNoOverflowAST_2E_weak (const GGS_subExpressionNoOverflowAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST_2E_weak GGS_subExpressionNoOverflowAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subExpressionNoOverflowAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST_2E_weak::unwrappedValue (void) const {
  GGS_subExpressionNoOverflowAST result ;
  if (isValid ()) {
    const cPtr_subExpressionNoOverflowAST * p = (cPtr_subExpressionNoOverflowAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_subExpressionNoOverflowAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subExpressionNoOverflowAST GGS_subExpressionNoOverflowAST_2E_weak::bang_subExpressionNoOverflowAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subExpressionNoOverflowAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subExpressionNoOverflowAST) ;
      result = GGS_subExpressionNoOverflowAST ((cPtr_subExpressionNoOverflowAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subExpressionNoOverflowAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ("subExpressionNoOverflowAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subExpressionNoOverflowAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subExpressionNoOverflowAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Enum binaryOperator
//--------------------------------------------------------------------------------------------------

GGS_binaryOperator::GGS_binaryOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_rightShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_rightShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_leftShift (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_leftShift ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_add (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_add ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_addNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_addNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_sub (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_sub ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_subNoOverflow (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_subNoOverflow ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_and (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_and ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_or (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_or ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_operator_5F_xor (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_operator_5F_xor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_multiply_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_multiply_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_divide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_divide_5F_operation_5F_no_5F_ovf ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperator GGS_binaryOperator::class_func_modulo_5F_operation (UNUSED_LOCATION_ARGS) {
  GGS_binaryOperator result ;
  result.mEnum = Enumeration::enum_modulo_5F_operation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_binaryOperator [15] = {
  "(not built)",
  "rightShift",
  "leftShift",
  "add",
  "addNoOverflow",
  "sub",
  "subNoOverflow",
  "operator_and",
  "operator_or",
  "operator_xor",
  "multiply_operation_no_ovf",
  "multiply_operation",
  "divide_operation",
  "divide_operation_no_ovf",
  "modulo_operation"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isRightShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rightShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isLeftShift (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_leftShift == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAdd (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_add == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isAddNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_addNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSub (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sub == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isSubNoOverflow (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_subNoOverflow == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_and (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_and == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_or (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_or == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isOperator_5F_xor (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_operator_5F_xor == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isMultiply_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_multiply_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isDivide_5F_operation_5F_no_5F_ovf (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divide_5F_operation_5F_no_5F_ovf == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_binaryOperator::getter_isModulo_5F_operation (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_modulo_5F_operation == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_binaryOperator::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @binaryOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_binaryOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @binaryOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperator ("binaryOperator",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperator ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binaryOperatorExpressionForGeneration_2E_weak::objectCompare (const GGS_binaryOperatorExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak & GGS_binaryOperatorExpressionForGeneration_2E_weak::operator = (const GGS_binaryOperatorExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak::GGS_binaryOperatorExpressionForGeneration_2E_weak (const GGS_binaryOperatorExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration_2E_weak GGS_binaryOperatorExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binaryOperatorExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_binaryOperatorExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_binaryOperatorExpressionForGeneration * p = (cPtr_binaryOperatorExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_binaryOperatorExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binaryOperatorExpressionForGeneration GGS_binaryOperatorExpressionForGeneration_2E_weak::bang_binaryOperatorExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binaryOperatorExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binaryOperatorExpressionForGeneration) ;
      result = GGS_binaryOperatorExpressionForGeneration ((cPtr_binaryOperatorExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binaryOperatorExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ("binaryOperatorExpressionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binaryOperatorExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binaryOperatorExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @orExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orExpressionAST::objectCompare (const GGS_orExpressionAST & inOperand) const {
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

GGS_orExpressionAST::GGS_orExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orExpressionAST GGS_orExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_orExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_orExpressionAST (inCompiler COMMA_THERE)) ;
  object->orExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_orExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orExpressionAST::
orExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                  const GGS_semanticExpressionAST & in_mLeftExpression,
                                  const GGS_semanticExpressionAST & in_mRightExpression,
                                  Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST::GGS_orExpressionAST (const cPtr_orExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_orExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orExpressionAST::cPtr_orExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_orExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

void cPtr_orExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@orExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_orExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpressionAST ("orExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orExpressionAST_2E_weak::objectCompare (const GGS_orExpressionAST_2E_weak & inOperand) const {
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

GGS_orExpressionAST_2E_weak::GGS_orExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST_2E_weak & GGS_orExpressionAST_2E_weak::operator = (const GGS_orExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST_2E_weak::GGS_orExpressionAST_2E_weak (const GGS_orExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST_2E_weak GGS_orExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST GGS_orExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_orExpressionAST result ;
  if (isValid ()) {
    const cPtr_orExpressionAST * p = (cPtr_orExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_orExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orExpressionAST GGS_orExpressionAST_2E_weak::bang_orExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orExpressionAST) ;
      result = GGS_orExpressionAST ((cPtr_orExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orExpressionAST_2E_weak ("orExpressionAST.weak",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @orShortExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orShortExpressionAST::objectCompare (const GGS_orShortExpressionAST & inOperand) const {
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

GGS_orShortExpressionAST::GGS_orShortExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_orShortExpressionAST GGS_orShortExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_orShortExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_orShortExpressionAST (inCompiler COMMA_THERE)) ;
  object->orShortExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_orShortExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_orShortExpressionAST::
orShortExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                       const GGS_semanticExpressionAST & in_mLeftExpression,
                                       const GGS_semanticExpressionAST & in_mRightExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST::GGS_orShortExpressionAST (const cPtr_orShortExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orShortExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_orShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_orShortExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @orShortExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_orShortExpressionAST::cPtr_orShortExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_orShortExpressionAST::cPtr_orShortExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_orShortExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

void cPtr_orShortExpressionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@orShortExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_orShortExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_orShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_orShortExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @orShortExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orShortExpressionAST ("orShortExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orShortExpressionAST_2E_weak::objectCompare (const GGS_orShortExpressionAST_2E_weak & inOperand) const {
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

GGS_orShortExpressionAST_2E_weak::GGS_orShortExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST_2E_weak & GGS_orShortExpressionAST_2E_weak::operator = (const GGS_orShortExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST_2E_weak::GGS_orShortExpressionAST_2E_weak (const GGS_orShortExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST_2E_weak GGS_orShortExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orShortExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST GGS_orShortExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_orShortExpressionAST result ;
  if (isValid ()) {
    const cPtr_orShortExpressionAST * p = (cPtr_orShortExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_orShortExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionAST GGS_orShortExpressionAST_2E_weak::bang_orShortExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orShortExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orShortExpressionAST) ;
      result = GGS_orShortExpressionAST ((cPtr_orShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orShortExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orShortExpressionAST_2E_weak ("orShortExpressionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orShortExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @xorExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorExpressionAST::objectCompare (const GGS_xorExpressionAST & inOperand) const {
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

GGS_xorExpressionAST::GGS_xorExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_xorExpressionAST GGS_xorExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_xorExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_xorExpressionAST (inCompiler COMMA_THERE)) ;
  object->xorExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_xorExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_xorExpressionAST::
xorExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST::GGS_xorExpressionAST (const cPtr_xorExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_xorExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_xorExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_xorExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @xorExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_xorExpressionAST::cPtr_xorExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_xorExpressionAST::cPtr_xorExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_xorExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

void cPtr_xorExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@xorExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_xorExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_xorExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_xorExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @xorExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorExpressionAST ("xorExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_xorExpressionAST_2E_weak::objectCompare (const GGS_xorExpressionAST_2E_weak & inOperand) const {
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

GGS_xorExpressionAST_2E_weak::GGS_xorExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST_2E_weak & GGS_xorExpressionAST_2E_weak::operator = (const GGS_xorExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST_2E_weak::GGS_xorExpressionAST_2E_weak (const GGS_xorExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST_2E_weak GGS_xorExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_xorExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST GGS_xorExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_xorExpressionAST result ;
  if (isValid ()) {
    const cPtr_xorExpressionAST * p = (cPtr_xorExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorExpressionAST GGS_xorExpressionAST_2E_weak::bang_xorExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_xorExpressionAST) ;
      result = GGS_xorExpressionAST ((cPtr_xorExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @xorExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorExpressionAST_2E_weak ("xorExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @closedSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionAST::objectCompare (const GGS_closedSliceExpressionAST & inOperand) const {
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

GGS_closedSliceExpressionAST::GGS_closedSliceExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_closedSliceExpressionAST GGS_closedSliceExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_closedSliceExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_closedSliceExpressionAST (inCompiler COMMA_THERE)) ;
  object->closedSliceExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_closedSliceExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionAST::
closedSliceExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST::GGS_closedSliceExpressionAST (const cPtr_closedSliceExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_closedSliceExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_closedSliceExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_closedSliceExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionAST::cPtr_closedSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionAST::cPtr_closedSliceExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_closedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

void cPtr_closedSliceExpressionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@closedSliceExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_closedSliceExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_closedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_closedSliceExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST ("closedSliceExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_closedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionAST_2E_weak::objectCompare (const GGS_closedSliceExpressionAST_2E_weak & inOperand) const {
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

GGS_closedSliceExpressionAST_2E_weak::GGS_closedSliceExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST_2E_weak & GGS_closedSliceExpressionAST_2E_weak::operator = (const GGS_closedSliceExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST_2E_weak::GGS_closedSliceExpressionAST_2E_weak (const GGS_closedSliceExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST_2E_weak GGS_closedSliceExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_closedSliceExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST GGS_closedSliceExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_closedSliceExpressionAST result ;
  if (isValid ()) {
    const cPtr_closedSliceExpressionAST * p = (cPtr_closedSliceExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_closedSliceExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionAST GGS_closedSliceExpressionAST_2E_weak::bang_closedSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_closedSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_closedSliceExpressionAST) ;
      result = GGS_closedSliceExpressionAST ((cPtr_closedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_closedSliceExpressionAST_2E_weak ("closedSliceExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_closedSliceExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @openedSliceExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionAST::objectCompare (const GGS_openedSliceExpressionAST & inOperand) const {
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

GGS_openedSliceExpressionAST::GGS_openedSliceExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_openedSliceExpressionAST GGS_openedSliceExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_openedSliceExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_openedSliceExpressionAST (inCompiler COMMA_THERE)) ;
  object->openedSliceExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_openedSliceExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionAST::
openedSliceExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                           const GGS_semanticExpressionAST & in_mLeftExpression,
                                           const GGS_semanticExpressionAST & in_mRightExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST::GGS_openedSliceExpressionAST (const cPtr_openedSliceExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_openedSliceExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_openedSliceExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_openedSliceExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionAST::cPtr_openedSliceExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionAST::cPtr_openedSliceExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_openedSliceExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

void cPtr_openedSliceExpressionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@openedSliceExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_openedSliceExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_openedSliceExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_openedSliceExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST ("openedSliceExpressionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedSliceExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionAST_2E_weak::objectCompare (const GGS_openedSliceExpressionAST_2E_weak & inOperand) const {
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

GGS_openedSliceExpressionAST_2E_weak::GGS_openedSliceExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak & GGS_openedSliceExpressionAST_2E_weak::operator = (const GGS_openedSliceExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak::GGS_openedSliceExpressionAST_2E_weak (const GGS_openedSliceExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak GGS_openedSliceExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_openedSliceExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST GGS_openedSliceExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_openedSliceExpressionAST result ;
  if (isValid ()) {
    const cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_openedSliceExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST GGS_openedSliceExpressionAST_2E_weak::bang_openedSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_openedSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionAST) ;
      result = GGS_openedSliceExpressionAST ((cPtr_openedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST_2E_weak ("openedSliceExpressionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedSliceExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orShortExpressionForGeneration_2E_weak::objectCompare (const GGS_orShortExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_orShortExpressionForGeneration_2E_weak::GGS_orShortExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak & GGS_orShortExpressionForGeneration_2E_weak::operator = (const GGS_orShortExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak::GGS_orShortExpressionForGeneration_2E_weak (const GGS_orShortExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak GGS_orShortExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orShortExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_orShortExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_orShortExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration_2E_weak::bang_orShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orShortExpressionForGeneration) ;
      result = GGS_orShortExpressionForGeneration ((cPtr_orShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orShortExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2E_weak ("orShortExpressionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orShortExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionForGeneration_2E_weak::objectCompare (const GGS_openedSliceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_openedSliceExpressionForGeneration_2E_weak::GGS_openedSliceExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak & GGS_openedSliceExpressionForGeneration_2E_weak::operator = (const GGS_openedSliceExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak::GGS_openedSliceExpressionForGeneration_2E_weak (const GGS_openedSliceExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak GGS_openedSliceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_openedSliceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_openedSliceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_openedSliceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration_2E_weak::bang_openedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_openedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionForGeneration) ;
      result = GGS_openedSliceExpressionForGeneration ((cPtr_openedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2E_weak ("openedSliceExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedSliceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionForGeneration_2E_weak::objectCompare (const GGS_closedSliceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_closedSliceExpressionForGeneration_2E_weak::GGS_closedSliceExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak & GGS_closedSliceExpressionForGeneration_2E_weak::operator = (const GGS_closedSliceExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak::GGS_closedSliceExpressionForGeneration_2E_weak (const GGS_closedSliceExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak GGS_closedSliceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_closedSliceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_closedSliceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_closedSliceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration_2E_weak::bang_closedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_closedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_closedSliceExpressionForGeneration) ;
      result = GGS_closedSliceExpressionForGeneration ((cPtr_closedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2E_weak ("closedSliceExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_closedSliceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @structPropertyAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST::objectCompare (const GGS_structPropertyAccessExpressionAST & inOperand) const {
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

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::
init_21__21__21_ (const GGS_location & in_operatorLocation,
                  const GGS_semanticExpressionAST & in_mExpression,
                  const GGS_lstring & in_propertyName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structPropertyAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structPropertyAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->structPropertyAccessExpressionAST_init_21__21__21_ (in_operatorLocation, in_mExpression, in_propertyName, inCompiler) ;
  const GGS_structPropertyAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::
structPropertyAccessExpressionAST_init_21__21__21_ (const GGS_location & in_operatorLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    const GGS_lstring & in_propertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structPropertyAccessExpressionAST::readProperty_operatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_structPropertyAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structPropertyAccessExpressionAST::readProperty_propertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GGS_location & in_operatorLocation,
                                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                                const GGS_lstring & in_propertyName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@structPropertyAccessExpressionAST:") ;
  mProperty_operatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_propertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structPropertyAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_operatorLocation, mProperty_mExpression, mProperty_propertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structPropertyAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_operatorLocation.printNonNullClassInstanceProperties ("operatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_propertyName.printNonNullClassInstanceProperties ("propertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST_2E_weak::objectCompare (const GGS_structPropertyAccessExpressionAST_2E_weak & inOperand) const {
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

GGS_structPropertyAccessExpressionAST_2E_weak::GGS_structPropertyAccessExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak & GGS_structPropertyAccessExpressionAST_2E_weak::operator = (const GGS_structPropertyAccessExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak::GGS_structPropertyAccessExpressionAST_2E_weak (const GGS_structPropertyAccessExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST_2E_weak GGS_structPropertyAccessExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_structPropertyAccessExpressionAST result ;
  if (isValid ()) {
    const cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structPropertyAccessExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST_2E_weak::bang_structPropertyAccessExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structPropertyAccessExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structPropertyAccessExpressionAST) ;
      result = GGS_structPropertyAccessExpressionAST ((cPtr_structPropertyAccessExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2E_weak ("structPropertyAccessExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structPropertyAccessExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyAccessExpressionForGeneration_2E_weak::objectCompare (const GGS_propertyAccessExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_propertyAccessExpressionForGeneration_2E_weak::GGS_propertyAccessExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak & GGS_propertyAccessExpressionForGeneration_2E_weak::operator = (const GGS_propertyAccessExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak::GGS_propertyAccessExpressionForGeneration_2E_weak (const GGS_propertyAccessExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration_2E_weak GGS_propertyAccessExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_propertyAccessExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_propertyAccessExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration_2E_weak::bang_propertyAccessExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_propertyAccessExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_propertyAccessExpressionForGeneration) ;
      result = GGS_propertyAccessExpressionForGeneration ((cPtr_propertyAccessExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyAccessExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration_2E_weak ("propertyAccessExpressionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @subscriptReadAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionAST::objectCompare (const GGS_subscriptReadAccessExpressionAST & inOperand) const {
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

GGS_subscriptReadAccessExpressionAST::GGS_subscriptReadAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST::
init_21__21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                  const GGS__5B_actualOutputArgumentAST_5D_ & in_actualArgumentList,
                  const GGS_location & in_endOfArgsLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_subscriptReadAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_subscriptReadAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->subscriptReadAccessExpressionAST_init_21__21__21_ (in_mExpression, in_actualArgumentList, in_endOfArgsLocation, inCompiler) ;
  const GGS_subscriptReadAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionAST::
subscriptReadAccessExpressionAST_init_21__21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                   const GGS__5B_actualOutputArgumentAST_5D_ & in_actualArgumentList,
                                                   const GGS_location & in_endOfArgsLocation,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_actualArgumentList = in_actualArgumentList ;
  mProperty_endOfArgsLocation = in_endOfArgsLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST::GGS_subscriptReadAccessExpressionAST (const cPtr_subscriptReadAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subscriptReadAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_subscriptReadAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_subscriptReadAccessExpressionAST::readProperty_actualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_actualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_subscriptReadAccessExpressionAST::readProperty_endOfArgsLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionAST) ;
    return p->mProperty_endOfArgsLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subscriptReadAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionAST::cPtr_subscriptReadAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_actualArgumentList (),
mProperty_endOfArgsLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionAST::cPtr_subscriptReadAccessExpressionAST (const GGS_semanticExpressionAST & in_mExpression,
                                                                              const GGS__5B_actualOutputArgumentAST_5D_ & in_actualArgumentList,
                                                                              const GGS_location & in_endOfArgsLocation,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_actualArgumentList (),
mProperty_endOfArgsLocation () {
  mProperty_mExpression = in_mExpression ;
  mProperty_actualArgumentList = in_actualArgumentList ;
  mProperty_endOfArgsLocation = in_endOfArgsLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_subscriptReadAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ;
}

void cPtr_subscriptReadAccessExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@subscriptReadAccessExpressionAST:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_actualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_endOfArgsLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subscriptReadAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subscriptReadAccessExpressionAST (mProperty_mExpression, mProperty_actualArgumentList, mProperty_endOfArgsLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subscriptReadAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_actualArgumentList.printNonNullClassInstanceProperties ("actualArgumentList") ;
    mProperty_endOfArgsLocation.printNonNullClassInstanceProperties ("endOfArgsLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ("subscriptReadAccessExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptReadAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionAST_2E_weak::objectCompare (const GGS_subscriptReadAccessExpressionAST_2E_weak & inOperand) const {
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

GGS_subscriptReadAccessExpressionAST_2E_weak::GGS_subscriptReadAccessExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak & GGS_subscriptReadAccessExpressionAST_2E_weak::operator = (const GGS_subscriptReadAccessExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak::GGS_subscriptReadAccessExpressionAST_2E_weak (const GGS_subscriptReadAccessExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST_2E_weak GGS_subscriptReadAccessExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_subscriptReadAccessExpressionAST result ;
  if (isValid ()) {
    const cPtr_subscriptReadAccessExpressionAST * p = (cPtr_subscriptReadAccessExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_subscriptReadAccessExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionAST GGS_subscriptReadAccessExpressionAST_2E_weak::bang_subscriptReadAccessExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subscriptReadAccessExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subscriptReadAccessExpressionAST) ;
      result = GGS_subscriptReadAccessExpressionAST ((cPtr_subscriptReadAccessExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST_2E_weak ("subscriptReadAccessExpressionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptReadAccessExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionForGeneration_2E_weak::objectCompare (const GGS_subscriptReadAccessExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_subscriptReadAccessExpressionForGeneration_2E_weak::GGS_subscriptReadAccessExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak & GGS_subscriptReadAccessExpressionForGeneration_2E_weak::operator = (const GGS_subscriptReadAccessExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak::GGS_subscriptReadAccessExpressionForGeneration_2E_weak (const GGS_subscriptReadAccessExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration_2E_weak GGS_subscriptReadAccessExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_subscriptReadAccessExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration_2E_weak::bang_subscriptReadAccessExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_subscriptReadAccessExpressionForGeneration) ;
      result = GGS_subscriptReadAccessExpressionForGeneration ((cPtr_subscriptReadAccessExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration_2E_weak ("subscriptReadAccessExpressionForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptReadAccessExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @tildeExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionAST::objectCompare (const GGS_tildeExpressionAST & inOperand) const {
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

GGS_tildeExpressionAST::GGS_tildeExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_tildeExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_tildeExpressionAST (inCompiler COMMA_THERE)) ;
  object->tildeExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_tildeExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::
tildeExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                 const GGS_semanticExpressionAST & in_mExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST::GGS_tildeExpressionAST (const cPtr_tildeExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_tildeExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_tildeExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_tildeExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

void cPtr_tildeExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@tildeExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_tildeExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_tildeExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_tildeExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tildeExpressionAST ("tildeExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tildeExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionAST_2E_weak::objectCompare (const GGS_tildeExpressionAST_2E_weak & inOperand) const {
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

GGS_tildeExpressionAST_2E_weak::GGS_tildeExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak & GGS_tildeExpressionAST_2E_weak::operator = (const GGS_tildeExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak::GGS_tildeExpressionAST_2E_weak (const GGS_tildeExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak GGS_tildeExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_tildeExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_tildeExpressionAST result ;
  if (isValid ()) {
    const cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_tildeExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST_2E_weak::bang_tildeExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_tildeExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tildeExpressionAST) ;
      result = GGS_tildeExpressionAST ((cPtr_tildeExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tildeExpressionAST_2E_weak ("tildeExpressionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tildeExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionForGeneration_2E_weak::objectCompare (const GGS_tildeExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_tildeExpressionForGeneration_2E_weak::GGS_tildeExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak & GGS_tildeExpressionForGeneration_2E_weak::operator = (const GGS_tildeExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak::GGS_tildeExpressionForGeneration_2E_weak (const GGS_tildeExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak GGS_tildeExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_tildeExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_tildeExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_tildeExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration_2E_weak::bang_tildeExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_tildeExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tildeExpressionForGeneration) ;
      result = GGS_tildeExpressionForGeneration ((cPtr_tildeExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2E_weak ("tildeExpressionForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tildeExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Enum comparison
//--------------------------------------------------------------------------------------------------

GGS_comparison::GGS_comparison (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_equal (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_equal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_notEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_notEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_lowerThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_lowerThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterOrEqual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_greaterThan (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_greaterThan ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_sameInstance (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_sameInstance ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparison::class_func_differentInstances (UNUSED_LOCATION_ARGS) {
  GGS_comparison result ;
  result.mEnum = Enumeration::enum_differentInstances ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_comparison [9] = {
  "(not built)",
  "equal",
  "notEqual",
  "lowerOrEqual",
  "lowerThan",
  "greaterOrEqual",
  "greaterThan",
  "sameInstance",
  "differentInstances"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_equal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_notEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isLowerThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_lowerThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterOrEqual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isGreaterThan (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_greaterThan == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isSameInstance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_sameInstance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_comparison::getter_isDifferentInstances (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_differentInstances == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_comparison::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @comparison: ") ;
  ioString.appendCString (gEnumNameArrayFor_comparison [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @comparison generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparison ("comparison",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparison::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparison ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionAST::objectCompare (const GGS_comparisonExpressionAST & inOperand) const {
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

GGS_comparisonExpressionAST::GGS_comparisonExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST::
init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                      const GGS_semanticExpressionAST & in_mLeftExpression,
                      const GGS_comparison & in_mComparison,
                      const GGS_semanticExpressionAST & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionAST (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionAST_init_21__21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GGS_comparisonExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionAST::
comparisonExpressionAST_init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mLeftExpression,
                                              const GGS_comparison & in_mComparison,
                                              const GGS_semanticExpressionAST & in_mRightExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST::GGS_comparisonExpressionAST (const cPtr_comparisonExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_comparisonExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_comparisonExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonExpressionAST::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_comparisonExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionAST::cPtr_comparisonExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mLeftExpression,
                                                            const GGS_comparison & in_mComparison,
                                                            const GGS_semanticExpressionAST & in_mRightExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_comparisonExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

void cPtr_comparisonExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_comparisonExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonExpressionAST ("comparisonExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionAST_2E_weak::objectCompare (const GGS_comparisonExpressionAST_2E_weak & inOperand) const {
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

GGS_comparisonExpressionAST_2E_weak::GGS_comparisonExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak & GGS_comparisonExpressionAST_2E_weak::operator = (const GGS_comparisonExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak::GGS_comparisonExpressionAST_2E_weak (const GGS_comparisonExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST_2E_weak GGS_comparisonExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_comparisonExpressionAST result ;
  if (isValid ()) {
    const cPtr_comparisonExpressionAST * p = (cPtr_comparisonExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionAST GGS_comparisonExpressionAST_2E_weak::bang_comparisonExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonExpressionAST) ;
      result = GGS_comparisonExpressionAST ((cPtr_comparisonExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonExpressionAST_2E_weak ("comparisonExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionForGeneration_2E_weak::objectCompare (const GGS_comparisonExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_comparisonExpressionForGeneration_2E_weak::GGS_comparisonExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak & GGS_comparisonExpressionForGeneration_2E_weak::operator = (const GGS_comparisonExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak::GGS_comparisonExpressionForGeneration_2E_weak (const GGS_comparisonExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration_2E_weak GGS_comparisonExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_comparisonExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration_2E_weak::bang_comparisonExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_comparisonExpressionForGeneration) ;
      result = GGS_comparisonExpressionForGeneration ((cPtr_comparisonExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2E_weak ("comparisonExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionAST::objectCompare (const GGS_literalDoubleExpressionAST & inOperand) const {
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

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::
literalDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GGS_ldouble & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionAST_2E_weak::objectCompare (const GGS_literalDoubleExpressionAST_2E_weak & inOperand) const {
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

GGS_literalDoubleExpressionAST_2E_weak::GGS_literalDoubleExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST_2E_weak & GGS_literalDoubleExpressionAST_2E_weak::operator = (const GGS_literalDoubleExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST_2E_weak::GGS_literalDoubleExpressionAST_2E_weak (const GGS_literalDoubleExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST_2E_weak GGS_literalDoubleExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalDoubleExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalDoubleExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalDoubleExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST_2E_weak::bang_literalDoubleExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalDoubleExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalDoubleExpressionAST) ;
      result = GGS_literalDoubleExpressionAST ((cPtr_literalDoubleExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2E_weak ("literalDoubleExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionForGeneration_2E_weak::objectCompare (const GGS_literalDoubleExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_literalDoubleExpressionForGeneration_2E_weak::GGS_literalDoubleExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration_2E_weak & GGS_literalDoubleExpressionForGeneration_2E_weak::operator = (const GGS_literalDoubleExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration_2E_weak::GGS_literalDoubleExpressionForGeneration_2E_weak (const GGS_literalDoubleExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration_2E_weak GGS_literalDoubleExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_literalDoubleExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_literalDoubleExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalDoubleExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration_2E_weak::bang_literalDoubleExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalDoubleExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_literalDoubleExpressionForGeneration) ;
      result = GGS_literalDoubleExpressionForGeneration ((cPtr_literalDoubleExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2E_weak ("literalDoubleExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST::objectCompare (const GGS_functionCallExpressionAST & inOperand) const {
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

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_functionCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::
functionCallExpressionAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                        const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressionList,
                                        Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionCallExpressionAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_functionCallExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GGS_lstring & in_mFunctionName,
                                                                const GGS__5B_actualOutputArgumentAST_5D_ & in_mExpressionList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST_2E_weak::objectCompare (const GGS_functionCallExpressionAST_2E_weak & inOperand) const {
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

GGS_functionCallExpressionAST_2E_weak::GGS_functionCallExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak & GGS_functionCallExpressionAST_2E_weak::operator = (const GGS_functionCallExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak::GGS_functionCallExpressionAST_2E_weak (const GGS_functionCallExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST_2E_weak GGS_functionCallExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionCallExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_functionCallExpressionAST result ;
  if (isValid ()) {
    const cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionCallExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST_2E_weak::bang_functionCallExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionCallExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionCallExpressionAST) ;
      result = GGS_functionCallExpressionAST ((cPtr_functionCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionAST_2E_weak ("functionCallExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionForGeneration_2E_weak::objectCompare (const GGS_functionCallExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_functionCallExpressionForGeneration_2E_weak::GGS_functionCallExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak & GGS_functionCallExpressionForGeneration_2E_weak::operator = (const GGS_functionCallExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak::GGS_functionCallExpressionForGeneration_2E_weak (const GGS_functionCallExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration_2E_weak GGS_functionCallExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionCallExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionCallExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration_2E_weak::bang_functionCallExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionCallExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionCallExpressionForGeneration) ;
      result = GGS_functionCallExpressionForGeneration ((cPtr_functionCallExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration_2E_weak ("functionCallExpressionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionAST::objectCompare (const GGS_andShortExpressionAST & inOperand) const {
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

GGS_andShortExpressionAST::GGS_andShortExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_andShortExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andShortExpressionAST (inCompiler COMMA_THERE)) ;
  object->andShortExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andShortExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionAST::
andShortExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                        const GGS_semanticExpressionAST & in_mLeftExpression,
                                        const GGS_semanticExpressionAST & in_mRightExpression,
                                        Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST::GGS_andShortExpressionAST (const cPtr_andShortExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_andShortExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andShortExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andShortExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionAST::cPtr_andShortExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_andShortExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_andShortExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @andShortExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionAST ("andShortExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andShortExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionAST_2E_weak::objectCompare (const GGS_andShortExpressionAST_2E_weak & inOperand) const {
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

GGS_andShortExpressionAST_2E_weak::GGS_andShortExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak & GGS_andShortExpressionAST_2E_weak::operator = (const GGS_andShortExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak::GGS_andShortExpressionAST_2E_weak (const GGS_andShortExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST_2E_weak GGS_andShortExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andShortExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_andShortExpressionAST result ;
  if (isValid ()) {
    const cPtr_andShortExpressionAST * p = (cPtr_andShortExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_andShortExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionAST GGS_andShortExpressionAST_2E_weak::bang_andShortExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andShortExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionAST) ;
      result = GGS_andShortExpressionAST ((cPtr_andShortExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionAST_2E_weak ("andShortExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andShortExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @andExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpressionAST::objectCompare (const GGS_andExpressionAST & inOperand) const {
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

GGS_andExpressionAST::GGS_andExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_semanticExpressionAST & in_mLeftExpression,
                  const GGS_semanticExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_andExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_andExpressionAST (inCompiler COMMA_THERE)) ;
  object->andExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andExpressionAST::
andExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                   const GGS_semanticExpressionAST & in_mLeftExpression,
                                   const GGS_semanticExpressionAST & in_mRightExpression,
                                   Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST::GGS_andExpressionAST (const cPtr_andExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_andExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andExpressionAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_andExpressionAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andExpressionAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andExpressionAST::cPtr_andExpressionAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_andExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_andExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andExpressionAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @andExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpressionAST ("andExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andExpressionAST_2E_weak::objectCompare (const GGS_andExpressionAST_2E_weak & inOperand) const {
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

GGS_andExpressionAST_2E_weak::GGS_andExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak & GGS_andExpressionAST_2E_weak::operator = (const GGS_andExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak::GGS_andExpressionAST_2E_weak (const GGS_andExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST_2E_weak GGS_andExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_andExpressionAST result ;
  if (isValid ()) {
    const cPtr_andExpressionAST * p = (cPtr_andExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_andExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andExpressionAST GGS_andExpressionAST_2E_weak::bang_andExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andExpressionAST) ;
      result = GGS_andExpressionAST ((cPtr_andExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andExpressionAST_2E_weak ("andExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionForGeneration_2E_weak::objectCompare (const GGS_andShortExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_andShortExpressionForGeneration_2E_weak::GGS_andShortExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak & GGS_andShortExpressionForGeneration_2E_weak::operator = (const GGS_andShortExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak::GGS_andShortExpressionForGeneration_2E_weak (const GGS_andShortExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration_2E_weak GGS_andShortExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_andShortExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_andShortExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration_2E_weak::bang_andShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_andShortExpressionForGeneration) ;
      result = GGS_andShortExpressionForGeneration ((cPtr_andShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2E_weak ("andShortExpressionForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andShortExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST::objectCompare (const GGS_ifExpressionAST & inOperand) const {
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

GGS_ifExpressionAST::GGS_ifExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST::
init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                      const GGS_semanticExpressionAST & in_mIfExpression,
                      const GGS_semanticExpressionAST & in_mThenExpression,
                      const GGS_semanticExpressionAST & in_mElseExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionAST (inCompiler COMMA_THERE)) ;
  object->ifExpressionAST_init_21__21__21__21_ (in_mOperatorLocation, in_mIfExpression, in_mThenExpression, in_mElseExpression, inCompiler) ;
  const GGS_ifExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionAST::
ifExpressionAST_init_21__21__21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mIfExpression,
                                      const GGS_semanticExpressionAST & in_mThenExpression,
                                      const GGS_semanticExpressionAST & in_mElseExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST::GGS_ifExpressionAST (const cPtr_ifExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_ifExpressionAST::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_ifExpressionAST::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_ifExpressionAST::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionAST) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionAST::cPtr_ifExpressionAST (const GGS_location & in_mOperatorLocation,
                                            const GGS_semanticExpressionAST & in_mIfExpression,
                                            const GGS_semanticExpressionAST & in_mThenExpression,
                                            const GGS_semanticExpressionAST & in_mElseExpression,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

void cPtr_ifExpressionAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionAST (mProperty_mOperatorLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST ("ifExpressionAST",
                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionAST_2E_weak::objectCompare (const GGS_ifExpressionAST_2E_weak & inOperand) const {
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

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak & GGS_ifExpressionAST_2E_weak::operator = (const GGS_ifExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak::GGS_ifExpressionAST_2E_weak (const GGS_ifExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST_2E_weak GGS_ifExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifExpressionAST result ;
  if (isValid ()) {
    const cPtr_ifExpressionAST * p = (cPtr_ifExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionAST GGS_ifExpressionAST_2E_weak::bang_ifExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionAST) ;
      result = GGS_ifExpressionAST ((cPtr_ifExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ("ifExpressionAST.weak",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionForGeneration_2E_weak::objectCompare (const GGS_ifExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_ifExpressionForGeneration_2E_weak::GGS_ifExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration_2E_weak & GGS_ifExpressionForGeneration_2E_weak::operator = (const GGS_ifExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration_2E_weak::GGS_ifExpressionForGeneration_2E_weak (const GGS_ifExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration_2E_weak GGS_ifExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_ifExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration_2E_weak::bang_ifExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifExpressionForGeneration) ;
      result = GGS_ifExpressionForGeneration ((cPtr_ifExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration_2E_weak ("ifExpressionForGeneration.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @nilExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nilExpressionAST::objectCompare (const GGS_nilExpressionAST & inOperand) const {
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

GGS_nilExpressionAST::GGS_nilExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nilExpressionAST GGS_nilExpressionAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_nilExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_nilExpressionAST (inCompiler COMMA_THERE)) ;
  object->nilExpressionAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_nilExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionAST::
nilExpressionAST_init_21_ (const GGS_location & in_mLocation,
                           Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST::GGS_nilExpressionAST (const cPtr_nilExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nilExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_nilExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_nilExpressionAST * p = (cPtr_nilExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nilExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nilExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionAST::cPtr_nilExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionAST::cPtr_nilExpressionAST (const GGS_location & in_mLocation,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nilExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionAST ;
}

void cPtr_nilExpressionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@nilExpressionAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nilExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nilExpressionAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nilExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nilExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionAST ("nilExpressionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nilExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nilExpressionAST_2E_weak::objectCompare (const GGS_nilExpressionAST_2E_weak & inOperand) const {
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

GGS_nilExpressionAST_2E_weak::GGS_nilExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST_2E_weak & GGS_nilExpressionAST_2E_weak::operator = (const GGS_nilExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST_2E_weak::GGS_nilExpressionAST_2E_weak (const GGS_nilExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST_2E_weak GGS_nilExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nilExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST GGS_nilExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_nilExpressionAST result ;
  if (isValid ()) {
    const cPtr_nilExpressionAST * p = (cPtr_nilExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_nilExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionAST GGS_nilExpressionAST_2E_weak::bang_nilExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nilExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nilExpressionAST) ;
      result = GGS_nilExpressionAST ((cPtr_nilExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nilExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionAST_2E_weak ("nilExpressionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nilExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nilExpressionForGeneration_2E_weak::objectCompare (const GGS_nilExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_nilExpressionForGeneration_2E_weak::GGS_nilExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration_2E_weak & GGS_nilExpressionForGeneration_2E_weak::operator = (const GGS_nilExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration_2E_weak::GGS_nilExpressionForGeneration_2E_weak (const GGS_nilExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration_2E_weak GGS_nilExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nilExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_nilExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_nilExpressionForGeneration * p = (cPtr_nilExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_nilExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration_2E_weak::bang_nilExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nilExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nilExpressionForGeneration) ;
      result = GGS_nilExpressionForGeneration ((cPtr_nilExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nilExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionForGeneration_2E_weak ("nilExpressionForGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nilExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST::objectCompare (const GGS_getterCallExpressionAST & inOperand) const {
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

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::
init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                      const GGS_lstring & in_mGetterName,
                      const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualArgumentList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionAST_init_21__21__21__21_ (in_mReceiver, in_mGetterName, in_mActualArgumentList, in_mExpressionLocation, inCompiler) ;
  const GGS_getterCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::
getterCallExpressionAST_init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                                              const GGS_lstring & in_mGetterName,
                                              const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualArgumentList,
                                              const GGS_location & in_mExpressionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_getterCallExpressionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GGS_semanticExpressionAST & in_mReceiver,
                                                            const GGS_lstring & in_mGetterName,
                                                            const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualArgumentList,
                                                            const GGS_location & in_mExpressionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionAST:") ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_getterCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_mReceiver, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiver.printNonNullClassInstanceProperties ("mReceiver") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST_2E_weak::objectCompare (const GGS_getterCallExpressionAST_2E_weak & inOperand) const {
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

GGS_getterCallExpressionAST_2E_weak::GGS_getterCallExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak & GGS_getterCallExpressionAST_2E_weak::operator = (const GGS_getterCallExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak::GGS_getterCallExpressionAST_2E_weak (const GGS_getterCallExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST_2E_weak GGS_getterCallExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getterCallExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_getterCallExpressionAST result ;
  if (isValid ()) {
    const cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_getterCallExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST_2E_weak::bang_getterCallExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getterCallExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getterCallExpressionAST) ;
      result = GGS_getterCallExpressionAST ((cPtr_getterCallExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST_2E_weak ("getterCallExpressionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionForGeneration_2E_weak::objectCompare (const GGS_getterCallExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_getterCallExpressionForGeneration_2E_weak::GGS_getterCallExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak & GGS_getterCallExpressionForGeneration_2E_weak::operator = (const GGS_getterCallExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak::GGS_getterCallExpressionForGeneration_2E_weak (const GGS_getterCallExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration_2E_weak GGS_getterCallExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_getterCallExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_getterCallExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration_2E_weak::bang_getterCallExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_getterCallExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_getterCallExpressionForGeneration) ;
      result = GGS_getterCallExpressionForGeneration ((cPtr_getterCallExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2E_weak ("getterCallExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (void) :
mProperty_featureName (),
mProperty_featureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_galgasQualifiedFeature & inSource) :
mProperty_featureName (inSource.mProperty_featureName),
mProperty_featureValue (inSource.mProperty_featureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature & GGS_galgasQualifiedFeature::operator = (const GGS_galgasQualifiedFeature & inSource) {
  mProperty_featureName = inSource.mProperty_featureName ;
  mProperty_featureValue = inSource.mProperty_featureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::init_21__21_ (const GGS_lstring & in_featureName,
                                                                     const GGS_lstring & in_featureValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_featureName = in_featureName ;
  result.mProperty_featureValue = in_featureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1) :
mProperty_featureName (inOperand0),
mProperty_featureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasQualifiedFeature::isValid (void) const {
  return mProperty_featureName.isValid () && mProperty_featureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::drop (void) {
  mProperty_featureName.drop () ;
  mProperty_featureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasQualifiedFeature:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_featureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_featureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasQualifiedFeature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasQualifiedFeature ("galgasQualifiedFeature",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasQualifiedFeature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasQualifiedFeature ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_galgasQualifiedFeature_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_::GGS__5B_galgasQualifiedFeature_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_::GGS__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ & GGS__5B_galgasQualifiedFeature_5D_::operator = (const GGS__5B_galgasQualifiedFeature_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::plusPlusAssignOperation (const GGS_galgasQualifiedFeature & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_galgasQualifiedFeature_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::add_operation (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
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

void GGS__5B_galgasQualifiedFeature_5D_::description (String & ioString,
                                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@galgasQualifiedFeature], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::plusAssignOperation (const GGS__5B_galgasQualifiedFeature_5D_ inOperand,
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

void GGS__5B_galgasQualifiedFeature_5D_::setter_append (const GGS_galgasQualifiedFeature inValue,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_galgasQualifiedFeature_5D_::setter_set (const GGS_galgasQualifiedFeature inValue,
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

void GGS__5B_galgasQualifiedFeature_5D_::setter_insert (const GGS_galgasQualifiedFeature inValue,
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

void GGS__5B_galgasQualifiedFeature_5D_::setter_remove (GGS_galgasQualifiedFeature & outValue,
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

void GGS__5B_galgasQualifiedFeature_5D_::setter_removeFirst (GGS_galgasQualifiedFeature & outValue,
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

void GGS__5B_galgasQualifiedFeature_5D_::setter_removeLast (GGS_galgasQualifiedFeature & outValue,
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

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
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
      result = GGS__5B_galgasQualifiedFeature_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_galgasQualifiedFeature_5D_ GGS__5B_galgasQualifiedFeature_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                       const GGS_uint & inLength,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_galgasQualifiedFeature_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_galgasQualifiedFeature_5D_::init (inCompiler COMMA_THERE) ;
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
        result = GGS__5B_galgasQualifiedFeature_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS__5B_galgasQualifiedFeature_5D_::getter_first (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_galgasQualifiedFeature result ;
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

GGS_galgasQualifiedFeature GGS__5B_galgasQualifiedFeature_5D_::getter_last (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_galgasQualifiedFeature result ;
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

GGS_galgasQualifiedFeature GGS__5B_galgasQualifiedFeature_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_galgasQualifiedFeature result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
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
// Down Enumerator for @_5B_galgasQualifiedFeature_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_galgasQualifiedFeature_5D_::DownEnumerator__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature DownEnumerator__5B_galgasQualifiedFeature_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature DownEnumerator__5B_galgasQualifiedFeature_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_galgasQualifiedFeature_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_galgasQualifiedFeature_5D_::UpEnumerator__5B_galgasQualifiedFeature_5D_ (const GGS__5B_galgasQualifiedFeature_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature UpEnumerator__5B_galgasQualifiedFeature_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature UpEnumerator__5B_galgasQualifiedFeature_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[galgasQualifiedFeature] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_galgasQualifiedFeature_5D_ ("[galgasQualifiedFeature]",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_galgasQualifiedFeature_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_galgasQualifiedFeature_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (void) :
mProperty_mProjectSourceList (),
mProperty_mToolCppSourceList (),
mProperty_mMajorVersion (),
mProperty_mMinorVersion (),
mProperty_mRevisionVersion (),
mProperty_mGenerationFeatureList (),
mProperty_mQualifiedFeatureList (),
mProperty_mTargetName (),
mProperty_mEndOfSourceFile () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) :
mProperty_mProjectSourceList (inSource.mProperty_mProjectSourceList),
mProperty_mToolCppSourceList (inSource.mProperty_mToolCppSourceList),
mProperty_mMajorVersion (inSource.mProperty_mMajorVersion),
mProperty_mMinorVersion (inSource.mProperty_mMinorVersion),
mProperty_mRevisionVersion (inSource.mProperty_mRevisionVersion),
mProperty_mGenerationFeatureList (inSource.mProperty_mGenerationFeatureList),
mProperty_mQualifiedFeatureList (inSource.mProperty_mQualifiedFeatureList),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mEndOfSourceFile (inSource.mProperty_mEndOfSourceFile) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST & GGS_galgas_33_ProjectComponentAST::operator = (const GGS_galgas_33_ProjectComponentAST & inSource) {
  mProperty_mProjectSourceList = inSource.mProperty_mProjectSourceList ;
  mProperty_mToolCppSourceList = inSource.mProperty_mToolCppSourceList ;
  mProperty_mMajorVersion = inSource.mProperty_mMajorVersion ;
  mProperty_mMinorVersion = inSource.mProperty_mMinorVersion ;
  mProperty_mRevisionVersion = inSource.mProperty_mRevisionVersion ;
  mProperty_mGenerationFeatureList = inSource.mProperty_mGenerationFeatureList ;
  mProperty_mQualifiedFeatureList = inSource.mProperty_mQualifiedFeatureList ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mEndOfSourceFile = inSource.mProperty_mEndOfSourceFile ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (const GGS__5B_string_5D_ & in_mProjectSourceList,
                                                                                                               const GGS__5B_string_5D_ & in_mToolCppSourceList,
                                                                                                               const GGS_lbigint & in_mMajorVersion,
                                                                                                               const GGS_lbigint & in_mMinorVersion,
                                                                                                               const GGS_lbigint & in_mRevisionVersion,
                                                                                                               const GGS__5B_lstring_5D_ & in_mGenerationFeatureList,
                                                                                                               const GGS__5B_galgasQualifiedFeature_5D_ & in_mQualifiedFeatureList,
                                                                                                               const GGS_lstring & in_mTargetName,
                                                                                                               const GGS_location & in_mEndOfSourceFile,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectSourceList = in_mProjectSourceList ;
  result.mProperty_mToolCppSourceList = in_mToolCppSourceList ;
  result.mProperty_mMajorVersion = in_mMajorVersion ;
  result.mProperty_mMinorVersion = in_mMinorVersion ;
  result.mProperty_mRevisionVersion = in_mRevisionVersion ;
  result.mProperty_mGenerationFeatureList = in_mGenerationFeatureList ;
  result.mProperty_mQualifiedFeatureList = in_mQualifiedFeatureList ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mEndOfSourceFile = in_mEndOfSourceFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS__5B_string_5D_ & inOperand0,
                                                                      const GGS__5B_string_5D_ & inOperand1,
                                                                      const GGS_lbigint & inOperand2,
                                                                      const GGS_lbigint & inOperand3,
                                                                      const GGS_lbigint & inOperand4,
                                                                      const GGS__5B_lstring_5D_ & inOperand5,
                                                                      const GGS__5B_galgasQualifiedFeature_5D_ & inOperand6,
                                                                      const GGS_lstring & inOperand7,
                                                                      const GGS_location & inOperand8) :
mProperty_mProjectSourceList (inOperand0),
mProperty_mToolCppSourceList (inOperand1),
mProperty_mMajorVersion (inOperand2),
mProperty_mMinorVersion (inOperand3),
mProperty_mRevisionVersion (inOperand4),
mProperty_mGenerationFeatureList (inOperand5),
mProperty_mQualifiedFeatureList (inOperand6),
mProperty_mTargetName (inOperand7),
mProperty_mEndOfSourceFile (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_ProjectComponentAST::isValid (void) const {
  return mProperty_mProjectSourceList.isValid () && mProperty_mToolCppSourceList.isValid () && mProperty_mMajorVersion.isValid () && mProperty_mMinorVersion.isValid () && mProperty_mRevisionVersion.isValid () && mProperty_mGenerationFeatureList.isValid () && mProperty_mQualifiedFeatureList.isValid () && mProperty_mTargetName.isValid () && mProperty_mEndOfSourceFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::drop (void) {
  mProperty_mProjectSourceList.drop () ;
  mProperty_mToolCppSourceList.drop () ;
  mProperty_mMajorVersion.drop () ;
  mProperty_mMinorVersion.drop () ;
  mProperty_mRevisionVersion.drop () ;
  mProperty_mGenerationFeatureList.drop () ;
  mProperty_mQualifiedFeatureList.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mEndOfSourceFile.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3ProjectComponentAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolCppSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMajorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRevisionVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerationFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifiedFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3ProjectComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ("galgas3ProjectComponentAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_ProjectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProjectSyntax::rule_galgas_34_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument_majorVersion,
                                                                                          GGS_lbigint & outArgument_minorVersion,
                                                                                          GGS_lbigint & outArgument_revisionVersion,
                                                                                          GGS_lstring & outArgument_targetName,
                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("galgas-project.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 65)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 67)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 69)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 72)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProjectSyntax::rule_galgas_34_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_project COMMA_SOURCE_FILE ("galgas-project.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("galgas-project.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 72)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProjectSyntax::rule_galgas_34_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (const GGS_lstring constinArgument_inProjectSourceFilePath,
                                                                                                                GGS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GGS_lbigint var_majorVersion_3258 ;
  GGS_lbigint var_minorVersion_3292 ;
  GGS_lbigint var_revisionVersion_3326 ;
  GGS_lstring var_targetName_3363 ;
  nt_project_5F_header_ (var_majorVersion_3258, var_minorVersion_3292, var_revisionVersion_3326, var_targetName_3363, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 86)) ;
  GGS__5B_lstring_5D_ var_generateFeatureList_3407 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_galgasQualifiedFeature_5D_ var_qualifiedFeatureList_3467 = GGS__5B_galgasQualifiedFeature_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_quietOutputByDefault COMMA_SOURCE_FILE ("galgas-project.galgas4", 91)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 92))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 92)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_MacSwiftApp COMMA_SOURCE_FILE ("galgas-project.galgas4", 94)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("MacSwiftApp").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 95))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 95)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 97)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 98))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 98)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_unix COMMA_SOURCE_FILE ("galgas-project.galgas4", 100)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 101))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 101)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 103)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 104))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 104)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 106)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 107))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 107)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 109)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-arm64-linux-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 110))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 110)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 112)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 113))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 113)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgas-project.galgas4", 115)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 116))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 116)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 118)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 119))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 119)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 121)) ;
      var_generateFeatureList_3407.plusPlusAssignOperation (GGS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 122))  COMMA_SOURCE_FILE ("galgas-project.galgas4", 122)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_applicationBundleBase COMMA_SOURCE_FILE ("galgas-project.galgas4", 124)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 125)) ;
      GGS_lstring var_featureValue_4676 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 126)) ;
      var_qualifiedFeatureList_3467.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 127)), var_featureValue_4676, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-project.galgas4", 127)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_libpmAtPath COMMA_SOURCE_FILE ("galgas-project.galgas4", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 130)) ;
      GGS_lstring var_featureValue_4840 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 131)) ;
      var_qualifiedFeatureList_3467.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 132)), var_featureValue_4840, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-project.galgas4", 132)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_macCodeSign COMMA_SOURCE_FILE ("galgas-project.galgas4", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 135)) ;
      GGS_lstring var_featureValue_4994 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 136)) ;
      var_qualifiedFeatureList_3467.plusPlusAssignOperation (GGS_galgasQualifiedFeature::init_21__21_ (GGS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 137)), var_featureValue_4994, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgas-project.galgas4", 137)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 139)) ;
  GGS_string var_sourceDirectory_5165 = constinArgument_inProjectSourceFilePath.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgas-project.galgas4", 141)).add_operation (GGS_string ("/sources"), inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 141)) ;
  GGS__5B_string_5D_ var_extensionList_5262 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_extensionList_5262.plusPlusAssignOperation (GGS_string ("galgas4")  COMMA_SOURCE_FILE ("galgas-project.galgas4", 143)) ;
  GGS__5B_string_5D_ var_projectSourceList_5333 = var_sourceDirectory_5165.getter_regularFilesWithExtensions (GGS_bool (true), var_extensionList_5262 COMMA_SOURCE_FILE ("galgas-project.galgas4", 144)) ;
  GGS_string var_toolCppDirectory_5484 = var_sourceDirectory_5165.add_operation (GGS_string ("/tool-sources"), inCompiler COMMA_SOURCE_FILE ("galgas-project.galgas4", 146)) ;
  GGS__5B_string_5D_ var_cppExtensionList_5546 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_cppExtensionList_5546.plusPlusAssignOperation (GGS_string ("cpp")  COMMA_SOURCE_FILE ("galgas-project.galgas4", 148)) ;
  var_cppExtensionList_5546.plusPlusAssignOperation (GGS_string ("h")  COMMA_SOURCE_FILE ("galgas-project.galgas4", 149)) ;
  GGS__5B_string_5D_ var_toolCppSourceList_5649 = var_toolCppDirectory_5484.getter_regularFilesWithExtensions (GGS_bool (true), var_cppExtensionList_5546 COMMA_SOURCE_FILE ("galgas-project.galgas4", 150)) ;
  outArgument_outProjectComponentAST = GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (var_projectSourceList_5333, var_toolCppSourceList_5649, var_majorVersion_3258, var_minorVersion_3292, var_revisionVersion_3326, var_generateFeatureList_3407, var_qualifiedFeatureList_3467, var_targetName_3363, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgas-project.galgas4", 161)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ProjectSyntax::rule_galgas_34_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_quietOutputByDefault COMMA_SOURCE_FILE ("galgas-project.galgas4", 91)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_MacSwiftApp COMMA_SOURCE_FILE ("galgas-project.galgas4", 94)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 97)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_unix COMMA_SOURCE_FILE ("galgas-project.galgas4", 100)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 103)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 106)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 109)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgas-project.galgas4", 112)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgas-project.galgas4", 115)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 118)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 121)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_applicationBundleBase COMMA_SOURCE_FILE ("galgas-project.galgas4", 124)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 125)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 126)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_libpmAtPath COMMA_SOURCE_FILE ("galgas-project.galgas4", 129)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 130)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 131)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_macCodeSign COMMA_SOURCE_FILE ("galgas-project.galgas4", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 135)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 136)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgas-project.galgas4", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum lexicalTypeBaseName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_lexicalTypeBaseName (const GGS_lexicalTypeEnum & inObject,
                                                Compiler * /* inCompiler */
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("string") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("char") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("sint") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("sint64") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("bigint") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum AccessControlAST
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST::GGS_AccessControlAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_protectedSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_protectedSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_privateSetAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_privateSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateAccess (const GGS_location & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST GGS_AccessControlAST::class_func_fileprivateSetAccess (const GGS_location & inAssociatedValue0
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST result ;
  result.mEnum = Enumeration::enum_fileprivateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControlAST_2E_fileprivateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControlAST.fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::method_extractFileprivateSetAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateSetAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControlAST.fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST::getter_getFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST::getter_getFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateSetAccess) {
    const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControlAST_2E_fileprivateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::getAssociatedValuesFor_fileprivateSetAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControlAST_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControlAST [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControlAST::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControlAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControlAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @AccessControlAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST ("AccessControlAST",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@AccessControlAST accessControl'
//--------------------------------------------------------------------------------------------------

GGS_AccessControl extensionGetter_accessControl (const GGS_AccessControlAST & inObject,
                                                 const GGS_unifiedTypeMapEntry & constinArgument_inDeclaringType,
                                                 Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result_result ; // Returned variable
  const GGS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControlAST::Enumeration::invalid:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_publicAccess:
    {
      result_result = GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas4", 112)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas4", 114)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedSetAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas4", 116)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    {
      result_result = GGS_AccessControl::class_func_privateAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas4", 118)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      result_result = GGS_AccessControl::class_func_privateSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas4", 120)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_4453_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_4453_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateAccess (extractedValue_4453_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas4", 122)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_4585_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_4585_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateSetAccess (extractedValue_4585_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas4", 124)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_5603_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_5603_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 152)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_5784_t_0 ;
          GGS_selfMutability extractedValue_5787__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_5784_t_0, extractedValue_5787__1) ;
          GGS_unifiedTypeMapEntry var_currentType_5804 = extractedValue_5784_t_0 ;
          GGS_bool var_ok_5832 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_5603_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 155)).objectCompare (extensionGetter_typeName (var_currentType_5804, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 155)))) ;
          bool loop_5892 = true ;
          while (loop_5892) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_5832.operator_not (SOURCE_FILE ("accessControl.galgas4", 156)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_5804, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 156)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas4", 156)).operator_not (SOURCE_FILE ("accessControl.galgas4", 156)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_5892 = test_2 == GalgasBool::boolTrue ;
              if (loop_5892) {
                var_currentType_5804 = extensionGetter_definition (var_currentType_5804, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 157)).readProperty_superType () ;
                var_ok_5832 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_5603_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 158)).objectCompare (extensionGetter_typeName (var_currentType_5804, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 158)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_5832.operator_not (SOURCE_FILE ("accessControl.galgas4", 160)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas4", 161)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_6260_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedSetAccess (extractedValue_6260_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas4", 167)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_6447_t_0 ;
          GGS_selfMutability extractedValue_6450__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_6447_t_0, extractedValue_6450__1) ;
          GGS_unifiedTypeMapEntry var_currentType_6467 = extractedValue_6447_t_0 ;
          GGS_bool var_ok_6495 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_6260_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 170)).objectCompare (extensionGetter_typeName (var_currentType_6467, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 170)))) ;
          bool loop_6555 = true ;
          while (loop_6555) {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_ok_6495.operator_not (SOURCE_FILE ("accessControl.galgas4", 171)) ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_definition (var_currentType_6467, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 171)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas4", 171)).operator_not (SOURCE_FILE ("accessControl.galgas4", 171)) ;
              }
              test_7 = test_8.boolEnum () ;
              loop_6555 = test_7 == GalgasBool::boolTrue ;
              if (loop_6555) {
                var_currentType_6467 = extensionGetter_definition (var_currentType_6467, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 172)).readProperty_superType () ;
                var_ok_6495 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_6260_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 173)).objectCompare (extensionGetter_typeName (var_currentType_6467, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 173)))) ;
              }
            }
          }
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_ok_6495.operator_not (SOURCE_FILE ("accessControl.galgas4", 175)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas4", 176)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_6923_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_6923_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray11  COMMA_SOURCE_FILE ("accessControl.galgas4", 182)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7102_currentType_0 ;
          GGS_selfMutability extractedValue_7115__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7102_currentType_0, extractedValue_7115__1) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_6923_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 184)).objectCompare (extensionGetter_typeName (extractedValue_7102_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 184)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GenericArray <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("accessControl.galgas4", 185)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_7321_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateSetAccess (extractedValue_7321_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("accessControl.galgas4", 191)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7506_currentType_0 ;
          GGS_selfMutability extractedValue_7519__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7506_currentType_0, extractedValue_7519__1) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_7321_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 193)).objectCompare (extensionGetter_typeName (extractedValue_7506_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 193)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              GenericArray <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray16  COMMA_SOURCE_FILE ("accessControl.galgas4", 194)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_7731_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_7731_declaringLocation_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_7731_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 198)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 198)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray18  COMMA_SOURCE_FILE ("accessControl.galgas4", 199)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_7957_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_7957_declaringLocation_0) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_7957_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 202)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 202)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate(set)' qualifier)"), fixItArray20  COMMA_SOURCE_FILE ("accessControl.galgas4", 203)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_8528_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_8528_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 219)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_8707_t_0 ;
          GGS_selfMutability extractedValue_8710__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_8707_t_0, extractedValue_8710__1) ;
          GGS_unifiedTypeMapEntry var_currentType_8727 = extractedValue_8707_t_0 ;
          GGS_bool var_ok_8755 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_8528_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 222)).objectCompare (extensionGetter_typeName (var_currentType_8727, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 222)))) ;
          bool loop_8815 = true ;
          while (loop_8815) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_8755.operator_not (SOURCE_FILE ("accessControl.galgas4", 223)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_8727, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 223)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas4", 223)).operator_not (SOURCE_FILE ("accessControl.galgas4", 223)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_8815 = test_2 == GalgasBool::boolTrue ;
              if (loop_8815) {
                var_currentType_8727 = extensionGetter_definition (var_currentType_8727, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 224)).readProperty_superType () ;
                var_ok_8755 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_8528_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 225)).objectCompare (extensionGetter_typeName (var_currentType_8727, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 225)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_8755.operator_not (SOURCE_FILE ("accessControl.galgas4", 227)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GenericArray <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas4", 228)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_9178_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_9178_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas4", 234)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_9357_currentType_0 ;
          GGS_selfMutability extractedValue_9370__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_9357_currentType_0, extractedValue_9370__1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_9178_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 236)).objectCompare (extensionGetter_typeName (extractedValue_9357_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 236)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GenericArray <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("accessControl.galgas4", 237)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_9577_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_9577_declaringLocation_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_9577_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 241)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas4", 241)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas4", 242)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST::objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const {
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

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mLexiqueComponentName,
                                      const GGS_lstring & in_mLexiqueSuperComponentName,
                                      const GGS__5B_templateDelimitor_32_AST_5D_ & in_mTemplateDelimitorList,
                                      const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GGS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GGS__5B_templateDelimitor_32_AST_5D_ & in_mTemplateDelimitorList,
                                                                  const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateDelimitor_32_AST_5D_ GGS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateDelimitor_32_AST_5D_ () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateReplacementAST_5D_ GGS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateReplacementAST_5D_ () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                                    const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GGS__5B_templateDelimitor_32_AST_5D_ & in_mTemplateDelimitorList,
                                                                    const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

void cPtr_templateLexiqueComponentAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueSuperComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueSuperComponentName.printNonNullClassInstanceProperties ("mLexiqueSuperComponentName") ;
    mProperty_mTemplateDelimitorList.printNonNullClassInstanceProperties ("mTemplateDelimitorList") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST_2E_weak::objectCompare (const GGS_templateLexiqueComponentAST_2E_weak & inOperand) const {
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

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak & GGS_templateLexiqueComponentAST_2E_weak::operator = (const GGS_templateLexiqueComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak::GGS_templateLexiqueComponentAST_2E_weak (const GGS_templateLexiqueComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST_2E_weak GGS_templateLexiqueComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLexiqueComponentAST result ;
  if (isValid ()) {
    const cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLexiqueComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST_2E_weak::bang_templateLexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLexiqueComponentAST) ;
      result = GGS_templateLexiqueComponentAST ((cPtr_templateLexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ("templateLexiqueComponentAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @propertyIndexMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::~ GGS_propertyIndexMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap::GGS_propertyIndexMap (const GGS_propertyIndexMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap & GGS_propertyIndexMap::operator = (const GGS_propertyIndexMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_contains (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyIndexMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyIndexMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyIndexMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_propertyIndexMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::performInsert (const GGS_propertyIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertyIndexMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>
GGS_propertyIndexMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyIndexMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>>
GGS_propertyIndexMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyIndexMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyIndexMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mPropertyTypeIndex = info->mProperty_mPropertyTypeIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::class_func_mapWithMapToOverride (const GGS_propertyIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyIndexMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap GGS_propertyIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_propertyIndexMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry inArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_propertyIndexMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' attribute is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_unifiedTypeMapEntry & outArgument0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' attribute is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mPropertyTypeIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_propertyIndexMap::getter_mPropertyTypeIndexForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntry result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyTypeIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::setter_setMPropertyTypeIndexForKey (GGS_unifiedTypeMapEntry inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyIndexMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyTypeIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyIndexMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> & inArray,
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
    ioString.appendString ("mPropertyTypeIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyTypeIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @propertyIndexMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyIndexMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyIndexMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertyIndexMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyIndexMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyIndexMap::DownEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element DownEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyIndexMap::UpEnumerator_propertyIndexMap (const GGS_propertyIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element UpEnumerator_propertyIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_propertyIndexMap::current_mPropertyTypeIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyTypeIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap ("propertyIndexMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_filewrapperTemplateForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_::GGS__5B_filewrapperTemplateForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_::GGS__5B_filewrapperTemplateForGeneration_5D_ (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_ & GGS__5B_filewrapperTemplateForGeneration_5D_::operator = (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_ GGS__5B_filewrapperTemplateForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_filewrapperTemplateForGeneration_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::plusPlusAssignOperation (const GGS_filewrapperTemplateForGeneration & inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_filewrapperTemplateForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_ GGS__5B_filewrapperTemplateForGeneration_5D_::add_operation (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_filewrapperTemplateForGeneration_5D_ result ;
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::description (String & ioString,
                                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@filewrapperTemplateForGeneration], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::plusAssignOperation (const GGS__5B_filewrapperTemplateForGeneration_5D_ inOperand,
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_append (const GGS_filewrapperTemplateForGeneration inValue,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_set (const GGS_filewrapperTemplateForGeneration inValue,
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_insert (const GGS_filewrapperTemplateForGeneration inValue,
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_remove (GGS_filewrapperTemplateForGeneration & outValue,
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_removeFirst (GGS_filewrapperTemplateForGeneration & outValue,
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

void GGS__5B_filewrapperTemplateForGeneration_5D_::setter_removeLast (GGS_filewrapperTemplateForGeneration & outValue,
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

GGS__5B_filewrapperTemplateForGeneration_5D_ GGS__5B_filewrapperTemplateForGeneration_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_filewrapperTemplateForGeneration_5D_ result ;
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
      result = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_filewrapperTemplateForGeneration_5D_ GGS__5B_filewrapperTemplateForGeneration_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                           const GGS_uint & inLength,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_filewrapperTemplateForGeneration_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_THERE) ;
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
        result = GGS__5B_filewrapperTemplateForGeneration_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration GGS__5B_filewrapperTemplateForGeneration_5D_::getter_first (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateForGeneration result ;
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

GGS_filewrapperTemplateForGeneration GGS__5B_filewrapperTemplateForGeneration_5D_::getter_last (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateForGeneration result ;
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

GGS_filewrapperTemplateForGeneration GGS__5B_filewrapperTemplateForGeneration_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_filewrapperTemplateForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
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
// Down Enumerator for @_5B_filewrapperTemplateForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_filewrapperTemplateForGeneration_5D_::DownEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration DownEnumerator__5B_filewrapperTemplateForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration DownEnumerator__5B_filewrapperTemplateForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_filewrapperTemplateForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_filewrapperTemplateForGeneration_5D_::UpEnumerator__5B_filewrapperTemplateForGeneration_5D_ (const GGS__5B_filewrapperTemplateForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration UpEnumerator__5B_filewrapperTemplateForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration UpEnumerator__5B_filewrapperTemplateForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[filewrapperTemplateForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_filewrapperTemplateForGeneration_5D_ ("[filewrapperTemplateForGeneration]",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_filewrapperTemplateForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_filewrapperTemplateForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration::GGS_filewrapperTemplateForGeneration (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration::GGS_filewrapperTemplateForGeneration (const GGS_filewrapperTemplateForGeneration & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters),
mProperty_mTemplateInstructionListForGeneration (inSource.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration & GGS_filewrapperTemplateForGeneration::operator = (const GGS_filewrapperTemplateForGeneration & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  mProperty_mTemplateInstructionListForGeneration = inSource.mProperty_mTemplateInstructionListForGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration GGS_filewrapperTemplateForGeneration::init_21__21__21_ (const GGS_string & in_mFilewrapperTemplateName,
                                                                                             const GGS__5B_formalInputParameterForGeneration_5D_ & in_mFilewrapperTemplateFormalInputParameters,
                                                                                             const GGS__5B_templateInstructionForGeneration_5D_ & in_mTemplateInstructionListForGeneration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateForGeneration::GGS_filewrapperTemplateForGeneration (const GGS_string & inOperand0,
                                                                            const GGS__5B_formalInputParameterForGeneration_5D_ & inOperand1,
                                                                            const GGS__5B_templateInstructionForGeneration_5D_ & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateForGeneration::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateForGeneration::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateForGeneration ("filewrapperTemplateForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::~ GGS_nonterminalLabelMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap::GGS_nonterminalLabelMap (const GGS_nonterminalLabelMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap & GGS_nonterminalLabelMap::operator = (const GGS_nonterminalLabelMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_contains (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_nonterminalLabelMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonterminalLabelMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_nonterminalLabelMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalLabelMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::performInsert (const GGS_nonterminalLabelMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>
GGS_nonterminalLabelMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_nonterminalLabelMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>>
GGS_nonterminalLabelMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_nonterminalLabelMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_nonterminalLabelMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_nonterminalLabelMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSignatureForGeneration = info->mProperty_mSignatureForGeneration ;
      element.mProperty_mSignature = info->mProperty_mSignature ;
      element.mProperty_mEndOfArgumentLocation = info->mProperty_mEndOfArgumentLocation ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::class_func_mapWithMapToOverride (const GGS_nonterminalLabelMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_nonterminalLabelMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap GGS_nonterminalLabelMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_nonterminalLabelMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS__5B_formalParameterForGeneration_5D_ inArgument0,
                                                GGS_formalParameterSignature inArgument1,
                                                GGS_location inArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_nonterminalLabelMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' nonterminal label has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::method_searchKey (GGS_lstring inLKey,
                                                GGS__5B_formalParameterForGeneration_5D_ & outArgument0,
                                                GGS_formalParameterSignature & outArgument1,
                                                GGS_location & outArgument2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' nonterminal label is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mSignatureForGeneration ;
    outArgument1 = info->mProperty_mSignature ;
    outArgument2 = info->mProperty_mEndOfArgumentLocation ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterForGeneration_5D_ GGS_nonterminalLabelMap::getter_mSignatureForGenerationForKey (const GGS_string & inKey,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS__5B_formalParameterForGeneration_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignatureForGeneration ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature GGS_nonterminalLabelMap::getter_mSignatureForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_formalParameterSignature result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSignature ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_nonterminalLabelMap::getter_mEndOfArgumentLocationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mEndOfArgumentLocation ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForGenerationForKey (GGS__5B_formalParameterForGeneration_5D_ inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignatureForGeneration = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMSignatureForKey (GGS_formalParameterSignature inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSignature = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::setter_setMEndOfArgumentLocationForKey (GGS_location inValue,
                                                                      GGS_string inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_nonterminalLabelMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mEndOfArgumentLocation = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_nonterminalLabelMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> & inArray,
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
    ioString.appendString ("mSignatureForGeneration:") ;
    inArray (i COMMA_HERE)->mProperty_mSignatureForGeneration.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mSignature:") ;
    inArray (i COMMA_HERE)->mProperty_mSignature.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mEndOfArgumentLocation:") ;
    inArray (i COMMA_HERE)->mProperty_mEndOfArgumentLocation.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @nonterminalLabelMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_nonterminalLabelMap_2E_element>> array = sortedInfoArray () ;
    GGS_nonterminalLabelMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_nonterminalLabelMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_nonterminalLabelMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonterminalLabelMap::DownEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element DownEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterForGeneration_5D_ DownEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature DownEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @nonterminalLabelMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonterminalLabelMap::UpEnumerator_nonterminalLabelMap (const GGS_nonterminalLabelMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element UpEnumerator_nonterminalLabelMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonterminalLabelMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalParameterForGeneration_5D_ UpEnumerator_nonterminalLabelMap::current_mSignatureForGeneration (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignatureForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterSignature UpEnumerator_nonterminalLabelMap::current_mSignature (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSignature ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_nonterminalLabelMap::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mEndOfArgumentLocation ;
}


//--------------------------------------------------------------------------------------------------
//     @nonterminalLabelMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap ("nonterminalLabelMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalLabelMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST::GGS_ruleLabelImplementationAST (void) :
mProperty_mLabelName (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation (),
mProperty_mInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST::GGS_ruleLabelImplementationAST (const GGS_ruleLabelImplementationAST & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mSignatureForGeneration (inSource.mProperty_mSignatureForGeneration),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation),
mProperty_mInstructionListForGeneration (inSource.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST & GGS_ruleLabelImplementationAST::operator = (const GGS_ruleLabelImplementationAST & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mSignatureForGeneration = inSource.mProperty_mSignatureForGeneration ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  mProperty_mInstructionListForGeneration = inSource.mProperty_mInstructionListForGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleLabelImplementationAST GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                         const GGS__5B_formalParameterForGeneration_5D_ & in_mSignatureForGeneration,
                                                                                         const GGS_formalParameterSignature & in_mSignature,
                                                                                         const GGS_location & in_mEndOfArgumentLocation,
                                                                                         const GGS__5B_semanticInstructionForGeneration_5D_ & in_mInstructionListForGeneration,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleLabelImplementationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mInstructionListForGeneration = in_mInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST::GGS_ruleLabelImplementationAST (const GGS_lstring & inOperand0,
                                                                const GGS__5B_formalParameterForGeneration_5D_ & inOperand1,
                                                                const GGS_formalParameterSignature & inOperand2,
                                                                const GGS_location & inOperand3,
                                                                const GGS__5B_semanticInstructionForGeneration_5D_ & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3),
mProperty_mInstructionListForGeneration (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleLabelImplementationAST::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationAST::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleLabelImplementationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ruleLabelImplementationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationAST ("ruleLabelImplementationAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleLabelImplementationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationAST ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_ruleLabelImplementationAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_::GGS__5B_ruleLabelImplementationAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_::GGS__5B_ruleLabelImplementationAST_5D_ (const GGS__5B_ruleLabelImplementationAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_ & GGS__5B_ruleLabelImplementationAST_5D_::operator = (const GGS__5B_ruleLabelImplementationAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_ GGS__5B_ruleLabelImplementationAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_ruleLabelImplementationAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::plusPlusAssignOperation (const GGS_ruleLabelImplementationAST & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_ruleLabelImplementationAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_ GGS__5B_ruleLabelImplementationAST_5D_::add_operation (const GGS__5B_ruleLabelImplementationAST_5D_ & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_ruleLabelImplementationAST_5D_ result ;
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

void GGS__5B_ruleLabelImplementationAST_5D_::description (String & ioString,
                                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@ruleLabelImplementationAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::plusAssignOperation (const GGS__5B_ruleLabelImplementationAST_5D_ inOperand,
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

void GGS__5B_ruleLabelImplementationAST_5D_::setter_append (const GGS_ruleLabelImplementationAST inValue,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_ruleLabelImplementationAST_5D_::setter_set (const GGS_ruleLabelImplementationAST inValue,
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

void GGS__5B_ruleLabelImplementationAST_5D_::setter_insert (const GGS_ruleLabelImplementationAST inValue,
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

void GGS__5B_ruleLabelImplementationAST_5D_::setter_remove (GGS_ruleLabelImplementationAST & outValue,
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

void GGS__5B_ruleLabelImplementationAST_5D_::setter_removeFirst (GGS_ruleLabelImplementationAST & outValue,
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

void GGS__5B_ruleLabelImplementationAST_5D_::setter_removeLast (GGS_ruleLabelImplementationAST & outValue,
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

GGS__5B_ruleLabelImplementationAST_5D_ GGS__5B_ruleLabelImplementationAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_ruleLabelImplementationAST_5D_ result ;
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
      result = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleLabelImplementationAST_5D_ GGS__5B_ruleLabelImplementationAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                               const GGS_uint & inLength,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_ruleLabelImplementationAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_THERE) ;
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
        result = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST GGS__5B_ruleLabelImplementationAST_5D_::getter_first (Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationAST result ;
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

GGS_ruleLabelImplementationAST GGS__5B_ruleLabelImplementationAST_5D_::getter_last (Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationAST result ;
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

GGS_ruleLabelImplementationAST GGS__5B_ruleLabelImplementationAST_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_ruleLabelImplementationAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
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
// Down Enumerator for @_5B_ruleLabelImplementationAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_ruleLabelImplementationAST_5D_::DownEnumerator__5B_ruleLabelImplementationAST_5D_ (const GGS__5B_ruleLabelImplementationAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST DownEnumerator__5B_ruleLabelImplementationAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST DownEnumerator__5B_ruleLabelImplementationAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_ruleLabelImplementationAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_ruleLabelImplementationAST_5D_::UpEnumerator__5B_ruleLabelImplementationAST_5D_ (const GGS__5B_ruleLabelImplementationAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST UpEnumerator__5B_ruleLabelImplementationAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationAST UpEnumerator__5B_ruleLabelImplementationAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[ruleLabelImplementationAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_ruleLabelImplementationAST_5D_ ("[ruleLabelImplementationAST]",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_ruleLabelImplementationAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_ruleLabelImplementationAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@syntaxInstructionAST analyzeSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSyntaxInstruction (cPtr_syntaxInstructionAST * inObject,
                                                   const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                   GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                   const GGS_analysisContext constin_inAnalysisContext,
                                                   GGS_unifiedTypeMap & io_ioTypeMap,
                                                   const GGS_bool constin_inHasTranslateFeature,
                                                   const GGS_terminalMap constin_inTerminalMap,
                                                   const GGS_string constin_inLexiqueName,
                                                   const GGS_nonterminalMap constin_inNonterminalMap,
                                                   const GGS_string constin_inComponentName,
                                                   const GGS_stringset constin_inIndexNameSet,
                                                   GGS__5B_semanticInstructionForGeneration_5D_ & io_ioInstructionListForGeneration,
                                                   GGS_localVarManager & io_ioVariableMap,
                                                   GGS_uint & io_ioSelectMethodCount,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_analyzeSyntaxInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inHasTranslateFeature, constin_inTerminalMap, constin_inLexiqueName, constin_inNonterminalMap, constin_inComponentName, constin_inIndexNameSet, io_ioInstructionListForGeneration, io_ioVariableMap, io_ioSelectMethodCount, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractInputParameter analyzeInputParameter'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeInputParameter (cPtr_abstractInputParameter * inObject,
                                                const GGS_analysisContext constin_inAnalysisContext,
                                                GGS_unifiedTypeMap & io_ioTypeMap,
                                                const GGS_lexicalTypeEnum constin_inRequiredLexicalType,
                                                const GGS_string constin_inLexicalAttributeName,
                                                GGS__5B_terminalCheckAssignement_5D_ & io_ioTerminalCheckAssignementList,
                                                GGS_localVarManager & io_ioVariableMap,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractInputParameter) ;
    inObject->method_analyzeInputParameter (constin_inAnalysisContext, io_ioTypeMap, constin_inRequiredLexicalType, constin_inLexicalAttributeName, io_ioTerminalCheckAssignementList, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractGrammarInstructionSyntaxDirectedTranslationResult analyzeSDT'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSDT (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                     const GGS_analysisContext constin_inAnalysisContext,
                                     GGS_unifiedTypeMap & io__5F_ioTypeMap,
                                     const GGS_bool constin_inHasTranslateFeature,
                                     GGS_localVarManager & io_ioVariableMap,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_analyzeSDT (constin_inAnalysisContext, io__5F_ioTypeMap, constin_inHasTranslateFeature, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractGrammarInstructionSyntaxDirectedTranslationResult generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                       const GGS_bool constin_inGenerateSyntaxDirectedTranslationString,
                                       const GGS_string constin_inAccessMethodName,
                                       GGS_stringset & io_ioUnusedVariableCppNameSet,
                                       GGS_string & io_ioGeneratedCode,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
    inObject->method_generateCode (constin_inGenerateSyntaxDirectedTranslationString, constin_inAccessMethodName, io_ioUnusedVariableCppNameSet, io_ioGeneratedCode, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary GGS_genericExtensionMethodListMapDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary GGS_genericExtensionMethodListMapDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_genericExtensionMethodListMapDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @genericExtensionMethodListMapDictionary: ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_genericExtensionMethodListMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::plusPlusAssignOperation (const GGS_genericExtensionMethodListMapDictionary_2E_element & inValue
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                                      const GGS__5B_lstring_5D_ & inArgument0,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_insert (const GGS_string inKey,
                                                                 const GGS__5B_lstring_5D_ inArgument0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericExtensionMethodListMapDictionary::getter_contains (const GGS_string & inKey
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::method_searchKey (GGS_string inKey,
                                                                    GGS__5B_lstring_5D_ & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_removeKey (GGS_string inKey,
                                                                    GGS__5B_lstring_5D_ & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_genericExtensionMethodListMapDictionary::getter_mListForKey (const GGS_string & inKey,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_genericExtensionMethodListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get mList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_mList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_setMListForKey (GGS__5B_lstring_5D_ inPropertyValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_genericExtensionMethodListMapDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setMListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_mList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @genericExtensionMethodListMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_genericExtensionMethodListMapDictionary::UpEnumerator_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_genericExtensionMethodListMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ UpEnumerator_genericExtensionMethodListMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element UpEnumerator_genericExtensionMethodListMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @genericExtensionMethodListMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_genericExtensionMethodListMapDictionary::DownEnumerator_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_genericExtensionMethodListMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ DownEnumerator_genericExtensionMethodListMapDictionary::current_mList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_mList ;
}


//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element DownEnumerator_genericExtensionMethodListMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ("genericExtensionMethodListMapDictionary",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap & GGS_genericExtensionMethodListMap::operator = (const GGS_genericExtensionMethodListMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericExtensionMethodListMap GGS_genericExtensionMethodListMap::init (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_genericExtensionMethodListMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@genericExtensionMethodListMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ extensionGetter_listForKey (const GGS_genericExtensionMethodListMap & inObject,
                                                const GGS_string & constinArgument_inKey,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_lstring_5D_ result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_genericExtensionMethodListMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_contains (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 54)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_genericExtensionMethodListMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 55)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Extension proc '@semanticDeclarationAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionMethodListMapAST */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioAbstractExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument__5F_ioOverridingAbstractExtensionGetterListMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (cPtr_semanticDeclarationAST * inObject,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioAbstractExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingAbstractExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioAbstractExtensionMethodListMapAST,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingAbstractExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioAbstractExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io__5F_ioOverridingAbstractExtensionGetterListMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_buildExtensionListMaps (io__5F_ioAbstractExtensionSetterListMap, io__5F_ioExtensionSetterListMap, io__5F_ioOverridingExtensionSetterListMap, io__5F_ioOverridingAbstractExtensionSetterListMap, io__5F_ioAbstractExtensionMethodListMapAST, io__5F_ioExtensionMethodListMap, io__5F_ioOverridingExtensionMethodListMap, io__5F_ioOverridingAbstractExtensionMethodListMap, io__5F_ioAbstractExtensionGetterListMap, io__5F_ioExtensionGetterListMap, io__5F_ioOverridingExtensionGetterListMap, io__5F_ioOverridingAbstractExtensionGetterListMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary GGS_descendantClassListMapDictionary::builtDictionary (LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary GGS_descendantClassListMapDictionary::init (Compiler * COMMA_LOCATION_ARGS) {
  return GGS_descendantClassListMapDictionary::builtDictionary (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @descendantClassListMapDictionary: ") ;
  if (isValid ()) {
    ioString.appendSigned (count ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_descendantClassListMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNotNil ()) {
      return GGS_descendantClassListMapDictionary_2E_element_3F_ (object.value ()) ;
    }else{
      return GGS_descendantClassListMapDictionary_2E_element_3F_::init_nil () ;
    }
  }else{
    return GGS_descendantClassListMapDictionary_2E_element_3F_ () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::plusPlusAssignOperation (const GGS_descendantClassListMapDictionary_2E_element & inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    insertOrReplace (inValue.mProperty_key, inValue COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                               const GGS__5B_unifiedTypeMapEntry_5D_ & inArgument0,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_insert (const GGS_string inKey,
                                                          const GGS__5B_unifiedTypeMapEntry_5D_ inArgument0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    insertOrReplace (inKey, newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_descendantClassListMapDictionary::getter_contains (const GGS_string & inKey
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (hasKey (inKey)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::method_searchKey (GGS_string inKey,
                                                             GGS__5B_unifiedTypeMapEntry_5D_ & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) {
    //--- Build error message
      const String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = object->mProperty_typeList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_removeKey (GGS_string inKey,
                                                             GGS__5B_unifiedTypeMapEntry_5D_ & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element> removedObject
                    = removeAndReturnRemovedInfo (inKey COMMA_THERE) ;
    if (removedObject.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = removedObject->mProperty_typeList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_descendantClassListMapDictionary::getter_typeListForKey (const GGS_string & inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_unifiedTypeMapEntry_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_descendantClassListMapDictionary_2E_element> object = infoForKey (inKey) ;
    if (object.isNil ()) { // Not found
    //--- Build error message
      const String message = "cannot get typeList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = object->mProperty_typeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_setTypeListForKey (GGS__5B_unifiedTypeMapEntry_5D_ inPropertyValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    OptionalSharedRef <GenericDictionaryNode <GGS_string, GGS_descendantClassListMapDictionary_2E_element>> modifiedNode = nodeForKey (inKey) ;
    if (modifiedNode.isNil ()) { // Not found
    //--- Build error message
     const String message = "cannot setTypeListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      modifiedNode->mSharedInfo->mProperty_typeList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @descendantClassListMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_descendantClassListMapDictionary::UpEnumerator_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_descendantClassListMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ UpEnumerator_descendantClassListMapDictionary::current_typeList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_typeList ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element UpEnumerator_descendantClassListMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @descendantClassListMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_descendantClassListMapDictionary::DownEnumerator_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inOperand) :
mInfoArray (inOperand.sortedInfoArray ()),
mIndex () {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_descendantClassListMapDictionary::current_key (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_key ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ DownEnumerator_descendantClassListMapDictionary::current_typeList (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE)->mProperty_typeList ;
}


//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element DownEnumerator_descendantClassListMapDictionary::current (UNUSED_LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_HERE).value () ;
}
//--------------------------------------------------------------------------------------------------
//     @descendantClassListMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary ("descendantClassListMapDictionary",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (const GGS_descendantClassListMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap & GGS_descendantClassListMap::operator = (const GGS_descendantClassListMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_descendantClassListMap GGS_descendantClassListMap::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_descendantClassListMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (const GGS_descendantClassListMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @descendantClassListMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@descendantClassListMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ extensionGetter_listForKey (const GGS_descendantClassListMap & inObject,
                                                            const GGS_string & constinArgument_inKey,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_descendantClassListMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_contains (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 117)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_descendantClassListMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 118)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS__5B_unifiedTypeMapEntry_5D_::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Map type @extensionMethodMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings::GGS_extensionMethodMapForGlobalCheckings (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings::~ GGS_extensionMethodMapForGlobalCheckings (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings::GGS_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings & GGS_extensionMethodMapForGlobalCheckings::operator = (const GGS_extensionMethodMapForGlobalCheckings & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForGlobalCheckings::getter_contains (const GGS_string & inKey
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionMethodMapForGlobalCheckings::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                         const GGS_uint & inLevel
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForGlobalCheckings::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_extensionMethodMapForGlobalCheckings::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_extensionMethodMapForGlobalCheckings::getter_locationForKey (const GGS_string & inKey,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_extensionMethodMapForGlobalCheckings::getter_keyList (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForGlobalCheckings::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForGlobalCheckings_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::performInsert (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_extensionMethodMapForGlobalCheckings_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>
GGS_extensionMethodMapForGlobalCheckings::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_extensionMethodMapForGlobalCheckings::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>>
GGS_extensionMethodMapForGlobalCheckings::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_extensionMethodMapForGlobalCheckings::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ GGS_extensionMethodMapForGlobalCheckings
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForGlobalCheckings_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForGlobalCheckings & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForGlobalCheckings_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForGlobalCheckings result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::setter_insertKey (GGS_lstring inLKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_extensionMethodMapForGlobalCheckings_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' extension proc is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_extensionMethodMapForGlobalCheckings_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @extensionMethodMapForGlobalCheckings") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_extensionMethodMapForGlobalCheckings_2E_element>> array = sortedInfoArray () ;
    GGS_extensionMethodMapForGlobalCheckings_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_extensionMethodMapForGlobalCheckings_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_extensionMethodMapForGlobalCheckings_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForGlobalCheckings::DownEnumerator_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element DownEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForGlobalCheckings::UpEnumerator_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element UpEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForGlobalCheckings generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

