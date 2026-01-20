#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+a.h"

//--------------------------------------------------------------------------------------------------
// @classeA reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeA::objectCompare (const GGS_classeA & inOperand) const {
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

GGS_classeA::GGS_classeA (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classeA GGS_classeA::
init_21_ (const GGS_uint & in_x,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_classeA * object = nullptr ;
  macroMyNew (object, cPtr_classeA (inCompiler COMMA_THERE)) ;
  object->classeA_init_21_ (in_x, inCompiler) ;
  const GGS_classeA result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classeA::
classeA_init_21_ (const GGS_uint & in_x,
                  Compiler * /* inCompiler */) {
  mProperty_x = in_x ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeA::GGS_classeA (const cPtr_classeA * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeA) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeA GGS_classeA::class_func_new (const GGS_uint & in_x,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeA result ;
  macroMyNew (result.mObjectPtr, cPtr_classeA (in_x,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeA::readProperty_x (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeA * p = (cPtr_classeA *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeA) ;
    return p->mProperty_x ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeA class
//--------------------------------------------------------------------------------------------------

cPtr_classeA::cPtr_classeA (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classeA::cPtr_classeA (const GGS_uint & in_x,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
  mProperty_x = in_x ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeA::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeA ;
}

void cPtr_classeA::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeA:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeA::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeA (mProperty_x, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeA::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_x.printNonNullClassInstanceProperties ("x") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeA generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeA ("classeA",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeA::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeA ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeA::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeA (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeA GGS_classeA::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeA result ;
  const GGS_classeA * p = (const GGS_classeA *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeA *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeA", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

