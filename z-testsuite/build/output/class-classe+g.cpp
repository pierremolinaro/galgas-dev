#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+g.h"

//--------------------------------------------------------------------------------------------------
// @classeG reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeG::objectCompare (const GGS_classeG & inOperand) const {
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

GGS_classeG::GGS_classeG (void) :
GGS_classeC () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classeG GGS_classeG::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_classeG * object = nullptr ;
  macroMyNew (object, cPtr_classeG (inCompiler COMMA_THERE)) ;
  object->classeG_init (inCompiler) ;
  const GGS_classeG result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classeG::
classeG_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classeG::GGS_classeG (const cPtr_classeG * inSourcePtr) :
GGS_classeC (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeG) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeG GGS_classeG::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_classeG result ;
  macroMyNew (result.mObjectPtr, cPtr_classeG (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeG::readProperty_y (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeG * p = (cPtr_classeG *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeG) ;
    return p->mProperty_y ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeG class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_classeG::cPtr_classeG (Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_classeC (inCompiler COMMA_THERE),
mProperty_y () {
  mProperty_y = GGS_uint (uint32_t (67U)) ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeG::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeG ;
}

void cPtr_classeG::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeG:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_y.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeG::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeG (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeG::printNonNullClassInstanceProperties (void) const {
    cPtr_classeC::printNonNullClassInstanceProperties () ;
    mProperty_y.printNonNullClassInstanceProperties ("y") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeG generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeG ("classeG",
                                                            & kTypeDescriptor_GALGAS_classeC) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeG::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeG ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeG::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeG (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeG GGS_classeG::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeG result ;
  const GGS_classeG * p = (const GGS_classeG *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeG *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeG", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

