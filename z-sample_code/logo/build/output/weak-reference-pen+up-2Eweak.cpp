#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "weak-reference-pen+up-2Eweak.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_penUp_2E_weak::objectCompare (const GGS_penUp_2E_weak & inOperand) const {
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

GGS_penUp_2E_weak::GGS_penUp_2E_weak (void) :
GGS_instruction_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_penUp_2E_weak & GGS_penUp_2E_weak::operator = (const GGS_penUp & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_penUp_2E_weak::GGS_penUp_2E_weak (const GGS_penUp & inSource) :
GGS_instruction_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_penUp_2E_weak GGS_penUp_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_penUp_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_penUp GGS_penUp_2E_weak::unwrappedValue (void) const {
  GGS_penUp result ;
  if (isValid ()) {
    const cPtr_penUp * p = (cPtr_penUp *) ptr () ;
    if (nullptr != p) {
      result = GGS_penUp (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_penUp GGS_penUp_2E_weak::bang_penUp_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_penUp result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_penUp) ;
      result = GGS_penUp ((cPtr_penUp *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @penUp.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_penUp_2E_weak ("penUp.weak",
                                                                  & kTypeDescriptor_GALGAS_instruction_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_penUp_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_penUp_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_penUp_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_penUp_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_penUp_2E_weak GGS_penUp_2E_weak::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_penUp_2E_weak result ;
  const GGS_penUp_2E_weak * p = (const GGS_penUp_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_penUp_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("penUp.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

