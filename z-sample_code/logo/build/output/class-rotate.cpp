#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-rotate.h"

//--------------------------------------------------------------------------------------------------
// @rotate reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_rotate::objectCompare (const GGS_rotate & inOperand) const {
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

GGS_rotate::GGS_rotate (void) :
GGS_instruction () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_rotate GGS_rotate::
init_21_ (const GGS_luint & in_mAngle,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_rotate * object = nullptr ;
  macroMyNew (object, cPtr_rotate (inCompiler COMMA_THERE)) ;
  object->rotate_init_21_ (in_mAngle, inCompiler) ;
  const GGS_rotate result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_rotate::
rotate_init_21_ (const GGS_luint & in_mAngle,
                 Compiler * /* inCompiler */) {
  mProperty_mAngle = in_mAngle ;
}

//--------------------------------------------------------------------------------------------------

GGS_rotate::GGS_rotate (const cPtr_rotate * inSourcePtr) :
GGS_instruction (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_rotate) ;
}
//--------------------------------------------------------------------------------------------------

GGS_rotate GGS_rotate::class_func_new (const GGS_luint & in_mAngle,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_rotate result ;
  macroMyNew (result.mObjectPtr, cPtr_rotate (in_mAngle,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint GGS_rotate::readProperty_mAngle (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_rotate * p = (cPtr_rotate *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_rotate) ;
    return p->mProperty_mAngle ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @rotate class
//--------------------------------------------------------------------------------------------------

cPtr_rotate::cPtr_rotate (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE),
mProperty_mAngle () {
}

//--------------------------------------------------------------------------------------------------

cPtr_rotate::cPtr_rotate (const GGS_luint & in_mAngle,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) :
cPtr_instruction (inCompiler COMMA_THERE),
mProperty_mAngle () {
  mProperty_mAngle = in_mAngle ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_rotate::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rotate ;
}

void cPtr_rotate::description (String & ioString,
                               const int32_t inIndentation) const {
  ioString.appendCString ("[@rotate:") ;
  mProperty_mAngle.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_rotate::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_rotate (mProperty_mAngle, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_rotate::printNonNullClassInstanceProperties (void) const {
    cPtr_instruction::printNonNullClassInstanceProperties () ;
    mProperty_mAngle.printNonNullClassInstanceProperties ("mAngle") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @rotate generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_rotate ("rotate",
                                                           & kTypeDescriptor_GALGAS_instruction) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_rotate::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rotate ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rotate::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rotate (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rotate GGS_rotate::extractObject (const GGS_object & inObject,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  GGS_rotate result ;
  const GGS_rotate * p = (const GGS_rotate *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rotate *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rotate", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

