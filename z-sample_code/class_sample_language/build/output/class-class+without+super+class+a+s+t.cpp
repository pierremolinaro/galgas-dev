#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+without+super+class+a+s+t.h"

//--------------------------------------------------------------------------------------------------
// @classWithoutSuperClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classWithoutSuperClassAST::objectCompare (const GGS_classWithoutSuperClassAST & inOperand) const {
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

GGS_classWithoutSuperClassAST::GGS_classWithoutSuperClassAST (void) :
GGS_declarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classWithoutSuperClassAST GGS_classWithoutSuperClassAST::
init_21_ (const GGS_lstring & in_mClassName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_classWithoutSuperClassAST * object = nullptr ;
  macroMyNew (object, cPtr_classWithoutSuperClassAST (inCompiler COMMA_THERE)) ;
  object->classWithoutSuperClassAST_init_21_ (in_mClassName, inCompiler) ;
  const GGS_classWithoutSuperClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classWithoutSuperClassAST::
classWithoutSuperClassAST_init_21_ (const GGS_lstring & in_mClassName,
                                    Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithoutSuperClassAST::GGS_classWithoutSuperClassAST (const cPtr_classWithoutSuperClassAST * inSourcePtr) :
GGS_declarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classWithoutSuperClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classWithoutSuperClassAST GGS_classWithoutSuperClassAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  GGS_classWithoutSuperClassAST result ;
  macroMyNew (result.mObjectPtr, cPtr_classWithoutSuperClassAST (in_mClassName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classWithoutSuperClassAST::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classWithoutSuperClassAST * p = (cPtr_classWithoutSuperClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classWithoutSuperClassAST) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classWithoutSuperClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_classWithoutSuperClassAST::cPtr_classWithoutSuperClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_declarationAST (inCompiler COMMA_THERE),
mProperty_mClassName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classWithoutSuperClassAST::cPtr_classWithoutSuperClassAST (const GGS_lstring & in_mClassName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_declarationAST (inCompiler COMMA_THERE),
mProperty_mClassName () {
  mProperty_mClassName = in_mClassName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classWithoutSuperClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classWithoutSuperClassAST ;
}

void cPtr_classWithoutSuperClassAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@classWithoutSuperClassAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classWithoutSuperClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classWithoutSuperClassAST (mProperty_mClassName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classWithoutSuperClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_declarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classWithoutSuperClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classWithoutSuperClassAST ("classWithoutSuperClassAST",
                                                                              & kTypeDescriptor_GALGAS_declarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classWithoutSuperClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classWithoutSuperClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classWithoutSuperClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classWithoutSuperClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithoutSuperClassAST GGS_classWithoutSuperClassAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classWithoutSuperClassAST result ;
  const GGS_classWithoutSuperClassAST * p = (const GGS_classWithoutSuperClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classWithoutSuperClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classWithoutSuperClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

