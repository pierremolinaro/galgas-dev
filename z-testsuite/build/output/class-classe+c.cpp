#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+c.h"

//--------------------------------------------------------------------------------------------------
// @classeC reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeC::objectCompare (const GGS_classeC & inOperand) const {
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

GGS_classeC::GGS_classeC (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classeC GGS_classeC::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_classeC * object = nullptr ;
  macroMyNew (object, cPtr_classeC (inCompiler COMMA_THERE)) ;
  object->classeC_init (inCompiler) ;
  const GGS_classeC result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classeC::
classeC_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classeC::GGS_classeC (const cPtr_classeC * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeC) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeC GGS_classeC::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_classeC result ;
  macroMyNew (result.mObjectPtr, cPtr_classeC (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeC::readProperty_x (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeC * p = (cPtr_classeC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeC) ;
    return p->mProperty_x ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classeC::setProperty_x (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_classeC * p = (cPtr_classeC *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeC) ;
    p->mProperty_x = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeC class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_classeC::cPtr_classeC (Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_x () {
  mProperty_x = GGS_uint (uint32_t (7U)) ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeC::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeC ;
}

void cPtr_classeC::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeC:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeC::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeC (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeC::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_x.printNonNullClassInstanceProperties ("x") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeC generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeC ("classeC",
                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeC::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeC ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeC::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeC (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeC GGS_classeC::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeC result ;
  const GGS_classeC * p = (const GGS_classeC *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeC *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeC", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

