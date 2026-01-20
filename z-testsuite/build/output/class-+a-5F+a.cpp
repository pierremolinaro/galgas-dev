#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+a-5F+a.h"

//--------------------------------------------------------------------------------------------------
// @A_5F_A reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_A_5F_A::objectCompare (const GGS_A_5F_A & inOperand) const {
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

GGS_A_5F_A::GGS_A_5F_A (void) :
AC_GALGAS_reference_class () {
}


void cPtr_A_5F_A::
A_5F_A_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_A_5F_A::GGS_A_5F_A (const cPtr_A_5F_A * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_A_5F_A) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @A_A class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_A_5F_A::cPtr_A_5F_A (Compiler * inCompiler
                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_A_5F_A::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @A_A generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_A_5F_A ("A_A",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_A_5F_A::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_A_5F_A ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_A_5F_A::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_A_5F_A (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_A_5F_A GGS_A_5F_A::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_A_5F_A result ;
  const GGS_A_5F_A * p = (const GGS_A_5F_A *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_A_5F_A *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("A_A", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

