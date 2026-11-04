#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
// @openedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionForGeneration::objectCompare (const GGS_openedSliceExpressionForGeneration & inOperand) const {
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

GGS_openedSliceExpressionForGeneration::GGS_openedSliceExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_openedSliceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_openedSliceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->openedSliceExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_openedSliceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_openedSliceExpressionForGeneration::
openedSliceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                         const GGS_location & in_mLocation,
                                                         const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                         const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration::GGS_openedSliceExpressionForGeneration (const cPtr_openedSliceExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_openedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_openedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_openedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_openedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @openedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_openedSliceExpressionForGeneration::cPtr_openedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_openedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

void cPtr_openedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@openedSliceExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_openedSliceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_openedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_openedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ("openedSliceExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_openedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_openedSliceExpressionForGeneration result ;
  const GGS_openedSliceExpressionForGeneration * p = (const GGS_openedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @closedSliceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionForGeneration::objectCompare (const GGS_closedSliceExpressionForGeneration & inOperand) const {
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

GGS_closedSliceExpressionForGeneration::GGS_closedSliceExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_closedSliceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_closedSliceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->closedSliceExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_closedSliceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_closedSliceExpressionForGeneration::
closedSliceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                         const GGS_location & in_mLocation,
                                                         const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                         const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration::GGS_closedSliceExpressionForGeneration (const cPtr_closedSliceExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_closedSliceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_closedSliceExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_closedSliceExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_closedSliceExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @closedSliceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_closedSliceExpressionForGeneration::cPtr_closedSliceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                  const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_closedSliceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

void cPtr_closedSliceExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@closedSliceExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_closedSliceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_closedSliceExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_closedSliceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ("closedSliceExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_closedSliceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_closedSliceExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_closedSliceExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_closedSliceExpressionForGeneration result ;
  const GGS_closedSliceExpressionForGeneration * p = (const GGS_closedSliceExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_closedSliceExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structPropertyAccessExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structPropertyAccessExpressionAST::objectCompare (const GGS_structPropertyAccessExpressionAST & inOperand) const {
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

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::
init_21__21__21_ (const GGS_location & in_operatorLocation,
                  const GGS_semanticExpressionAST & in_mExpression,
                  const GGS_lstring & in_propertyName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structPropertyAccessExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structPropertyAccessExpressionAST (inCompiler COMMA_THERE)) ;
  object->structPropertyAccessExpressionAST_init_21__21__21_ (in_operatorLocation, in_mExpression, in_propertyName, inCompiler) ;
  const GGS_structPropertyAccessExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structPropertyAccessExpressionAST::
structPropertyAccessExpressionAST_init_21__21__21_ (const GGS_location & in_operatorLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    const GGS_lstring & in_propertyName,
                                                    Compiler * /* inCompiler */) {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST::GGS_structPropertyAccessExpressionAST (const cPtr_structPropertyAccessExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structPropertyAccessExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structPropertyAccessExpressionAST::readProperty_operatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_operatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_structPropertyAccessExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structPropertyAccessExpressionAST::readProperty_propertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structPropertyAccessExpressionAST * p = (cPtr_structPropertyAccessExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structPropertyAccessExpressionAST) ;
    return p->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structPropertyAccessExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structPropertyAccessExpressionAST::cPtr_structPropertyAccessExpressionAST (const GGS_location & in_operatorLocation,
                                                                                const GGS_semanticExpressionAST & in_mExpression,
                                                                                const GGS_lstring & in_propertyName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_operatorLocation (),
mProperty_mExpression (),
mProperty_propertyName () {
  mProperty_operatorLocation = in_operatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_propertyName = in_propertyName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structPropertyAccessExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

void cPtr_structPropertyAccessExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@structPropertyAccessExpressionAST:") ;
  mProperty_operatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_propertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structPropertyAccessExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structPropertyAccessExpressionAST (mProperty_operatorLocation, mProperty_mExpression, mProperty_propertyName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structPropertyAccessExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_operatorLocation.printNonNullClassInstanceProperties ("operatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_propertyName.printNonNullClassInstanceProperties ("propertyName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structPropertyAccessExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ("structPropertyAccessExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structPropertyAccessExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structPropertyAccessExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structPropertyAccessExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structPropertyAccessExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structPropertyAccessExpressionAST GGS_structPropertyAccessExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_structPropertyAccessExpressionAST result ;
  const GGS_structPropertyAccessExpressionAST * p = (const GGS_structPropertyAccessExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structPropertyAccessExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structPropertyAccessExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @propertyAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyAccessExpressionForGeneration::objectCompare (const GGS_propertyAccessExpressionForGeneration & inOperand) const {
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

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_expression,
                      const GGS_string & in_structFieldName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_propertyAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_propertyAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->propertyAccessExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_structFieldName, inCompiler) ;
  const GGS_propertyAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_propertyAccessExpressionForGeneration::
propertyAccessExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_expression,
                                                            const GGS_string & in_structFieldName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration::GGS_propertyAccessExpressionForGeneration (const cPtr_propertyAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_propertyAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_propertyAccessExpressionForGeneration::readProperty_structFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_propertyAccessExpressionForGeneration * p = (cPtr_propertyAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyAccessExpressionForGeneration) ;
    return p->mProperty_structFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @propertyAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_propertyAccessExpressionForGeneration::cPtr_propertyAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_semanticExpressionForGeneration & in_expression,
                                                                                        const GGS_string & in_structFieldName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_structFieldName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_structFieldName = in_structFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_propertyAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

void cPtr_propertyAccessExpressionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@propertyAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_propertyAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_propertyAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_structFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_propertyAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_structFieldName.printNonNullClassInstanceProperties ("structFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @propertyAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ("propertyAccessExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessExpressionForGeneration GGS_propertyAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessExpressionForGeneration result ;
  const GGS_propertyAccessExpressionForGeneration * p = (const GGS_propertyAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @subscriptReadAccessExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_subscriptReadAccessExpressionForGeneration::objectCompare (const GGS_subscriptReadAccessExpressionForGeneration & inOperand) const {
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

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_expression,
                          const GGS_string & in_subscriptInvocationName,
                          const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_subscriptReadAccessExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_subscriptReadAccessExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_expression, in_subscriptInvocationName, in_actualExpressionList, inCompiler) ;
  const GGS_subscriptReadAccessExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_subscriptReadAccessExpressionForGeneration::
subscriptReadAccessExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                     const GGS_location & in_mLocation,
                                                                     const GGS_semanticExpressionForGeneration & in_expression,
                                                                     const GGS_string & in_subscriptInvocationName,
                                                                     const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration::GGS_subscriptReadAccessExpressionForGeneration (const cPtr_subscriptReadAccessExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_subscriptReadAccessExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_subscriptReadAccessExpressionForGeneration::readProperty_subscriptInvocationName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_subscriptInvocationName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_subscriptReadAccessExpressionForGeneration::readProperty_actualExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_subscriptReadAccessExpressionForGeneration * p = (cPtr_subscriptReadAccessExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_subscriptReadAccessExpressionForGeneration) ;
    return p->mProperty_actualExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @subscriptReadAccessExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_subscriptReadAccessExpressionForGeneration::cPtr_subscriptReadAccessExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_semanticExpressionForGeneration & in_expression,
                                                                                                  const GGS_string & in_subscriptInvocationName,
                                                                                                  const GGS_semanticExpressionListForGeneration & in_actualExpressionList,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expression (),
mProperty_subscriptInvocationName (),
mProperty_actualExpressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expression = in_expression ;
  mProperty_subscriptInvocationName = in_subscriptInvocationName ;
  mProperty_actualExpressionList = in_actualExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_subscriptReadAccessExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

void cPtr_subscriptReadAccessExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@subscriptReadAccessExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_subscriptInvocationName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_actualExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_subscriptReadAccessExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_subscriptReadAccessExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expression, mProperty_subscriptInvocationName, mProperty_actualExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_subscriptReadAccessExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expression.printNonNullClassInstanceProperties ("expression") ;
    mProperty_subscriptInvocationName.printNonNullClassInstanceProperties ("subscriptInvocationName") ;
    mProperty_actualExpressionList.printNonNullClassInstanceProperties ("actualExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @subscriptReadAccessExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ("subscriptReadAccessExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptReadAccessExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptReadAccessExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptReadAccessExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptReadAccessExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptReadAccessExpressionForGeneration GGS_subscriptReadAccessExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_subscriptReadAccessExpressionForGeneration result ;
  const GGS_subscriptReadAccessExpressionForGeneration * p = (const GGS_subscriptReadAccessExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptReadAccessExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptReadAccessExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalTypeInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalTypeInExpressionAST::objectCompare (const GGS_literalTypeInExpressionAST & inOperand) const {
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

GGS_literalTypeInExpressionAST::GGS_literalTypeInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalTypeInExpressionAST GGS_literalTypeInExpressionAST::
init_21_ (const GGS_lstring & in_mLiteralTypeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalTypeInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalTypeInExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalTypeInExpressionAST_init_21_ (in_mLiteralTypeName, inCompiler) ;
  const GGS_literalTypeInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionAST::
literalTypeInExpressionAST_init_21_ (const GGS_lstring & in_mLiteralTypeName,
                                     Compiler * /* inCompiler */) {
  mProperty_mLiteralTypeName = in_mLiteralTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionAST::GGS_literalTypeInExpressionAST (const cPtr_literalTypeInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_literalTypeInExpressionAST::readProperty_mLiteralTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_literalTypeInExpressionAST * p = (cPtr_literalTypeInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionAST) ;
    return p->mProperty_mLiteralTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionAST::cPtr_literalTypeInExpressionAST (const GGS_lstring & in_mLiteralTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralTypeName () {
  mProperty_mLiteralTypeName = in_mLiteralTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalTypeInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

void cPtr_literalTypeInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalTypeInExpressionAST:") ;
  mProperty_mLiteralTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalTypeInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionAST (mProperty_mLiteralTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalTypeInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralTypeName.printNonNullClassInstanceProperties ("mLiteralTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalTypeInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalTypeInExpressionAST ("literalTypeInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalTypeInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalTypeInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalTypeInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionAST GGS_literalTypeInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalTypeInExpressionAST result ;
  const GGS_literalTypeInExpressionAST * p = (const GGS_literalTypeInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalTypeInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalTypeInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalTypeInExpressionForGeneration::objectCompare (const GGS_literalTypeInExpressionForGeneration & inOperand) const {
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

GGS_literalTypeInExpressionForGeneration::GGS_literalTypeInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration GGS_literalTypeInExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_unifiedTypeMapEntry & in_mLiteralType,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalTypeInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalTypeInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalTypeInExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mLiteralType, inCompiler) ;
  const GGS_literalTypeInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalTypeInExpressionForGeneration::
literalTypeInExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_unifiedTypeMapEntry & in_mLiteralType,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLiteralType = in_mLiteralType ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration::GGS_literalTypeInExpressionForGeneration (const cPtr_literalTypeInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalTypeInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_literalTypeInExpressionForGeneration::readProperty_mLiteralType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_literalTypeInExpressionForGeneration * p = (cPtr_literalTypeInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalTypeInExpressionForGeneration) ;
    return p->mProperty_mLiteralType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalTypeInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLiteralType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalTypeInExpressionForGeneration::cPtr_literalTypeInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_unifiedTypeMapEntry & in_mLiteralType,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLiteralType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLiteralType = in_mLiteralType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalTypeInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

void cPtr_literalTypeInExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalTypeInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLiteralType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalTypeInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalTypeInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLiteralType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalTypeInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralType.printNonNullClassInstanceProperties ("mLiteralType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalTypeInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ("literalTypeInExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalTypeInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalTypeInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalTypeInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalTypeInExpressionForGeneration GGS_literalTypeInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalTypeInExpressionForGeneration result ;
  const GGS_literalTypeInExpressionForGeneration * p = (const GGS_literalTypeInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalTypeInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalTypeInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @tildeExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionForGeneration::objectCompare (const GGS_tildeExpressionForGeneration & inOperand) const {
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

GGS_tildeExpressionForGeneration::GGS_tildeExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_tildeExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_tildeExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->tildeExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_tildeExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionForGeneration::
tildeExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                               const GGS_location & in_mLocation,
                                               const GGS_semanticExpressionForGeneration & in_mExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration::GGS_tildeExpressionForGeneration (const cPtr_tildeExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_tildeExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionForGeneration::cPtr_tildeExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_tildeExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

void cPtr_tildeExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@tildeExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_tildeExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_tildeExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_tildeExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration ("tildeExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tildeExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tildeExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tildeExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionForGeneration result ;
  const GGS_tildeExpressionForGeneration * p = (const GGS_tildeExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tildeExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @comparisonExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_comparisonExpressionForGeneration::objectCompare (const GGS_comparisonExpressionForGeneration & inOperand) const {
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

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                          const GGS_comparison & in_mComparison,
                          const GGS_semanticExpressionForGeneration & in_mRightExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_comparisonExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_comparisonExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->comparisonExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mComparison, in_mRightExpression, inCompiler) ;
  const GGS_comparisonExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_comparisonExpressionForGeneration::
comparisonExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                            const GGS_comparison & in_mComparison,
                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration::GGS_comparisonExpressionForGeneration (const cPtr_comparisonExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_comparison GGS_comparisonExpressionForGeneration::readProperty_mComparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_comparison () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mComparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_comparisonExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_comparisonExpressionForGeneration * p = (cPtr_comparisonExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @comparisonExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_comparisonExpressionForGeneration::cPtr_comparisonExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                                const GGS_comparison & in_mComparison,
                                                                                const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mComparison (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mComparison = in_mComparison ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_comparisonExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

void cPtr_comparisonExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@comparisonExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mComparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_comparisonExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_comparisonExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mComparison, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_comparisonExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mComparison.printNonNullClassInstanceProperties ("mComparison") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @comparisonExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ("comparisonExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_comparisonExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_comparisonExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonExpressionForGeneration GGS_comparisonExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_comparisonExpressionForGeneration result ;
  const GGS_comparisonExpressionForGeneration * p = (const GGS_comparisonExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_comparisonExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("comparisonExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionAST::objectCompare (const GGS_literalDoubleExpressionAST & inOperand) const {
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

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST::
init_21_ (const GGS_ldouble & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalDoubleExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionAST::
literalDoubleExpressionAST_init_21_ (const GGS_ldouble & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST::GGS_literalDoubleExpressionAST (const cPtr_literalDoubleExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_literalDoubleExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_literalDoubleExpressionAST * p = (cPtr_literalDoubleExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionAST::cPtr_literalDoubleExpressionAST (const GGS_ldouble & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalDoubleExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

void cPtr_literalDoubleExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalDoubleExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionAST ("literalDoubleExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalDoubleExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalDoubleExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionAST GGS_literalDoubleExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalDoubleExpressionAST result ;
  const GGS_literalDoubleExpressionAST * p = (const GGS_literalDoubleExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalDoubleExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalDoubleExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalDoubleExpressionForGeneration::objectCompare (const GGS_literalDoubleExpressionForGeneration & inOperand) const {
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

GGS_literalDoubleExpressionForGeneration::GGS_literalDoubleExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_double & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalDoubleExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalDoubleExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalDoubleExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalDoubleExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalDoubleExpressionForGeneration::
literalDoubleExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_double & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration::GGS_literalDoubleExpressionForGeneration (const cPtr_literalDoubleExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalDoubleExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_double GGS_literalDoubleExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_double () ;
  }else{
    cPtr_literalDoubleExpressionForGeneration * p = (cPtr_literalDoubleExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalDoubleExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalDoubleExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalDoubleExpressionForGeneration::cPtr_literalDoubleExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_double & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalDoubleExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

void cPtr_literalDoubleExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalDoubleExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalDoubleExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalDoubleExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalDoubleExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalDoubleExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ("literalDoubleExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalDoubleExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalDoubleExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalDoubleExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalDoubleExpressionForGeneration GGS_literalDoubleExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalDoubleExpressionForGeneration result ;
  const GGS_literalDoubleExpressionForGeneration * p = (const GGS_literalDoubleExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalDoubleExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalDoubleExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionAST::objectCompare (const GGS_functionCallExpressionAST & inOperand) const {
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

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_actualOutputArgumentList & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_functionCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionAST::
functionCallExpressionAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                        const GGS_actualOutputArgumentList & in_mExpressionList,
                                        Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST::GGS_functionCallExpressionAST (const cPtr_functionCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_functionCallExpressionAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_functionCallExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_functionCallExpressionAST * p = (cPtr_functionCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionAST::cPtr_functionCallExpressionAST (const GGS_lstring & in_mFunctionName,
                                                                const GGS_actualOutputArgumentList & in_mExpressionList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

void cPtr_functionCallExpressionAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionAST ("functionCallExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionAST GGS_functionCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionAST result ;
  const GGS_functionCallExpressionAST * p = (const GGS_functionCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @functionCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionCallExpressionForGeneration::objectCompare (const GGS_functionCallExpressionForGeneration & inOperand) const {
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

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mFunctionName,
                      const GGS_semanticExpressionListForGeneration & in_mExpressions,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_functionCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_functionCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->functionCallExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mFunctionName, in_mExpressions, inCompiler) ;
  const GGS_functionCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_functionCallExpressionForGeneration::
functionCallExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                          const GGS_location & in_mLocation,
                                                          const GGS_string & in_mFunctionName,
                                                          const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                          Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration::GGS_functionCallExpressionForGeneration (const cPtr_functionCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_functionCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_functionCallExpressionForGeneration::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_functionCallExpressionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_functionCallExpressionForGeneration * p = (cPtr_functionCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_functionCallExpressionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @functionCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_functionCallExpressionForGeneration::cPtr_functionCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_string & in_mFunctionName,
                                                                                    const GGS_semanticExpressionListForGeneration & in_mExpressions,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressions () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_functionCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

void cPtr_functionCallExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@functionCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_functionCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_functionCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFunctionName, mProperty_mExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_functionCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @functionCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ("functionCallExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionCallExpressionForGeneration GGS_functionCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionCallExpressionForGeneration result ;
  const GGS_functionCallExpressionForGeneration * p = (const GGS_functionCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @andShortExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_andShortExpressionForGeneration::objectCompare (const GGS_andShortExpressionForGeneration & inOperand) const {
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

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_andShortExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_andShortExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->andShortExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLeftExpression, in_mRightExpression, inCompiler) ;
  const GGS_andShortExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_andShortExpressionForGeneration::
andShortExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                      const GGS_location & in_mLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                      const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                      Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration::GGS_andShortExpressionForGeneration (const cPtr_andShortExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andShortExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mLeftExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mLeftExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_andShortExpressionForGeneration::readProperty_mRightExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_andShortExpressionForGeneration * p = (cPtr_andShortExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andShortExpressionForGeneration) ;
    return p->mProperty_mRightExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @andShortExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_andShortExpressionForGeneration::cPtr_andShortExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GGS_location & in_mLocation,
                                                                            const GGS_semanticExpressionForGeneration & in_mLeftExpression,
                                                                            const GGS_semanticExpressionForGeneration & in_mRightExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLeftExpression (),
mProperty_mRightExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLeftExpression = in_mLeftExpression ;
  mProperty_mRightExpression = in_mRightExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_andShortExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

void cPtr_andShortExpressionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@andShortExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLeftExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_andShortExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_andShortExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLeftExpression, mProperty_mRightExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_andShortExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLeftExpression.printNonNullClassInstanceProperties ("mLeftExpression") ;
    mProperty_mRightExpression.printNonNullClassInstanceProperties ("mRightExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @andShortExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andShortExpressionForGeneration ("andShortExpressionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andShortExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andShortExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_andShortExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_andShortExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andShortExpressionForGeneration GGS_andShortExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_andShortExpressionForGeneration result ;
  const GGS_andShortExpressionForGeneration * p = (const GGS_andShortExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_andShortExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("andShortExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifExpressionForGeneration::objectCompare (const GGS_ifExpressionForGeneration & inOperand) const {
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

GGS_ifExpressionForGeneration::GGS_ifExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mIfExpression,
                          const GGS_semanticExpressionForGeneration & in_mThenExpression,
                          const GGS_semanticExpressionForGeneration & in_mElseExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_ifExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mIfExpression, in_mThenExpression, in_mElseExpression, inCompiler) ;
  const GGS_ifExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifExpressionForGeneration::
ifExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_semanticExpressionForGeneration & in_mIfExpression,
                                                    const GGS_semanticExpressionForGeneration & in_mThenExpression,
                                                    const GGS_semanticExpressionForGeneration & in_mElseExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration::GGS_ifExpressionForGeneration (const cPtr_ifExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mIfExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mIfExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mThenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mThenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_ifExpressionForGeneration::readProperty_mElseExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_ifExpressionForGeneration * p = (cPtr_ifExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifExpressionForGeneration) ;
    return p->mProperty_mElseExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_ifExpressionForGeneration::cPtr_ifExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                const GGS_location & in_mLocation,
                                                                const GGS_semanticExpressionForGeneration & in_mIfExpression,
                                                                const GGS_semanticExpressionForGeneration & in_mThenExpression,
                                                                const GGS_semanticExpressionForGeneration & in_mElseExpression,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mIfExpression (),
mProperty_mThenExpression (),
mProperty_mElseExpression () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mIfExpression = in_mIfExpression ;
  mProperty_mThenExpression = in_mThenExpression ;
  mProperty_mElseExpression = in_mElseExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_ifExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

void cPtr_ifExpressionForGeneration::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@ifExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIfExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mThenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_ifExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mIfExpression, mProperty_mThenExpression, mProperty_mElseExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIfExpression.printNonNullClassInstanceProperties ("mIfExpression") ;
    mProperty_mThenExpression.printNonNullClassInstanceProperties ("mThenExpression") ;
    mProperty_mElseExpression.printNonNullClassInstanceProperties ("mElseExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @ifExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionForGeneration ("ifExpressionForGeneration",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionForGeneration GGS_ifExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionForGeneration result ;
  const GGS_ifExpressionForGeneration * p = (const GGS_ifExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nilExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nilExpressionForGeneration::objectCompare (const GGS_nilExpressionForGeneration & inOperand) const {
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

GGS_nilExpressionForGeneration::GGS_nilExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
              const GGS_location & in_mLocation,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_nilExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nilExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->nilExpressionForGeneration_init_21__21_ (in_mResultType, in_mLocation, inCompiler) ;
  const GGS_nilExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nilExpressionForGeneration::
nilExpressionForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                         const GGS_location & in_mLocation,
                                         Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration::GGS_nilExpressionForGeneration (const cPtr_nilExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nilExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @nilExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionForGeneration::cPtr_nilExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_nilExpressionForGeneration::cPtr_nilExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                  const GGS_location & in_mLocation,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nilExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionForGeneration ;
}

void cPtr_nilExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@nilExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nilExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nilExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nilExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nilExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nilExpressionForGeneration ("nilExpressionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nilExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nilExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nilExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nilExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nilExpressionForGeneration GGS_nilExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_nilExpressionForGeneration result ;
  const GGS_nilExpressionForGeneration * p = (const GGS_nilExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nilExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nilExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionAST::objectCompare (const GGS_getterCallExpressionAST & inOperand) const {
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

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::
init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                      const GGS_lstring & in_mGetterName,
                      const GGS_actualOutputArgumentList & in_mActualArgumentList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionAST (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionAST_init_21__21__21__21_ (in_mReceiver, in_mGetterName, in_mActualArgumentList, in_mExpressionLocation, inCompiler) ;
  const GGS_getterCallExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::
getterCallExpressionAST_init_21__21__21__21_ (const GGS_semanticExpressionAST & in_mReceiver,
                                              const GGS_lstring & in_mGetterName,
                                              const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                              const GGS_location & in_mExpressionLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST::GGS_getterCallExpressionAST (const cPtr_getterCallExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_getterCallExpressionAST::readProperty_mReceiver (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mReceiver ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_getterCallExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_getterCallExpressionAST::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_getterCallExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_getterCallExpressionAST * p = (cPtr_getterCallExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionAST::cPtr_getterCallExpressionAST (const GGS_semanticExpressionAST & in_mReceiver,
                                                            const GGS_lstring & in_mGetterName,
                                                            const GGS_actualOutputArgumentList & in_mActualArgumentList,
                                                            const GGS_location & in_mExpressionLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiver (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiver = in_mReceiver ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getterCallExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

void cPtr_getterCallExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionAST:") ;
  mProperty_mReceiver.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_getterCallExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionAST (mProperty_mReceiver, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiver.printNonNullClassInstanceProperties ("mReceiver") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionAST ("getterCallExpressionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionAST GGS_getterCallExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionAST result ;
  const GGS_getterCallExpressionAST * p = (const GGS_getterCallExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @getterCallExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_getterCallExpressionForGeneration::objectCompare (const GGS_getterCallExpressionForGeneration & inOperand) const {
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

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                      const GGS_location & in_mLocation,
                                      const GGS_methodKind & in_mKind,
                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                      const GGS_stringlist & in_mFieldList,
                                      const GGS_string & in_mGetterName,
                                      const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                      const GGS_bool & in_mHasCompilerArgument,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_getterCallExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_getterCallExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_mKind, in_mReceiverExpression, in_mFieldList, in_mGetterName, in_mActualArgumentList, in_mHasCompilerArgument, inCompiler) ;
  const GGS_getterCallExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::
getterCallExpressionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_methodKind & in_mKind,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_stringlist & in_mFieldList,
                                                                        const GGS_string & in_mGetterName,
                                                                        const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                        const GGS_bool & in_mHasCompilerArgument,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration::GGS_getterCallExpressionForGeneration (const cPtr_getterCallExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_getterCallExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_getterCallExpressionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_getterCallExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_getterCallExpressionForGeneration::readProperty_mFieldList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mFieldList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_getterCallExpressionForGeneration::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_getterCallExpressionForGeneration::readProperty_mActualArgumentList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mActualArgumentList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_getterCallExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_getterCallExpressionForGeneration * p = (cPtr_getterCallExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_getterCallExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @getterCallExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
}

//--------------------------------------------------------------------------------------------------

cPtr_getterCallExpressionForGeneration::cPtr_getterCallExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_methodKind & in_mKind,
                                                                                const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                const GGS_stringlist & in_mFieldList,
                                                                                const GGS_string & in_mGetterName,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualArgumentList,
                                                                                const GGS_bool & in_mHasCompilerArgument,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mKind (),
mProperty_mReceiverExpression (),
mProperty_mFieldList (),
mProperty_mGetterName (),
mProperty_mActualArgumentList (),
mProperty_mHasCompilerArgument () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mKind = in_mKind ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mFieldList = in_mFieldList ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mActualArgumentList = in_mActualArgumentList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_getterCallExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

void cPtr_getterCallExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@getterCallExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFieldList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_getterCallExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_getterCallExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mKind, mProperty_mReceiverExpression, mProperty_mFieldList, mProperty_mGetterName, mProperty_mActualArgumentList, mProperty_mHasCompilerArgument, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_getterCallExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mFieldList.printNonNullClassInstanceProperties ("mFieldList") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mActualArgumentList.printNonNullClassInstanceProperties ("mActualArgumentList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @getterCallExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ("getterCallExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_getterCallExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_getterCallExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_getterCallExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_getterCallExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_getterCallExpressionForGeneration GGS_getterCallExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_getterCallExpressionForGeneration result ;
  const GGS_getterCallExpressionForGeneration * p = (const GGS_getterCallExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_getterCallExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("getterCallExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (void) :
mProperty_featureName (),
mProperty_featureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_galgasQualifiedFeature & inSource) :
mProperty_featureName (inSource.mProperty_featureName),
mProperty_featureValue (inSource.mProperty_featureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature & GGS_galgasQualifiedFeature::operator = (const GGS_galgasQualifiedFeature & inSource) {
  mProperty_featureName = inSource.mProperty_featureName ;
  mProperty_featureValue = inSource.mProperty_featureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::init_21__21_ (const GGS_lstring & in_featureName,
                                                                     const GGS_lstring & in_featureValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_featureName = in_featureName ;
  result.mProperty_featureValue = in_featureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature::GGS_galgasQualifiedFeature (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1) :
mProperty_featureName (inOperand0),
mProperty_featureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgasQualifiedFeature::isValid (void) const {
  return mProperty_featureName.isValid () && mProperty_featureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::drop (void) {
  mProperty_featureName.drop () ;
  mProperty_featureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgasQualifiedFeature::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasQualifiedFeature:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_featureName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_featureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgasQualifiedFeature generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgasQualifiedFeature ("galgasQualifiedFeature",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgasQualifiedFeature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasQualifiedFeature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgasQualifiedFeature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgasQualifiedFeature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgasQualifiedFeature GGS_galgasQualifiedFeature::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_galgasQualifiedFeature result ;
  const GGS_galgasQualifiedFeature * p = (const GGS_galgasQualifiedFeature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgasQualifiedFeature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasQualifiedFeature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (void) :
mProperty_mProjectSourceList (),
mProperty_mToolCppSourceList (),
mProperty_mMajorVersion (),
mProperty_mMinorVersion (),
mProperty_mRevisionVersion (),
mProperty_mGenerationFeatureList (),
mProperty_mQualifiedFeatureList (),
mProperty_mTargetName (),
mProperty_mEndOfSourceFile () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_galgas_33_ProjectComponentAST & inSource) :
mProperty_mProjectSourceList (inSource.mProperty_mProjectSourceList),
mProperty_mToolCppSourceList (inSource.mProperty_mToolCppSourceList),
mProperty_mMajorVersion (inSource.mProperty_mMajorVersion),
mProperty_mMinorVersion (inSource.mProperty_mMinorVersion),
mProperty_mRevisionVersion (inSource.mProperty_mRevisionVersion),
mProperty_mGenerationFeatureList (inSource.mProperty_mGenerationFeatureList),
mProperty_mQualifiedFeatureList (inSource.mProperty_mQualifiedFeatureList),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mEndOfSourceFile (inSource.mProperty_mEndOfSourceFile) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST & GGS_galgas_33_ProjectComponentAST::operator = (const GGS_galgas_33_ProjectComponentAST & inSource) {
  mProperty_mProjectSourceList = inSource.mProperty_mProjectSourceList ;
  mProperty_mToolCppSourceList = inSource.mProperty_mToolCppSourceList ;
  mProperty_mMajorVersion = inSource.mProperty_mMajorVersion ;
  mProperty_mMinorVersion = inSource.mProperty_mMinorVersion ;
  mProperty_mRevisionVersion = inSource.mProperty_mRevisionVersion ;
  mProperty_mGenerationFeatureList = inSource.mProperty_mGenerationFeatureList ;
  mProperty_mQualifiedFeatureList = inSource.mProperty_mQualifiedFeatureList ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mEndOfSourceFile = inSource.mProperty_mEndOfSourceFile ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21__21_ (const GGS_stringlist & in_mProjectSourceList,
                                                                                                               const GGS_stringlist & in_mToolCppSourceList,
                                                                                                               const GGS_lbigint & in_mMajorVersion,
                                                                                                               const GGS_lbigint & in_mMinorVersion,
                                                                                                               const GGS_lbigint & in_mRevisionVersion,
                                                                                                               const GGS_lstringlist & in_mGenerationFeatureList,
                                                                                                               const GGS__5B_galgasQualifiedFeature_5D_ & in_mQualifiedFeatureList,
                                                                                                               const GGS_lstring & in_mTargetName,
                                                                                                               const GGS_location & in_mEndOfSourceFile,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProjectSourceList = in_mProjectSourceList ;
  result.mProperty_mToolCppSourceList = in_mToolCppSourceList ;
  result.mProperty_mMajorVersion = in_mMajorVersion ;
  result.mProperty_mMinorVersion = in_mMinorVersion ;
  result.mProperty_mRevisionVersion = in_mRevisionVersion ;
  result.mProperty_mGenerationFeatureList = in_mGenerationFeatureList ;
  result.mProperty_mQualifiedFeatureList = in_mQualifiedFeatureList ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mEndOfSourceFile = in_mEndOfSourceFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST::GGS_galgas_33_ProjectComponentAST (const GGS_stringlist & inOperand0,
                                                                      const GGS_stringlist & inOperand1,
                                                                      const GGS_lbigint & inOperand2,
                                                                      const GGS_lbigint & inOperand3,
                                                                      const GGS_lbigint & inOperand4,
                                                                      const GGS_lstringlist & inOperand5,
                                                                      const GGS__5B_galgasQualifiedFeature_5D_ & inOperand6,
                                                                      const GGS_lstring & inOperand7,
                                                                      const GGS_location & inOperand8) :
mProperty_mProjectSourceList (inOperand0),
mProperty_mToolCppSourceList (inOperand1),
mProperty_mMajorVersion (inOperand2),
mProperty_mMinorVersion (inOperand3),
mProperty_mRevisionVersion (inOperand4),
mProperty_mGenerationFeatureList (inOperand5),
mProperty_mQualifiedFeatureList (inOperand6),
mProperty_mTargetName (inOperand7),
mProperty_mEndOfSourceFile (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_galgas_33_ProjectComponentAST::isValid (void) const {
  return mProperty_mProjectSourceList.isValid () && mProperty_mToolCppSourceList.isValid () && mProperty_mMajorVersion.isValid () && mProperty_mMinorVersion.isValid () && mProperty_mRevisionVersion.isValid () && mProperty_mGenerationFeatureList.isValid () && mProperty_mQualifiedFeatureList.isValid () && mProperty_mTargetName.isValid () && mProperty_mEndOfSourceFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::drop (void) {
  mProperty_mProjectSourceList.drop () ;
  mProperty_mToolCppSourceList.drop () ;
  mProperty_mMajorVersion.drop () ;
  mProperty_mMinorVersion.drop () ;
  mProperty_mRevisionVersion.drop () ;
  mProperty_mGenerationFeatureList.drop () ;
  mProperty_mQualifiedFeatureList.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mEndOfSourceFile.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_ProjectComponentAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgas3ProjectComponentAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProjectSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToolCppSourceList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMajorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMinorVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRevisionVersion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerationFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mQualifiedFeatureList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfSourceFile.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @galgas3ProjectComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ("galgas3ProjectComponentAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_ProjectComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_ProjectComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_ProjectComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_ProjectComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_ProjectComponentAST GGS_galgas_33_ProjectComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_ProjectComponentAST result ;
  const GGS_galgas_33_ProjectComponentAST * p = (const GGS_galgas_33_ProjectComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_ProjectComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3ProjectComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "C_galgas_CLI_Options.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_galgas4ProjectGrammar [] = {
// At index 0 : <project_header>, in file 'galgas4ProjectSyntax.galgas', line 60
  TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_project) // $project$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__28_) // $($
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__29_) // $)$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 11 : <project_component_start_symbol>, in file 'galgas4ProjectSyntax.galgas', line 78
, TOP_DOWN_NONTERMINAL (0) // <project_header>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7B_) // ${$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__7D_) // $}$
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 16 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_END_PRODUCTION ()
// At index 17 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault) // $%quietOutputByDefault$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 20 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp) // $%MacSwiftApp$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 23 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx) // $%makefile-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 26 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix) // $%makefile-unix$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 29 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx) // $%makefile-x86linux32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 32 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx) // $%makefile-x86linux64-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 35 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx) // $%makefile-arm64-linux-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 38 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx) // $%makefile-win32-on-macosx$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 41 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows) // $%codeblocks-windows$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 44 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_) // $%codeblocks-linux32$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 47 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_) // $%codeblocks-linux64$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 50 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase) // $%applicationBundleBase$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 55 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_libpmAtPath) // $%libpmAtPath$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 60 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__25_macCodeSign) // $%macCodeSign$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_galgasScanner_33_::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (2) // <select_galgas_34_ProjectSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 65 : <>, in file '.galgas', line 0
, TOP_DOWN_NONTERMINAL (1) // <project_component_start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_galgas4ProjectGrammar [18] = {
 {"<project_header>", "galgas4ProjectSyntax", 0}, // at index 0
 {"<project_component_start_symbol>", "galgas4ProjectSyntax", 11}, // at index 1
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 16}, // at index 2
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 17}, // at index 3
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 20}, // at index 4
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 23}, // at index 5
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 26}, // at index 6
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 29}, // at index 7
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 32}, // at index 8
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 35}, // at index 9
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 38}, // at index 10
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 41}, // at index 11
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 44}, // at index 12
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 47}, // at index 13
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 50}, // at index 14
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 55}, // at index 15
 {"<select_galgas_34_ProjectSyntax_0>", "galgas4ProjectSyntax", 60}, // at index 16
 {"<>", "", 65} // at index 17
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_galgas4ProjectGrammar [18] = {
0, // index 0 : <project_header>, in file 'galgas4ProjectSyntax.galgas', line 60
11, // index 1 : <project_component_start_symbol>, in file 'galgas4ProjectSyntax.galgas', line 78
16, // index 2 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
17, // index 3 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
20, // index 4 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
23, // index 5 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
26, // index 6 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
29, // index 7 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
32, // index 8 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
35, // index 9 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
38, // index 10 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
41, // index 11 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
44, // index 12 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
47, // index 13 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
50, // index 14 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
55, // index 15 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
60, // index 16 : <select_galgas_34_ProjectSyntax_0>, in file 'galgas4ProjectSyntax.galgas', line 89
65 // index 17 : <>, in file '.galgas', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_galgas4ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_34_ProjectSyntax_0>
17, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_galgas4ProjectGrammar [] = {
// At index 0 : <project_header> only one production, no choice
  -1,
// At index 1 : <project_component_start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 2 : <select_galgas_34_ProjectSyntax_0>
Lexique_galgasScanner_33_::kToken__7D_, -1, // Choice 1
Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault, -1, // Choice 2
Lexique_galgasScanner_33_::kToken__25_MacSwiftApp, -1, // Choice 3
Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx, -1, // Choice 4
Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix, -1, // Choice 5
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, -1, // Choice 6
Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, -1, // Choice 7
Lexique_galgasScanner_33_::kToken__25_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, -1, // Choice 8
Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx, -1, // Choice 9
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows, -1, // Choice 10
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_, -1, // Choice 11
Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_, -1, // Choice 12
Lexique_galgasScanner_33_::kToken__25_applicationBundleBase, -1, // Choice 13
Lexique_galgasScanner_33_::kToken__25_libpmAtPath, -1, // Choice 14
Lexique_galgasScanner_33_::kToken__25_macCodeSign, -1, // Choice 15
  -1,
// At index 33 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_galgas4ProjectGrammar [5] = {
0, // at 0 : <project_header>
1, // at 1 : <project_component_start_symbol>
2, // at 2 : <select_galgas_34_ProjectSyntax_0>
33, // at 3 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          'project_header' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_34_ProjectGrammar::nt_project_5F_header_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_34_ProjectSyntax_project_5F_header_i0_indexing(inLexique) ;
}

void cGrammar_galgas_34_ProjectGrammar::nt_project_5F_header_ (GGS_lbigint & parameter_1,
                                GGS_lbigint & parameter_2,
                                GGS_lbigint & parameter_3,
                                GGS_lstring & parameter_4,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_34_ProjectSyntax_project_5F_header_i0_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
}

//--------------------------------------------------------------------------------------------------
//
//                  'project_component_start_symbol' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_34_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_34_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing(inLexique) ;
}

void cGrammar_galgas_34_ProjectGrammar::nt_project_5F_component_5F_start_5F_symbol_ (const GGS_lstring parameter_1,
                                GGS_galgas_33_ProjectComponentAST & parameter_2,
                                Lexique_galgasScanner_33_ * inLexique) {
  rule_galgas_34_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_(parameter_1, parameter_2, inLexique) ;
}

void cGrammar_galgas_34_ProjectGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_galgas4ProjectGrammar, gProductionNames_galgas4ProjectGrammar, gProductionIndexes_galgas4ProjectGrammar,
                                                    gFirstProductionIndexes_galgas4ProjectGrammar, gDecision_galgas4ProjectGrammar, gDecisionIndexes_galgas4ProjectGrammar, 65) ;
    if (ok) {
      cGrammar_galgas_34_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_34_ProjectGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_galgas_34_ProjectGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasScanner_33_ * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_galgas4ProjectGrammar, gProductionNames_galgas4ProjectGrammar, gProductionIndexes_galgas4ProjectGrammar,
                                    gFirstProductionIndexes_galgas4ProjectGrammar, gDecision_galgas4ProjectGrammar, gDecisionIndexes_galgas4ProjectGrammar, 65) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_34_ProjectGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_galgas4ProjectGrammar, gProductionNames_galgas4ProjectGrammar, gProductionIndexes_galgas4ProjectGrammar,
                                                      gFirstProductionIndexes_galgas4ProjectGrammar, gDecision_galgas4ProjectGrammar, gDecisionIndexes_galgas4ProjectGrammar, 65) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_galgas_34_ProjectGrammar grammar ;
        grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
        }
      }else{
        String message ;
        message.appendString ("the '") ;
        message.appendString (filePath) ;
        message.appendString ("' file exists, but cannot be read") ;
        const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
        inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
      }
      macroDetachSharedObject (scanner) ;
    }else{
      String message ;
      message.appendString ("the '") ;
      message.appendString (filePath) ;
      message.appendString ("' file does not exist") ;
      const GGS_location errorLocation (inFilePath.readProperty_location ()) ;
      inCompiler->semanticErrorAtLocation (errorLocation, message, GenericArray <FixItDescription> () COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void cGrammar_galgas_34_ProjectGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                const GGS_lstring  parameter_1,
                                GGS_galgas_33_ProjectComponentAST &  parameter_2
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_galgasScanner_33_ * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasScanner_33_ (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_galgas4ProjectGrammar, gProductionNames_galgas4ProjectGrammar, gProductionIndexes_galgas4ProjectGrammar,
                                                    gFirstProductionIndexes_galgas4ProjectGrammar, gDecision_galgas4ProjectGrammar, gDecisionIndexes_galgas4ProjectGrammar, 65) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_galgas_34_ProjectGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_galgas_34_ProjectSyntax_0' added non terminal implementation                
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_galgas_34_ProjectGrammar::select_galgas_34_ProjectSyntax_0 (Lexique_galgasScanner_33_ * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@AccessControlAST checkCompatibilityWithLet'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkCompatibilityWithLet (const GGS_AccessControlAST inObject,
                                                const GGS_location constinArgument_inLocation,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControlAST::Enumeration::invalid:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedSetAccess:
    {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'protected(set)' and 'let' are incompatible"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas4", 155)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray2  COMMA_SOURCE_FILE ("accessControl.galgas4", 158)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_5358__0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_5358__0) ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas4", 161)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
// @templateLexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLexiqueComponentAST::objectCompare (const GGS_templateLexiqueComponentAST & inOperand) const {
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

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mLexiqueComponentName,
                                      const GGS_lstring & in_mLexiqueSuperComponentName,
                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                      const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateLexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mLexiqueSuperComponentName, in_mTemplateDelimitorList, in_mTemplateReplacementList, inCompiler) ;
  const GGS_templateLexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::
templateLexiqueComponentAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                  const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST::GGS_templateLexiqueComponentAST (const cPtr_templateLexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateLexiqueComponentAST::readProperty_mLexiqueSuperComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mLexiqueSuperComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateDelimitorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateReplacementListAST GGS_templateLexiqueComponentAST::readProperty_mTemplateReplacementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateReplacementListAST () ;
  }else{
    cPtr_templateLexiqueComponentAST * p = (cPtr_templateLexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLexiqueComponentAST::cPtr_templateLexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                                    const GGS_lstring & in_mLexiqueSuperComponentName,
                                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorList,
                                                                    const GGS_templateReplacementListAST & in_mTemplateReplacementList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueSuperComponentName (),
mProperty_mTemplateDelimitorList (),
mProperty_mTemplateReplacementList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueSuperComponentName = in_mLexiqueSuperComponentName ;
  mProperty_mTemplateDelimitorList = in_mTemplateDelimitorList ;
  mProperty_mTemplateReplacementList = in_mTemplateReplacementList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

void cPtr_templateLexiqueComponentAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueSuperComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mLexiqueSuperComponentName, mProperty_mTemplateDelimitorList, mProperty_mTemplateReplacementList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueSuperComponentName.printNonNullClassInstanceProperties ("mLexiqueSuperComponentName") ;
    mProperty_mTemplateDelimitorList.printNonNullClassInstanceProperties ("mTemplateDelimitorList") ;
    mProperty_mTemplateReplacementList.printNonNullClassInstanceProperties ("mTemplateReplacementList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLexiqueComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLexiqueComponentAST ("templateLexiqueComponentAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLexiqueComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLexiqueComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLexiqueComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLexiqueComponentAST GGS_templateLexiqueComponentAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateLexiqueComponentAST result ;
  const GGS_templateLexiqueComponentAST * p = (const GGS_templateLexiqueComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLexiqueComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLexiqueComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@genericExtensionMethodListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_genericExtensionMethodListMap & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_lstring constinArgument_inValue,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_genericExtensionMethodListMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 46)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_lstringlist var_aList_2260 ;
      const GGS_genericExtensionMethodListMap temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_2260, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 47)) ;
      {
      var_aList_2260.setter_append (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 48)) ;
      }
      ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_genericExtensionMethodListMapDictionary_2E_element::init_21__21_ (constinArgument_inKey, var_aList_2260, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 49)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_lstringlist temp_3 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 51)) ;
    temp_3.plusPlusAssignOperation (GGS_lstringlist_2E_element::init_21_ (constinArgument_inValue, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 51)) ;
    ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_genericExtensionMethodListMapDictionary_2E_element::init_21__21_ (constinArgument_inKey, temp_3, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 51)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@descendantClassListMap insertKey'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_insertKey (GGS_descendantClassListMap & ioObject,
                                const GGS_string constinArgument_inKey,
                                const GGS_unifiedTypeMapEntry constinArgument_inType,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_descendantClassListMap temp_1 = ioObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 115)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_unifiedTypeMapEntryList var_aList_5100 ;
      const GGS_descendantClassListMap temp_2 = ioObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, var_aList_5100, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 116)) ;
      {
      var_aList_5100.setter_append (constinArgument_inType, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 117)) ;
      }
      ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_descendantClassListMapDictionary_2E_element::init_21__21_ (constinArgument_inKey, var_aList_5100, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 118)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_unifiedTypeMapEntryList temp_3 = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 120)) ;
    temp_3.plusPlusAssignOperation (GGS_unifiedTypeMapEntryList_2E_element::init_21_ (constinArgument_inType, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 120)) ;
    ioObject.mProperty_dictionary.plusPlusAssignOperation (GGS_descendantClassListMapDictionary_2E_element::init_21__21_ (constinArgument_inKey, temp_3, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 120)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticExpressionForGeneration generateExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateExpression (cPtr_semanticExpressionForGeneration * inObject,
                                             GGS_string & io_ioGeneratedCode,
                                             GGS_stringset & io_ioInclusionSet,
                                             GGS_uint & io_ioTemporaryVariableIndex,
                                             GGS_stringset & io_ioUnusedVariableCppNameSet,
                                             GGS_string & out_outCppExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outCppExpression.drop () ;
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionForGeneration) ;
    inObject->method_generateExpression (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, out_outCppExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @castInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_castInExpressionForGeneration::objectCompare (const GGS_castInExpressionForGeneration & inOperand) const {
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

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_string & in_mTypeName,
                          const GGS_unifiedTypeMapEntry & in_mCastType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_castInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_castInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->castInExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mReceiverExpression, in_mTypeName, in_mCastType, inCompiler) ;
  const GGS_castInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_castInExpressionForGeneration::
castInExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_string & in_mTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration::GGS_castInExpressionForGeneration (const cPtr_castInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_castInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_castInExpressionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_castInExpressionForGeneration::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_castInExpressionForGeneration::readProperty_mCastType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_castInExpressionForGeneration * p = (cPtr_castInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_castInExpressionForGeneration) ;
    return p->mProperty_mCastType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @castInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_castInExpressionForGeneration::cPtr_castInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                        const GGS_location & in_mLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_string & in_mTypeName,
                                                                        const GGS_unifiedTypeMapEntry & in_mCastType,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mTypeName (),
mProperty_mCastType () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mCastType = in_mCastType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_castInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

void cPtr_castInExpressionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@castInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_castInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_castInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mReceiverExpression, mProperty_mTypeName, mProperty_mCastType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_castInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mCastType.printNonNullClassInstanceProperties ("mCastType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @castInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_castInExpressionForGeneration ("castInExpressionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_castInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInExpressionForGeneration GGS_castInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_castInExpressionForGeneration result ;
  const GGS_castInExpressionForGeneration * p = (const GGS_castInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputActualParameterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outputActualParameterForGeneration::objectCompare (const GGS_outputActualParameterForGeneration & inOperand) const {
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

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (void) :
GGS_actualParameterForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
              const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_outputActualParameterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_outputActualParameterForGeneration (inCompiler COMMA_THERE)) ;
  object->outputActualParameterForGeneration_init_21__21_ (in_mFormalArgumentType, in_mOutputActualParameterExpression, inCompiler) ;
  const GGS_outputActualParameterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::
outputActualParameterForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                 const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration::GGS_outputActualParameterForGeneration (const cPtr_outputActualParameterForGeneration * inSourcePtr) :
GGS_actualParameterForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputActualParameterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_outputActualParameterForGeneration::readProperty_mOutputActualParameterExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_outputActualParameterForGeneration * p = (cPtr_outputActualParameterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputActualParameterForGeneration) ;
    return p->mProperty_mOutputActualParameterExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputActualParameterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_outputActualParameterForGeneration::cPtr_outputActualParameterForGeneration (const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mOutputActualParameterExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_actualParameterForGeneration (in_mFormalArgumentType, inCompiler COMMA_THERE),
mProperty_mOutputActualParameterExpression () {
  mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  mProperty_mOutputActualParameterExpression = in_mOutputActualParameterExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_outputActualParameterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

void cPtr_outputActualParameterForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@outputActualParameterForGeneration:") ;
  mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutputActualParameterExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_outputActualParameterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputActualParameterForGeneration (mProperty_mFormalArgumentType, mProperty_mOutputActualParameterExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputActualParameterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOutputActualParameterExpression.printNonNullClassInstanceProperties ("mOutputActualParameterExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @outputActualParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outputActualParameterForGeneration ("outputActualParameterForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_actualParameterForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outputActualParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outputActualParameterForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outputActualParameterForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outputActualParameterForGeneration GGS_outputActualParameterForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_outputActualParameterForGeneration result ;
  const GGS_outputActualParameterForGeneration * p = (const GGS_outputActualParameterForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outputActualParameterForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionPrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_functionPrototypeDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak & GGS_functionPrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_functionPrototypeDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak::GGS_functionPrototypeDeclarationForGeneration_2E_weak (const GGS_functionPrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionPrototypeDeclarationForGeneration * p = (cPtr_functionPrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionPrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration GGS_functionPrototypeDeclarationForGeneration_2E_weak::bang_functionPrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionPrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionPrototypeDeclarationForGeneration) ;
      result = GGS_functionPrototypeDeclarationForGeneration ((cPtr_functionPrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionPrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ("functionPrototypeDeclarationForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionPrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionPrototypeDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionPrototypeDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionPrototypeDeclarationForGeneration_2E_weak GGS_functionPrototypeDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_functionPrototypeDeclarationForGeneration_2E_weak result ;
  const GGS_functionPrototypeDeclarationForGeneration_2E_weak * p = (const GGS_functionPrototypeDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionPrototypeDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionPrototypeDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_functionImplementationForGeneration_2E_weak::objectCompare (const GGS_functionImplementationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (void) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak & GGS_functionImplementationForGeneration_2E_weak::operator = (const GGS_functionImplementationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak::GGS_functionImplementationForGeneration_2E_weak (const GGS_functionImplementationForGeneration & inSource) :
GGS_functionPrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_functionImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_functionImplementationForGeneration * p = (cPtr_functionImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_functionImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration GGS_functionImplementationForGeneration_2E_weak::bang_functionImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_functionImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionImplementationForGeneration) ;
      result = GGS_functionImplementationForGeneration ((cPtr_functionImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @functionImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ("functionImplementationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_functionImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_functionImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_functionImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_functionImplementationForGeneration_2E_weak GGS_functionImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_functionImplementationForGeneration_2E_weak result ;
  const GGS_functionImplementationForGeneration_2E_weak * p = (const GGS_functionImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_functionImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_onceFunctionDeclarationForGeneration_2E_weak::objectCompare (const GGS_onceFunctionDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak & GGS_onceFunctionDeclarationForGeneration_2E_weak::operator = (const GGS_onceFunctionDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak::GGS_onceFunctionDeclarationForGeneration_2E_weak (const GGS_onceFunctionDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_onceFunctionDeclarationForGeneration * p = (cPtr_onceFunctionDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_onceFunctionDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration GGS_onceFunctionDeclarationForGeneration_2E_weak::bang_onceFunctionDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_onceFunctionDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationForGeneration) ;
      result = GGS_onceFunctionDeclarationForGeneration ((cPtr_onceFunctionDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @onceFunctionDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ("onceFunctionDeclarationForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_onceFunctionDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_onceFunctionDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_onceFunctionDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_onceFunctionDeclarationForGeneration_2E_weak GGS_onceFunctionDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_onceFunctionDeclarationForGeneration_2E_weak result ;
  const GGS_onceFunctionDeclarationForGeneration_2E_weak * p = (const GGS_onceFunctionDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_onceFunctionDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperDeclarationForGeneration_2E_weak::objectCompare (const GGS_filewrapperDeclarationForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak & GGS_filewrapperDeclarationForGeneration_2E_weak::operator = (const GGS_filewrapperDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak::GGS_filewrapperDeclarationForGeneration_2E_weak (const GGS_filewrapperDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_filewrapperDeclarationForGeneration * p = (cPtr_filewrapperDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration GGS_filewrapperDeclarationForGeneration_2E_weak::bang_filewrapperDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationForGeneration) ;
      result = GGS_filewrapperDeclarationForGeneration ((cPtr_filewrapperDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ("filewrapperDeclarationForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperDeclarationForGeneration_2E_weak GGS_filewrapperDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_filewrapperDeclarationForGeneration_2E_weak result ;
  const GGS_filewrapperDeclarationForGeneration_2E_weak * p = (const GGS_filewrapperDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_programComponentForGeneration_2E_weak::objectCompare (const GGS_programComponentForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak & GGS_programComponentForGeneration_2E_weak::operator = (const GGS_programComponentForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak::GGS_programComponentForGeneration_2E_weak (const GGS_programComponentForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_programComponentForGeneration result ;
  if (isValid ()) {
    const cPtr_programComponentForGeneration * p = (cPtr_programComponentForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_programComponentForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration GGS_programComponentForGeneration_2E_weak::bang_programComponentForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_programComponentForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_programComponentForGeneration) ;
      result = GGS_programComponentForGeneration ((cPtr_programComponentForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @programComponentForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ("programComponentForGeneration.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_programComponentForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programComponentForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programComponentForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programComponentForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programComponentForGeneration_2E_weak GGS_programComponentForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_programComponentForGeneration_2E_weak result ;
  const GGS_programComponentForGeneration_2E_weak * p = (const GGS_programComponentForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programComponentForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programComponentForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @arrayTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayTypeDeclarationAST::objectCompare (const GGS_arrayTypeDeclarationAST & inOperand) const {
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

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::
init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_arrayTypeName,
                                                        const GGS_lstring & in_elementTypeName,
                                                        const GGS_bool & in_isUsefull,
                                                        const GGS_bool & in_equatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cPtr_arrayTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_arrayTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (in_isPredefined, in_arrayTypeName, in_elementTypeName, in_isUsefull, in_equatable, inCompiler) ;
  const GGS_arrayTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayTypeDeclarationAST::
arrayTypeDeclarationAST_init_21_isPredefined_21__21__21_isUsefull_21_equatable (const GGS_bool & in_isPredefined,
                                                                                const GGS_lstring & in_arrayTypeName,
                                                                                const GGS_lstring & in_elementTypeName,
                                                                                const GGS_bool & in_isUsefull,
                                                                                const GGS_bool & in_equatable,
                                                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST::GGS_arrayTypeDeclarationAST (const cPtr_arrayTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_arrayTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_arrayTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_arrayTypeDeclarationAST::readProperty_elementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_elementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayTypeDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_arrayTypeDeclarationAST * p = (cPtr_arrayTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayTypeDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayTypeDeclarationAST::cPtr_arrayTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_arrayTypeName,
                                                            const GGS_lstring & in_elementTypeName,
                                                            const GGS_bool & in_isUsefull,
                                                            const GGS_bool & in_equatable,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_arrayTypeName (),
mProperty_elementTypeName (),
mProperty_isUsefull (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_arrayTypeName = in_arrayTypeName ;
  mProperty_elementTypeName = in_elementTypeName ;
  mProperty_isUsefull = in_isUsefull ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

void cPtr_arrayTypeDeclarationAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_arrayTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_elementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_arrayTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayTypeDeclarationAST (mProperty_isPredefined, mProperty_arrayTypeName, mProperty_elementTypeName, mProperty_isUsefull, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_arrayTypeName.printNonNullClassInstanceProperties ("arrayTypeName") ;
    mProperty_elementTypeName.printNonNullClassInstanceProperties ("elementTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ("arrayTypeDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayTypeDeclarationAST GGS_arrayTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_arrayTypeDeclarationAST result ;
  const GGS_arrayTypeDeclarationAST * p = (const GGS_arrayTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @binarysetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST::objectCompare (const GGS_binarysetPredefinedTypeAST & inOperand) const {
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

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_binarysetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_binarysetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->binarysetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_binarysetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::
binarysetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST::GGS_binarysetPredefinedTypeAST (const cPtr_binarysetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_binarysetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @binarysetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_binarysetPredefinedTypeAST::cPtr_binarysetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_binarysetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

void cPtr_binarysetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@binarysetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_binarysetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_binarysetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_binarysetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ("binarysetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST result ;
  const GGS_binarysetPredefinedTypeAST * p = (const GGS_binarysetPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_binarysetPredefinedTypeAST_2E_weak::objectCompare (const GGS_binarysetPredefinedTypeAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
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

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak & GGS_binarysetPredefinedTypeAST_2E_weak::operator = (const GGS_binarysetPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak::GGS_binarysetPredefinedTypeAST_2E_weak (const GGS_binarysetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_binarysetPredefinedTypeAST * p = (cPtr_binarysetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_binarysetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST GGS_binarysetPredefinedTypeAST_2E_weak::bang_binarysetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_binarysetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_binarysetPredefinedTypeAST) ;
      result = GGS_binarysetPredefinedTypeAST ((cPtr_binarysetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @binarysetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ("binarysetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_binarysetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_binarysetPredefinedTypeAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_binarysetPredefinedTypeAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_binarysetPredefinedTypeAST_2E_weak GGS_binarysetPredefinedTypeAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_binarysetPredefinedTypeAST_2E_weak result ;
  const GGS_binarysetPredefinedTypeAST_2E_weak * p = (const GGS_binarysetPredefinedTypeAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_binarysetPredefinedTypeAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("binarysetPredefinedTypeAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structDeclarationAST::objectCompare (const GGS_structDeclarationAST & inOperand) const {
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

GGS_structDeclarationAST::GGS_structDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::
init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                            const GGS_lstring & in_structTypeName,
                                                                                            const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                            const GGS_string & in_enumeratedElementTypeName,
                                                                                            const GGS_structComparison & in_comparison,
                                                                                            const GGS_bool & in_isUsefullStruct,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_structDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_structDeclarationAST (inCompiler COMMA_THERE)) ;
  object->structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (in_isPredefined, in_structTypeName, in_mStructurePropertyListAST, in_enumeratedElementTypeName, in_comparison, in_isUsefullStruct, inCompiler) ;
  const GGS_structDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structDeclarationAST::
structDeclarationAST_init_21_isPredefined_21__21__21_enumeratedElementTypeName_21_comparison_21_isUsefullStruct (const GGS_bool & in_isPredefined,
                                                                                                                 const GGS_lstring & in_structTypeName,
                                                                                                                 const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                                                                                 const GGS_string & in_enumeratedElementTypeName,
                                                                                                                 const GGS_structComparison & in_comparison,
                                                                                                                 const GGS_bool & in_isUsefullStruct,
                                                                                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST::GGS_structDeclarationAST (const cPtr_structDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structDeclarationAST::readProperty_structTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_structTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_structDeclarationAST::readProperty_mStructurePropertyListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_mStructurePropertyListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_structDeclarationAST::readProperty_enumeratedElementTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_enumeratedElementTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_structDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_structDeclarationAST::readProperty_isUsefullStruct (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_structDeclarationAST * p = (cPtr_structDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structDeclarationAST) ;
    return p->mProperty_isUsefullStruct ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structDeclarationAST::cPtr_structDeclarationAST (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_structTypeName,
                                                      const GGS_propertyInCollectionListAST & in_mStructurePropertyListAST,
                                                      const GGS_string & in_enumeratedElementTypeName,
                                                      const GGS_structComparison & in_comparison,
                                                      const GGS_bool & in_isUsefullStruct,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_structTypeName (),
mProperty_mStructurePropertyListAST (),
mProperty_enumeratedElementTypeName (),
mProperty_comparison (),
mProperty_isUsefullStruct () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_structTypeName = in_structTypeName ;
  mProperty_mStructurePropertyListAST = in_mStructurePropertyListAST ;
  mProperty_enumeratedElementTypeName = in_enumeratedElementTypeName ;
  mProperty_comparison = in_comparison ;
  mProperty_isUsefullStruct = in_isUsefullStruct ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

void cPtr_structDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@structDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_structTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructurePropertyListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumeratedElementTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefullStruct.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structDeclarationAST (mProperty_isPredefined, mProperty_structTypeName, mProperty_mStructurePropertyListAST, mProperty_enumeratedElementTypeName, mProperty_comparison, mProperty_isUsefullStruct, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_structTypeName.printNonNullClassInstanceProperties ("structTypeName") ;
    mProperty_mStructurePropertyListAST.printNonNullClassInstanceProperties ("mStructurePropertyListAST") ;
    mProperty_enumeratedElementTypeName.printNonNullClassInstanceProperties ("enumeratedElementTypeName") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
    mProperty_isUsefullStruct.printNonNullClassInstanceProperties ("isUsefullStruct") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structDeclarationAST ("structDeclarationAST",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structDeclarationAST GGS_structDeclarationAST::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_structDeclarationAST result ;
  const GGS_structDeclarationAST * p = (const GGS_structDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @listDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_listDeclarationAST::objectCompare (const GGS_listDeclarationAST & inOperand) const {
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

GGS_listDeclarationAST::GGS_listDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::
init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                          const GGS_lstring & in_mListTypeName,
                                                          const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                          const GGS_bool & in_usefullList,
                                                          const GGS_bool & in_equatable,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_listDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_listDeclarationAST (inCompiler COMMA_THERE)) ;
  object->listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (in_isPredefined, in_mListTypeName, in_mPropertyList, in_usefullList, in_equatable, inCompiler) ;
  const GGS_listDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_listDeclarationAST::
listDeclarationAST_init_21_isPredefined_21__21__21_usefullList_21_equatable (const GGS_bool & in_isPredefined,
                                                                             const GGS_lstring & in_mListTypeName,
                                                                             const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                             const GGS_bool & in_usefullList,
                                                                             const GGS_bool & in_equatable,
                                                                             Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST::GGS_listDeclarationAST (const cPtr_listDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_listDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_listDeclarationAST::readProperty_mListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_listDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_usefullList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_usefullList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_listDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_listDeclarationAST * p = (cPtr_listDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_listDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @listDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_listDeclarationAST::cPtr_listDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mListTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_usefullList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mListTypeName (),
mProperty_mPropertyList (),
mProperty_usefullList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mListTypeName = in_mListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_usefullList = in_usefullList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_listDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

void cPtr_listDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@listDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_listDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_listDeclarationAST (mProperty_isPredefined, mProperty_mListTypeName, mProperty_mPropertyList, mProperty_usefullList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_listDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mListTypeName.printNonNullClassInstanceProperties ("mListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_usefullList.printNonNullClassInstanceProperties ("usefullList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @listDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listDeclarationAST ("listDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_listDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_listDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listDeclarationAST GGS_listDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_listDeclarationAST result ;
  const GGS_listDeclarationAST * p = (const GGS_listDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_listDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @weakReferenceDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_weakReferenceDeclarationAST::objectCompare (const GGS_weakReferenceDeclarationAST & inOperand) const {
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

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::
init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                      const GGS_lstring & in_mClassTypeName,
                                      const GGS_lstring & in_mWeakReferenceTypeName,
                                      const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                      const GGS_bool & in_mGenerateInSeparateFile,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_weakReferenceDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_weakReferenceDeclarationAST (inCompiler COMMA_THERE)) ;
  object->weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (in_isPredefined, in_mClassTypeName, in_mWeakReferenceTypeName, in_mSuperWeakReferenceTypeName, in_mGenerateInSeparateFile, inCompiler) ;
  const GGS_weakReferenceDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_weakReferenceDeclarationAST::
weakReferenceDeclarationAST_init_21_isPredefined_21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mClassTypeName,
                                                                  const GGS_lstring & in_mWeakReferenceTypeName,
                                                                  const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST::GGS_weakReferenceDeclarationAST (const cPtr_weakReferenceDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_weakReferenceDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_weakReferenceDeclarationAST::readProperty_mSuperWeakReferenceTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mSuperWeakReferenceTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_weakReferenceDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_weakReferenceDeclarationAST * p = (cPtr_weakReferenceDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_weakReferenceDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @weakReferenceDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
}

//--------------------------------------------------------------------------------------------------

cPtr_weakReferenceDeclarationAST::cPtr_weakReferenceDeclarationAST (const GGS_bool & in_isPredefined,
                                                                    const GGS_lstring & in_mClassTypeName,
                                                                    const GGS_lstring & in_mWeakReferenceTypeName,
                                                                    const GGS_lstring & in_mSuperWeakReferenceTypeName,
                                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mClassTypeName (),
mProperty_mWeakReferenceTypeName (),
mProperty_mSuperWeakReferenceTypeName (),
mProperty_mGenerateInSeparateFile () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mWeakReferenceTypeName = in_mWeakReferenceTypeName ;
  mProperty_mSuperWeakReferenceTypeName = in_mSuperWeakReferenceTypeName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_weakReferenceDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

void cPtr_weakReferenceDeclarationAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@weakReferenceDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperWeakReferenceTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_weakReferenceDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_weakReferenceDeclarationAST (mProperty_isPredefined, mProperty_mClassTypeName, mProperty_mWeakReferenceTypeName, mProperty_mSuperWeakReferenceTypeName, mProperty_mGenerateInSeparateFile, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_weakReferenceDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mWeakReferenceTypeName.printNonNullClassInstanceProperties ("mWeakReferenceTypeName") ;
    mProperty_mSuperWeakReferenceTypeName.printNonNullClassInstanceProperties ("mSuperWeakReferenceTypeName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @weakReferenceDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ("weakReferenceDeclarationAST",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_weakReferenceDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_weakReferenceDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_weakReferenceDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_weakReferenceDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_weakReferenceDeclarationAST GGS_weakReferenceDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_weakReferenceDeclarationAST result ;
  const GGS_weakReferenceDeclarationAST * p = (const GGS_weakReferenceDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_weakReferenceDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("weakReferenceDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (void) :
mProperty_weakQualifier (),
mProperty_typeName (),
mProperty_valueName () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_associatedValue & inSource) :
mProperty_weakQualifier (inSource.mProperty_weakQualifier),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_valueName (inSource.mProperty_valueName) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue & GGS_associatedValue::operator = (const GGS_associatedValue & inSource) {
  mProperty_weakQualifier = inSource.mProperty_weakQualifier ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_valueName = inSource.mProperty_valueName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::init_21__21__21_ (const GGS_bool & in_weakQualifier,
                                                           const GGS_lstring & in_typeName,
                                                           const GGS_lstring & in_valueName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_weakQualifier = in_weakQualifier ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_valueName = in_valueName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue::GGS_associatedValue (const GGS_bool & inOperand0,
                                          const GGS_lstring & inOperand1,
                                          const GGS_lstring & inOperand2) :
mProperty_weakQualifier (inOperand0),
mProperty_typeName (inOperand1),
mProperty_valueName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValue::isValid (void) const {
  return mProperty_weakQualifier.isValid () && mProperty_typeName.isValid () && mProperty_valueName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::drop (void) {
  mProperty_weakQualifier.drop () ;
  mProperty_typeName.drop () ;
  mProperty_valueName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValue::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_weakQualifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValue ("associatedValue",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_associatedValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_associatedValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValue GGS_associatedValue::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_associatedValue result ;
  const GGS_associatedValue * p = (const GGS_associatedValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_associatedValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("associatedValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumDeclarationAST::objectCompare (const GGS_enumDeclarationAST & inOperand) const {
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

GGS_enumDeclarationAST::GGS_enumDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::
init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                            const GGS_lstring & in_enumTypeName,
                                            const GGS_enumConstantList & in_mConstantList,
                                            const GGS_structComparison & in_comparison,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  cPtr_enumDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_enumDeclarationAST (inCompiler COMMA_THERE)) ;
  object->enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (in_isPredefined, in_enumTypeName, in_mConstantList, in_comparison, inCompiler) ;
  const GGS_enumDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumDeclarationAST::
enumDeclarationAST_init_21_isPredefined_21__21__21_comparison (const GGS_bool & in_isPredefined,
                                                               const GGS_lstring & in_enumTypeName,
                                                               const GGS_enumConstantList & in_mConstantList,
                                                               const GGS_structComparison & in_comparison,
                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST::GGS_enumDeclarationAST (const cPtr_enumDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_enumDeclarationAST::readProperty_enumTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_enumTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantList GGS_enumDeclarationAST::readProperty_mConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumConstantList () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_mConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_structComparison GGS_enumDeclarationAST::readProperty_comparison (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_structComparison () ;
  }else{
    cPtr_enumDeclarationAST * p = (cPtr_enumDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclarationAST) ;
    return p->mProperty_comparison ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumDeclarationAST::cPtr_enumDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_enumTypeName,
                                                  const GGS_enumConstantList & in_mConstantList,
                                                  const GGS_structComparison & in_comparison,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_enumTypeName (),
mProperty_mConstantList (),
mProperty_comparison () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_enumTypeName = in_enumTypeName ;
  mProperty_mConstantList = in_mConstantList ;
  mProperty_comparison = in_comparison ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

void cPtr_enumDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@enumDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_enumTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_comparison.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_enumDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumDeclarationAST (mProperty_isPredefined, mProperty_enumTypeName, mProperty_mConstantList, mProperty_comparison, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_enumTypeName.printNonNullClassInstanceProperties ("enumTypeName") ;
    mProperty_mConstantList.printNonNullClassInstanceProperties ("mConstantList") ;
    mProperty_comparison.printNonNullClassInstanceProperties ("comparison") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumDeclarationAST ("enumDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumDeclarationAST GGS_enumDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_enumDeclarationAST result ;
  const GGS_enumDeclarationAST * p = (const GGS_enumDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @graphDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_graphDeclarationAST::objectCompare (const GGS_graphDeclarationAST & inOperand) const {
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

GGS_graphDeclarationAST::GGS_graphDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mGraphTypeName,
                                  const GGS_lstring & in_mAssociatedListTypeName,
                                  const GGS_graphInsertModifierList & in_mInsertModifierList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_graphDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_graphDeclarationAST (inCompiler COMMA_THERE)) ;
  object->graphDeclarationAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mGraphTypeName, in_mAssociatedListTypeName, in_mInsertModifierList, inCompiler) ;
  const GGS_graphDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_graphDeclarationAST::
graphDeclarationAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lstring & in_mGraphTypeName,
                                                      const GGS_lstring & in_mAssociatedListTypeName,
                                                      const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST::GGS_graphDeclarationAST (const cPtr_graphDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_graphDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mGraphTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mGraphTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_graphDeclarationAST::readProperty_mAssociatedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mAssociatedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_graphInsertModifierList GGS_graphDeclarationAST::readProperty_mInsertModifierList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_graphInsertModifierList () ;
  }else{
    cPtr_graphDeclarationAST * p = (cPtr_graphDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_graphDeclarationAST) ;
    return p->mProperty_mInsertModifierList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @graphDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_graphDeclarationAST::cPtr_graphDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mGraphTypeName,
                                                    const GGS_lstring & in_mAssociatedListTypeName,
                                                    const GGS_graphInsertModifierList & in_mInsertModifierList,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mGraphTypeName (),
mProperty_mAssociatedListTypeName (),
mProperty_mInsertModifierList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mGraphTypeName = in_mGraphTypeName ;
  mProperty_mAssociatedListTypeName = in_mAssociatedListTypeName ;
  mProperty_mInsertModifierList = in_mInsertModifierList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_graphDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

void cPtr_graphDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@graphDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGraphTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssociatedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertModifierList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_graphDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_graphDeclarationAST (mProperty_isPredefined, mProperty_mGraphTypeName, mProperty_mAssociatedListTypeName, mProperty_mInsertModifierList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_graphDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mGraphTypeName.printNonNullClassInstanceProperties ("mGraphTypeName") ;
    mProperty_mAssociatedListTypeName.printNonNullClassInstanceProperties ("mAssociatedListTypeName") ;
    mProperty_mInsertModifierList.printNonNullClassInstanceProperties ("mInsertModifierList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @graphDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphDeclarationAST ("graphDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphDeclarationAST GGS_graphDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_graphDeclarationAST result ;
  const GGS_graphDeclarationAST * p = (const GGS_graphDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionalTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionalTypeDeclarationAST::objectCompare (const GGS_optionalTypeDeclarationAST & inOperand) const {
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

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::
init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                            const GGS_lstring & in_optionalTypeName,
                                                                            const GGS_lstring & in_unwrappedTypeName,
                                                                            const GGS_bool & in_isUsefull,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cPtr_optionalTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionalTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (in_isPredefined, in_optionalTypeName, in_unwrappedTypeName, in_isUsefull, inCompiler) ;
  const GGS_optionalTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionalTypeDeclarationAST::
optionalTypeDeclarationAST_init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (const GGS_bool & in_isPredefined,
                                                                                                       const GGS_lstring & in_optionalTypeName,
                                                                                                       const GGS_lstring & in_unwrappedTypeName,
                                                                                                       const GGS_bool & in_isUsefull,
                                                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST::GGS_optionalTypeDeclarationAST (const cPtr_optionalTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionalTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_optionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_optionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionalTypeDeclarationAST::readProperty_unwrappedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_unwrappedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalTypeDeclarationAST::readProperty_isUsefull (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionalTypeDeclarationAST * p = (cPtr_optionalTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionalTypeDeclarationAST) ;
    return p->mProperty_isUsefull ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionalTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionalTypeDeclarationAST::cPtr_optionalTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_optionalTypeName,
                                                                  const GGS_lstring & in_unwrappedTypeName,
                                                                  const GGS_bool & in_isUsefull,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_optionalTypeName (),
mProperty_unwrappedTypeName (),
mProperty_isUsefull () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_optionalTypeName = in_optionalTypeName ;
  mProperty_unwrappedTypeName = in_unwrappedTypeName ;
  mProperty_isUsefull = in_isUsefull ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionalTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

void cPtr_optionalTypeDeclarationAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@optionalTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_optionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_unwrappedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isUsefull.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionalTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionalTypeDeclarationAST (mProperty_isPredefined, mProperty_optionalTypeName, mProperty_unwrappedTypeName, mProperty_isUsefull, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionalTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_optionalTypeName.printNonNullClassInstanceProperties ("optionalTypeName") ;
    mProperty_unwrappedTypeName.printNonNullClassInstanceProperties ("unwrappedTypeName") ;
    mProperty_isUsefull.printNonNullClassInstanceProperties ("isUsefull") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionalTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ("optionalTypeDeclarationAST",
                                                                               & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalTypeDeclarationAST GGS_optionalTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionalTypeDeclarationAST result ;
  const GGS_optionalTypeDeclarationAST * p = (const GGS_optionalTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapDeclarationAST::objectCompare (const GGS_mapDeclarationAST & inOperand) const {
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

GGS_mapDeclarationAST::GGS_mapDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mMapTypeName,
                                                                   const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                   const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                   const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                   const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                   const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                   const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                   const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                   const GGS_bool & in_equatable,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cPtr_mapDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_mapDeclarationAST (inCompiler COMMA_THERE)) ;
  object->mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (in_isPredefined, in_mMapTypeName, in_mPropertyList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mInsertOrReplaceDeclarationListAST, in_equatable, inCompiler) ;
  const GGS_mapDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapDeclarationAST::
mapDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                                     const GGS_lstring & in_mMapTypeName,
                                                                                     const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                                     const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                                     const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                                     const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                                     const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                                     const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                                                     const GGS_bool & in_equatable,
                                                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST::GGS_mapDeclarationAST (const cPtr_mapDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapDeclarationAST::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_mapDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapDeclarationAST::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapDeclarationAST::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertOrReplaceDeclarationListAST GGS_mapDeclarationAST::readProperty_mInsertOrReplaceDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertOrReplaceDeclarationListAST () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_mInsertOrReplaceDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapDeclarationAST * p = (cPtr_mapDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapDeclarationAST::cPtr_mapDeclarationAST (const GGS_bool & in_isPredefined,
                                                const GGS_lstring & in_mMapTypeName,
                                                const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                const GGS_insertSetterListAST & in_mInsertSetterList,
                                                const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                const GGS_insertOrReplaceDeclarationListAST & in_mInsertOrReplaceDeclarationListAST,
                                                const GGS_bool & in_equatable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mMapTypeName (),
mProperty_mPropertyList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mInsertOrReplaceDeclarationListAST (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mInsertOrReplaceDeclarationListAST = in_mInsertOrReplaceDeclarationListAST ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

void cPtr_mapDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@mapDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertOrReplaceDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapDeclarationAST (mProperty_isPredefined, mProperty_mMapTypeName, mProperty_mPropertyList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mInsertOrReplaceDeclarationListAST, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mInsertOrReplaceDeclarationListAST.printNonNullClassInstanceProperties ("mInsertOrReplaceDeclarationListAST") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapDeclarationAST ("mapDeclarationAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapDeclarationAST GGS_mapDeclarationAST::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_mapDeclarationAST result ;
  const GGS_mapDeclarationAST * p = (const GGS_mapDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @mapTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_mapTypeForGeneration::objectCompare (const GGS_mapTypeForGeneration & inOperand) const {
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

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::
init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                 const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                 const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                 const GGS_lstring & in_mMapTypeName,
                                                                 const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                 const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                 const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                 const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                 const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                 const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                 const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                 const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cPtr_mapTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_mapTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->mapTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mElementTypeEntry, in_mMapTypeName, in_mTypedAttributeList, in_mInsertSetterList, in_mSearchMethodList, in_mSearchSubscriptList, in_mRemoveSetterList, in_mReplaceSetterList, in_mHasInsertOrReplaceModifier, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_mapTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_mapTypeForGeneration::
mapTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                      const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                                      const GGS_lstring & in_mMapTypeName,
                                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GGS_insertSetterListAST & in_mInsertSetterList,
                                                                                      const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                                                      const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                                                      const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                                                      const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration::GGS_mapTypeForGeneration (const cPtr_mapTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_mapTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_mapTypeForGeneration::readProperty_mMapTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mMapTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_mapTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_insertSetterListAST GGS_mapTypeForGeneration::readProperty_mInsertSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_insertSetterListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mInsertSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mSearchSubscriptList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mSearchSubscriptList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mRemoveSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mRemoveSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mapAccessorListAST GGS_mapTypeForGeneration::readProperty_mReplaceSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mapAccessorListAST () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mReplaceSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mapTypeForGeneration::readProperty_mHasInsertOrReplaceModifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mHasInsertOrReplaceModifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_mapTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_mapTypeForGeneration * p = (cPtr_mapTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_mapTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @mapTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_mapTypeForGeneration::cPtr_mapTypeForGeneration (const GGS_string & in_infoMessage,
                                                      const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                      const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                      const GGS_lstring & in_mMapTypeName,
                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                      const GGS_insertSetterListAST & in_mInsertSetterList,
                                                      const GGS_mapAccessorListAST & in_mSearchMethodList,
                                                      const GGS_mapAccessorListAST & in_mSearchSubscriptList,
                                                      const GGS_mapAccessorListAST & in_mRemoveSetterList,
                                                      const GGS_mapAccessorListAST & in_mReplaceSetterList,
                                                      const GGS_bool & in_mHasInsertOrReplaceModifier,
                                                      const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mMapTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mInsertSetterList (),
mProperty_mSearchMethodList (),
mProperty_mSearchSubscriptList (),
mProperty_mRemoveSetterList (),
mProperty_mReplaceSetterList (),
mProperty_mHasInsertOrReplaceModifier (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mMapTypeName = in_mMapTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mInsertSetterList = in_mInsertSetterList ;
  mProperty_mSearchMethodList = in_mSearchMethodList ;
  mProperty_mSearchSubscriptList = in_mSearchSubscriptList ;
  mProperty_mRemoveSetterList = in_mRemoveSetterList ;
  mProperty_mReplaceSetterList = in_mReplaceSetterList ;
  mProperty_mHasInsertOrReplaceModifier = in_mHasInsertOrReplaceModifier ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_mapTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

void cPtr_mapTypeForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@mapTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMapTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInsertSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSearchSubscriptList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRemoveSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReplaceSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasInsertOrReplaceModifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_mapTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_mapTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mMapTypeName, mProperty_mTypedAttributeList, mProperty_mInsertSetterList, mProperty_mSearchMethodList, mProperty_mSearchSubscriptList, mProperty_mRemoveSetterList, mProperty_mReplaceSetterList, mProperty_mHasInsertOrReplaceModifier, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_mapTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mMapTypeName.printNonNullClassInstanceProperties ("mMapTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mInsertSetterList.printNonNullClassInstanceProperties ("mInsertSetterList") ;
    mProperty_mSearchMethodList.printNonNullClassInstanceProperties ("mSearchMethodList") ;
    mProperty_mSearchSubscriptList.printNonNullClassInstanceProperties ("mSearchSubscriptList") ;
    mProperty_mRemoveSetterList.printNonNullClassInstanceProperties ("mRemoveSetterList") ;
    mProperty_mReplaceSetterList.printNonNullClassInstanceProperties ("mReplaceSetterList") ;
    mProperty_mHasInsertOrReplaceModifier.printNonNullClassInstanceProperties ("mHasInsertOrReplaceModifier") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @mapTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mapTypeForGeneration ("mapTypeForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mapTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mapTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mapTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mapTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mapTypeForGeneration GGS_mapTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_mapTypeForGeneration result ;
  const GGS_mapTypeForGeneration * p = (const GGS_mapTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mapTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mapTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @boolsetDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolsetDeclarationAST::objectCompare (const GGS_boolsetDeclarationAST & inOperand) const {
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

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::
init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                             const GGS_lstring & in_mBoolsetTypeName,
                                             const GGS_lstringlist & in_mFlagList,
                                             const GGS_bool & in_isEquatable,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_boolsetDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_boolsetDeclarationAST (inCompiler COMMA_THERE)) ;
  object->boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (in_isPredefined, in_mBoolsetTypeName, in_mFlagList, in_isEquatable, inCompiler) ;
  const GGS_boolsetDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolsetDeclarationAST::
boolsetDeclarationAST_init_21_isPredefined_21__21__21_isEquatable (const GGS_bool & in_isPredefined,
                                                                   const GGS_lstring & in_mBoolsetTypeName,
                                                                   const GGS_lstringlist & in_mFlagList,
                                                                   const GGS_bool & in_isEquatable,
                                                                   Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST::GGS_boolsetDeclarationAST (const cPtr_boolsetDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolsetDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_boolsetDeclarationAST::readProperty_mBoolsetTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mBoolsetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_boolsetDeclarationAST::readProperty_mFlagList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_mFlagList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_boolsetDeclarationAST::readProperty_isEquatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_boolsetDeclarationAST * p = (cPtr_boolsetDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolsetDeclarationAST) ;
    return p->mProperty_isEquatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolsetDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolsetDeclarationAST::cPtr_boolsetDeclarationAST (const GGS_bool & in_isPredefined,
                                                        const GGS_lstring & in_mBoolsetTypeName,
                                                        const GGS_lstringlist & in_mFlagList,
                                                        const GGS_bool & in_isEquatable,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mBoolsetTypeName (),
mProperty_mFlagList (),
mProperty_isEquatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mBoolsetTypeName = in_mBoolsetTypeName ;
  mProperty_mFlagList = in_mFlagList ;
  mProperty_isEquatable = in_isEquatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolsetDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

void cPtr_boolsetDeclarationAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@boolsetDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBoolsetTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFlagList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isEquatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_boolsetDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolsetDeclarationAST (mProperty_isPredefined, mProperty_mBoolsetTypeName, mProperty_mFlagList, mProperty_isEquatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolsetDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mBoolsetTypeName.printNonNullClassInstanceProperties ("mBoolsetTypeName") ;
    mProperty_mFlagList.printNonNullClassInstanceProperties ("mFlagList") ;
    mProperty_isEquatable.printNonNullClassInstanceProperties ("isEquatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolsetDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolsetDeclarationAST ("boolsetDeclarationAST",
                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolsetDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolsetDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolsetDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolsetDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolsetDeclarationAST GGS_boolsetDeclarationAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_boolsetDeclarationAST result ;
  const GGS_boolsetDeclarationAST * p = (const GGS_boolsetDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolsetDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolsetDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classDeclarationAST::objectCompare (const GGS_classDeclarationAST & inOperand) const {
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

GGS_classDeclarationAST::GGS_classDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_mIsAbstract,
                                                  const GGS_bool & in_mIsFinal,
                                                  const GGS_lstring & in_mClassTypeName,
                                                  const GGS_lstring & in_mSuperClassName,
                                                  const GGS_bool & in_mGenerateInSeparateFile,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_clonable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_classDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_classDeclarationAST (inCompiler COMMA_THERE)) ;
  object->classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mIsAbstract, in_mIsFinal, in_mClassTypeName, in_mSuperClassName, in_mGenerateInSeparateFile, in_mPropertyList, in_clonable, inCompiler) ;
  const GGS_classDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classDeclarationAST::
classDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                      const GGS_bool & in_mIsAbstract,
                                                                      const GGS_bool & in_mIsFinal,
                                                                      const GGS_lstring & in_mClassTypeName,
                                                                      const GGS_lstring & in_mSuperClassName,
                                                                      const GGS_bool & in_mGenerateInSeparateFile,
                                                                      const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                      const GGS_bool & in_clonable,
                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST::GGS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mIsFinal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mIsFinal ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mClassTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mClassTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_mGenerateInSeparateFile (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mGenerateInSeparateFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_classDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classDeclarationAST::readProperty_clonable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classDeclarationAST * p = (cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    return p->mProperty_clonable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GGS_bool & in_isPredefined,
                                                    const GGS_bool & in_mIsAbstract,
                                                    const GGS_bool & in_mIsFinal,
                                                    const GGS_lstring & in_mClassTypeName,
                                                    const GGS_lstring & in_mSuperClassName,
                                                    const GGS_bool & in_mGenerateInSeparateFile,
                                                    const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                    const GGS_bool & in_clonable,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mIsAbstract (),
mProperty_mIsFinal (),
mProperty_mClassTypeName (),
mProperty_mSuperClassName (),
mProperty_mGenerateInSeparateFile (),
mProperty_mPropertyList (),
mProperty_clonable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mIsFinal = in_mIsFinal ;
  mProperty_mClassTypeName = in_mClassTypeName ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mGenerateInSeparateFile = in_mGenerateInSeparateFile ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_clonable = in_clonable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@classDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsFinal.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateInSeparateFile.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_clonable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_isPredefined, mProperty_mIsAbstract, mProperty_mIsFinal, mProperty_mClassTypeName, mProperty_mSuperClassName, mProperty_mGenerateInSeparateFile, mProperty_mPropertyList, mProperty_clonable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mIsFinal.printNonNullClassInstanceProperties ("mIsFinal") ;
    mProperty_mClassTypeName.printNonNullClassInstanceProperties ("mClassTypeName") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mGenerateInSeparateFile.printNonNullClassInstanceProperties ("mGenerateInSeparateFile") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_clonable.printNonNullClassInstanceProperties ("clonable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classDeclarationAST GGS_classDeclarationAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classDeclarationAST result ;
  const GGS_classDeclarationAST * p = (const GGS_classDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictDeclarationAST::objectCompare (const GGS_dictDeclarationAST & inOperand) const {
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

GGS_dictDeclarationAST::GGS_dictDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mDictTypeName,
                                               const GGS_lstring & in_mKeyTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_dictDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_dictDeclarationAST (inCompiler COMMA_THERE)) ;
  object->dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mDictTypeName, in_mKeyTypeName, in_mPropertyList, in_equatable, inCompiler) ;
  const GGS_dictDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictDeclarationAST::
dictDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mDictTypeName,
                                                                  const GGS_lstring & in_mKeyTypeName,
                                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                  const GGS_bool & in_equatable,
                                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST::GGS_dictDeclarationAST (const cPtr_dictDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictDeclarationAST::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_dictDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_dictDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_dictDeclarationAST * p = (cPtr_dictDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictDeclarationAST::cPtr_dictDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mDictTypeName,
                                                  const GGS_lstring & in_mKeyTypeName,
                                                  const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                  const GGS_bool & in_equatable,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mDictTypeName (),
mProperty_mKeyTypeName (),
mProperty_mPropertyList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

void cPtr_dictDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dictDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dictDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictDeclarationAST (mProperty_isPredefined, mProperty_mDictTypeName, mProperty_mKeyTypeName, mProperty_mPropertyList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictDeclarationAST ("dictDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictDeclarationAST GGS_dictDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dictDeclarationAST result ;
  const GGS_dictDeclarationAST * p = (const GGS_dictDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dictTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dictTypeForGeneration::objectCompare (const GGS_dictTypeForGeneration & inOperand) const {
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

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::
init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                             const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                             const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                             const GGS_lstring & in_mDictTypeName,
                                             const GGS_typedPropertyList & in_mTypedAttributeList,
                                             const GGS_lstring & in_mKeyTypeName,
                                             const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  cPtr_dictTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_dictTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->dictTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (in_infoMessage, in_mSelfTypeEntry, in_mElementTypeEntry, in_mDictTypeName, in_mTypedAttributeList, in_mKeyTypeName, in_mOptionalElementTypeEntry, inCompiler) ;
  const GGS_dictTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dictTypeForGeneration::
dictTypeForGeneration_init_21_infoMessage_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                   const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                   const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                                   const GGS_lstring & in_mDictTypeName,
                                                                   const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                   const GGS_lstring & in_mKeyTypeName,
                                                                   const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                                   Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration::GGS_dictTypeForGeneration (const cPtr_dictTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dictTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mDictTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mDictTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_dictTypeForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_dictTypeForGeneration::readProperty_mKeyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mKeyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_dictTypeForGeneration::readProperty_mOptionalElementTypeEntry (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_dictTypeForGeneration * p = (cPtr_dictTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dictTypeForGeneration) ;
    return p->mProperty_mOptionalElementTypeEntry ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dictTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dictTypeForGeneration::cPtr_dictTypeForGeneration (const GGS_string & in_infoMessage,
                                                        const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                        const GGS_unifiedTypeMapEntry & in_mElementTypeEntry,
                                                        const GGS_lstring & in_mDictTypeName,
                                                        const GGS_typedPropertyList & in_mTypedAttributeList,
                                                        const GGS_lstring & in_mKeyTypeName,
                                                        const GGS_unifiedTypeMapEntry & in_mOptionalElementTypeEntry,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mElementTypeEntry (),
mProperty_mDictTypeName (),
mProperty_mTypedAttributeList (),
mProperty_mKeyTypeName (),
mProperty_mOptionalElementTypeEntry () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mElementTypeEntry = in_mElementTypeEntry ;
  mProperty_mDictTypeName = in_mDictTypeName ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mKeyTypeName = in_mKeyTypeName ;
  mProperty_mOptionalElementTypeEntry = in_mOptionalElementTypeEntry ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dictTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

void cPtr_dictTypeForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dictTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDictTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKeyTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalElementTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dictTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dictTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mElementTypeEntry, mProperty_mDictTypeName, mProperty_mTypedAttributeList, mProperty_mKeyTypeName, mProperty_mOptionalElementTypeEntry, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dictTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mElementTypeEntry.printNonNullClassInstanceProperties ("mElementTypeEntry") ;
    mProperty_mDictTypeName.printNonNullClassInstanceProperties ("mDictTypeName") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mKeyTypeName.printNonNullClassInstanceProperties ("mKeyTypeName") ;
    mProperty_mOptionalElementTypeEntry.printNonNullClassInstanceProperties ("mOptionalElementTypeEntry") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dictTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dictTypeForGeneration ("dictTypeForGeneration",
                                                                          & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dictTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dictTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dictTypeForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dictTypeForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dictTypeForGeneration GGS_dictTypeForGeneration::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_dictTypeForGeneration result ;
  const GGS_dictTypeForGeneration * p = (const GGS_dictTypeForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dictTypeForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dictTypeForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @sortedListDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sortedListDeclarationAST::objectCompare (const GGS_sortedListDeclarationAST & inOperand) const {
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

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::
init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                               const GGS_lstring & in_mSortedListTypeName,
                                               const GGS_propertyInCollectionListAST & in_mPropertyList,
                                               const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                               const GGS_bool & in_equatable,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cPtr_sortedListDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_sortedListDeclarationAST (inCompiler COMMA_THERE)) ;
  object->sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (in_isPredefined, in_mSortedListTypeName, in_mPropertyList, in_mSortDescriptorList, in_equatable, inCompiler) ;
  const GGS_sortedListDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sortedListDeclarationAST::
sortedListDeclarationAST_init_21_isPredefined_21__21__21__21_equatable (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mSortedListTypeName,
                                                                        const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                                        const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                                        const GGS_bool & in_equatable,
                                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST::GGS_sortedListDeclarationAST (const cPtr_sortedListDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sortedListDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_sortedListDeclarationAST::readProperty_mSortedListTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortedListTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST GGS_sortedListDeclarationAST::readProperty_mPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyInCollectionListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListSortDescriptorListAST GGS_sortedListDeclarationAST::readProperty_mSortDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sortedListSortDescriptorListAST () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_mSortDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_sortedListDeclarationAST::readProperty_equatable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_sortedListDeclarationAST * p = (cPtr_sortedListDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_sortedListDeclarationAST) ;
    return p->mProperty_equatable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @sortedListDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_sortedListDeclarationAST::cPtr_sortedListDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mSortedListTypeName,
                                                              const GGS_propertyInCollectionListAST & in_mPropertyList,
                                                              const GGS_sortedListSortDescriptorListAST & in_mSortDescriptorList,
                                                              const GGS_bool & in_equatable,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mSortedListTypeName (),
mProperty_mPropertyList (),
mProperty_mSortDescriptorList (),
mProperty_equatable () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mSortedListTypeName = in_mSortedListTypeName ;
  mProperty_mPropertyList = in_mPropertyList ;
  mProperty_mSortDescriptorList = in_mSortDescriptorList ;
  mProperty_equatable = in_equatable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sortedListDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

void cPtr_sortedListDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@sortedListDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortedListTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSortDescriptorList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_equatable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_sortedListDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sortedListDeclarationAST (mProperty_isPredefined, mProperty_mSortedListTypeName, mProperty_mPropertyList, mProperty_mSortDescriptorList, mProperty_equatable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sortedListDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mSortedListTypeName.printNonNullClassInstanceProperties ("mSortedListTypeName") ;
    mProperty_mPropertyList.printNonNullClassInstanceProperties ("mPropertyList") ;
    mProperty_mSortDescriptorList.printNonNullClassInstanceProperties ("mSortDescriptorList") ;
    mProperty_equatable.printNonNullClassInstanceProperties ("equatable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sortedListDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedListDeclarationAST ("sortedListDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_sortedListDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_sortedListDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedListDeclarationAST GGS_sortedListDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_sortedListDeclarationAST result ;
  const GGS_sortedListDeclarationAST * p = (const GGS_sortedListDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_sortedListDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sortedListDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeNameFormalParameterNameList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_typeNameFormalParameterNameList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_typeNameFormalParameterNameList temp_0 = inObject ;
  UpEnumerator_typeNameFormalParameterNameList enumerator_12828 (temp_0) ;
  while (enumerator_12828.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_12828.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 324)), inCompiler  COMMA_SOURCE_FILE ("declaration-type-extern.galgas4", 324)) ;
    enumerator_12828.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @externTypeDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_externTypeDeclarationAST::objectCompare (const GGS_externTypeDeclarationAST & inOperand) const {
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

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mExternTypeName,
                                                  const GGS_string & in_mCppPreDeclarationCode,
                                                  const GGS_string & in_mCppClassCode,
                                                  const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                  const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                  const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                  const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_externTypeDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_externTypeDeclarationAST (inCompiler COMMA_THERE)) ;
  object->externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mExternTypeName, in_mCppPreDeclarationCode, in_mCppClassCode, in_externTypeInitializerList, in_mExternTypeGetterList, in_mExternTypeSetterList, in_mExternTypeMethodList, inCompiler) ;
  const GGS_externTypeDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_externTypeDeclarationAST::
externTypeDeclarationAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_lstring & in_mExternTypeName,
                                                                           const GGS_string & in_mCppPreDeclarationCode,
                                                                           const GGS_string & in_mCppClassCode,
                                                                           const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                                           const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                                           const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                                           const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                                           Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST::GGS_externTypeDeclarationAST (const cPtr_externTypeDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_externTypeDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_externTypeDeclarationAST::readProperty_mExternTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppPreDeclarationCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppPreDeclarationCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_externTypeDeclarationAST::readProperty_mCppClassCode (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mCppClassCode ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeConstructorList GGS_externTypeDeclarationAST::readProperty_externTypeInitializerList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeConstructorList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_externTypeInitializerList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeGetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeGetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeGetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeGetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeSetterList GGS_externTypeDeclarationAST::readProperty_mExternTypeSetterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeSetterList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeSetterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeMethodList GGS_externTypeDeclarationAST::readProperty_mExternTypeMethodList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externTypeMethodList () ;
  }else{
    cPtr_externTypeDeclarationAST * p = (cPtr_externTypeDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_externTypeDeclarationAST) ;
    return p->mProperty_mExternTypeMethodList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @externTypeDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_externTypeDeclarationAST::cPtr_externTypeDeclarationAST (const GGS_bool & in_isPredefined,
                                                              const GGS_lstring & in_mExternTypeName,
                                                              const GGS_string & in_mCppPreDeclarationCode,
                                                              const GGS_string & in_mCppClassCode,
                                                              const GGS_externTypeConstructorList & in_externTypeInitializerList,
                                                              const GGS_externTypeGetterList & in_mExternTypeGetterList,
                                                              const GGS_externTypeSetterList & in_mExternTypeSetterList,
                                                              const GGS_externTypeMethodList & in_mExternTypeMethodList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mExternTypeName (),
mProperty_mCppPreDeclarationCode (),
mProperty_mCppClassCode (),
mProperty_externTypeInitializerList (),
mProperty_mExternTypeGetterList (),
mProperty_mExternTypeSetterList (),
mProperty_mExternTypeMethodList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mExternTypeName = in_mExternTypeName ;
  mProperty_mCppPreDeclarationCode = in_mCppPreDeclarationCode ;
  mProperty_mCppClassCode = in_mCppClassCode ;
  mProperty_externTypeInitializerList = in_externTypeInitializerList ;
  mProperty_mExternTypeGetterList = in_mExternTypeGetterList ;
  mProperty_mExternTypeSetterList = in_mExternTypeSetterList ;
  mProperty_mExternTypeMethodList = in_mExternTypeMethodList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_externTypeDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

void cPtr_externTypeDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@externTypeDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppPreDeclarationCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppClassCode.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_externTypeInitializerList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeGetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeSetterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternTypeMethodList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_externTypeDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_externTypeDeclarationAST (mProperty_isPredefined, mProperty_mExternTypeName, mProperty_mCppPreDeclarationCode, mProperty_mCppClassCode, mProperty_externTypeInitializerList, mProperty_mExternTypeGetterList, mProperty_mExternTypeSetterList, mProperty_mExternTypeMethodList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_externTypeDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mExternTypeName.printNonNullClassInstanceProperties ("mExternTypeName") ;
    mProperty_mCppPreDeclarationCode.printNonNullClassInstanceProperties ("mCppPreDeclarationCode") ;
    mProperty_mCppClassCode.printNonNullClassInstanceProperties ("mCppClassCode") ;
    mProperty_externTypeInitializerList.printNonNullClassInstanceProperties ("externTypeInitializerList") ;
    mProperty_mExternTypeGetterList.printNonNullClassInstanceProperties ("mExternTypeGetterList") ;
    mProperty_mExternTypeSetterList.printNonNullClassInstanceProperties ("mExternTypeSetterList") ;
    mProperty_mExternTypeMethodList.printNonNullClassInstanceProperties ("mExternTypeMethodList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @externTypeDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externTypeDeclarationAST ("externTypeDeclarationAST",
                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externTypeDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externTypeDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externTypeDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externTypeDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externTypeDeclarationAST GGS_externTypeDeclarationAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_externTypeDeclarationAST result ;
  const GGS_externTypeDeclarationAST * p = (const GGS_externTypeDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externTypeDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externTypeDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS__32_lstringlist_2E_element & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element & GGS__32_lstringlist_2E_element::operator = (const GGS__32_lstringlist_2E_element & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                                                             const GGS_lstring & in_mValue_31_,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element::GGS__32_lstringlist_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstringlist_2E_element::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstringlist.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstringlist.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist_2E_element ("2lstringlist.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element GGS__32_lstringlist_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist_2E_element result ;
  const GGS__32_lstringlist_2E_element * p = (const GGS__32_lstringlist_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_logListAST_2E_element & inSource) :
mProperty_mLogMessage (inSource.mProperty_mLogMessage),
mProperty_mLogExpression (inSource.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element & GGS_logListAST_2E_element::operator = (const GGS_logListAST_2E_element & inSource) {
  mProperty_mLogMessage = inSource.mProperty_mLogMessage ;
  mProperty_mLogExpression = inSource.mProperty_mLogExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::init_21__21_ (const GGS_lstring & in_mLogMessage,
                                                                   const GGS_semanticExpressionAST & in_mLogExpression,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element::GGS_logListAST_2E_element (const GGS_lstring & inOperand0,
                                                      const GGS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_logListAST_2E_element::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logListAST_2E_element::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @logListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLogMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLogExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @logListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logListAST_2E_element ("logListAST.element",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_logListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_logListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logListAST_2E_element GGS_logListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_logListAST_2E_element result ;
  const GGS_logListAST_2E_element * p = (const GGS_logListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_logListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace & GGS_fixitElementForGeneration_2E_fixItReplace::operator = (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace::GGS_fixitElementForGeneration_2E_fixItReplace (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItReplace:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ("fixitElementForGeneration.fixItReplace",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace GGS_fixitElementForGeneration_2E_fixItReplace::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace * p = (const GGS_fixitElementForGeneration_2E_fixItReplace *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItReplace_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_::GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (const GGS_fixitElementForGeneration_2E_fixItReplace & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItReplace_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItReplace () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItReplace_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItReplace? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ("fixitElementForGeneration.fixItReplace?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItReplace_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItReplace_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItReplace_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration_2E_fixItReplace_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItReplace_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItReplace?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore & GGS_fixitElementForGeneration_2E_fixItInsertBefore::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore::GGS_fixitElementForGeneration_2E_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertBefore:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ("fixitElementForGeneration.fixItInsertBefore",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore GGS_fixitElementForGeneration_2E_fixItInsertBefore::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertBefore_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertBefore & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertBefore () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertBefore? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ("fixitElementForGeneration.fixItInsertBefore?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertBefore?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter & GGS_fixitElementForGeneration_2E_fixItInsertAfter::operator = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter::GGS_fixitElementForGeneration_2E_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fixitElementForGeneration.fixItInsertAfter:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ("fixitElementForGeneration.fixItInsertAfter",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter GGS_fixitElementForGeneration_2E_fixItInsertAfter::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @fixitElementForGeneration_2E_fixItInsertAfter_3F_
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (const GGS_fixitElementForGeneration_2E_fixItInsertAfter & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::init_nil (void) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_fixitElementForGeneration_2E_fixItInsertAfter () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration.fixItInsertAfter? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ("fixitElementForGeneration.fixItInsertAfter?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ * p = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration.fixItInsertAfter?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (void) :
mProperty_varName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_endOfExp (),
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
mProperty_varName (inSource.mProperty_varName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_endOfExp (inSource.mProperty_endOfExp),
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp & GGS_ifExpressionKind_2E_letVarExp::operator = (const GGS_ifExpressionKind_2E_letVarExp & inSource) {
  mProperty_varName = inSource.mProperty_varName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_endOfExp = inSource.mProperty_endOfExp ;
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::init_21__21__21__21__21_ (const GGS_lstring & in_varName,
                                                                                               const GGS_bool & in_isConstant,
                                                                                               const GGS_semanticExpressionAST & in_exp,
                                                                                               const GGS_location & in_endOfExp,
                                                                                               const GGS_lstring & in_typeName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_varName = in_varName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_endOfExp = in_endOfExp ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp::GGS_ifExpressionKind_2E_letVarExp (const GGS_lstring & inOperand0,
                                                                      const GGS_bool & inOperand1,
                                                                      const GGS_semanticExpressionAST & inOperand2,
                                                                      const GGS_location & inOperand3,
                                                                      const GGS_lstring & inOperand4) :
mProperty_varName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_endOfExp (inOperand3),
mProperty_typeName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp::isValid (void) const {
  return mProperty_varName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_endOfExp.isValid () && mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::drop (void) {
  mProperty_varName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_endOfExp.drop () ;
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifExpressionKind.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_varName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_endOfExp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ("ifExpressionKind.letVarExp",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp GGS_ifExpressionKind_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp result ;
  const GGS_ifExpressionKind_2E_letVarExp * p = (const GGS_ifExpressionKind_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifExpressionKind_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_::GGS_ifExpressionKind_2E_letVarExp_3F_ (const GGS_ifExpressionKind_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifExpressionKind_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifExpressionKind_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind_2E_letVarExp_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ("ifExpressionKind.letVarExp?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifExpressionKind_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  const GGS_ifExpressionKind_2E_letVarExp_3F_ * p = (const GGS_ifExpressionKind_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (void) :
mProperty_exp () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_ifTestForGeneration_2E_regular & inSource) :
mProperty_exp (inSource.mProperty_exp) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular & GGS_ifTestForGeneration_2E_regular::operator = (const GGS_ifTestForGeneration_2E_regular & inSource) {
  mProperty_exp = inSource.mProperty_exp ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::init_21_ (const GGS_semanticExpressionForGeneration & in_exp,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_exp = in_exp ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular::GGS_ifTestForGeneration_2E_regular (const GGS_semanticExpressionForGeneration & inOperand0) :
mProperty_exp (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular::isValid (void) const {
  return mProperty_exp.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::drop (void) {
  mProperty_exp.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.regular:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_exp.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ("ifTestForGeneration.regular",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular GGS_ifTestForGeneration_2E_regular::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular result ;
  const GGS_ifTestForGeneration_2E_regular * p = (const GGS_ifTestForGeneration_2E_regular *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_regular_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_::GGS_ifTestForGeneration_2E_regular_3F_ (const GGS_ifTestForGeneration_2E_regular & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_regular_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_regular () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_regular_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.regular? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ("ifTestForGeneration.regular?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_regular_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_regular_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_regular_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_regular_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_regular_3F_ GGS_ifTestForGeneration_2E_regular_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_regular_3F_ result ;
  const GGS_ifTestForGeneration_2E_regular_3F_ * p = (const GGS_ifTestForGeneration_2E_regular_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_regular_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.regular?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (void) :
mProperty_targetVarCppName (),
mProperty_exp (),
mProperty_targetType (),
mProperty_testType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType),
mProperty_testType (inSource.mProperty_testType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp & GGS_ifTestForGeneration_2E_letVarExp::operator = (const GGS_ifTestForGeneration_2E_letVarExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  mProperty_testType = inSource.mProperty_testType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                 const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                 const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                 const GGS_unifiedTypeMapEntry & in_testType,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  result.mProperty_testType = in_testType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp::GGS_ifTestForGeneration_2E_letVarExp (const GGS_string & inOperand0,
                                                                            const GGS_semanticExpressionForGeneration & inOperand1,
                                                                            const GGS_unifiedTypeMapEntry & inOperand2,
                                                                            const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_exp (inOperand1),
mProperty_targetType (inOperand2),
mProperty_testType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () && mProperty_testType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
  mProperty_testType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.letVarExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_testType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ("ifTestForGeneration.letVarExp",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp GGS_ifTestForGeneration_2E_letVarExp::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp result ;
  const GGS_ifTestForGeneration_2E_letVarExp * p = (const GGS_ifTestForGeneration_2E_letVarExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_letVarExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_::GGS_ifTestForGeneration_2E_letVarExp_3F_ (const GGS_ifTestForGeneration_2E_letVarExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_letVarExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_letVarExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_letVarExp_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.letVarExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ("ifTestForGeneration.letVarExp?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_letVarExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_letVarExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_letVarExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_letVarExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_letVarExp_3F_ GGS_ifTestForGeneration_2E_letVarExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_letVarExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_letVarExp_3F_ * p = (const GGS_ifTestForGeneration_2E_letVarExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_letVarExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.letVarExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (void) :
mProperty_targetVarCppName (),
mProperty_isConstant (),
mProperty_exp (),
mProperty_targetType () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
mProperty_targetVarCppName (inSource.mProperty_targetVarCppName),
mProperty_isConstant (inSource.mProperty_isConstant),
mProperty_exp (inSource.mProperty_exp),
mProperty_targetType (inSource.mProperty_targetType) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp & GGS_ifTestForGeneration_2E_optionalExp::operator = (const GGS_ifTestForGeneration_2E_optionalExp & inSource) {
  mProperty_targetVarCppName = inSource.mProperty_targetVarCppName ;
  mProperty_isConstant = inSource.mProperty_isConstant ;
  mProperty_exp = inSource.mProperty_exp ;
  mProperty_targetType = inSource.mProperty_targetType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::init_21__21__21__21_ (const GGS_string & in_targetVarCppName,
                                                                                                     const GGS_bool & in_isConstant,
                                                                                                     const GGS_semanticExpressionForGeneration & in_exp,
                                                                                                     const GGS_unifiedTypeMapEntry & in_targetType,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetVarCppName = in_targetVarCppName ;
  result.mProperty_isConstant = in_isConstant ;
  result.mProperty_exp = in_exp ;
  result.mProperty_targetType = in_targetType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp::GGS_ifTestForGeneration_2E_optionalExp (const GGS_string & inOperand0,
                                                                                const GGS_bool & inOperand1,
                                                                                const GGS_semanticExpressionForGeneration & inOperand2,
                                                                                const GGS_unifiedTypeMapEntry & inOperand3) :
mProperty_targetVarCppName (inOperand0),
mProperty_isConstant (inOperand1),
mProperty_exp (inOperand2),
mProperty_targetType (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp::isValid (void) const {
  return mProperty_targetVarCppName.isValid () && mProperty_isConstant.isValid () && mProperty_exp.isValid () && mProperty_targetType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::drop (void) {
  mProperty_targetVarCppName.drop () ;
  mProperty_isConstant.drop () ;
  mProperty_exp.drop () ;
  mProperty_targetType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ifTestForGeneration.optionalExp:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConstant.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_exp.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ("ifTestForGeneration.optionalExp",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp GGS_ifTestForGeneration_2E_optionalExp::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp result ;
  const GGS_ifTestForGeneration_2E_optionalExp * p = (const GGS_ifTestForGeneration_2E_optionalExp *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @ifTestForGeneration_2E_optionalExp_3F_
//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_::GGS_ifTestForGeneration_2E_optionalExp_3F_ (const GGS_ifTestForGeneration_2E_optionalExp & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::init_nil (void) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ifTestForGeneration_2E_optionalExp_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_ifTestForGeneration_2E_optionalExp () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifTestForGeneration_2E_optionalExp_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ifTestForGeneration.optionalExp? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ("ifTestForGeneration.optionalExp?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifTestForGeneration_2E_optionalExp_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration_2E_optionalExp_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifTestForGeneration_2E_optionalExp_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifTestForGeneration_2E_optionalExp_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifTestForGeneration_2E_optionalExp_3F_ GGS_ifTestForGeneration_2E_optionalExp_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_ifTestForGeneration_2E_optionalExp_3F_ result ;
  const GGS_ifTestForGeneration_2E_optionalExp_3F_ * p = (const GGS_ifTestForGeneration_2E_optionalExp_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifTestForGeneration_2E_optionalExp_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration.optionalExp?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (void) :
mProperty_mOptionalTypeName (),
mProperty_mDeclaredAsUnused (),
mProperty_mOptionalConstantName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) :
mProperty_mOptionalTypeName (inSource.mProperty_mOptionalTypeName),
mProperty_mDeclaredAsUnused (inSource.mProperty_mDeclaredAsUnused),
mProperty_mOptionalConstantName (inSource.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element & GGS_forInstructionEnumeratedObjectElementListAST_2E_element::operator = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inSource) {
  mProperty_mOptionalTypeName = inSource.mProperty_mOptionalTypeName ;
  mProperty_mDeclaredAsUnused = inSource.mProperty_mDeclaredAsUnused ;
  mProperty_mOptionalConstantName = inSource.mProperty_mOptionalConstantName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                           const GGS_lstring & in_mOptionalConstantName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  result.mProperty_mDeclaredAsUnused = in_mDeclaredAsUnused ;
  result.mProperty_mOptionalConstantName = in_mOptionalConstantName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element::GGS_forInstructionEnumeratedObjectElementListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                                          const GGS_bool & inOperand1,
                                                                                                                          const GGS_lstring & inOperand2) :
mProperty_mOptionalTypeName (inOperand0),
mProperty_mDeclaredAsUnused (inOperand1),
mProperty_mOptionalConstantName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectElementListAST_2E_element::isValid (void) const {
  return mProperty_mOptionalTypeName.isValid () && mProperty_mDeclaredAsUnused.isValid () && mProperty_mOptionalConstantName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::drop (void) {
  mProperty_mOptionalTypeName.drop () ;
  mProperty_mDeclaredAsUnused.drop () ;
  mProperty_mOptionalConstantName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectElementListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDeclaredAsUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionalConstantName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ("forInstructionEnumeratedObjectElementListAST.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element GGS_forInstructionEnumeratedObjectElementListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST_2E_element result ;
  const GGS_forInstructionEnumeratedObjectElementListAST_2E_element * p = (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) :
mProperty_mEnumerationOrder (inSource.mProperty_mEnumerationOrder),
mProperty_mEnumeratedExpression (inSource.mProperty_mEnumeratedExpression),
mProperty_mEnumeratorCppName (inSource.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::operator = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inSource) {
  mProperty_mEnumerationOrder = inSource.mProperty_mEnumerationOrder ;
  mProperty_mEnumeratedExpression = inSource.mProperty_mEnumeratedExpression ;
  mProperty_mEnumeratorCppName = inSource.mProperty_mEnumeratorCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mEnumerationOrder,
                                                                                                                                                 const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                                 const GGS_string & in_mEnumeratorCppName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                                                const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                const GGS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumerationOrder.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ("forInstructionEnumeratedObjectListForGeneration.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element GGS_forInstructionEnumeratedObjectListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration_2E_element result ;
  const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element * p = (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (void) :
mProperty_mExtractedValueTypeName (),
mProperty_mExtractedValueName (),
mProperty_mMarkedAsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_switchExtractedValuesListAST_2E_element & inSource) :
mProperty_mExtractedValueTypeName (inSource.mProperty_mExtractedValueTypeName),
mProperty_mExtractedValueName (inSource.mProperty_mExtractedValueName),
mProperty_mMarkedAsUnused (inSource.mProperty_mMarkedAsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element & GGS_switchExtractedValuesListAST_2E_element::operator = (const GGS_switchExtractedValuesListAST_2E_element & inSource) {
  mProperty_mExtractedValueTypeName = inSource.mProperty_mExtractedValueTypeName ;
  mProperty_mExtractedValueName = inSource.mProperty_mExtractedValueName ;
  mProperty_mMarkedAsUnused = inSource.mProperty_mMarkedAsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mExtractedValueTypeName,
                                                                                                           const GGS_lstring & in_mExtractedValueName,
                                                                                                           const GGS_bool & in_mMarkedAsUnused,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExtractedValueTypeName = in_mExtractedValueTypeName ;
  result.mProperty_mExtractedValueName = in_mExtractedValueName ;
  result.mProperty_mMarkedAsUnused = in_mMarkedAsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element::GGS_switchExtractedValuesListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_bool & inOperand2) :
mProperty_mExtractedValueTypeName (inOperand0),
mProperty_mExtractedValueName (inOperand1),
mProperty_mMarkedAsUnused (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchExtractedValuesListAST_2E_element::isValid (void) const {
  return mProperty_mExtractedValueTypeName.isValid () && mProperty_mExtractedValueName.isValid () && mProperty_mMarkedAsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::drop (void) {
  mProperty_mExtractedValueTypeName.drop () ;
  mProperty_mExtractedValueName.drop () ;
  mProperty_mMarkedAsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchExtractedValuesListAST_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchExtractedValuesListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExtractedValueTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedValueName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMarkedAsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchExtractedValuesListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ("switchExtractedValuesListAST.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchExtractedValuesListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchExtractedValuesListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_switchExtractedValuesListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_switchExtractedValuesListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchExtractedValuesListAST_2E_element GGS_switchExtractedValuesListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_switchExtractedValuesListAST_2E_element result ;
  const GGS_switchExtractedValuesListAST_2E_element * p = (const GGS_switchExtractedValuesListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_switchExtractedValuesListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchExtractedValuesListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (void) :
mProperty_lkey (),
mProperty_argumentTypeList (),
mProperty_valueType () {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_subscriptMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_argumentTypeList (inSource.mProperty_argumentTypeList),
mProperty_valueType (inSource.mProperty_valueType) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element & GGS_subscriptMap_2E_element::operator = (const GGS_subscriptMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_argumentTypeList = inSource.mProperty_argumentTypeList ;
  mProperty_valueType = inSource.mProperty_valueType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_functionSignature & in_argumentTypeList,
                                                                           const GGS_unifiedTypeMapEntry & in_valueType,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_argumentTypeList = in_argumentTypeList ;
  result.mProperty_valueType = in_valueType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element::GGS_subscriptMap_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_functionSignature & inOperand1,
                                                          const GGS_unifiedTypeMapEntry & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_argumentTypeList (inOperand1),
mProperty_valueType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_argumentTypeList.isValid () && mProperty_valueType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_argumentTypeList.drop () ;
  mProperty_valueType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @subscriptMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_argumentTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_valueType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element ("subscriptMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element GGS_subscriptMap_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element result ;
  const GGS_subscriptMap_2E_element * p = (const GGS_subscriptMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @subscriptMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_::GGS_subscriptMap_2E_element_3F_ (const GGS_subscriptMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::init_nil (void) {
  GGS_subscriptMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_subscriptMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_subscriptMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_subscriptMap_2E_element_3F_::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @subscriptMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ("subscriptMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_subscriptMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_subscriptMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_subscriptMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_subscriptMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_subscriptMap_2E_element_3F_ GGS_subscriptMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_subscriptMap_2E_element_3F_ result ;
  const GGS_subscriptMap_2E_element_3F_ * p = (const GGS_subscriptMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_subscriptMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("subscriptMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mNoWarningIfUnused (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_localConstantList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mNoWarningIfUnused (inSource.mProperty_mNoWarningIfUnused),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element & GGS_localConstantList_2E_element::operator = (const GGS_localConstantList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mNoWarningIfUnused = inSource.mProperty_mNoWarningIfUnused ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                         const GGS_lstring & in_mName,
                                                                                         const GGS_bool & in_mNoWarningIfUnused,
                                                                                         const GGS_string & in_mCppName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mNoWarningIfUnused = in_mNoWarningIfUnused ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element::GGS_localConstantList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_bool & inOperand2,
                                                                    const GGS_string & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mNoWarningIfUnused (inOperand2),
mProperty_mCppName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localConstantList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mNoWarningIfUnused.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mNoWarningIfUnused.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localConstantList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localConstantList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNoWarningIfUnused.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localConstantList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantList_2E_element ("localConstantList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localConstantList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localConstantList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantList_2E_element GGS_localConstantList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_localConstantList_2E_element result ;
  const GGS_localConstantList_2E_element * p = (const GGS_localConstantList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localConstantList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (void) :
mProperty_mType (),
mProperty_mName (),
mProperty_mCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_localInitializedVariableList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType),
mProperty_mName (inSource.mProperty_mName),
mProperty_mCppName (inSource.mProperty_mCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element & GGS_localInitializedVariableList_2E_element::operator = (const GGS_localInitializedVariableList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mCppName = inSource.mProperty_mCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                           const GGS_lstring & in_mName,
                                                                                                           const GGS_string & in_mCppName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mCppName = in_mCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element::GGS_localInitializedVariableList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0,
                                                                                          const GGS_lstring & inOperand1,
                                                                                          const GGS_string & inOperand2) :
mProperty_mType (inOperand0),
mProperty_mName (inOperand1),
mProperty_mCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_localInitializedVariableList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mName.isValid () && mProperty_mCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mName.drop () ;
  mProperty_mCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_localInitializedVariableList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @localInitializedVariableList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @localInitializedVariableList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ("localInitializedVariableList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localInitializedVariableList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localInitializedVariableList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localInitializedVariableList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localInitializedVariableList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localInitializedVariableList_2E_element GGS_localInitializedVariableList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localInitializedVariableList_2E_element result ;
  const GGS_localInitializedVariableList_2E_element * p = (const GGS_localInitializedVariableList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localInitializedVariableList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localInitializedVariableList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExtension () {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_equatableExtensionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExtension (inSource.mProperty_mExtension) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element & GGS_equatableExtensionMap_2E_element::operator = (const GGS_equatableExtensionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExtension = inSource.mProperty_mExtension ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_equatableComparableExtension & in_mExtension,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExtension = in_mExtension ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element::GGS_equatableExtensionMap_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_equatableComparableExtension & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mExtension (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExtension.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExtension.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @equatableExtensionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtension.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ("equatableExtensionMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element GGS_equatableExtensionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element result ;
  const GGS_equatableExtensionMap_2E_element * p = (const GGS_equatableExtensionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @equatableExtensionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_::GGS_equatableExtensionMap_2E_element_3F_ (const GGS_equatableExtensionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::init_nil (void) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_equatableExtensionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_equatableExtensionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_equatableExtensionMap_2E_element_3F_::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @equatableExtensionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ("equatableExtensionMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_equatableExtensionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_equatableExtensionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_equatableExtensionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_equatableExtensionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_equatableExtensionMap_2E_element_3F_ GGS_equatableExtensionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_equatableExtensionMap_2E_element_3F_ result ;
  const GGS_equatableExtensionMap_2E_element_3F_ * p = (const GGS_equatableExtensionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_equatableExtensionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("equatableExtensionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mUnusedEntityName (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (const GGS_uselessEntityLocationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mUnusedEntityName (inSource.mProperty_mUnusedEntityName),
mProperty_mLocation (inSource.mProperty_mLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element & GGS_uselessEntityLocationMap_2E_element::operator = (const GGS_uselessEntityLocationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mUnusedEntityName = inSource.mProperty_mUnusedEntityName ;
  mProperty_mLocation = inSource.mProperty_mLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element GGS_uselessEntityLocationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_string & in_mUnusedEntityName,
                                                                                                   const GGS_location & in_mLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mUnusedEntityName = in_mUnusedEntityName ;
  result.mProperty_mLocation = in_mLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element::GGS_uselessEntityLocationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_string & inOperand1,
                                                                                  const GGS_location & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mUnusedEntityName (inOperand1),
mProperty_mLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mUnusedEntityName.isValid () && mProperty_mLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mUnusedEntityName.drop () ;
  mProperty_mLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @uselessEntityLocationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUnusedEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ("uselessEntityLocationMap.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element GGS_uselessEntityLocationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element result ;
  const GGS_uselessEntityLocationMap_2E_element * p = (const GGS_uselessEntityLocationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @uselessEntityLocationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_::GGS_uselessEntityLocationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_::GGS_uselessEntityLocationMap_2E_element_3F_ (const GGS_uselessEntityLocationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap_2E_element_3F_::init_nil (void) {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_uselessEntityLocationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_uselessEntityLocationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_uselessEntityLocationMap_2E_element_3F_::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @uselessEntityLocationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ("uselessEntityLocationMap.element?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uselessEntityLocationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uselessEntityLocationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_uselessEntityLocationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_uselessEntityLocationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uselessEntityLocationMap_2E_element_3F_ GGS_uselessEntityLocationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_uselessEntityLocationMap_2E_element_3F_ result ;
  const GGS_uselessEntityLocationMap_2E_element_3F_ * p = (const GGS_uselessEntityLocationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_uselessEntityLocationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uselessEntityLocationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mInclusion (),
mProperty_mHeaderString () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (const GGS_headerCompositionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mInclusion (inSource.mProperty_mInclusion),
mProperty_mHeaderString (inSource.mProperty_mHeaderString) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element & GGS_headerCompositionMap_2E_element::operator = (const GGS_headerCompositionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mInclusion = inSource.mProperty_mInclusion ;
  mProperty_mHeaderString = inSource.mProperty_mHeaderString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_headerCompositionMap_2E_element GGS_headerCompositionMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                           const GGS_stringset & in_mInclusion,
                                                                                           const GGS_string & in_mHeaderString,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mInclusion = in_mInclusion ;
  result.mProperty_mHeaderString = in_mHeaderString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element::GGS_headerCompositionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_stringset & inOperand1,
                                                                          const GGS_string & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mInclusion (inOperand1),
mProperty_mHeaderString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mInclusion.isValid () && mProperty_mHeaderString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mInclusion.drop () ;
  mProperty_mHeaderString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @headerCompositionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInclusion.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderString.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @headerCompositionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ("headerCompositionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element GGS_headerCompositionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element result ;
  const GGS_headerCompositionMap_2E_element * p = (const GGS_headerCompositionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @headerCompositionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_::GGS_headerCompositionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_::GGS_headerCompositionMap_2E_element_3F_ (const GGS_headerCompositionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap_2E_element_3F_::init_nil (void) {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerCompositionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_headerCompositionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerCompositionMap_2E_element_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @headerCompositionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ("headerCompositionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerCompositionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerCompositionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerCompositionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerCompositionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerCompositionMap_2E_element_3F_ GGS_headerCompositionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_headerCompositionMap_2E_element_3F_ result ;
  const GGS_headerCompositionMap_2E_element_3F_ * p = (const GGS_headerCompositionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerCompositionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerCompositionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mHeaderFileName () {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (const GGS_headerRepartitionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mHeaderFileName (inSource.mProperty_mHeaderFileName) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element & GGS_headerRepartitionMap_2E_element::operator = (const GGS_headerRepartitionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mHeaderFileName = inSource.mProperty_mHeaderFileName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element GGS_headerRepartitionMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                       const GGS_string & in_mHeaderFileName,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mHeaderFileName = in_mHeaderFileName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element::GGS_headerRepartitionMap_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mHeaderFileName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mHeaderFileName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mHeaderFileName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @headerRepartitionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHeaderFileName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @headerRepartitionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ("headerRepartitionMap.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element GGS_headerRepartitionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element result ;
  const GGS_headerRepartitionMap_2E_element * p = (const GGS_headerRepartitionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @headerRepartitionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_::GGS_headerRepartitionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_::GGS_headerRepartitionMap_2E_element_3F_ (const GGS_headerRepartitionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap_2E_element_3F_::init_nil (void) {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_headerRepartitionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_headerRepartitionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_headerRepartitionMap_2E_element_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @headerRepartitionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ("headerRepartitionMap.element?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_headerRepartitionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_headerRepartitionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_headerRepartitionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_headerRepartitionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_headerRepartitionMap_2E_element_3F_ GGS_headerRepartitionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_headerRepartitionMap_2E_element_3F_ result ;
  const GGS_headerRepartitionMap_2E_element_3F_ * p = (const GGS_headerRepartitionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_headerRepartitionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("headerRepartitionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (void) :
mProperty_mTerminalName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_isEndOfTemplateMark (),
mProperty_atomicSelection (),
mProperty_mStyleIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (const GGS_terminalList_2E_element & inSource) :
mProperty_mTerminalName (inSource.mProperty_mTerminalName),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark),
mProperty_atomicSelection (inSource.mProperty_atomicSelection),
mProperty_mStyleIndex (inSource.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element & GGS_terminalList_2E_element::operator = (const GGS_terminalList_2E_element & inSource) {
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  mProperty_atomicSelection = inSource.mProperty_atomicSelection ;
  mProperty_mStyleIndex = inSource.mProperty_mStyleIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalList_2E_element GGS_terminalList_2E_element::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const GGS_lstring & in_mTerminalName,
                                                                                                                         const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                                                                         const GGS_string & in_mSyntaxErrorMessage,
                                                                                                                         const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                         const GGS_bool & in_atomicSelection,
                                                                                                                         const GGS_uint & in_mStyleIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTerminalName = in_mTerminalName ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  result.mProperty_atomicSelection = in_atomicSelection ;
  result.mProperty_mStyleIndex = in_mStyleIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element::GGS_terminalList_2E_element (const GGS_lstring & inOperand0,
                                                          const GGS_lexicalSentValueList & inOperand1,
                                                          const GGS_string & inOperand2,
                                                          const GGS_bool & inOperand3,
                                                          const GGS_bool & inOperand4,
                                                          const GGS_uint & inOperand5) :
mProperty_mTerminalName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_isEndOfTemplateMark (inOperand3),
mProperty_atomicSelection (inOperand4),
mProperty_mStyleIndex (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalList_2E_element::isValid (void) const {
  return mProperty_mTerminalName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_isEndOfTemplateMark.isValid () && mProperty_atomicSelection.isValid () && mProperty_mStyleIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::drop (void) {
  mProperty_mTerminalName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
  mProperty_atomicSelection.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTerminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_atomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalList_2E_element ("terminalList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalList_2E_element GGS_terminalList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalList_2E_element result ;
  const GGS_terminalList_2E_element * p = (const GGS_terminalList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (void) :
mProperty_lkey (),
mProperty_mTerminal (),
mProperty_atomicSelection (),
mProperty_isEndOfTemplateMark () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTerminal (inSource.mProperty_mTerminal),
mProperty_atomicSelection (inSource.mProperty_atomicSelection),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element & GGS_lexicalExplicitTokenListMap_2E_element::operator = (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTerminal = inSource.mProperty_mTerminal ;
  mProperty_atomicSelection = inSource.mProperty_atomicSelection ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element GGS_lexicalExplicitTokenListMap_2E_element::init_21__21__21_atomicSelection_21_isEndOfTemplateMark (const GGS_lstring & in_lkey,
                                                                                                                                               const GGS_lstring & in_mTerminal,
                                                                                                                                               const GGS_bool & in_atomicSelection,
                                                                                                                                               const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTerminal = in_mTerminal ;
  result.mProperty_atomicSelection = in_atomicSelection ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element::GGS_lexicalExplicitTokenListMap_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_bool & inOperand2,
                                                                                        const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mTerminal (inOperand1),
mProperty_atomicSelection (inOperand2),
mProperty_isEndOfTemplateMark (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminal.isValid () && mProperty_atomicSelection.isValid () && mProperty_isEndOfTemplateMark.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminal.drop () ;
  mProperty_atomicSelection.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalExplicitTokenListMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_atomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ("lexicalExplicitTokenListMap.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element GGS_lexicalExplicitTokenListMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element result ;
  const GGS_lexicalExplicitTokenListMap_2E_element * p = (const GGS_lexicalExplicitTokenListMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalExplicitTokenListMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_::GGS_lexicalExplicitTokenListMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_::GGS_lexicalExplicitTokenListMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_ GGS_lexicalExplicitTokenListMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalExplicitTokenListMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalExplicitTokenListMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMap_2E_element_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ("lexicalExplicitTokenListMap.element?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMap_2E_element_3F_ GGS_lexicalExplicitTokenListMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMap_2E_element_3F_ result ;
  const GGS_lexicalExplicitTokenListMap_2E_element_3F_ * p = (const GGS_lexicalExplicitTokenListMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (void) :
mProperty_lkey (),
mProperty_mExplicitTokenListMap (),
mProperty_mTokenSortedList (),
mProperty_mShouldBeGenerated () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mExplicitTokenListMap (inSource.mProperty_mExplicitTokenListMap),
mProperty_mTokenSortedList (inSource.mProperty_mTokenSortedList),
mProperty_mShouldBeGenerated (inSource.mProperty_mShouldBeGenerated) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element & GGS_lexicalExplicitTokenListMapMap_2E_element::operator = (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mExplicitTokenListMap = inSource.mProperty_mExplicitTokenListMap ;
  mProperty_mTokenSortedList = inSource.mProperty_mTokenSortedList ;
  mProperty_mShouldBeGenerated = inSource.mProperty_mShouldBeGenerated ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element GGS_lexicalExplicitTokenListMapMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                   const GGS_lexicalExplicitTokenListMap & in_mExplicitTokenListMap,
                                                                                                                   const GGS_tokenSortedlist & in_mTokenSortedList,
                                                                                                                   const GGS_bool & in_mShouldBeGenerated,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mExplicitTokenListMap = in_mExplicitTokenListMap ;
  result.mProperty_mTokenSortedList = in_mTokenSortedList ;
  result.mProperty_mShouldBeGenerated = in_mShouldBeGenerated ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element::GGS_lexicalExplicitTokenListMapMap_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lexicalExplicitTokenListMap & inOperand1,
                                                                                              const GGS_tokenSortedlist & inOperand2,
                                                                                              const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mExplicitTokenListMap (inOperand1),
mProperty_mTokenSortedList (inOperand2),
mProperty_mShouldBeGenerated (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mExplicitTokenListMap.isValid () && mProperty_mTokenSortedList.isValid () && mProperty_mShouldBeGenerated.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mExplicitTokenListMap.drop () ;
  mProperty_mTokenSortedList.drop () ;
  mProperty_mShouldBeGenerated.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalExplicitTokenListMapMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExplicitTokenListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTokenSortedList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mShouldBeGenerated.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMapMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ("lexicalExplicitTokenListMapMap.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMapMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMapMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element GGS_lexicalExplicitTokenListMapMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element result ;
  const GGS_lexicalExplicitTokenListMapMap_2E_element * p = (const GGS_lexicalExplicitTokenListMapMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMapMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalExplicitTokenListMapMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (const GGS_lexicalExplicitTokenListMapMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalExplicitTokenListMapMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitTokenListMapMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ("lexicalExplicitTokenListMapMap.element?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitTokenListMapMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ GGS_lexicalExplicitTokenListMapMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ result ;
  const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ * p = (const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalExplicitTokenListMapMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalExplicitTokenListMapMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalMessage (),
mProperty_mMessageIsUsed () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (const GGS_lexicalMessageMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalMessage (inSource.mProperty_mLexicalMessage),
mProperty_mMessageIsUsed (inSource.mProperty_mMessageIsUsed) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element & GGS_lexicalMessageMap_2E_element::operator = (const GGS_lexicalMessageMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalMessage = inSource.mProperty_mLexicalMessage ;
  mProperty_mMessageIsUsed = inSource.mProperty_mMessageIsUsed ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                     const GGS_lstring & in_mLexicalMessage,
                                                                                     const GGS_bool & in_mMessageIsUsed,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalMessage = in_mLexicalMessage ;
  result.mProperty_mMessageIsUsed = in_mMessageIsUsed ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element::GGS_lexicalMessageMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lstring & inOperand1,
                                                                    const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mLexicalMessage (inOperand1),
mProperty_mMessageIsUsed (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalMessage.isValid () && mProperty_mMessageIsUsed.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalMessage.drop () ;
  mProperty_mMessageIsUsed.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalMessageMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMessageIsUsed.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalMessageMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ("lexicalMessageMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element GGS_lexicalMessageMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element result ;
  const GGS_lexicalMessageMap_2E_element * p = (const GGS_lexicalMessageMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalMessageMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_::GGS_lexicalMessageMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_::GGS_lexicalMessageMap_2E_element_3F_ (const GGS_lexicalMessageMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalMessageMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalMessageMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalMessageMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalMessageMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ("lexicalMessageMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalMessageMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalMessageMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalMessageMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalMessageMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageMap_2E_element_3F_ GGS_lexicalMessageMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalMessageMap_2E_element_3F_ result ;
  const GGS_lexicalMessageMap_2E_element_3F_ * p = (const GGS_lexicalMessageMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalMessageMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalMessageMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalRoutineFormalArgumentList (),
mProperty_mErrorMessageList (),
mProperty_mIsExtern () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (const GGS_lexicalRoutineMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalRoutineFormalArgumentList (inSource.mProperty_mLexicalRoutineFormalArgumentList),
mProperty_mErrorMessageList (inSource.mProperty_mErrorMessageList),
mProperty_mIsExtern (inSource.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element & GGS_lexicalRoutineMap_2E_element::operator = (const GGS_lexicalRoutineMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalRoutineFormalArgumentList = inSource.mProperty_mLexicalRoutineFormalArgumentList ;
  mProperty_mErrorMessageList = inSource.mProperty_mErrorMessageList ;
  mProperty_mIsExtern = inSource.mProperty_mIsExtern ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element GGS_lexicalRoutineMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_lexicalRoutineFormalArgumentList & in_mLexicalRoutineFormalArgumentList,
                                                                                         const GGS_stringlist & in_mErrorMessageList,
                                                                                         const GGS_bool & in_mIsExtern,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalRoutineFormalArgumentList = in_mLexicalRoutineFormalArgumentList ;
  result.mProperty_mErrorMessageList = in_mErrorMessageList ;
  result.mProperty_mIsExtern = in_mIsExtern ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element::GGS_lexicalRoutineMap_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_lexicalRoutineFormalArgumentList & inOperand1,
                                                                    const GGS_stringlist & inOperand2,
                                                                    const GGS_bool & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mLexicalRoutineFormalArgumentList (inOperand1),
mProperty_mErrorMessageList (inOperand2),
mProperty_mIsExtern (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalRoutineFormalArgumentList.isValid () && mProperty_mErrorMessageList.isValid () && mProperty_mIsExtern.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalRoutineFormalArgumentList.drop () ;
  mProperty_mErrorMessageList.drop () ;
  mProperty_mIsExtern.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalRoutineMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalRoutineFormalArgumentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mErrorMessageList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ("lexicalRoutineMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element GGS_lexicalRoutineMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element result ;
  const GGS_lexicalRoutineMap_2E_element * p = (const GGS_lexicalRoutineMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalRoutineMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_::GGS_lexicalRoutineMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_::GGS_lexicalRoutineMap_2E_element_3F_ (const GGS_lexicalRoutineMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_ GGS_lexicalRoutineMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalRoutineMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalRoutineMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalRoutineMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalRoutineMap_2E_element_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ("lexicalRoutineMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalRoutineMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalRoutineMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineMap_2E_element_3F_ GGS_lexicalRoutineMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalRoutineMap_2E_element_3F_ result ;
  const GGS_lexicalRoutineMap_2E_element_3F_ * p = (const GGS_lexicalRoutineMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalRoutineMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalRoutineMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLexicalTypeList (),
mProperty_mReturnedLexicalType (),
mProperty_mReplacementFunctionName (),
mProperty_mIsExtern () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (const GGS_lexicalFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLexicalTypeList (inSource.mProperty_mLexicalTypeList),
mProperty_mReturnedLexicalType (inSource.mProperty_mReturnedLexicalType),
mProperty_mReplacementFunctionName (inSource.mProperty_mReplacementFunctionName),
mProperty_mIsExtern (inSource.mProperty_mIsExtern) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element & GGS_lexicalFunctionMap_2E_element::operator = (const GGS_lexicalFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLexicalTypeList = inSource.mProperty_mLexicalTypeList ;
  mProperty_mReturnedLexicalType = inSource.mProperty_mReturnedLexicalType ;
  mProperty_mReplacementFunctionName = inSource.mProperty_mReplacementFunctionName ;
  mProperty_mIsExtern = inSource.mProperty_mIsExtern ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element GGS_lexicalFunctionMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                               const GGS_lexicalFunctionFormalArgumentList & in_mLexicalTypeList,
                                                                                               const GGS_lexicalTypeEnum & in_mReturnedLexicalType,
                                                                                               const GGS_string & in_mReplacementFunctionName,
                                                                                               const GGS_bool & in_mIsExtern,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLexicalTypeList = in_mLexicalTypeList ;
  result.mProperty_mReturnedLexicalType = in_mReturnedLexicalType ;
  result.mProperty_mReplacementFunctionName = in_mReplacementFunctionName ;
  result.mProperty_mIsExtern = in_mIsExtern ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element::GGS_lexicalFunctionMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_lexicalFunctionFormalArgumentList & inOperand1,
                                                                      const GGS_lexicalTypeEnum & inOperand2,
                                                                      const GGS_string & inOperand3,
                                                                      const GGS_bool & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mLexicalTypeList (inOperand1),
mProperty_mReturnedLexicalType (inOperand2),
mProperty_mReplacementFunctionName (inOperand3),
mProperty_mIsExtern (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLexicalTypeList.isValid () && mProperty_mReturnedLexicalType.isValid () && mProperty_mReplacementFunctionName.isValid () && mProperty_mIsExtern.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLexicalTypeList.drop () ;
  mProperty_mReturnedLexicalType.drop () ;
  mProperty_mReplacementFunctionName.drop () ;
  mProperty_mIsExtern.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReturnedLexicalType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mReplacementFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsExtern.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ("lexicalFunctionMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element GGS_lexicalFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element result ;
  const GGS_lexicalFunctionMap_2E_element * p = (const GGS_lexicalFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_::GGS_lexicalFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_::GGS_lexicalFunctionMap_2E_element_3F_ (const GGS_lexicalFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalFunctionMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ("lexicalFunctionMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalFunctionMap_2E_element_3F_ GGS_lexicalFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexicalFunctionMap_2E_element_3F_ result ;
  const GGS_lexicalFunctionMap_2E_element_3F_ * p = (const GGS_lexicalFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (void) :
mProperty_mStartString (),
mProperty_mEndString (),
mProperty_mPreservesStartDelimiter () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (const GGS_templateDelimitorList_2E_element & inSource) :
mProperty_mStartString (inSource.mProperty_mStartString),
mProperty_mEndString (inSource.mProperty_mEndString),
mProperty_mPreservesStartDelimiter (inSource.mProperty_mPreservesStartDelimiter) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element & GGS_templateDelimitorList_2E_element::operator = (const GGS_templateDelimitorList_2E_element & inSource) {
  mProperty_mStartString = inSource.mProperty_mStartString ;
  mProperty_mEndString = inSource.mProperty_mEndString ;
  mProperty_mPreservesStartDelimiter = inSource.mProperty_mPreservesStartDelimiter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateDelimitorList_2E_element GGS_templateDelimitorList_2E_element::init_21__21__21_ (const GGS_lstring & in_mStartString,
                                                                                             const GGS_lstring & in_mEndString,
                                                                                             const GGS_bool & in_mPreservesStartDelimiter,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateDelimitorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mStartString = in_mStartString ;
  result.mProperty_mEndString = in_mEndString ;
  result.mProperty_mPreservesStartDelimiter = in_mPreservesStartDelimiter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element::GGS_templateDelimitorList_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_lstring & inOperand1,
                                                                            const GGS_bool & inOperand2) :
mProperty_mStartString (inOperand0),
mProperty_mEndString (inOperand1),
mProperty_mPreservesStartDelimiter (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateDelimitorList_2E_element::isValid (void) const {
  return mProperty_mStartString.isValid () && mProperty_mEndString.isValid () && mProperty_mPreservesStartDelimiter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::drop (void) {
  mProperty_mStartString.drop () ;
  mProperty_mEndString.drop () ;
  mProperty_mPreservesStartDelimiter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateDelimitorList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateDelimitorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mStartString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreservesStartDelimiter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateDelimitorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ("templateDelimitorList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateDelimitorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateDelimitorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateDelimitorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateDelimitorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorList_2E_element GGS_templateDelimitorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateDelimitorList_2E_element result ;
  const GGS_templateDelimitorList_2E_element * p = (const GGS_templateDelimitorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateDelimitorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateDelimitorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (void) :
mProperty_lkey (),
mProperty_mComment (),
mProperty_mStyleIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (const GGS_styleMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mStyleIndex (inSource.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element & GGS_styleMap_2E_element::operator = (const GGS_styleMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mStyleIndex = inSource.mProperty_mStyleIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_styleMap_2E_element GGS_styleMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                   const GGS_lstring & in_mComment,
                                                                   const GGS_uint & in_mStyleIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_styleMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mStyleIndex = in_mStyleIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element::GGS_styleMap_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_lstring & inOperand1,
                                                  const GGS_uint & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mComment (inOperand1),
mProperty_mStyleIndex (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mComment.isValid () && mProperty_mStyleIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @styleMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyleIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @styleMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element ("styleMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_styleMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element GGS_styleMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_styleMap_2E_element result ;
  const GGS_styleMap_2E_element * p = (const GGS_styleMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @styleMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_::GGS_styleMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_::GGS_styleMap_2E_element_3F_ (const GGS_styleMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap_2E_element_3F_::init_nil (void) {
  GGS_styleMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_styleMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_styleMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_styleMap_2E_element_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @styleMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ("styleMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_styleMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_styleMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_styleMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_styleMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_styleMap_2E_element_3F_ GGS_styleMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_styleMap_2E_element_3F_ result ;
  const GGS_styleMap_2E_element_3F_ * p = (const GGS_styleMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_styleMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("styleMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (const GGS_lexicalTagMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element & GGS_lexicalTagMap_2E_element::operator = (const GGS_lexicalTagMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalTagMap_2E_element GGS_lexicalTagMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element::GGS_lexicalTagMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalTagMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTagMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ("lexicalTagMap.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element GGS_lexicalTagMap_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element result ;
  const GGS_lexicalTagMap_2E_element * p = (const GGS_lexicalTagMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @lexicalTagMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_::GGS_lexicalTagMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_::GGS_lexicalTagMap_2E_element_3F_ (const GGS_lexicalTagMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap_2E_element_3F_::init_nil (void) {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalTagMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_lexicalTagMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalTagMap_2E_element_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalTagMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ("lexicalTagMap.element?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalTagMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalTagMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexicalTagMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexicalTagMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalTagMap_2E_element_3F_ GGS_lexicalTagMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_lexicalTagMap_2E_element_3F_ result ;
  const GGS_lexicalTagMap_2E_element_3F_ * p = (const GGS_lexicalTagMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexicalTagMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexicalTagMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (void) :
mProperty_lkey (),
mProperty_mFeatureValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (const GGS_projectQualifiedFeatureMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFeatureValue (inSource.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element & GGS_projectQualifiedFeatureMap_2E_element::operator = (const GGS_projectQualifiedFeatureMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFeatureValue = inSource.mProperty_mFeatureValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element GGS_projectQualifiedFeatureMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_lstring & in_mFeatureValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFeatureValue = in_mFeatureValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element::GGS_projectQualifiedFeatureMap_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFeatureValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFeatureValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFeatureValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @projectQualifiedFeatureMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFeatureValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectQualifiedFeatureMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ("projectQualifiedFeatureMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element GGS_projectQualifiedFeatureMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element result ;
  const GGS_projectQualifiedFeatureMap_2E_element * p = (const GGS_projectQualifiedFeatureMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @projectQualifiedFeatureMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_::GGS_projectQualifiedFeatureMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_::GGS_projectQualifiedFeatureMap_2E_element_3F_ (const GGS_projectQualifiedFeatureMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap_2E_element_3F_::init_nil (void) {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_projectQualifiedFeatureMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_projectQualifiedFeatureMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_projectQualifiedFeatureMap_2E_element_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @projectQualifiedFeatureMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ("projectQualifiedFeatureMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_projectQualifiedFeatureMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_projectQualifiedFeatureMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_projectQualifiedFeatureMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_projectQualifiedFeatureMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_projectQualifiedFeatureMap_2E_element_3F_ GGS_projectQualifiedFeatureMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_projectQualifiedFeatureMap_2E_element_3F_ result ;
  const GGS_projectQualifiedFeatureMap_2E_element_3F_ * p = (const GGS_projectQualifiedFeatureMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_projectQualifiedFeatureMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("projectQualifiedFeatureMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_guiSimpleAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element & GGS_guiSimpleAttributeListAST_2E_element::operator = (const GGS_guiSimpleAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::init_21__21_ (const GGS_lstring & in_mKey,
                                                                                                 const GGS_lstring & in_mValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element::GGS_guiSimpleAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_lstring & inOperand1) :
mProperty_mKey (inOperand0),
mProperty_mValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiSimpleAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiSimpleAttributeListAST_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiSimpleAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiSimpleAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ("guiSimpleAttributeListAST.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiSimpleAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiSimpleAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiSimpleAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiSimpleAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiSimpleAttributeListAST_2E_element GGS_guiSimpleAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_guiSimpleAttributeListAST_2E_element result ;
  const GGS_guiSimpleAttributeListAST_2E_element * p = (const GGS_guiSimpleAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiSimpleAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiSimpleAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (void) :
mProperty_mKey (),
mProperty_mAttributeName (),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_guiCompoundAttributeListAST_2E_element & inSource) :
mProperty_mKey (inSource.mProperty_mKey),
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mValue (inSource.mProperty_mValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element & GGS_guiCompoundAttributeListAST_2E_element::operator = (const GGS_guiCompoundAttributeListAST_2E_element & inSource) {
  mProperty_mKey = inSource.mProperty_mKey ;
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mValue = inSource.mProperty_mValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mKey,
                                                                                                         const GGS_lstring & in_mAttributeName,
                                                                                                         const GGS_lstring & in_mValue,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKey = in_mKey ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mValue = in_mValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element::GGS_guiCompoundAttributeListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2) :
mProperty_mKey (inOperand0),
mProperty_mAttributeName (inOperand1),
mProperty_mValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_guiCompoundAttributeListAST_2E_element::isValid (void) const {
  return mProperty_mKey.isValid () && mProperty_mAttributeName.isValid () && mProperty_mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::drop (void) {
  mProperty_mKey.drop () ;
  mProperty_mAttributeName.drop () ;
  mProperty_mValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_guiCompoundAttributeListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @guiCompoundAttributeListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mKey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @guiCompoundAttributeListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ("guiCompoundAttributeListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_guiCompoundAttributeListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_guiCompoundAttributeListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_guiCompoundAttributeListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_guiCompoundAttributeListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_guiCompoundAttributeListAST_2E_element GGS_guiCompoundAttributeListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_guiCompoundAttributeListAST_2E_element result ;
  const GGS_guiCompoundAttributeListAST_2E_element * p = (const GGS_guiCompoundAttributeListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_guiCompoundAttributeListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("guiCompoundAttributeListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (void) :
mProperty_mTerminal (),
mProperty_mDisplayFlags () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_terminalLabelListAST_2E_element & inSource) :
mProperty_mTerminal (inSource.mProperty_mTerminal),
mProperty_mDisplayFlags (inSource.mProperty_mDisplayFlags) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element & GGS_terminalLabelListAST_2E_element::operator = (const GGS_terminalLabelListAST_2E_element & inSource) {
  mProperty_mTerminal = inSource.mProperty_mTerminal ;
  mProperty_mDisplayFlags = inSource.mProperty_mDisplayFlags ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::init_21__21_ (const GGS_lstring & in_mTerminal,
                                                                                       const GGS_uint & in_mDisplayFlags,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTerminal = in_mTerminal ;
  result.mProperty_mDisplayFlags = in_mDisplayFlags ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element::GGS_terminalLabelListAST_2E_element (const GGS_lstring & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mTerminal (inOperand0),
mProperty_mDisplayFlags (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalLabelListAST_2E_element::isValid (void) const {
  return mProperty_mTerminal.isValid () && mProperty_mDisplayFlags.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::drop (void) {
  mProperty_mTerminal.drop () ;
  mProperty_mDisplayFlags.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalLabelListAST_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalLabelListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTerminal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDisplayFlags.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalLabelListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ("terminalLabelListAST.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalLabelListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalLabelListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalLabelListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalLabelListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalLabelListAST_2E_element GGS_terminalLabelListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_terminalLabelListAST_2E_element result ;
  const GGS_terminalLabelListAST_2E_element * p = (const GGS_terminalLabelListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalLabelListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalLabelListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (void) :
mProperty_mLexiqueFileName (),
mProperty_mLabels (),
mProperty_mSimpleAttributes (),
mProperty_mCompoundAttributes () {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_withLexiqueListAST_2E_element & inSource) :
mProperty_mLexiqueFileName (inSource.mProperty_mLexiqueFileName),
mProperty_mLabels (inSource.mProperty_mLabels),
mProperty_mSimpleAttributes (inSource.mProperty_mSimpleAttributes),
mProperty_mCompoundAttributes (inSource.mProperty_mCompoundAttributes) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element & GGS_withLexiqueListAST_2E_element::operator = (const GGS_withLexiqueListAST_2E_element & inSource) {
  mProperty_mLexiqueFileName = inSource.mProperty_mLexiqueFileName ;
  mProperty_mLabels = inSource.mProperty_mLabels ;
  mProperty_mSimpleAttributes = inSource.mProperty_mSimpleAttributes ;
  mProperty_mCompoundAttributes = inSource.mProperty_mCompoundAttributes ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLexiqueFileName,
                                                                                           const GGS_guiLabelListAST & in_mLabels,
                                                                                           const GGS_guiSimpleAttributeListAST & in_mSimpleAttributes,
                                                                                           const GGS_guiCompoundAttributeListAST & in_mCompoundAttributes,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexiqueFileName = in_mLexiqueFileName ;
  result.mProperty_mLabels = in_mLabels ;
  result.mProperty_mSimpleAttributes = in_mSimpleAttributes ;
  result.mProperty_mCompoundAttributes = in_mCompoundAttributes ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element::GGS_withLexiqueListAST_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_guiLabelListAST & inOperand1,
                                                                      const GGS_guiSimpleAttributeListAST & inOperand2,
                                                                      const GGS_guiCompoundAttributeListAST & inOperand3) :
mProperty_mLexiqueFileName (inOperand0),
mProperty_mLabels (inOperand1),
mProperty_mSimpleAttributes (inOperand2),
mProperty_mCompoundAttributes (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_withLexiqueListAST_2E_element::isValid (void) const {
  return mProperty_mLexiqueFileName.isValid () && mProperty_mLabels.isValid () && mProperty_mSimpleAttributes.isValid () && mProperty_mCompoundAttributes.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::drop (void) {
  mProperty_mLexiqueFileName.drop () ;
  mProperty_mLabels.drop () ;
  mProperty_mSimpleAttributes.drop () ;
  mProperty_mCompoundAttributes.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_withLexiqueListAST_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @withLexiqueListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexiqueFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabels.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSimpleAttributes.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCompoundAttributes.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @withLexiqueListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ("withLexiqueListAST.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_withLexiqueListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_withLexiqueListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_withLexiqueListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_withLexiqueListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_withLexiqueListAST_2E_element GGS_withLexiqueListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_withLexiqueListAST_2E_element result ;
  const GGS_withLexiqueListAST_2E_element * p = (const GGS_withLexiqueListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_withLexiqueListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("withLexiqueListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

