#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-overriding+test+extension+setter.h"

//--------------------------------------------------------------------------------------------------
// @overridingTestExtensionSetter reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingTestExtensionSetter::objectCompare (const GGS_overridingTestExtensionSetter & inOperand) const {
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

GGS_overridingTestExtensionSetter::GGS_overridingTestExtensionSetter (void) :
GGS_abstractOverridingTestExtensionSetter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingTestExtensionSetter GGS_overridingTestExtensionSetter::
init_21__21__21__21_ (const GGS_uint & in_mInteger,
                      const GGS_string & in_mString,
                      const GGS_string & in_mOtherString,
                      const GGS_uint & in_mOtherInteger,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_overridingTestExtensionSetter * object = nullptr ;
  macroMyNew (object, cPtr_overridingTestExtensionSetter (inCompiler COMMA_THERE)) ;
  object->overridingTestExtensionSetter_init_21__21__21__21_ (in_mInteger, in_mString, in_mOtherString, in_mOtherInteger, inCompiler) ;
  const GGS_overridingTestExtensionSetter result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingTestExtensionSetter::
overridingTestExtensionSetter_init_21__21__21__21_ (const GGS_uint & in_mInteger,
                                                    const GGS_string & in_mString,
                                                    const GGS_string & in_mOtherString,
                                                    const GGS_uint & in_mOtherInteger,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
  mProperty_mOtherString = in_mOtherString ;
  mProperty_mOtherInteger = in_mOtherInteger ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingTestExtensionSetter::GGS_overridingTestExtensionSetter (const cPtr_overridingTestExtensionSetter * inSourcePtr) :
GGS_abstractOverridingTestExtensionSetter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingTestExtensionSetter) ;
}
//--------------------------------------------------------------------------------------------------

GGS_overridingTestExtensionSetter GGS_overridingTestExtensionSetter::class_func_new (const GGS_uint & in_mInteger,
                                                                                     const GGS_string & in_mString,
                                                                                     const GGS_string & in_mOtherString,
                                                                                     const GGS_uint & in_mOtherInteger,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_overridingTestExtensionSetter result ;
  macroMyNew (result.mObjectPtr, cPtr_overridingTestExtensionSetter (in_mInteger, in_mString, in_mOtherString, in_mOtherInteger,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_overridingTestExtensionSetter::readProperty_mOtherInteger (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_overridingTestExtensionSetter * p = (cPtr_overridingTestExtensionSetter *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingTestExtensionSetter) ;
    return p->mProperty_mOtherInteger ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingTestExtensionSetter class
//--------------------------------------------------------------------------------------------------

cPtr_overridingTestExtensionSetter::cPtr_overridingTestExtensionSetter (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractOverridingTestExtensionSetter (inCompiler COMMA_THERE),
mProperty_mOtherInteger () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingTestExtensionSetter::cPtr_overridingTestExtensionSetter (const GGS_uint & in_mInteger,
                                                                        const GGS_string & in_mString,
                                                                        const GGS_string & in_mOtherString,
                                                                        const GGS_uint & in_mOtherInteger,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractOverridingTestExtensionSetter (in_mInteger, in_mString, in_mOtherString, inCompiler COMMA_THERE),
mProperty_mOtherInteger () {
  mProperty_mInteger = in_mInteger ;
  mProperty_mString = in_mString ;
  mProperty_mOtherString = in_mOtherString ;
  mProperty_mOtherInteger = in_mOtherInteger ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingTestExtensionSetter::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingTestExtensionSetter ;
}

void cPtr_overridingTestExtensionSetter::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingTestExtensionSetter:") ;
  mProperty_mInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOtherString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOtherInteger.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_overridingTestExtensionSetter::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingTestExtensionSetter (mProperty_mInteger, mProperty_mString, mProperty_mOtherString, mProperty_mOtherInteger, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingTestExtensionSetter::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractOverridingTestExtensionSetter::printNonNullClassInstanceProperties () ;
    mProperty_mOtherInteger.printNonNullClassInstanceProperties ("mOtherInteger") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overridingTestExtensionSetter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingTestExtensionSetter ("overridingTestExtensionSetter",
                                                                                  & kTypeDescriptor_GALGAS_abstractOverridingTestExtensionSetter) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingTestExtensionSetter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingTestExtensionSetter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_overridingTestExtensionSetter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_overridingTestExtensionSetter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingTestExtensionSetter GGS_overridingTestExtensionSetter::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_overridingTestExtensionSetter result ;
  const GGS_overridingTestExtensionSetter * p = (const GGS_overridingTestExtensionSetter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_overridingTestExtensionSetter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("overridingTestExtensionSetter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

