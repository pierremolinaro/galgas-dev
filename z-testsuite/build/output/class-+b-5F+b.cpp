#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+b-5F+b.h"

//--------------------------------------------------------------------------------------------------
// @B_5F_B reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_B_5F_B::objectCompare (const GGS_B_5F_B & inOperand) const {
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

GGS_B_5F_B::GGS_B_5F_B (void) :
GGS_A_5F_A () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_B_5F_B GGS_B_5F_B::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_B_5F_B * object = nullptr ;
  macroMyNew (object, cPtr_B_5F_B (inCompiler COMMA_THERE)) ;
  object->B_5F_B_init (inCompiler) ;
  const GGS_B_5F_B result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_B_5F_B::
B_5F_B_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_B_5F_B::GGS_B_5F_B (const cPtr_B_5F_B * inSourcePtr) :
GGS_A_5F_A (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_B_5F_B) ;
}
//--------------------------------------------------------------------------------------------------

GGS_B_5F_B GGS_B_5F_B::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_B_5F_B result ;
  macroMyNew (result.mObjectPtr, cPtr_B_5F_B (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @B_B class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_B_5F_B::cPtr_B_5F_B (Compiler * inCompiler
                          COMMA_LOCATION_ARGS) :
cPtr_A_5F_A (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_B_5F_B::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_B_5F_B ;
}

void cPtr_B_5F_B::description (String & ioString,
                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@B_B]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_B_5F_B::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_B_5F_B (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_B_5F_B::printNonNullClassInstanceProperties (void) const {
    cPtr_A_5F_A::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @B_B generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_B_5F_B ("B_B",
                                                           & kTypeDescriptor_GALGAS_A_5F_A) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_B_5F_B::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_B_5F_B ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_B_5F_B::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_B_5F_B (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_B_5F_B GGS_B_5F_B::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_B_5F_B result ;
  const GGS_B_5F_B * p = (const GGS_B_5F_B *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_B_5F_B *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("B_B", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

