#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-classe+e.h"

//--------------------------------------------------------------------------------------------------
// @classeE reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classeE::objectCompare (const GGS_classeE & inOperand) const {
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

GGS_classeE::GGS_classeE (void) :
GGS_classeA () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classeE GGS_classeE::
init_21__21_ (const GGS_uint & in_x,
              const GGS_uint & in_y,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_classeE * object = nullptr ;
  macroMyNew (object, cPtr_classeE (inCompiler COMMA_THERE)) ;
  object->classeE_init_21__21_ (in_x, in_y, inCompiler) ;
  const GGS_classeE result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classeE::
classeE_init_21__21_ (const GGS_uint & in_x,
                      const GGS_uint & in_y,
                      Compiler * /* inCompiler */) {
  mProperty_x = in_x ;
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeE::GGS_classeE (const cPtr_classeE * inSourcePtr) :
GGS_classeA (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classeE) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classeE GGS_classeE::class_func_new (const GGS_uint & in_x,
                                         const GGS_uint & in_y,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_classeE result ;
  macroMyNew (result.mObjectPtr, cPtr_classeE (in_x, in_y,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classeE::readProperty_y (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_classeE * p = (cPtr_classeE *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classeE) ;
    return p->mProperty_y ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classeE class
//--------------------------------------------------------------------------------------------------

cPtr_classeE::cPtr_classeE (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_classeA (inCompiler COMMA_THERE),
mProperty_y () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classeE::cPtr_classeE (const GGS_uint & in_x,
                            const GGS_uint & in_y,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) :
cPtr_classeA (in_x, inCompiler COMMA_THERE),
mProperty_y () {
  mProperty_x = in_x ;
  mProperty_y = in_y ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classeE::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeE ;
}

void cPtr_classeE::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("[@classeE:") ;
  mProperty_x.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_y.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classeE::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classeE (mProperty_x, mProperty_y, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classeE::printNonNullClassInstanceProperties (void) const {
    cPtr_classeA::printNonNullClassInstanceProperties () ;
    mProperty_y.printNonNullClassInstanceProperties ("y") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classeE generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classeE ("classeE",
                                                            & kTypeDescriptor_GALGAS_classeA) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classeE::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classeE ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classeE::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classeE (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classeE GGS_classeE::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_classeE result ;
  const GGS_classeE * p = (const GGS_classeE *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classeE *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classeE", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

