#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+b.h"

//--------------------------------------------------------------------------------------------------
// @classeB reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeB::objectCompare (const GGS_classeB & inOperand) const {
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

GGS_classeB::GGS_classeB (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeB::GGS_classeB (const cPtr_classeB * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeB) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeB GGS_classeB::class_func_new (const GGS_uint & in_x,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeB result ;
  macroMyNew (result.mObjectPtr, cPtr_classeB (in_x,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeB::readProperty_x (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeB * p = (cPtr_classeB *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeB) ;
    return p->mProperty_x ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeB class
//--------------------------------------------------------------------------------------------------

cPtr_classeB::cPtr_classeB (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classeB::cPtr_classeB (const GGS_uint & in_x,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
  mProperty_x = in_x ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeB::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeB ;
}

void cPtr_classeB::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeB:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeB::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeB (mProperty_x, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeB::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_x.printNonNullClassInstanceProperties ("x") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeB generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeB ("classeB",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeB::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeB ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeB::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeB (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeB GGS_classeB::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeB result ;
  const GGS_classeB * p = (const GGS_classeB *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeB *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeB", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

