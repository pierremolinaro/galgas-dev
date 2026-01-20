#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-pen+down.h"

//--------------------------------------------------------------------------------------------------
// @penDown reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_penDown::objectCompare (const GGS_penDown & inOperand) const {
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

GGS_penDown::GGS_penDown (void) :
GGS_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_penDown GGS_penDown::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_penDown * object = nullptr ;
  macroMyNew (object, cPtr_penDown (inCompiler COMMA_THERE)) ;
  object->penDown_init (inCompiler) ;
  const GGS_penDown result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_penDown::
penDown_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_penDown::GGS_penDown (const cPtr_penDown * inSourcePtr) :
GGS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_penDown) ;
}
//--------------------------------------------------------------------------------------------------

GGS_penDown GGS_penDown::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_penDown result ;
  macroMyNew (result.mObjectPtr, cPtr_penDown (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @penDown class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_penDown::cPtr_penDown (Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_penDown::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_penDown ;
}

void cPtr_penDown::description (String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@penDown]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_penDown::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_penDown (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_penDown::printNonNullClassInstanceProperties (void) const {
    cPtr_instruction::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @penDown generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_penDown ("penDown",
                                                            & kTypeDescriptor_GALGAS_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_penDown::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_penDown ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_penDown::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_penDown (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_penDown GGS_penDown::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_penDown result ;
  const GGS_penDown * p = (const GGS_penDown *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_penDown *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("penDown", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

