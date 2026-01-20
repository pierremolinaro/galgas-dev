#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "optional-classe+h-3F.h"
#include "weak-reference-classe+h-2Eweak.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeH_2E_weak::objectCompare (const GGS_classeH_2E_weak & inOperand) const {
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

GGS_classeH_2E_weak::GGS_classeH_2E_weak (void) :
GGS_classeA_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak & GGS_classeH_2E_weak::operator = (const GGS_classeH & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak::GGS_classeH_2E_weak (const GGS_classeH & inSource) :
GGS_classeA_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak::GGS_classeH_2E_weak (const class GGS_classeH_3F_ & inSource) :
GGS_classeA_2E_weak () {
  if (inSource.isValid ()) {
    if (inSource.isNil ()) {
      macroMyNew (mProxyPtr, cPtr_weakReference_proxy (HERE)) ;
    }else if (inSource.isValuated ()) {
      const GGS_classeH v = inSource.unwrappedValue () ;
      acStrongPtr_class * ptr = (acStrongPtr_class *) v.ptr () ;
      if (ptr != nullptr) {
        cPtr_weakReference_proxy * proxy = ptr->getProxy () ;
        macroAssignSharedObject (mProxyPtr, proxy) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak GGS_classeH_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classeH_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH GGS_classeH_2E_weak::unwrappedValue (void) const {
  GGS_classeH result ;
  if (isValid ()) {
    const cPtr_classeH * p = (cPtr_classeH *) ptr () ;
    if (nullptr != p) {
      result = GGS_classeH (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH GGS_classeH_2E_weak::bang_classeH_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classeH result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classeH) ;
      result = GGS_classeH ((cPtr_classeH *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classeH.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeH_2E_weak ("classeH.weak",
                                                                    & kTypeDescriptor_GALGAS_classeA_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeH_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeH_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeH_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeH_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak GGS_classeH_2E_weak::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_classeH_2E_weak result ;
  const GGS_classeH_2E_weak * p = (const GGS_classeH_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeH_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeH.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

