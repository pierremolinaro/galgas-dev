#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-pen+up.h"

//--------------------------------------------------------------------------------------------------
// @penUp reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_penUp::objectCompare (const GGS_penUp & inOperand) const {
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

GGS_penUp::GGS_penUp (void) :
GGS_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_penUp GGS_penUp::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_penUp * object = nullptr ;
  macroMyNew (object, cPtr_penUp (inCompiler COMMA_THERE)) ;
  object->penUp_init (inCompiler) ;
  const GGS_penUp result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_penUp::
penUp_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_penUp::GGS_penUp (const cPtr_penUp * inSourcePtr) :
GGS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_penUp) ;
}
//--------------------------------------------------------------------------------------------------

GGS_penUp GGS_penUp::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_penUp result ;
  macroMyNew (result.mObjectPtr, cPtr_penUp (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @penUp class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_penUp::cPtr_penUp (Compiler * inCompiler
                        COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_penUp::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_penUp ;
}

void cPtr_penUp::description (String & ioString,
                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@penUp]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_penUp::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_penUp (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_penUp::printNonNullClassInstanceProperties (void) const {
    cPtr_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @penUp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_penUp ("penUp",
                                                          & kTypeDescriptor_GALGAS_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_penUp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_penUp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_penUp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_penUp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_penUp GGS_penUp::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_penUp result ;
  const GGS_penUp * p = (const GGS_penUp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_penUp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("penUp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

