#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+i.h"

//--------------------------------------------------------------------------------------------------
// @classeI reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeI::objectCompare (const GGS_classeI & inOperand) const {
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

GGS_classeI::GGS_classeI (void) :
GGS_classeC () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeI::GGS_classeI (const cPtr_classeI * inSourcePtr) :
GGS_classeC (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeI) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeI GGS_classeI::class_func_new (const GGS_uint & in_y,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeI result ;
  macroMyNew (result.mObjectPtr, cPtr_classeI (in_y,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeI::readProperty_y (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeI * p = (cPtr_classeI *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeI) ;
    return p->mProperty_y ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_classeH_2E_weak GGS_classeI::readProperty_z (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_classeH_2E_weak () ;
  }else{
    cPtr_classeI * p = (cPtr_classeI *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeI) ;
    return p->mProperty_z ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classeI::setProperty_z (const GGS_classeH_2E_weak & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_classeI * p = (cPtr_classeI *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeI) ;
    p->mProperty_z = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeI class
//--------------------------------------------------------------------------------------------------

cPtr_classeI::cPtr_classeI (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_classeC (inCompiler COMMA_THERE),
mProperty_y (),
mProperty_z () {
  mProperty_z = GGS_classeH_2E_weak::init_nil () ;
}

//--------------------------------------------------------------------------------------------------

cPtr_classeI::cPtr_classeI (const GGS_uint & in_y,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_classeC (inCompiler COMMA_THERE),
mProperty_y (),
mProperty_z () {
  mProperty_z = GGS_classeH_2E_weak::init_nil () ;
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeI::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeI ;
}

void cPtr_classeI::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeI:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_y.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_z.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeI::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeI (mProperty_y, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeI::printNonNullClassInstanceProperties (void) const {
    cPtr_classeC::printNonNullClassInstanceProperties () ;
    mProperty_y.printNonNullClassInstanceProperties ("y") ;
    mProperty_z.printNonNullClassInstanceProperties ("z") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeI generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeI ("classeI",
                                                            & kTypeDescriptor_GALGAS_classeC) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeI::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeI ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeI::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeI (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeI GGS_classeI::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeI result ;
  const GGS_classeI * p = (const GGS_classeI *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeI *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeI", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

