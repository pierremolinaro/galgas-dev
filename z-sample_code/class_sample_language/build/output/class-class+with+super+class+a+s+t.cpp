#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "class-class+with+super+class+a+s+t.h"

//--------------------------------------------------------------------------------------------------
// @classWithSuperClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classWithSuperClassAST::objectCompare (const GGS_classWithSuperClassAST & inOperand) const {
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

GGS_classWithSuperClassAST::GGS_classWithSuperClassAST (void) :
GGS_declarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classWithSuperClassAST GGS_classWithSuperClassAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_lstring & in_mSuperClassName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_classWithSuperClassAST * object = nullptr ;
  macroMyNew (object, cPtr_classWithSuperClassAST (inCompiler COMMA_THERE)) ;
  object->classWithSuperClassAST_init_21__21_ (in_mClassName, in_mSuperClassName, inCompiler) ;
  const GGS_classWithSuperClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classWithSuperClassAST::
classWithSuperClassAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                     const GGS_lstring & in_mSuperClassName,
                                     Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST::GGS_classWithSuperClassAST (const cPtr_classWithSuperClassAST * inSourcePtr) :
GGS_declarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classWithSuperClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST GGS_classWithSuperClassAST::class_func_new (const GGS_lstring & in_mClassName,
                                                                       const GGS_lstring & in_mSuperClassName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_classWithSuperClassAST result ;
  macroMyNew (result.mObjectPtr, cPtr_classWithSuperClassAST (in_mClassName, in_mSuperClassName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classWithSuperClassAST::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classWithSuperClassAST * p = (cPtr_classWithSuperClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classWithSuperClassAST) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classWithSuperClassAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classWithSuperClassAST * p = (cPtr_classWithSuperClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classWithSuperClassAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classWithSuperClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_classWithSuperClassAST::cPtr_classWithSuperClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_declarationAST (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mSuperClassName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classWithSuperClassAST::cPtr_classWithSuperClassAST (const GGS_lstring & in_mClassName,
                                                          const GGS_lstring & in_mSuperClassName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_declarationAST (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mSuperClassName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classWithSuperClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classWithSuperClassAST ;
}

void cPtr_classWithSuperClassAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classWithSuperClassAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_classWithSuperClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classWithSuperClassAST (mProperty_mClassName, mProperty_mSuperClassName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classWithSuperClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_declarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classWithSuperClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classWithSuperClassAST ("classWithSuperClassAST",
                                                                           & kTypeDescriptor_GALGAS_declarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classWithSuperClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classWithSuperClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classWithSuperClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classWithSuperClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classWithSuperClassAST GGS_classWithSuperClassAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_classWithSuperClassAST result ;
  const GGS_classWithSuperClassAST * p = (const GGS_classWithSuperClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classWithSuperClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classWithSuperClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

