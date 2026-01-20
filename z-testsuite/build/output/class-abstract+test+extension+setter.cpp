#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-abstract+test+extension+setter.h"

//--------------------------------------------------------------------------------------------------
// @abstractTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractTestExtensionSetter::objectCompare (const GGS_abstractTestExtensionSetter & inOperand) const {
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

GGS_abstractTestExtensionSetter::GGS_abstractTestExtensionSetter (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractTestExtensionSetter::
abstractTestExtensionSetter_init_21_ (const GGS_uint & in_mInteger,
                                      Compiler * /* inCompiler */) {
  mProperty_mInteger = in_mInteger ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractTestExtensionSetter::GGS_abstractTestExtensionSetter (const cPtr_abstractTestExtensionSetter * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractTestExtensionSetter) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_abstractTestExtensionSetter::readProperty_mInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_abstractTestExtensionSetter * p = (cPtr_abstractTestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractTestExtensionSetter) ;
    return p->mProperty_mInteger ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_abstractTestExtensionSetter::setProperty_mInteger (const GGS_uint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractTestExtensionSetter * p = (cPtr_abstractTestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractTestExtensionSetter) ;
    p->mProperty_mInteger = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractTestExtensionSetter class
//--------------------------------------------------------------------------------------------------

cPtr_abstractTestExtensionSetter::cPtr_abstractTestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInteger () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractTestExtensionSetter::cPtr_abstractTestExtensionSetter (const GGS_uint & in_mInteger,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mInteger () {
  mProperty_mInteger = in_mInteger ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractTestExtensionSetter::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInteger.printNonNullClassInstanceProperties ("mInteger") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractTestExtensionSetter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractTestExtensionSetter ("abstractTestExtensionSetter",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractTestExtensionSetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractTestExtensionSetter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractTestExtensionSetter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractTestExtensionSetter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractTestExtensionSetter GGS_abstractTestExtensionSetter::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractTestExtensionSetter result ;
  const GGS_abstractTestExtensionSetter * p = (const GGS_abstractTestExtensionSetter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractTestExtensionSetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractTestExtensionSetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

