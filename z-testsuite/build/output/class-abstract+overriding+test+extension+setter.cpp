#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-abstract+overriding+test+extension+setter.h"

//--------------------------------------------------------------------------------------------------
// @abstractOverridingTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractOverridingTestExtensionSetter::objectCompare (const GGS_abstractOverridingTestExtensionSetter & inOperand) const {
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

GGS_abstractOverridingTestExtensionSetter::GGS_abstractOverridingTestExtensionSetter (void) :
GGS_TestExtensionSetter () {
}


void cPtr_abstractOverridingTestExtensionSetter::
abstractOverridingTestExtensionSetter_init_21__21__21_ (const GGS_uint & in_mInteger,
                                                        const GGS_string & in_mString,
                                                        const GGS_string & in_mOtherString,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
  mProperty_mOtherString = in_mOtherString ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractOverridingTestExtensionSetter::GGS_abstractOverridingTestExtensionSetter (const cPtr_abstractOverridingTestExtensionSetter * inSourcePtr) :
GGS_TestExtensionSetter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractOverridingTestExtensionSetter) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_abstractOverridingTestExtensionSetter::readProperty_mOtherString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_abstractOverridingTestExtensionSetter * p = (cPtr_abstractOverridingTestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractOverridingTestExtensionSetter) ;
    return p->mProperty_mOtherString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractOverridingTestExtensionSetter class
//--------------------------------------------------------------------------------------------------

cPtr_abstractOverridingTestExtensionSetter::cPtr_abstractOverridingTestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_TestExtensionSetter (inCompiler COMMA_THERE),
mProperty_mOtherString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractOverridingTestExtensionSetter::cPtr_abstractOverridingTestExtensionSetter (const GGS_uint & in_mInteger,
                                                                                        const GGS_string & in_mString,
                                                                                        const GGS_string & in_mOtherString,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_TestExtensionSetter (in_mInteger, in_mString, inCompiler COMMA_THERE),
mProperty_mOtherString () {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
  mProperty_mOtherString = in_mOtherString ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractOverridingTestExtensionSetter::printNonNullClassInstanceProperties (void) const {
    cPtr_TestExtensionSetter::printNonNullClassInstanceProperties () ;
    mProperty_mOtherString.printNonNullClassInstanceProperties ("mOtherString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractOverridingTestExtensionSetter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractOverridingTestExtensionSetter ("abstractOverridingTestExtensionSetter",
                                                                                          & kTypeDescriptor_GALGAS_TestExtensionSetter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractOverridingTestExtensionSetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractOverridingTestExtensionSetter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractOverridingTestExtensionSetter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractOverridingTestExtensionSetter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractOverridingTestExtensionSetter GGS_abstractOverridingTestExtensionSetter::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractOverridingTestExtensionSetter result ;
  const GGS_abstractOverridingTestExtensionSetter * p = (const GGS_abstractOverridingTestExtensionSetter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractOverridingTestExtensionSetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractOverridingTestExtensionSetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

