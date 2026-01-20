#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-base+class+for+type+cast+in+setter+call.h"

//--------------------------------------------------------------------------------------------------
// @baseClassForTypeCastInSetterCall reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_baseClassForTypeCastInSetterCall::objectCompare (const GGS_baseClassForTypeCastInSetterCall & inOperand) const {
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

GGS_baseClassForTypeCastInSetterCall::GGS_baseClassForTypeCastInSetterCall (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_baseClassForTypeCastInSetterCall GGS_baseClassForTypeCastInSetterCall::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_baseClassForTypeCastInSetterCall * object = nullptr ;
  macroMyNew (object, cPtr_baseClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  object->baseClassForTypeCastInSetterCall_init (inCompiler) ;
  const GGS_baseClassForTypeCastInSetterCall result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_baseClassForTypeCastInSetterCall::
baseClassForTypeCastInSetterCall_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_baseClassForTypeCastInSetterCall::GGS_baseClassForTypeCastInSetterCall (const cPtr_baseClassForTypeCastInSetterCall * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_baseClassForTypeCastInSetterCall) ;
}
//--------------------------------------------------------------------------------------------------

GGS_baseClassForTypeCastInSetterCall GGS_baseClassForTypeCastInSetterCall::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_baseClassForTypeCastInSetterCall result ;
  macroMyNew (result.mObjectPtr, cPtr_baseClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @baseClassForTypeCastInSetterCall class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_baseClassForTypeCastInSetterCall::cPtr_baseClassForTypeCastInSetterCall (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_baseClassForTypeCastInSetterCall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseClassForTypeCastInSetterCall ;
}

void cPtr_baseClassForTypeCastInSetterCall::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@baseClassForTypeCastInSetterCall]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_baseClassForTypeCastInSetterCall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_baseClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_baseClassForTypeCastInSetterCall::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @baseClassForTypeCastInSetterCall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_baseClassForTypeCastInSetterCall ("baseClassForTypeCastInSetterCall",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_baseClassForTypeCastInSetterCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_baseClassForTypeCastInSetterCall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_baseClassForTypeCastInSetterCall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_baseClassForTypeCastInSetterCall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_baseClassForTypeCastInSetterCall GGS_baseClassForTypeCastInSetterCall::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_baseClassForTypeCastInSetterCall result ;
  const GGS_baseClassForTypeCastInSetterCall * p = (const GGS_baseClassForTypeCastInSetterCall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_baseClassForTypeCastInSetterCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("baseClassForTypeCastInSetterCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

