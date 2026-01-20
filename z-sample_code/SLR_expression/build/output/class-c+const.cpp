#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-c+const.h"

//--------------------------------------------------------------------------------------------------
// @cConst reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_cConst::objectCompare (const GGS_cConst & inOperand) const {
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

GGS_cConst::GGS_cConst (void) :
GGS_cExpression () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_cConst GGS_cConst::
init_21_ (const GGS_luint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_cConst * object = nullptr ;
  macroMyNew (object, cPtr_cConst (inCompiler COMMA_THERE)) ;
  object->cConst_init_21_ (in_mValue, inCompiler) ;
  const GGS_cConst result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_cConst::
cConst_init_21_ (const GGS_luint & in_mValue,
                 Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_cConst::GGS_cConst (const cPtr_cConst * inSourcePtr) :
GGS_cExpression (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_cConst) ;
}
//--------------------------------------------------------------------------------------------------

GGS_cConst GGS_cConst::class_func_new (const GGS_luint & in_mValue,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_cConst result ;
  macroMyNew (result.mObjectPtr, cPtr_cConst (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_cConst::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_cConst * p = (cPtr_cConst *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_cConst) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @cConst class
//--------------------------------------------------------------------------------------------------

cPtr_cConst::cPtr_cConst (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_cExpression (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_cConst::cPtr_cConst (const GGS_luint & in_mValue,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) :
cPtr_cExpression (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_cConst::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cConst ;
}

void cPtr_cConst::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("[@cConst:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_cConst::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_cConst (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_cConst::printNonNullClassInstanceProperties (void) const {
    cPtr_cExpression::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @cConst generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_cConst ("cConst",
                                                           & kTypeDescriptor_GALGAS_cExpression) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_cConst::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cConst ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_cConst::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_cConst (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_cConst GGS_cConst::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_cConst result ;
  const GGS_cConst * p = (const GGS_cConst *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_cConst *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cConst", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

