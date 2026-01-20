#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-forward.h"

//--------------------------------------------------------------------------------------------------
// @forward reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forward::objectCompare (const GGS_forward & inOperand) const {
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

GGS_forward::GGS_forward (void) :
GGS_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forward GGS_forward::
init_21_ (const GGS_luint & in_mLength,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_forward * object = nullptr ;
  macroMyNew (object, cPtr_forward (inCompiler COMMA_THERE)) ;
  object->forward_init_21_ (in_mLength, inCompiler) ;
  const GGS_forward result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forward::
forward_init_21_ (const GGS_luint & in_mLength,
                  Compiler * /* inCompiler */) {
  mProperty_mLength = in_mLength ;
}

//--------------------------------------------------------------------------------------------------

GGS_forward::GGS_forward (const cPtr_forward * inSourcePtr) :
GGS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forward) ;
}
//--------------------------------------------------------------------------------------------------

GGS_forward GGS_forward::class_func_new (const GGS_luint & in_mLength,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_forward result ;
  macroMyNew (result.mObjectPtr, cPtr_forward (in_mLength,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_forward::readProperty_mLength (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_forward * p = (cPtr_forward *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forward) ;
    return p->mProperty_mLength ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forward class
//--------------------------------------------------------------------------------------------------

cPtr_forward::cPtr_forward (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE),
mProperty_mLength () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forward::cPtr_forward (const GGS_luint & in_mLength,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE),
mProperty_mLength () {
  mProperty_mLength = in_mLength ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forward::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forward ;
}

void cPtr_forward::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@forward:") ;
  mProperty_mLength.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_forward::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forward (mProperty_mLength, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forward::printNonNullClassInstanceProperties (void) const {
    cPtr_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mLength.printNonNullClassInstanceProperties ("mLength") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @forward generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forward ("forward",
                                                            & kTypeDescriptor_GALGAS_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forward::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forward ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forward::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forward (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forward GGS_forward::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_forward result ;
  const GGS_forward * p = (const GGS_forward *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forward *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forward", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

