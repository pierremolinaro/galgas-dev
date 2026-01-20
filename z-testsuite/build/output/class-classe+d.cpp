#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+d.h"

//--------------------------------------------------------------------------------------------------
// @classeD reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeD::objectCompare (const GGS_classeD & inOperand) const {
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

GGS_classeD::GGS_classeD (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeD::GGS_classeD (const cPtr_classeD * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeD) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeD GGS_classeD::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_classeD result ;
  macroMyNew (result.mObjectPtr, cPtr_classeD (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeD::readProperty_x (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeD * p = (cPtr_classeD *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeD) ;
    return p->mProperty_x ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeD class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_classeD::cPtr_classeD (Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
  mProperty_x = GGS_uint (uint32_t (9U)) ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeD::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeD ;
}

void cPtr_classeD::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeD:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeD::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeD (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeD::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_x.printNonNullClassInstanceProperties ("x") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeD generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeD ("classeD",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeD::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeD ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeD::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeD (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeD GGS_classeD::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeD result ;
  const GGS_classeD * p = (const GGS_classeD *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeD *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeD", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

