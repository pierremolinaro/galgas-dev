#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-c+add.h"

//--------------------------------------------------------------------------------------------------
// @cAdd reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_cAdd::objectCompare (const GGS_cAdd & inOperand) const {
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

GGS_cAdd::GGS_cAdd (void) :
GGS_cExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_cAdd GGS_cAdd::
init_21__21_ (const GGS_cExpression & in_mLeftExpression,
              const GGS_cExpression & in_mRightExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_cAdd * object = nullptr ;
  macroMyNew (object, cPtr_cAdd (inCompiler COMMA_THERE)) ;
  object->cAdd_init_21__21_ (in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_cAdd result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_cAdd::
cAdd_init_21__21_ (const GGS_cExpression & in_mLeftExpression,
                   const GGS_cExpression & in_mRightExpression,
                   Compiler * /* inCompiler */) {
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_cAdd::GGS_cAdd (const cPtr_cAdd * inSourcePtr) :
GGS_cExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cAdd) ;
}
//--------------------------------------------------------------------------------------------------

GGS_cAdd GGS_cAdd::class_func_new (const GGS_cExpression & in_mLeftExpression,
                                   const GGS_cExpression & in_mRightExpression,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  GGS_cAdd result ;
  macroMyNew (result.mObjectPtr, cPtr_cAdd (in_mLeftExpression, in_mRightExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_cExpression GGS_cAdd::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_cExpression () ;
  }else{
    cPtr_cAdd * p = (cPtr_cAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cAdd) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_cExpression GGS_cAdd::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_cExpression () ;
  }else{
    cPtr_cAdd * p = (cPtr_cAdd *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cAdd) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @cAdd class
//--------------------------------------------------------------------------------------------------

cPtr_cAdd::cPtr_cAdd (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_cExpression (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_cAdd::cPtr_cAdd (const GGS_cExpression & in_mLeftExpression,
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

const GALGAS_TypeDescriptor * cPtr_cAdd::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cAdd ;
}

void cPtr_cAdd::description (String & ioString,
                             const int32_t inIndentation) const {
  ioString.appendCString ("[@cAdd:") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_cAdd::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_cAdd (mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_cAdd::printNonNullClassInstanceProperties (void) const {
    cPtr_cExpression::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @cAdd generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_cAdd ("cAdd",
                                                         & kTypeDescriptor_GALGAS_cExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_cAdd::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cAdd ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_cAdd::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_cAdd (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_cAdd GGS_cAdd::extractObject (const GGS_object & inObject,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  GGS_cAdd result ;
  const GGS_cAdd * p = (const GGS_cAdd *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_cAdd *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cAdd", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

