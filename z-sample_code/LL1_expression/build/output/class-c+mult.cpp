#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-c+mult.h"

//--------------------------------------------------------------------------------------------------
// @cMult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_cMult::objectCompare (const GGS_cMult & inOperand) const {
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

GGS_cMult::GGS_cMult (void) :
GGS_cExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_cMult GGS_cMult::
init_21__21_ (const GGS_cExpression & in_mLeftExpression,
              const GGS_cExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_cMult * object = nullptr ;
  macroMyNew (object, cPtr_cMult (inCompiler COMMA_THERE)) ;
  object->cMult_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_cMult result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_cMult::
cMult_init_21__21_ (const GGS_cExpression & in_mLeftExpression,
                    const GGS_cExpression & in_mRightExpression,
                    Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_cMult::GGS_cMult (const cPtr_cMult * inSourcePtr) :
GGS_cExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cMult) ;
}
//--------------------------------------------------------------------------------------------------

GGS_cMult GGS_cMult::class_func_new (const GGS_cExpression & in_mLeftExpression,
                                     const GGS_cExpression & in_mRightExpression,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  GGS_cMult result ;
  macroMyNew (result.mObjectPtr, cPtr_cMult (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_cExpression GGS_cMult::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_cExpression () ;
  }else{
    cPtr_cMult * p = (cPtr_cMult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cMult) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_cExpression GGS_cMult::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_cExpression () ;
  }else{
    cPtr_cMult * p = (cPtr_cMult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cMult) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @cMult class
//--------------------------------------------------------------------------------------------------

cPtr_cMult::cPtr_cMult (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_cExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_cMult::cPtr_cMult (const GGS_cExpression & in_mLeftExpression,
                        const GGS_cExpression & in_mRightExpression,
                        Compiler * inCompiler
                        COMMA_LOCATION_ARGS) :
cPtr_cExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_cMult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cMult ;
}

void cPtr_cMult::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("[@cMult:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_cMult::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_cMult (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_cMult::printNonNullClassInstanceProperties (void) const {
    cPtr_cExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @cMult generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_cMult ("cMult",
                                                          & kTypeDescriptor_GALGAS_cExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_cMult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cMult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_cMult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_cMult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_cMult GGS_cMult::extractObject (const GGS_object & inObject,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
  GGS_cMult result ;
  const GGS_cMult * p = (const GGS_cMult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_cMult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cMult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

