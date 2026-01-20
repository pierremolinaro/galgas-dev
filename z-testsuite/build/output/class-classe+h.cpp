#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+h.h"

//--------------------------------------------------------------------------------------------------
// @classeH reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeH::objectCompare (const GGS_classeH & inOperand) const {
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

GGS_classeH::GGS_classeH (void) :
GGS_classeA () {
}

//--------------------------------------------------------------------------------------------------

GGS_classeH::GGS_classeH (const cPtr_classeH * inSourcePtr) :
GGS_classeA (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeH) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeH GGS_classeH::class_func_new (const GGS_uint & in_x,
                                         const GGS_uint & in_y,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeH result ;
  macroMyNew (result.mObjectPtr, cPtr_classeH (in_x, in_y,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeH::readProperty_y (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeH * p = (cPtr_classeH *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeH) ;
    return p->mProperty_y ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeH class
//--------------------------------------------------------------------------------------------------

cPtr_classeH::cPtr_classeH (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_classeA (inCompiler COMMA_THERE),
mProperty_y () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classeH::cPtr_classeH (const GGS_uint & in_x,
                            const GGS_uint & in_y,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_classeA (in_x, inCompiler COMMA_THERE),
mProperty_y () {
  mProperty_x = in_x ;
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeH::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeH ;
}

void cPtr_classeH::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeH:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_y.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeH::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeH (mProperty_x, mProperty_y, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeH::printNonNullClassInstanceProperties (void) const {
    cPtr_classeA::printNonNullClassInstanceProperties () ;
    mProperty_y.printNonNullClassInstanceProperties ("y") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeH generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeH ("classeH",
                                                            & kTypeDescriptor_GALGAS_classeA) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeH::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeH ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeH::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeH (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeH GGS_classeH::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeH result ;
  const GGS_classeH * p = (const GGS_classeH *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeH *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeH", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

