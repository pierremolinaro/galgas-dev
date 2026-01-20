#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "weak-reference-classe+f-2Eweak.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeF_2E_weak::objectCompare (const GGS_classeF_2E_weak & inOperand) const {
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

GGS_classeF_2E_weak::GGS_classeF_2E_weak (void) :
GGS_classeC_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeF_2E_weak & GGS_classeF_2E_weak::operator = (const GGS_classeF & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF_2E_weak::GGS_classeF_2E_weak (const GGS_classeF & inSource) :
GGS_classeC_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classeF_2E_weak GGS_classeF_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classeF_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF GGS_classeF_2E_weak::unwrappedValue (void) const {
  GGS_classeF result ;
  if (isValid ()) {
    const cPtr_classeF * p = (cPtr_classeF *) ptr () ;
    if (nullptr != p) {
      result = GGS_classeF (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF GGS_classeF_2E_weak::bang_classeF_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classeF result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classeF) ;
      result = GGS_classeF ((cPtr_classeF *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classeF.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeF_2E_weak ("classeF.weak",
                                                                    & kTypeDescriptor_GALGAS_classeC_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeF_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeF_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeF_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeF_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF_2E_weak GGS_classeF_2E_weak::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_classeF_2E_weak result ;
  const GGS_classeF_2E_weak * p = (const GGS_classeF_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeF_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeF.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

