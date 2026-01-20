#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "weak-reference-class+with+super+class+a+s+t-2Eweak.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classWithSuperClassAST_2E_weak::objectCompare (const GGS_classWithSuperClassAST_2E_weak & inOperand) const {
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

GGS_classWithSuperClassAST_2E_weak::GGS_classWithSuperClassAST_2E_weak (void) :
GGS_declarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST_2E_weak & GGS_classWithSuperClassAST_2E_weak::operator = (const GGS_classWithSuperClassAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST_2E_weak::GGS_classWithSuperClassAST_2E_weak (const GGS_classWithSuperClassAST & inSource) :
GGS_declarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST_2E_weak GGS_classWithSuperClassAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classWithSuperClassAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST GGS_classWithSuperClassAST_2E_weak::unwrappedValue (void) const {
  GGS_classWithSuperClassAST result ;
  if (isValid ()) {
    const cPtr_classWithSuperClassAST * p = (cPtr_classWithSuperClassAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_classWithSuperClassAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST GGS_classWithSuperClassAST_2E_weak::bang_classWithSuperClassAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classWithSuperClassAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classWithSuperClassAST) ;
      result = GGS_classWithSuperClassAST ((cPtr_classWithSuperClassAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classWithSuperClassAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classWithSuperClassAST_2E_weak ("classWithSuperClassAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_declarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classWithSuperClassAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classWithSuperClassAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classWithSuperClassAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classWithSuperClassAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST_2E_weak GGS_classWithSuperClassAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_classWithSuperClassAST_2E_weak result ;
  const GGS_classWithSuperClassAST_2E_weak * p = (const GGS_classWithSuperClassAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classWithSuperClassAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classWithSuperClassAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

