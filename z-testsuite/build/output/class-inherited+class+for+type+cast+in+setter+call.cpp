#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-inherited+class+for+type+cast+in+setter+call.h"

//--------------------------------------------------------------------------------------------------
// @inheritedClassForTypeCastInSetterCall reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_inheritedClassForTypeCastInSetterCall::objectCompare (const GGS_inheritedClassForTypeCastInSetterCall & inOperand) const {
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

GGS_inheritedClassForTypeCastInSetterCall::GGS_inheritedClassForTypeCastInSetterCall (void) :
GGS_baseClassForTypeCastInSetterCall () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_inheritedClassForTypeCastInSetterCall GGS_inheritedClassForTypeCastInSetterCall::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_inheritedClassForTypeCastInSetterCall * object = nullptr ;
  macroMyNew (object, cPtr_inheritedClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  object->inheritedClassForTypeCastInSetterCall_init (inCompiler) ;
  const GGS_inheritedClassForTypeCastInSetterCall result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_inheritedClassForTypeCastInSetterCall::
inheritedClassForTypeCastInSetterCall_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_inheritedClassForTypeCastInSetterCall::GGS_inheritedClassForTypeCastInSetterCall (const cPtr_inheritedClassForTypeCastInSetterCall * inSourcePtr) :
GGS_baseClassForTypeCastInSetterCall (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inheritedClassForTypeCastInSetterCall) ;
}
//--------------------------------------------------------------------------------------------------

GGS_inheritedClassForTypeCastInSetterCall GGS_inheritedClassForTypeCastInSetterCall::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_inheritedClassForTypeCastInSetterCall result ;
  macroMyNew (result.mObjectPtr, cPtr_inheritedClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inheritedClassForTypeCastInSetterCall class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_inheritedClassForTypeCastInSetterCall::cPtr_inheritedClassForTypeCastInSetterCall (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_baseClassForTypeCastInSetterCall (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_inheritedClassForTypeCastInSetterCall::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inheritedClassForTypeCastInSetterCall ;
}

void cPtr_inheritedClassForTypeCastInSetterCall::description (String & ioString,
                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@inheritedClassForTypeCastInSetterCall]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inheritedClassForTypeCastInSetterCall::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inheritedClassForTypeCastInSetterCall (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inheritedClassForTypeCastInSetterCall::printNonNullClassInstanceProperties (void) const {
    cPtr_baseClassForTypeCastInSetterCall::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @inheritedClassForTypeCastInSetterCall generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_inheritedClassForTypeCastInSetterCall ("inheritedClassForTypeCastInSetterCall",
                                                                                          & kTypeDescriptor_GALGAS_baseClassForTypeCastInSetterCall) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_inheritedClassForTypeCastInSetterCall::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inheritedClassForTypeCastInSetterCall ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_inheritedClassForTypeCastInSetterCall::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_inheritedClassForTypeCastInSetterCall (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_inheritedClassForTypeCastInSetterCall GGS_inheritedClassForTypeCastInSetterCall::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_inheritedClassForTypeCastInSetterCall result ;
  const GGS_inheritedClassForTypeCastInSetterCall * p = (const GGS_inheritedClassForTypeCastInSetterCall *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_inheritedClassForTypeCastInSetterCall *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inheritedClassForTypeCastInSetterCall", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

