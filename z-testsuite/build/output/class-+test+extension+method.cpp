#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-+test+extension+method.h"

//--------------------------------------------------------------------------------------------------
// @TestExtensionMethod reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_TestExtensionMethod::objectCompare (const GGS_TestExtensionMethod & inOperand) const {
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

GGS_TestExtensionMethod::GGS_TestExtensionMethod (void) :
AC_GALGAS_reference_class () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_TestExtensionMethod GGS_TestExtensionMethod::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_TestExtensionMethod * object = nullptr ;
  macroMyNew (object, cPtr_TestExtensionMethod (inCompiler COMMA_THERE)) ;
  object->TestExtensionMethod_init (inCompiler) ;
  const GGS_TestExtensionMethod result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_TestExtensionMethod::
TestExtensionMethod_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_TestExtensionMethod::GGS_TestExtensionMethod (const cPtr_TestExtensionMethod * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_TestExtensionMethod) ;
}
//--------------------------------------------------------------------------------------------------

GGS_TestExtensionMethod GGS_TestExtensionMethod::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_TestExtensionMethod result ;
  macroMyNew (result.mObjectPtr, cPtr_TestExtensionMethod (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @TestExtensionMethod class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_TestExtensionMethod::cPtr_TestExtensionMethod (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_TestExtensionMethod::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TestExtensionMethod ;
}

void cPtr_TestExtensionMethod::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@TestExtensionMethod]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_TestExtensionMethod::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_TestExtensionMethod (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_TestExtensionMethod::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @TestExtensionMethod generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_TestExtensionMethod ("TestExtensionMethod",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_TestExtensionMethod::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_TestExtensionMethod ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_TestExtensionMethod::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_TestExtensionMethod (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_TestExtensionMethod GGS_TestExtensionMethod::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_TestExtensionMethod result ;
  const GGS_TestExtensionMethod * p = (const GGS_TestExtensionMethod *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_TestExtensionMethod *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("TestExtensionMethod", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

