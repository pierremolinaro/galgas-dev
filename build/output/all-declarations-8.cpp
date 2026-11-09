#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTrueBoolAST_2E_weak::objectCompare (const GGS_templateTrueBoolAST_2E_weak & inOperand) const {
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

GGS_templateTrueBoolAST_2E_weak::GGS_templateTrueBoolAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateTrueBoolAST_2E_weak & GGS_templateTrueBoolAST_2E_weak::operator = (const GGS_templateTrueBoolAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTrueBoolAST_2E_weak::GGS_templateTrueBoolAST_2E_weak (const GGS_templateTrueBoolAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateTrueBoolAST_2E_weak GGS_templateTrueBoolAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateTrueBoolAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTrueBoolAST GGS_templateTrueBoolAST_2E_weak::unwrappedValue (void) const {
  GGS_templateTrueBoolAST result ;
  if (isValid ()) {
    const cPtr_templateTrueBoolAST * p = (cPtr_templateTrueBoolAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateTrueBoolAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTrueBoolAST GGS_templateTrueBoolAST_2E_weak::bang_templateTrueBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateTrueBoolAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateTrueBoolAST) ;
      result = GGS_templateTrueBoolAST ((cPtr_templateTrueBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateTrueBoolAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTrueBoolAST_2E_weak ("templateTrueBoolAST.weak",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTrueBoolAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTrueBoolAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateFalseBoolAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFalseBoolAST::objectCompare (const GGS_templateFalseBoolAST & inOperand) const {
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

GGS_templateFalseBoolAST::GGS_templateFalseBoolAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFalseBoolAST GGS_templateFalseBoolAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateFalseBoolAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFalseBoolAST (inCompiler COMMA_THERE)) ;
  object->templateFalseBoolAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_templateFalseBoolAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFalseBoolAST::
templateFalseBoolAST_init_21_ (const GGS_location & in_mLocation,
                               Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST::GGS_templateFalseBoolAST (const cPtr_templateFalseBoolAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFalseBoolAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateFalseBoolAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateFalseBoolAST * p = (cPtr_templateFalseBoolAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFalseBoolAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFalseBoolAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFalseBoolAST::cPtr_templateFalseBoolAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFalseBoolAST::cPtr_templateFalseBoolAST (const GGS_location & in_mLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFalseBoolAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

void cPtr_templateFalseBoolAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFalseBoolAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFalseBoolAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFalseBoolAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFalseBoolAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFalseBoolAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST ("templateFalseBoolAST",
                                                                         & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFalseBoolAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFalseBoolAST_2E_weak::objectCompare (const GGS_templateFalseBoolAST_2E_weak & inOperand) const {
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

GGS_templateFalseBoolAST_2E_weak::GGS_templateFalseBoolAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST_2E_weak & GGS_templateFalseBoolAST_2E_weak::operator = (const GGS_templateFalseBoolAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST_2E_weak::GGS_templateFalseBoolAST_2E_weak (const GGS_templateFalseBoolAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST_2E_weak GGS_templateFalseBoolAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateFalseBoolAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST GGS_templateFalseBoolAST_2E_weak::unwrappedValue (void) const {
  GGS_templateFalseBoolAST result ;
  if (isValid ()) {
    const cPtr_templateFalseBoolAST * p = (cPtr_templateFalseBoolAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateFalseBoolAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFalseBoolAST GGS_templateFalseBoolAST_2E_weak::bang_templateFalseBoolAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateFalseBoolAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFalseBoolAST) ;
      result = GGS_templateFalseBoolAST ((cPtr_templateFalseBoolAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateFalseBoolAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFalseBoolAST_2E_weak ("templateFalseBoolAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFalseBoolAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFalseBoolAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralStringExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralStringExpressionAST::objectCompare (const GGS_templateLiteralStringExpressionAST & inOperand) const {
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

GGS_templateLiteralStringExpressionAST::GGS_templateLiteralStringExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST::
init_21__21_ (const GGS__5B_string_5D_ & in_mLiteralStringList,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralStringExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralStringExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralStringExpressionAST_init_21__21_ (in_mLiteralStringList, in_mLocation, inCompiler) ;
  const GGS_templateLiteralStringExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralStringExpressionAST::
templateLiteralStringExpressionAST_init_21__21_ (const GGS__5B_string_5D_ & in_mLiteralStringList,
                                                 const GGS_location & in_mLocation,
                                                 Compiler * /* inCompiler */) {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST::GGS_templateLiteralStringExpressionAST (const cPtr_templateLiteralStringExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralStringExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_templateLiteralStringExpressionAST::readProperty_mLiteralStringList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_string_5D_ () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLiteralStringList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateLiteralStringExpressionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralStringExpressionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralStringExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralStringExpressionAST::cPtr_templateLiteralStringExpressionAST (const GGS__5B_string_5D_ & in_mLiteralStringList,
                                                                                  const GGS_location & in_mLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralStringList (),
mProperty_mLocation () {
  mProperty_mLiteralStringList = in_mLiteralStringList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralStringExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

void cPtr_templateLiteralStringExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralStringExpressionAST:") ;
  mProperty_mLiteralStringList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralStringExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralStringExpressionAST (mProperty_mLiteralStringList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralStringExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralStringList.printNonNullClassInstanceProperties ("mLiteralStringList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralStringExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ("templateLiteralStringExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralStringExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralStringExpressionAST_2E_weak::objectCompare (const GGS_templateLiteralStringExpressionAST_2E_weak & inOperand) const {
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

GGS_templateLiteralStringExpressionAST_2E_weak::GGS_templateLiteralStringExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST_2E_weak & GGS_templateLiteralStringExpressionAST_2E_weak::operator = (const GGS_templateLiteralStringExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST_2E_weak::GGS_templateLiteralStringExpressionAST_2E_weak (const GGS_templateLiteralStringExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST_2E_weak GGS_templateLiteralStringExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLiteralStringExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLiteralStringExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateLiteralStringExpressionAST * p = (cPtr_templateLiteralStringExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLiteralStringExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralStringExpressionAST GGS_templateLiteralStringExpressionAST_2E_weak::bang_templateLiteralStringExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLiteralStringExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralStringExpressionAST) ;
      result = GGS_templateLiteralStringExpressionAST ((cPtr_templateLiteralStringExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLiteralStringExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2E_weak ("templateLiteralStringExpressionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralStringExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralStringExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST::objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GGS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralUIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST_2E_weak::objectCompare (const GGS_templateLiteralUIntExpressionAST_2E_weak & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST_2E_weak::GGS_templateLiteralUIntExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST_2E_weak & GGS_templateLiteralUIntExpressionAST_2E_weak::operator = (const GGS_templateLiteralUIntExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST_2E_weak::GGS_templateLiteralUIntExpressionAST_2E_weak (const GGS_templateLiteralUIntExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST_2E_weak GGS_templateLiteralUIntExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLiteralUIntExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLiteralUIntExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST_2E_weak::bang_templateLiteralUIntExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLiteralUIntExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralUIntExpressionAST) ;
      result = GGS_templateLiteralUIntExpressionAST ((cPtr_templateLiteralUIntExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2E_weak ("templateLiteralUIntExpressionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralUIntExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralCharExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralCharExpressionAST::objectCompare (const GGS_templateLiteralCharExpressionAST & inOperand) const {
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

GGS_templateLiteralCharExpressionAST::GGS_templateLiteralCharExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST::
init_21_ (const GGS_lchar & in_mLiteralChar,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralCharExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralCharExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralCharExpressionAST_init_21_ (in_mLiteralChar, inCompiler) ;
  const GGS_templateLiteralCharExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralCharExpressionAST::
templateLiteralCharExpressionAST_init_21_ (const GGS_lchar & in_mLiteralChar,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralChar = in_mLiteralChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST::GGS_templateLiteralCharExpressionAST (const cPtr_templateLiteralCharExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralCharExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_templateLiteralCharExpressionAST::readProperty_mLiteralChar (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralCharExpressionAST) ;
    return p->mProperty_mLiteralChar ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralCharExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralChar () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralCharExpressionAST::cPtr_templateLiteralCharExpressionAST (const GGS_lchar & in_mLiteralChar,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralChar () {
  mProperty_mLiteralChar = in_mLiteralChar ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralCharExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

void cPtr_templateLiteralCharExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralCharExpressionAST:") ;
  mProperty_mLiteralChar.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralCharExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralCharExpressionAST (mProperty_mLiteralChar, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralCharExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralChar.printNonNullClassInstanceProperties ("mLiteralChar") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralCharExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ("templateLiteralCharExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralCharExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralCharExpressionAST_2E_weak::objectCompare (const GGS_templateLiteralCharExpressionAST_2E_weak & inOperand) const {
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

GGS_templateLiteralCharExpressionAST_2E_weak::GGS_templateLiteralCharExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST_2E_weak & GGS_templateLiteralCharExpressionAST_2E_weak::operator = (const GGS_templateLiteralCharExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST_2E_weak::GGS_templateLiteralCharExpressionAST_2E_weak (const GGS_templateLiteralCharExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST_2E_weak GGS_templateLiteralCharExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLiteralCharExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLiteralCharExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateLiteralCharExpressionAST * p = (cPtr_templateLiteralCharExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLiteralCharExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralCharExpressionAST GGS_templateLiteralCharExpressionAST_2E_weak::bang_templateLiteralCharExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLiteralCharExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralCharExpressionAST) ;
      result = GGS_templateLiteralCharExpressionAST ((cPtr_templateLiteralCharExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLiteralCharExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2E_weak ("templateLiteralCharExpressionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralCharExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralCharExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralDoubleExpressionAST::objectCompare (const GGS_templateLiteralDoubleExpressionAST & inOperand) const {
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

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mLiteralDouble,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralDoubleExpressionAST_init_21_ (in_mLiteralDouble, inCompiler) ;
  const GGS_templateLiteralDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralDoubleExpressionAST::
templateLiteralDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mLiteralDouble,
                                             Compiler * /* inCompiler */) {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST::GGS_templateLiteralDoubleExpressionAST (const cPtr_templateLiteralDoubleExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_templateLiteralDoubleExpressionAST::readProperty_mLiteralDouble (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralDoubleExpressionAST) ;
    return p->mProperty_mLiteralDouble ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralDoubleExpressionAST::cPtr_templateLiteralDoubleExpressionAST (const GGS_ldouble & in_mLiteralDouble,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralDouble () {
  mProperty_mLiteralDouble = in_mLiteralDouble ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

void cPtr_templateLiteralDoubleExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralDoubleExpressionAST:") ;
  mProperty_mLiteralDouble.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralDoubleExpressionAST (mProperty_mLiteralDouble, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralDouble.printNonNullClassInstanceProperties ("mLiteralDouble") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ("templateLiteralDoubleExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralDoubleExpressionAST_2E_weak::objectCompare (const GGS_templateLiteralDoubleExpressionAST_2E_weak & inOperand) const {
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

GGS_templateLiteralDoubleExpressionAST_2E_weak::GGS_templateLiteralDoubleExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST_2E_weak & GGS_templateLiteralDoubleExpressionAST_2E_weak::operator = (const GGS_templateLiteralDoubleExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST_2E_weak::GGS_templateLiteralDoubleExpressionAST_2E_weak (const GGS_templateLiteralDoubleExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST_2E_weak GGS_templateLiteralDoubleExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLiteralDoubleExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLiteralDoubleExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateLiteralDoubleExpressionAST * p = (cPtr_templateLiteralDoubleExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLiteralDoubleExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralDoubleExpressionAST GGS_templateLiteralDoubleExpressionAST_2E_weak::bang_templateLiteralDoubleExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLiteralDoubleExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLiteralDoubleExpressionAST) ;
      result = GGS_templateLiteralDoubleExpressionAST ((cPtr_templateLiteralDoubleExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLiteralDoubleExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2E_weak ("templateLiteralDoubleExpressionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralDoubleExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralDoubleExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST::objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mExpression,
                  const GGS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GGS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                         const GGS_templateExpressionAST & in_mExpression,
                                                         const GGS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                                          const GGS_lstring & in_mStructFieldName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@structFieldAccessTemplateExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structFieldAccessTemplateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structFieldAccessTemplateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST_2E_weak::objectCompare (const GGS_structFieldAccessTemplateExpressionAST_2E_weak & inOperand) const {
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

GGS_structFieldAccessTemplateExpressionAST_2E_weak::GGS_structFieldAccessTemplateExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST_2E_weak & GGS_structFieldAccessTemplateExpressionAST_2E_weak::operator = (const GGS_structFieldAccessTemplateExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST_2E_weak::GGS_structFieldAccessTemplateExpressionAST_2E_weak (const GGS_structFieldAccessTemplateExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST_2E_weak GGS_structFieldAccessTemplateExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_structFieldAccessTemplateExpressionAST result ;
  if (isValid ()) {
    const cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structFieldAccessTemplateExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST_2E_weak::bang_structFieldAccessTemplateExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structFieldAccessTemplateExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structFieldAccessTemplateExpressionAST) ;
      result = GGS_structFieldAccessTemplateExpressionAST ((cPtr_structFieldAccessTemplateExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structFieldAccessTemplateExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2E_weak ("structFieldAccessTemplateExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structFieldAccessTemplateExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateNotOperatorAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateNotOperatorAST::objectCompare (const GGS_templateNotOperatorAST & inOperand) const {
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

GGS_templateNotOperatorAST::GGS_templateNotOperatorAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateNotOperatorAST GGS_templateNotOperatorAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_templateExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateNotOperatorAST * object = nullptr ;
  macroMyNew (object, cPtr_templateNotOperatorAST (inCompiler COMMA_THERE)) ;
  object->templateNotOperatorAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_templateNotOperatorAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateNotOperatorAST::
templateNotOperatorAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                     const GGS_templateExpressionAST & in_mExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST::GGS_templateNotOperatorAST (const cPtr_templateNotOperatorAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateNotOperatorAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateNotOperatorAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateNotOperatorAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateNotOperatorAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateNotOperatorAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateNotOperatorAST::cPtr_templateNotOperatorAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateNotOperatorAST::cPtr_templateNotOperatorAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_templateNotOperatorAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

void cPtr_templateNotOperatorAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateNotOperatorAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateNotOperatorAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateNotOperatorAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateNotOperatorAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateNotOperatorAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNotOperatorAST ("templateNotOperatorAST",
                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateNotOperatorAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateNotOperatorAST_2E_weak::objectCompare (const GGS_templateNotOperatorAST_2E_weak & inOperand) const {
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

GGS_templateNotOperatorAST_2E_weak::GGS_templateNotOperatorAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST_2E_weak & GGS_templateNotOperatorAST_2E_weak::operator = (const GGS_templateNotOperatorAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST_2E_weak::GGS_templateNotOperatorAST_2E_weak (const GGS_templateNotOperatorAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST_2E_weak GGS_templateNotOperatorAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateNotOperatorAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST GGS_templateNotOperatorAST_2E_weak::unwrappedValue (void) const {
  GGS_templateNotOperatorAST result ;
  if (isValid ()) {
    const cPtr_templateNotOperatorAST * p = (cPtr_templateNotOperatorAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateNotOperatorAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateNotOperatorAST GGS_templateNotOperatorAST_2E_weak::bang_templateNotOperatorAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateNotOperatorAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateNotOperatorAST) ;
      result = GGS_templateNotOperatorAST ((cPtr_templateNotOperatorAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateNotOperatorAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateNotOperatorAST_2E_weak ("templateNotOperatorAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateNotOperatorAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateNotOperatorAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateLogicalNegateAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLogicalNegateAST::objectCompare (const GGS_templateLogicalNegateAST & inOperand) const {
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

GGS_templateLogicalNegateAST::GGS_templateLogicalNegateAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLogicalNegateAST GGS_templateLogicalNegateAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_templateExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateLogicalNegateAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLogicalNegateAST (inCompiler COMMA_THERE)) ;
  object->templateLogicalNegateAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_templateLogicalNegateAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLogicalNegateAST::
templateLogicalNegateAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                       const GGS_templateExpressionAST & in_mExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST::GGS_templateLogicalNegateAST (const cPtr_templateLogicalNegateAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLogicalNegateAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateLogicalNegateAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateLogicalNegateAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLogicalNegateAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLogicalNegateAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLogicalNegateAST::cPtr_templateLogicalNegateAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLogicalNegateAST::cPtr_templateLogicalNegateAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_templateLogicalNegateAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

void cPtr_templateLogicalNegateAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLogicalNegateAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLogicalNegateAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLogicalNegateAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLogicalNegateAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLogicalNegateAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST ("templateLogicalNegateAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLogicalNegateAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLogicalNegateAST_2E_weak::objectCompare (const GGS_templateLogicalNegateAST_2E_weak & inOperand) const {
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

GGS_templateLogicalNegateAST_2E_weak::GGS_templateLogicalNegateAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST_2E_weak & GGS_templateLogicalNegateAST_2E_weak::operator = (const GGS_templateLogicalNegateAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST_2E_weak::GGS_templateLogicalNegateAST_2E_weak (const GGS_templateLogicalNegateAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST_2E_weak GGS_templateLogicalNegateAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateLogicalNegateAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST GGS_templateLogicalNegateAST_2E_weak::unwrappedValue (void) const {
  GGS_templateLogicalNegateAST result ;
  if (isValid ()) {
    const cPtr_templateLogicalNegateAST * p = (cPtr_templateLogicalNegateAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateLogicalNegateAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLogicalNegateAST GGS_templateLogicalNegateAST_2E_weak::bang_templateLogicalNegateAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateLogicalNegateAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateLogicalNegateAST) ;
      result = GGS_templateLogicalNegateAST ((cPtr_templateLogicalNegateAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateLogicalNegateAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLogicalNegateAST_2E_weak ("templateLogicalNegateAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLogicalNegateAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLogicalNegateAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST::objectCompare (const GGS_templateOptionAccessAST & inOperand) const {
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

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionName,
                  const GGS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GGS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                          const GGS_lstring & in_mOptionName,
                                          const GGS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mGetterName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateOptionAccessAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateOptionAccessAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateOptionAccessAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST_2E_weak::objectCompare (const GGS_templateOptionAccessAST_2E_weak & inOperand) const {
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

GGS_templateOptionAccessAST_2E_weak::GGS_templateOptionAccessAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST_2E_weak & GGS_templateOptionAccessAST_2E_weak::operator = (const GGS_templateOptionAccessAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST_2E_weak::GGS_templateOptionAccessAST_2E_weak (const GGS_templateOptionAccessAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST_2E_weak GGS_templateOptionAccessAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateOptionAccessAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST_2E_weak::unwrappedValue (void) const {
  GGS_templateOptionAccessAST result ;
  if (isValid ()) {
    const cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateOptionAccessAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST_2E_weak::bang_templateOptionAccessAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateOptionAccessAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateOptionAccessAST) ;
      result = GGS_templateOptionAccessAST ((cPtr_templateOptionAccessAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateOptionAccessAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST_2E_weak ("templateOptionAccessAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateOptionAccessAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST::objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const {
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

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                  const GGS_location & in_mEndOfReceiverExpression,
                  const GGS_lstring & in_mTypeName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeName, inCompiler) ;
  const GGS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                              const GGS_location & in_mEndOfReceiverExpression,
                                              const GGS_lstring & in_mTypeName,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                                    const GGS_lstring & in_mTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateTestDynamicClassAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateTestDynamicClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateTestDynamicClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST_2E_weak::objectCompare (const GGS_templateTestDynamicClassAST_2E_weak & inOperand) const {
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

GGS_templateTestDynamicClassAST_2E_weak::GGS_templateTestDynamicClassAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST_2E_weak & GGS_templateTestDynamicClassAST_2E_weak::operator = (const GGS_templateTestDynamicClassAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST_2E_weak::GGS_templateTestDynamicClassAST_2E_weak (const GGS_templateTestDynamicClassAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST_2E_weak GGS_templateTestDynamicClassAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST_2E_weak::unwrappedValue (void) const {
  GGS_templateTestDynamicClassAST result ;
  if (isValid ()) {
    const cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateTestDynamicClassAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST_2E_weak::bang_templateTestDynamicClassAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateTestDynamicClassAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateTestDynamicClassAST) ;
      result = GGS_templateTestDynamicClassAST ((cPtr_templateTestDynamicClassAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateTestDynamicClassAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2E_weak ("templateTestDynamicClassAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTestDynamicClassAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST::objectCompare (const GGS_templateFunctionCallAST & inOperand) const {
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

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                      const GGS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                                            const GGS_templateExpressionListAST & in_mExpressionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFunctionCallAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFunctionCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFunctionCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFunctionCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST_2E_weak::objectCompare (const GGS_templateFunctionCallAST_2E_weak & inOperand) const {
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

GGS_templateFunctionCallAST_2E_weak::GGS_templateFunctionCallAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST_2E_weak & GGS_templateFunctionCallAST_2E_weak::operator = (const GGS_templateFunctionCallAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST_2E_weak::GGS_templateFunctionCallAST_2E_weak (const GGS_templateFunctionCallAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST_2E_weak GGS_templateFunctionCallAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateFunctionCallAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST_2E_weak::unwrappedValue (void) const {
  GGS_templateFunctionCallAST result ;
  if (isValid ()) {
    const cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateFunctionCallAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST_2E_weak::bang_templateFunctionCallAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateFunctionCallAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateFunctionCallAST) ;
      result = GGS_templateFunctionCallAST ((cPtr_templateFunctionCallAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateFunctionCallAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST_2E_weak ("templateFunctionCallAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFunctionCallAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST::objectCompare (const GGS_templateVarInExpressionAST & inOperand) const {
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

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateVarInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateVarInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST_2E_weak::objectCompare (const GGS_templateVarInExpressionAST_2E_weak & inOperand) const {
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

GGS_templateVarInExpressionAST_2E_weak::GGS_templateVarInExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST_2E_weak & GGS_templateVarInExpressionAST_2E_weak::operator = (const GGS_templateVarInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST_2E_weak::GGS_templateVarInExpressionAST_2E_weak (const GGS_templateVarInExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST_2E_weak GGS_templateVarInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateVarInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateVarInExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateVarInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST_2E_weak::bang_templateVarInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateVarInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateVarInExpressionAST) ;
      result = GGS_templateVarInExpressionAST ((cPtr_templateVarInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateVarInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST_2E_weak ("templateVarInExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVarInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateAddOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateAddOperationAST::objectCompare (const GGS_templateAddOperationAST & inOperand) const {
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

GGS_templateAddOperationAST::GGS_templateAddOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateAddOperationAST GGS_templateAddOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateAddOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateAddOperationAST (inCompiler COMMA_THERE)) ;
  object->templateAddOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateAddOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateAddOperationAST::
templateAddOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST::GGS_templateAddOperationAST (const cPtr_templateAddOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateAddOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateAddOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateAddOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateAddOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateAddOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateAddOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateAddOperationAST::cPtr_templateAddOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateAddOperationAST::cPtr_templateAddOperationAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_templateAddOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

void cPtr_templateAddOperationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateAddOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateAddOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateAddOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateAddOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateAddOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAddOperationAST ("templateAddOperationAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateAddOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateAddOperationAST_2E_weak::objectCompare (const GGS_templateAddOperationAST_2E_weak & inOperand) const {
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

GGS_templateAddOperationAST_2E_weak::GGS_templateAddOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST_2E_weak & GGS_templateAddOperationAST_2E_weak::operator = (const GGS_templateAddOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST_2E_weak::GGS_templateAddOperationAST_2E_weak (const GGS_templateAddOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST_2E_weak GGS_templateAddOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateAddOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST GGS_templateAddOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateAddOperationAST result ;
  if (isValid ()) {
    const cPtr_templateAddOperationAST * p = (cPtr_templateAddOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateAddOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateAddOperationAST GGS_templateAddOperationAST_2E_weak::bang_templateAddOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateAddOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateAddOperationAST) ;
      result = GGS_templateAddOperationAST ((cPtr_templateAddOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateAddOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateAddOperationAST_2E_weak ("templateAddOperationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateAddOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateAddOperationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @templateSubOperationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateSubOperationAST::objectCompare (const GGS_templateSubOperationAST & inOperand) const {
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

GGS_templateSubOperationAST::GGS_templateSubOperationAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateSubOperationAST GGS_templateSubOperationAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mLeftExpression,
                  const GGS_templateExpressionAST & in_mRightExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateSubOperationAST * object = nullptr ;
  macroMyNew (object, cPtr_templateSubOperationAST (inCompiler COMMA_THERE)) ;
  object->templateSubOperationAST_init_21__21__21_ (in_mOperatorLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_templateSubOperationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateSubOperationAST::
templateSubOperationAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                          const GGS_templateExpressionAST & in_mLeftExpression,
                                          const GGS_templateExpressionAST & in_mRightExpression,
                                          Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST::GGS_templateSubOperationAST (const cPtr_templateSubOperationAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateSubOperationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateSubOperationAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateSubOperationAST::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateSubOperationAST::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateSubOperationAST) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateSubOperationAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateSubOperationAST::cPtr_templateSubOperationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateSubOperationAST::cPtr_templateSubOperationAST (const GGS_location & in_mOperatorLocation,
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

const GALGAS_TypeDescriptor * cPtr_templateSubOperationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

void cPtr_templateSubOperationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateSubOperationAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateSubOperationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateSubOperationAST (mProperty_mOperatorLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateSubOperationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateSubOperationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSubOperationAST ("templateSubOperationAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateSubOperationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateSubOperationAST_2E_weak::objectCompare (const GGS_templateSubOperationAST_2E_weak & inOperand) const {
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

GGS_templateSubOperationAST_2E_weak::GGS_templateSubOperationAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST_2E_weak & GGS_templateSubOperationAST_2E_weak::operator = (const GGS_templateSubOperationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST_2E_weak::GGS_templateSubOperationAST_2E_weak (const GGS_templateSubOperationAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST_2E_weak GGS_templateSubOperationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateSubOperationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST GGS_templateSubOperationAST_2E_weak::unwrappedValue (void) const {
  GGS_templateSubOperationAST result ;
  if (isValid ()) {
    const cPtr_templateSubOperationAST * p = (cPtr_templateSubOperationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateSubOperationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateSubOperationAST GGS_templateSubOperationAST_2E_weak::bang_templateSubOperationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateSubOperationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateSubOperationAST) ;
      result = GGS_templateSubOperationAST ((cPtr_templateSubOperationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateSubOperationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateSubOperationAST_2E_weak ("templateSubOperationAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateSubOperationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateSubOperationAST_2E_weak ;
}

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
//Class for element of '@templateInstructionIfBranchListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_templateInstructionIfBranchListAST : public CollectionElementPtr {
  public: GGS_templateInstructionIfBranchListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_templateInstructionIfBranchListAST (const GGS_templateExpressionAST & in_mExpression,
                                                                   const GGS__5B_templateInstructionAST_5D_ & in_mInstructionList
                                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionIfBranchListAST::CollectionElementPtr_templateInstructionIfBranchListAST (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                  const GGS__5B_templateInstructionAST_5D_ & in_mInstructionList
                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_templateInstructionIfBranchListAST::CollectionElementPtr_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_templateInstructionIfBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_templateInstructionIfBranchListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_templateInstructionIfBranchListAST (mObject.mProperty_mExpression, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @templateInstructionIfBranchListAST
//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST::GGS_templateInstructionIfBranchListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST::GGS_templateInstructionIfBranchListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_templateInstructionIfBranchListAST * p = (CollectionElementPtr_templateInstructionIfBranchListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_templateInstructionIfBranchListAST) ;
    const GGS_templateInstructionIfBranchListAST_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_mInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS__5B_templateInstructionAST_5D_ & in_mInstructionList
                                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_templateInstructionIfBranchListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_templateInstructionIfBranchListAST (in_mExpression, in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_templateInstructionIfBranchListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_templateInstructionIfBranchListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::plusPlusAssignOperation (const GGS_templateInstructionIfBranchListAST_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::class_func_listWithValue (const GGS_templateExpressionAST & inOperand0,
                                                                                                         const GGS__5B_templateInstructionAST_5D_ & inOperand1
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_templateInstructionIfBranchListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::addAssignOperation (const GGS_templateExpressionAST & inOperand0,
                                                                 const GGS__5B_templateInstructionAST_5D_ & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_append (const GGS_templateExpressionAST inOperand0,
                                                            const GGS__5B_templateInstructionAST_5D_ inOperand1,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_insertAtIndex (const GGS_templateExpressionAST inOperand0,
                                                                   const GGS__5B_templateInstructionAST_5D_ inOperand1,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_templateInstructionIfBranchListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_removeAtIndex (GGS_templateExpressionAST & outOperand0,
                                                                   GGS__5B_templateInstructionAST_5D_ & outOperand1,
                                                                   const GGS_uint inRemoveIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_popFirst (GGS_templateExpressionAST & outOperand0,
                                                              GGS__5B_templateInstructionAST_5D_ & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_popLast (GGS_templateExpressionAST & outOperand0,
                                                             GGS__5B_templateInstructionAST_5D_ & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::method_first (GGS_templateExpressionAST & outOperand0,
                                                           GGS__5B_templateInstructionAST_5D_ & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::method_last (GGS_templateExpressionAST & outOperand0,
                                                          GGS__5B_templateInstructionAST_5D_ & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::add_operation (const GGS_templateInstructionIfBranchListAST & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListAST result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionIfBranchListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::plusAssignOperation (const GGS_templateInstructionIfBranchListAST inList,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_setMExpressionAtIndex (GGS_templateExpressionAST inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionIfBranchListAST::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_templateExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST::setter_setMInstructionListAtIndex (GGS__5B_templateInstructionAST_5D_ inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionAST_5D_ GGS_templateInstructionIfBranchListAST::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_templateInstructionAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @templateInstructionIfBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_templateInstructionIfBranchListAST::DownEnumerator_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element DownEnumerator_templateInstructionIfBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST DownEnumerator_templateInstructionIfBranchListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionAST_5D_ DownEnumerator_templateInstructionIfBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @templateInstructionIfBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_templateInstructionIfBranchListAST::UpEnumerator_templateInstructionIfBranchListAST (const GGS_templateInstructionIfBranchListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element UpEnumerator_templateInstructionIfBranchListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST UpEnumerator_templateInstructionIfBranchListAST::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateInstructionAST_5D_ UpEnumerator_templateInstructionIfBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ("templateInstructionIfBranchListAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST ;
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
init_21__21_ (const GGS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
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
templateInstructionIfAST_init_21__21_ (const GGS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
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

GGS_templateInstructionIfBranchListAST GGS_templateInstructionIfAST::readProperty_mTemplateInstructionIfBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionIfBranchListAST () ;
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

cPtr_templateInstructionIfAST::cPtr_templateInstructionIfAST (const GGS_templateInstructionIfBranchListAST & in_mTemplateInstructionIfBranchList,
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
                                                                           const GGS_formalParameterListAST & in_mFormalArgumentListAST,
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
                                                                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
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
                                                  const GGS_formalParameterListAST & in_mFormalArgumentListAST,
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
                                                                                                      const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                      const GGS_bool & in_mGenerateStatic,
                                                                                                      const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
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
                                                                                                                                         const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                                         const GGS_bool & in_mGenerateStatic,
                                                                                                                                         const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
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

GGS_semanticInstructionListForGeneration GGS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
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
                                                                                  const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GGS_bool & in_mGenerateStatic,
                                                                                  const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
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
//Class for element of '@productionRuleListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_productionRuleListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_productionRuleListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                     const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                     const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                     const GGS_uint & in_mProductionIndex
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_productionRuleListForGrammarAnalysis::CollectionElementPtr_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                      const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                      const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                      const GGS_uint & in_mProductionIndex
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_productionRuleListForGrammarAnalysis::CollectionElementPtr_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLeftNonterminalSymbol, inElement.mProperty_mLeftNonterminalSymbolIndex, inElement.mProperty_mInstructionList, inElement.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_productionRuleListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_productionRuleListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_productionRuleListForGrammarAnalysis (mObject.mProperty_mLeftNonterminalSymbol, mObject.mProperty_mLeftNonterminalSymbolIndex, mObject.mProperty_mInstructionList, mObject.mProperty_mProductionIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @productionRuleListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_productionRuleListForGrammarAnalysis * p = (CollectionElementPtr_productionRuleListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_productionRuleListForGrammarAnalysis) ;
    const GGS_productionRuleListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mLeftNonterminalSymbol, p->mObject.mProperty_mLeftNonterminalSymbolIndex, p->mObject.mProperty_mInstructionList, p->mObject.mProperty_mProductionIndex) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                          const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                          const GGS_uint & in_mProductionIndex
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_productionRuleListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_productionRuleListForGrammarAnalysis (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_productionRuleListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLeftNonterminalSymbol:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mLeftNonterminalSymbolIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstructionList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductionIndex:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductionIndex.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::plusPlusAssignOperation (const GGS_productionRuleListForGrammarAnalysis_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                             const GGS_uint & inOperand1,
                                                                                                             const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                             const GGS_uint & inOperand3
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_productionRuleListForGrammarAnalysis_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_productionRuleListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::addAssignOperation (const GGS_lstring & inOperand0,
                                                                   const GGS_uint & inOperand1,
                                                                   const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                   const GGS_uint & inOperand3
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_productionRuleListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_append (const GGS_lstring inOperand0,
                                                              const GGS_uint inOperand1,
                                                              const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                              const GGS_uint inOperand3,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_productionRuleListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                     const GGS_uint inOperand1,
                                                                     const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                     const GGS_uint inOperand3,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_productionRuleListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                     GGS_uint & outOperand1,
                                                                     GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                     GGS_uint & outOperand3,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLeftNonterminalSymbol ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mInstructionList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductionIndex ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_popFirst (GGS_lstring & outOperand0,
                                                                GGS_uint & outOperand1,
                                                                GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                GGS_uint & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeftNonterminalSymbol ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductionIndex ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_popLast (GGS_lstring & outOperand0,
                                                               GGS_uint & outOperand1,
                                                               GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                               GGS_uint & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeftNonterminalSymbol ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductionIndex ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::method_first (GGS_lstring & outOperand0,
                                                             GGS_uint & outOperand1,
                                                             GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                             GGS_uint & outOperand3,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLeftNonterminalSymbol ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mInstructionList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductionIndex ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::method_last (GGS_lstring & outOperand0,
                                                            GGS_uint & outOperand1,
                                                            GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                            GGS_uint & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLeftNonterminalSymbol ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mInstructionList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductionIndex ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::plusAssignOperation (const GGS_productionRuleListForGrammarAnalysis inList,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLeftNonterminalSymbol = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLeftNonterminalSymbol ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolIndexAtIndex (GGS_uint inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLeftNonterminalSymbolIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLeftNonterminalSymbolIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMProductionIndexAtIndex (GGS_uint inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionIndex = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionIndex ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @productionRuleListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_productionRuleListForGrammarAnalysis::DownEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element DownEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis DownEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @productionRuleListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_productionRuleListForGrammarAnalysis::UpEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element UpEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis UpEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @productionRuleListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
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
::readSubscript__3F_ (const class GGS_string & inKey,
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
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
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
//@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inLeft,
                                                                                const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mNonTerminalIndex.objectCompare (inRight.mProperty_mNonTerminalIndex) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis::GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalSymbolSortedListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inElement
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_sortedListWithValue (const GGS_lstring & inOperand0,
                                                                                                                                     const GGS_uint & inOperand1,
                                                                                                                                     const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result = init (nullptr COMMA_THERE) ;
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::addAssignOperation (const GGS_lstring & inOperand0,
                                                                            const GGS_uint & inOperand1,
                                                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_insert (const GGS_lstring inOperand0,
                                                                       const GGS_uint inOperand1,
                                                                       const GGS_nonterminalSymbolLabelMapForGrammarAnalysis inOperand2,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inSortedList,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popSmallest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mNonterminalSymbolParametersMap ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popGreatest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mNonterminalSymbolParametersMap ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_smallest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray (0 COMMA_HERE).mProperty_mNonterminalSymbolParametersMap ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_greatest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' proc invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalSymbol ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mNonTerminalIndex ;
      outOperand2 = mSharedArray.lastObject (HERE).mProperty_mNonterminalSymbolParametersMap ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonterminalSymbolParametersMap ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mNonterminalSymbolParametersMap ;
}



//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolSortedListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
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
::readSubscript__3F_ (const class GGS_string & inKey,
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
                                                                        GGS_signatureForGrammarAnalysis inArgument0,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the rule label '%K' has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::method_searchKey (GGS_lstring inLKey,
                                                                        GGS_signatureForGrammarAnalysis & outArgument0,
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

GGS_signatureForGrammarAnalysis GGS_nonterminalSymbolLabelMapForGrammarAnalysis::getter_mFormalParametersListForKey (const GGS_string & inKey,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_signatureForGrammarAnalysis result ;
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

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis::setter_setMFormalParametersListForKey (GGS_signatureForGrammarAnalysis inValue,
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
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
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

GGS_signatureForGrammarAnalysis DownEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
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

GGS_signatureForGrammarAnalysis UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis::current_mFormalParametersList (LOCATION_ARGS) const {
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
//Class for element of '@branchListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_branchListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_branchListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_branchListForGrammarAnalysis::CollectionElementPtr_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_branchListForGrammarAnalysis::CollectionElementPtr_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_branchListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_branchListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_branchListForGrammarAnalysis (mObject.mProperty_mSyntaxInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_branchListForGrammarAnalysis * p = (CollectionElementPtr_branchListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_branchListForGrammarAnalysis) ;
    const GGS_branchListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mSyntaxInstructionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_branchListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_branchListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_branchListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxInstructionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxInstructionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::class_func_listWithValue (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element element (inOperand0) ;
  GGS_branchListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::addAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_append (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_insertAtIndex (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_branchListForGrammarAnalysis_2E_element newElement (inOperand0) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_removeAtIndex (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mSyntaxInstructionList ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_popFirst (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_popLast (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::method_first (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mSyntaxInstructionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::method_last (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mSyntaxInstructionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusAssignOperation (const GGS_branchListForGrammarAnalysis inList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxInstructionList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_branchListForGrammarAnalysis::DownEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element DownEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis DownEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_branchListForGrammarAnalysis::UpEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element UpEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis UpEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @branchListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
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
                  const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
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
                                                      const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
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

GGS_branchListForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
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
                                                                                    const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
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
                  const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
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
                                                      const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
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

GGS_branchListForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
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
                                                                                    const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
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
//Class for element of '@syntaxComponentListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_syntaxComponentListForGrammarAnalysis : public CollectionElementPtr {
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                      const GGS_lstring & in_mSyntaxComponentName
                                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxComponentListForGrammarAnalysis::CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                        const GGS_lstring & in_mSyntaxComponentName
                                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_syntaxComponentListForGrammarAnalysis::CollectionElementPtr_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProductionRulesList, inElement.mProperty_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_syntaxComponentListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_syntaxComponentListForGrammarAnalysis::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_syntaxComponentListForGrammarAnalysis (mObject.mProperty_mProductionRulesList, mObject.mProperty_mSyntaxComponentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_syntaxComponentListForGrammarAnalysis * p = (CollectionElementPtr_syntaxComponentListForGrammarAnalysis *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_syntaxComponentListForGrammarAnalysis) ;
    const GGS_syntaxComponentListForGrammarAnalysis_2E_element element (p->mObject.mProperty_mProductionRulesList, p->mObject.mProperty_mSyntaxComponentName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                           const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                           const GGS_lstring & in_mSyntaxComponentName
                                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_syntaxComponentListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_syntaxComponentListForGrammarAnalysis (in_mProductionRulesList, in_mSyntaxComponentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxComponentListForGrammarAnalysis::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_syntaxComponentListForGrammarAnalysis::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductionRulesList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductionRulesList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSyntaxComponentName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSyntaxComponentName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::class_func_listWithValue (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                               const GGS_lstring & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element element (inOperand0, inOperand1) ;
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::addAssignOperation (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                    const GGS_lstring & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_append (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                                      const GGS_lstring inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_syntaxComponentListForGrammarAnalysis_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                      GGS_lstring & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSyntaxComponentName ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_popFirst (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                 GGS_lstring & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_popLast (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                GGS_lstring & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::method_first (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSyntaxComponentName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::method_last (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProductionRulesList ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSyntaxComponentName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::subList (const int32_t inStart,
                                                                                              const int32_t inLength,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inList,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMProductionRulesListAtIndex (GGS_productionRuleListForGrammarAnalysis inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionRulesList = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductionRulesList ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSyntaxComponentName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxComponentListForGrammarAnalysis::DownEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element DownEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxComponentListForGrammarAnalysis::UpEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element UpEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSyntaxComponentName ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxComponentListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
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
::readSubscript__3F_ (const class GGS_string & inKey,
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
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
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
init_21__21__21__21_ (const GGS_lstring & in_typeName,
                      const GGS_lstring & in_classFuncName,
                      const GGS_actualOutputArgumentList & in_expressions,
                      const GGS_location & in_locationForOldStyleCollectionInitializerError,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionAST (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionAST_init_21__21__21__21_ (in_typeName, in_classFuncName, in_expressions, in_locationForOldStyleCollectionInitializerError, inCompiler) ;
  const GGS_classFuncExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::
classFuncExpressionAST_init_21__21__21__21_ (const GGS_lstring & in_typeName,
                                             const GGS_lstring & in_classFuncName,
                                             const GGS_actualOutputArgumentList & in_expressions,
                                             const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                             Compiler * /* inCompiler */) {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
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

GGS_actualOutputArgumentList GGS_classFuncExpressionAST::readProperty_expressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_expressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classFuncExpressionAST::readProperty_locationForOldStyleCollectionInitializerError (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_locationForOldStyleCollectionInitializerError ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_classFuncName,
                                                          const GGS_actualOutputArgumentList & in_expressions,
                                                          const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
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
  ioString.appendCString (", ") ;
  mProperty_locationForOldStyleCollectionInitializerError.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionAST (mProperty_typeName, mProperty_classFuncName, mProperty_expressions, mProperty_locationForOldStyleCollectionInitializerError, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_typeName.printNonNullClassInstanceProperties ("typeName") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_expressions.printNonNullClassInstanceProperties ("expressions") ;
    mProperty_locationForOldStyleCollectionInitializerError.printNonNullClassInstanceProperties ("locationForOldStyleCollectionInitializerError") ;
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
//Class for element of '@collectionValueElementList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_collectionValueElementList : public CollectionElementPtr {
  public: GGS_collectionValueElementList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_collectionValueElementList (const GGS_semanticExpressionAST & in_mExpression,
                                                           const GGS_location & in_location
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_collectionValueElementList (const GGS_collectionValueElementList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementList::CollectionElementPtr_collectionValueElementList (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                  const GGS_location & in_location
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExpression, in_location) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementList::CollectionElementPtr_collectionValueElementList (const GGS_collectionValueElementList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExpression, inElement.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_collectionValueElementList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_collectionValueElementList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_collectionValueElementList (mObject.mProperty_mExpression, mObject.mProperty_location COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @collectionValueElementList
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList::GGS_collectionValueElementList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList::GGS_collectionValueElementList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_collectionValueElementList * p = (CollectionElementPtr_collectionValueElementList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_collectionValueElementList) ;
    const GGS_collectionValueElementList_2E_element element (p->mObject.mProperty_mExpression, p->mObject.mProperty_location) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                const GGS_location & in_location
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_collectionValueElementList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_collectionValueElementList (in_mExpression, in_location COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_collectionValueElementList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_collectionValueElementList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExpression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("location:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_location.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::plusPlusAssignOperation (const GGS_collectionValueElementList_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::class_func_listWithValue (const GGS_semanticExpressionAST & inOperand0,
                                                                                         const GGS_location & inOperand1
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element element (inOperand0, inOperand1) ;
  GGS_collectionValueElementList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::addAssignOperation (const GGS_semanticExpressionAST & inOperand0,
                                                         const GGS_location & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_append (const GGS_semanticExpressionAST inOperand0,
                                                    const GGS_location inOperand1,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_insertAtIndex (const GGS_semanticExpressionAST inOperand0,
                                                           const GGS_location inOperand1,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_removeAtIndex (GGS_semanticExpressionAST & outOperand0,
                                                           GGS_location & outOperand1,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExpression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_location ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_popFirst (GGS_semanticExpressionAST & outOperand0,
                                                      GGS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_popLast (GGS_semanticExpressionAST & outOperand0,
                                                     GGS_location & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::method_first (GGS_semanticExpressionAST & outOperand0,
                                                   GGS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExpression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::method_last (GGS_semanticExpressionAST & outOperand0,
                                                  GGS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExpression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::add_operation (const GGS_collectionValueElementList & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueElementList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::plusAssignOperation (const GGS_collectionValueElementList inList,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_setMExpressionAtIndex (GGS_semanticExpressionAST inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_collectionValueElementList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExpression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList::setter_setLocationAtIndex (GGS_location inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_location = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_collectionValueElementList::getter_locationAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_location ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @collectionValueElementList
//--------------------------------------------------------------------------------------------------

DownEnumerator_collectionValueElementList::DownEnumerator_collectionValueElementList (const GGS_collectionValueElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element DownEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST DownEnumerator_collectionValueElementList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_collectionValueElementList::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @collectionValueElementList
//--------------------------------------------------------------------------------------------------

UpEnumerator_collectionValueElementList::UpEnumerator_collectionValueElementList (const GGS_collectionValueElementList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element UpEnumerator_collectionValueElementList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST UpEnumerator_collectionValueElementList::current_mExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_collectionValueElementList::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}




//--------------------------------------------------------------------------------------------------
//     @collectionValueElementList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList ("collectionValueElementList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList ;
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
                  const GGS_collectionValueElementList & in_mExpressionList,
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
                                     const GGS_collectionValueElementList & in_mExpressionList,
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

GGS_collectionValueElementList GGS_collectionValueAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementList () ;
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
                                                  const GGS_collectionValueElementList & in_mExpressionList,
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
//Class for element of '@collectionValueElementListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_collectionValueElementListForGeneration : public CollectionElementPtr {
  public: GGS_collectionValueElementListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_collectionValueElementListForGeneration (const GGS_semanticExpressionForGeneration & in_expression,
                                                                        const GGS_location & in_location
                                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual proc that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual proc that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementListForGeneration::CollectionElementPtr_collectionValueElementListForGeneration (const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                                            const GGS_location & in_location
                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_expression, in_location) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_collectionValueElementListForGeneration::CollectionElementPtr_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_expression, inElement.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_collectionValueElementListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_collectionValueElementListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_collectionValueElementListForGeneration (mObject.mProperty_expression, mObject.mProperty_location COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration::GGS_collectionValueElementListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration::GGS_collectionValueElementListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_collectionValueElementListForGeneration * p = (CollectionElementPtr_collectionValueElementListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_collectionValueElementListForGeneration) ;
    const GGS_collectionValueElementListForGeneration_2E_element element (p->mObject.mProperty_expression, p->mObject.mProperty_location) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                             const GGS_semanticExpressionForGeneration & in_expression,
                                                                             const GGS_location & in_location
                                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_collectionValueElementListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_collectionValueElementListForGeneration (in_expression, in_location COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_collectionValueElementListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_collectionValueElementListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("expression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_expression.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("location:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_location.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::plusPlusAssignOperation (const GGS_collectionValueElementListForGeneration_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::class_func_listWithValue (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                                                                   const GGS_location & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element element (inOperand0, inOperand1) ;
  GGS_collectionValueElementListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::addAssignOperation (const GGS_semanticExpressionForGeneration & inOperand0,
                                                                      const GGS_location & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_append (const GGS_semanticExpressionForGeneration inOperand0,
                                                                 const GGS_location inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_insertAtIndex (const GGS_semanticExpressionForGeneration inOperand0,
                                                                        const GGS_location inOperand1,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_collectionValueElementListForGeneration_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_removeAtIndex (GGS_semanticExpressionForGeneration & outOperand0,
                                                                        GGS_location & outOperand1,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_expression ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_location ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_popFirst (GGS_semanticExpressionForGeneration & outOperand0,
                                                                   GGS_location & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_expression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_popLast (GGS_semanticExpressionForGeneration & outOperand0,
                                                                  GGS_location & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_expression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::method_first (GGS_semanticExpressionForGeneration & outOperand0,
                                                                GGS_location & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_expression ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_location ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::method_last (GGS_semanticExpressionForGeneration & outOperand0,
                                                               GGS_location & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_expression ;
      outOperand1 = mArray.lastObject (HERE).mProperty_location ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::add_operation (const GGS_collectionValueElementListForGeneration & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_collectionValueElementListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_collectionValueElementListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::plusAssignOperation (const GGS_collectionValueElementListForGeneration inList,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_setExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_expression = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_collectionValueElementListForGeneration::getter_expressionAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_semanticExpressionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_expression ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementListForGeneration::setter_setLocationAtIndex (GGS_location inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_location = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_collectionValueElementListForGeneration::getter_locationAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_location ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_collectionValueElementListForGeneration::DownEnumerator_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element DownEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_collectionValueElementListForGeneration::current_expression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_collectionValueElementListForGeneration::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @collectionValueElementListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_collectionValueElementListForGeneration::UpEnumerator_collectionValueElementListForGeneration (const GGS_collectionValueElementListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration_2E_element UpEnumerator_collectionValueElementListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_collectionValueElementListForGeneration::current_expression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_collectionValueElementListForGeneration::current_location (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_location ;
}




//--------------------------------------------------------------------------------------------------
//     @collectionValueElementListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ("collectionValueElementListForGeneration",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementListForGeneration ;
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
//  Extension Getter '@actualOutputArgumentList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_actualOutputArgumentList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1662 (temp_0) ;
  while (enumerator_1662.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1662.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 32)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 32)) ;
    enumerator_1662.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@actualOutputArgumentList subscriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subscriptSignature (const GGS_actualOutputArgumentList & inObject,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1930 (temp_0) ;
  while (enumerator_1930.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_1930.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 41)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 41)) ;
    enumerator_1930.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GGS_actualOutputArgumentList inObject,
                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_2188 (temp_0) ;
  while (enumerator_2188.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2188.current (HERE).readProperty_mExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 49)) ;
    enumerator_2188.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionExpressionAST::objectCompare (const GGS_optionExpressionAST & inOperand) const {
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

GGS_optionExpressionAST::GGS_optionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionEntryName,
                  const GGS_lstring & in_mOptionGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_optionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_optionExpressionAST (inCompiler COMMA_THERE)) ;
  object->optionExpressionAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionEntryName, in_mOptionGetterName, inCompiler) ;
  const GGS_optionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::
optionExpressionAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                      const GGS_lstring & in_mOptionEntryName,
                                      const GGS_lstring & in_mOptionGetterName,
                                      Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST::GGS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GGS_lstring & in_mOptionComponentName,
                                                    const GGS_lstring & in_mOptionEntryName,
                                                    const GGS_lstring & in_mOptionGetterName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionExpressionAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
    mProperty_mOptionGetterName.printNonNullClassInstanceProperties ("mOptionGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionExpressionAST_2E_weak::objectCompare (const GGS_optionExpressionAST_2E_weak & inOperand) const {
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

GGS_optionExpressionAST_2E_weak::GGS_optionExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak & GGS_optionExpressionAST_2E_weak::operator = (const GGS_optionExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak::GGS_optionExpressionAST_2E_weak (const GGS_optionExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST_2E_weak GGS_optionExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_optionExpressionAST result ;
  if (isValid ()) {
    const cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST_2E_weak::bang_optionExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionExpressionAST) ;
      result = GGS_optionExpressionAST ((cPtr_optionExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST_2E_weak ("optionExpressionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionValueExpressionForGeneration_2E_weak::objectCompare (const GGS_optionValueExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionValueExpressionForGeneration_2E_weak::GGS_optionValueExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak & GGS_optionValueExpressionForGeneration_2E_weak::operator = (const GGS_optionValueExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak::GGS_optionValueExpressionForGeneration_2E_weak (const GGS_optionValueExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration_2E_weak GGS_optionValueExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionValueExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionValueExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionValueExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration_2E_weak::bang_optionValueExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionValueExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionValueExpressionForGeneration) ;
      result = GGS_optionValueExpressionForGeneration ((cPtr_optionValueExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionValueExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2E_weak ("optionValueExpressionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionValueExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCharExpressionForGeneration_2E_weak::objectCompare (const GGS_optionCharExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionCharExpressionForGeneration_2E_weak::GGS_optionCharExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak & GGS_optionCharExpressionForGeneration_2E_weak::operator = (const GGS_optionCharExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak::GGS_optionCharExpressionForGeneration_2E_weak (const GGS_optionCharExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration_2E_weak GGS_optionCharExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionCharExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionCharExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionCharExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration_2E_weak::bang_optionCharExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionCharExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionCharExpressionForGeneration) ;
      result = GGS_optionCharExpressionForGeneration ((cPtr_optionCharExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionCharExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2E_weak ("optionCharExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCharExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionStringExpressionForGeneration_2E_weak::objectCompare (const GGS_optionStringExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionStringExpressionForGeneration_2E_weak::GGS_optionStringExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak & GGS_optionStringExpressionForGeneration_2E_weak::operator = (const GGS_optionStringExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak::GGS_optionStringExpressionForGeneration_2E_weak (const GGS_optionStringExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration_2E_weak GGS_optionStringExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionStringExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionStringExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionStringExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration_2E_weak::bang_optionStringExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionStringExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionStringExpressionForGeneration) ;
      result = GGS_optionStringExpressionForGeneration ((cPtr_optionStringExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionStringExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2E_weak ("optionStringExpressionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionStringExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCommentExpressionForGeneration_2E_weak::objectCompare (const GGS_optionCommentExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_optionCommentExpressionForGeneration_2E_weak::GGS_optionCommentExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak & GGS_optionCommentExpressionForGeneration_2E_weak::operator = (const GGS_optionCommentExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak::GGS_optionCommentExpressionForGeneration_2E_weak (const GGS_optionCommentExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration_2E_weak GGS_optionCommentExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionCommentExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_optionCommentExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionCommentExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration_2E_weak::bang_optionCommentExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionCommentExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionCommentExpressionForGeneration) ;
      result = GGS_optionCommentExpressionForGeneration ((cPtr_optionCommentExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionCommentExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2E_weak ("optionCommentExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCommentExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration_2E_weak ;
}

