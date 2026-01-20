#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+setter.h"

//--------------------------------------------------------------------------------------------------
// @TestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_TestExtensionSetter::objectCompare (const GGS_TestExtensionSetter & inOperand) const {
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

GGS_TestExtensionSetter::GGS_TestExtensionSetter (void) :
GGS_abstractTestExtensionSetter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_TestExtensionSetter GGS_TestExtensionSetter::
init_21__21_ (const GGS_uint & in_mInteger,
              const GGS_string & in_mString,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_TestExtensionSetter * object = nullptr ;
  macroMyNew (object, cPtr_TestExtensionSetter (inCompiler COMMA_THERE)) ;
  object->TestExtensionSetter_init_21__21_ (in_mInteger, in_mString, inCompiler) ;
  const GGS_TestExtensionSetter result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionSetter::
TestExtensionSetter_init_21__21_ (const GGS_uint & in_mInteger,
                                  const GGS_string & in_mString,
                                  Compiler * /* inCompiler */) {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_TestExtensionSetter::GGS_TestExtensionSetter (const cPtr_TestExtensionSetter * inSourcePtr) :
GGS_abstractTestExtensionSetter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_TestExtensionSetter) ;
}
//--------------------------------------------------------------------------------------------------

GGS_TestExtensionSetter GGS_TestExtensionSetter::class_func_new (const GGS_uint & in_mInteger,
                                                                 const GGS_string & in_mString,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_TestExtensionSetter result ;
  macroMyNew (result.mObjectPtr, cPtr_TestExtensionSetter (in_mInteger, in_mString,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_TestExtensionSetter::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_TestExtensionSetter * p = (cPtr_TestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_TestExtensionSetter) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_TestExtensionSetter::setProperty_mString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_TestExtensionSetter * p = (cPtr_TestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_TestExtensionSetter) ;
    p->mProperty_mString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @TestExtensionSetter class
//--------------------------------------------------------------------------------------------------

cPtr_TestExtensionSetter::cPtr_TestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractTestExtensionSetter (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_TestExtensionSetter::cPtr_TestExtensionSetter (const GGS_uint & in_mInteger,
                                                    const GGS_string & in_mString,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractTestExtensionSetter (in_mInteger, inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_TestExtensionSetter::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TestExtensionSetter ;
}

void cPtr_TestExtensionSetter::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@TestExtensionSetter:") ;
  mProperty_mInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_TestExtensionSetter::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_TestExtensionSetter (mProperty_mInteger, mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_TestExtensionSetter::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractTestExtensionSetter::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @TestExtensionSetter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_TestExtensionSetter ("TestExtensionSetter",
                                                                        & kTypeDescriptor_GALGAS_abstractTestExtensionSetter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_TestExtensionSetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TestExtensionSetter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_TestExtensionSetter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_TestExtensionSetter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_TestExtensionSetter GGS_TestExtensionSetter::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_TestExtensionSetter result ;
  const GGS_TestExtensionSetter * p = (const GGS_TestExtensionSetter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_TestExtensionSetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TestExtensionSetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

