#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+f.h"

//--------------------------------------------------------------------------------------------------
// @classeF reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeF::objectCompare (const GGS_classeF & inOperand) const {
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

GGS_classeF::GGS_classeF (void) :
GGS_classeC () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classeF GGS_classeF::
init_21_ (const GGS_uint & in_y,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_classeF * object = nullptr ;
  macroMyNew (object, cPtr_classeF (inCompiler COMMA_THERE)) ;
  object->classeF_init_21_ (in_y, inCompiler) ;
  const GGS_classeF result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classeF::
classeF_init_21_ (const GGS_uint & in_y,
                  Compiler * /* inCompiler */) {
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF::GGS_classeF (const cPtr_classeF * inSourcePtr) :
GGS_classeC (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeF) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeF GGS_classeF::class_func_new (const GGS_uint & in_y,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeF result ;
  macroMyNew (result.mObjectPtr, cPtr_classeF (in_y,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeF::readProperty_y (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeF * p = (cPtr_classeF *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeF) ;
    return p->mProperty_y ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeF class
//--------------------------------------------------------------------------------------------------

cPtr_classeF::cPtr_classeF (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_classeC (inCompiler COMMA_THERE),
mProperty_y () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classeF::cPtr_classeF (const GGS_uint & in_y,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_classeC (inCompiler COMMA_THERE),
mProperty_y () {
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeF::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeF ;
}

void cPtr_classeF::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeF:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_y.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeF::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeF (mProperty_y, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeF::printNonNullClassInstanceProperties (void) const {
    cPtr_classeC::printNonNullClassInstanceProperties () ;
    mProperty_y.printNonNullClassInstanceProperties ("y") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeF generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeF ("classeF",
                                                            & kTypeDescriptor_GALGAS_classeC) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeF::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeF ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeF::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeF (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeF GGS_classeF::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeF result ;
  const GGS_classeF * p = (const GGS_classeF *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeF *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeF", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

