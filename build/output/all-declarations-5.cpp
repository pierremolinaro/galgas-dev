#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak & GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_sint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::bang_sint_36__34_PredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_sint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sint_36__34_PredefinedTypeAST) ;
      result = GALGAS_sint_36__34_PredefinedTypeAST ((cPtr_sint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @sint64PredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ("sint64PredefinedTypeAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_sint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_sint_36__34_PredefinedTypeAST_2D_weak GALGAS_sint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_sint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_sint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("sint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @stringPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_stringPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_stringPredefinedTypeAST * p = (const cPtr_stringPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_stringPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_stringPredefinedTypeAST::objectCompare (const GALGAS_stringPredefinedTypeAST & inOperand) const {
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

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::init_28_isPredefined_2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                             const GALGAS_string & in_mPredefinedTypeName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cPtr_stringPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_stringPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  const GALGAS_stringPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST::GALGAS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                               const GALGAS_string & inAttribute_mPredefinedTypeName
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_stringPredefinedTypeAST (inAttribute_isPredefined, inAttribute_mPredefinedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @stringPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                            const GALGAS_string & in_mPredefinedTypeName
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_stringPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

void cPtr_stringPredefinedTypeAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@stringPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_stringPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @stringPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ("stringPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST result ;
  const GALGAS_stringPredefinedTypeAST * p = (const GALGAS_stringPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_stringPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_stringPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_stringPredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_stringPredefinedTypeAST_2D_weak::GALGAS_stringPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak & GALGAS_stringPredefinedTypeAST_2D_weak::operator = (const GALGAS_stringPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak::GALGAS_stringPredefinedTypeAST_2D_weak (const GALGAS_stringPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak GALGAS_stringPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST GALGAS_stringPredefinedTypeAST_2D_weak::bang_stringPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_stringPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringPredefinedTypeAST) ;
      result = GALGAS_stringPredefinedTypeAST ((cPtr_stringPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @stringPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ("stringPredefinedTypeAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_stringPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_stringPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_stringPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringPredefinedTypeAST_2D_weak GALGAS_stringPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_stringPredefinedTypeAST_2D_weak result ;
  const GALGAS_stringPredefinedTypeAST_2D_weak * p = (const GALGAS_stringPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_stringPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @timerPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_timerPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_timerPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_timerPredefinedTypeAST * p = (const cPtr_timerPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_timerPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_timerPredefinedTypeAST::objectCompare (const GALGAS_timerPredefinedTypeAST & inOperand) const {
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

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::init_28_isPredefined_2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                           const GALGAS_string & in_mPredefinedTypeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_timerPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_timerPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  const GALGAS_timerPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST::GALGAS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                             const GALGAS_string & inAttribute_mPredefinedTypeName
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_timerPredefinedTypeAST (inAttribute_isPredefined, inAttribute_mPredefinedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @timerPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                          const GALGAS_string & in_mPredefinedTypeName
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

void cPtr_timerPredefinedTypeAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@timerPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_timerPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @timerPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST result ;
  const GALGAS_timerPredefinedTypeAST * p = (const GALGAS_timerPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_timerPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_timerPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_timerPredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_timerPredefinedTypeAST_2D_weak::GALGAS_timerPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak & GALGAS_timerPredefinedTypeAST_2D_weak::operator = (const GALGAS_timerPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak::GALGAS_timerPredefinedTypeAST_2D_weak (const GALGAS_timerPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak GALGAS_timerPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST GALGAS_timerPredefinedTypeAST_2D_weak::bang_timerPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_timerPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_timerPredefinedTypeAST) ;
      result = GALGAS_timerPredefinedTypeAST ((cPtr_timerPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @timerPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ("timerPredefinedTypeAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_timerPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_timerPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_timerPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_timerPredefinedTypeAST_2D_weak GALGAS_timerPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_timerPredefinedTypeAST_2D_weak result ;
  const GALGAS_timerPredefinedTypeAST_2D_weak * p = (const GALGAS_timerPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_timerPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("timerPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @typePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typePredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_typePredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_typePredefinedTypeAST * p = (const cPtr_typePredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_typePredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_typePredefinedTypeAST::objectCompare (const GALGAS_typePredefinedTypeAST & inOperand) const {
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

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::init_28_isPredefined_2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_string & in_mPredefinedTypeName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_typePredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_typePredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  const GALGAS_typePredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST::GALGAS_typePredefinedTypeAST (const cPtr_typePredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typePredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                           const GALGAS_string & inAttribute_mPredefinedTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_typePredefinedTypeAST (inAttribute_isPredefined, inAttribute_mPredefinedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_typePredefinedTypeAST::cPtr_typePredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_typePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

void cPtr_typePredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@typePredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_typePredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typePredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @typePredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST ("typePredefinedTypeAST",
                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST result ;
  const GALGAS_typePredefinedTypeAST * p = (const GALGAS_typePredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typePredefinedTypeAST_2D_weak::objectCompare (const GALGAS_typePredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_typePredefinedTypeAST_2D_weak::GALGAS_typePredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak & GALGAS_typePredefinedTypeAST_2D_weak::operator = (const GALGAS_typePredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak::GALGAS_typePredefinedTypeAST_2D_weak (const GALGAS_typePredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak GALGAS_typePredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST GALGAS_typePredefinedTypeAST_2D_weak::bang_typePredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typePredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typePredefinedTypeAST) ;
      result = GALGAS_typePredefinedTypeAST ((cPtr_typePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typePredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ("typePredefinedTypeAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typePredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typePredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typePredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typePredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typePredefinedTypeAST_2D_weak GALGAS_typePredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_typePredefinedTypeAST_2D_weak result ;
  const GALGAS_typePredefinedTypeAST_2D_weak * p = (const GALGAS_typePredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typePredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typePredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @uintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_uintPredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_uintPredefinedTypeAST * p = (const cPtr_uintPredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uintPredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_uintPredefinedTypeAST::objectCompare (const GALGAS_uintPredefinedTypeAST & inOperand) const {
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

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::init_28_isPredefined_2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                         const GALGAS_string & in_mPredefinedTypeName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_uintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_uintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  const GALGAS_uintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST::GALGAS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                           const GALGAS_string & inAttribute_mPredefinedTypeName
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uintPredefinedTypeAST (inAttribute_isPredefined, inAttribute_mPredefinedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @uintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                        const GALGAS_string & in_mPredefinedTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

void cPtr_uintPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@uintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uintPredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @uintPredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST result ;
  const GALGAS_uintPredefinedTypeAST * p = (const GALGAS_uintPredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uintPredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_uintPredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uintPredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak & GALGAS_uintPredefinedTypeAST_2D_weak::operator = (const GALGAS_uintPredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak::GALGAS_uintPredefinedTypeAST_2D_weak (const GALGAS_uintPredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST GALGAS_uintPredefinedTypeAST_2D_weak::bang_uintPredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uintPredefinedTypeAST) ;
      result = GALGAS_uintPredefinedTypeAST ((cPtr_uintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @uintPredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ("uintPredefinedTypeAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uintPredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uintPredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uintPredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uintPredefinedTypeAST_2D_weak GALGAS_uintPredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uintPredefinedTypeAST_2D_weak result ;
  const GALGAS_uintPredefinedTypeAST_2D_weak * p = (const GALGAS_uintPredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uintPredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uintPredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @uint_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uint_36__34_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_uint_36__34_PredefinedTypeAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_uint_36__34_PredefinedTypeAST * p = (const cPtr_uint_36__34_PredefinedTypeAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_uint_36__34_PredefinedTypeAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_isPredefined.objectCompare (p->mProperty_isPredefined) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mPredefinedTypeName.objectCompare (p->mProperty_mPredefinedTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_uint_36__34_PredefinedTypeAST::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST & inOperand) const {
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

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (void) :
GALGAS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::init_28_isPredefined_2C__29_ (const GALGAS_bool & in_isPredefined,
                                                                                                         const GALGAS_string & in_mPredefinedTypeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cPtr_uint_36__34_PredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_uint_36__34_PredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->mProperty_isPredefined = in_isPredefined ;
  object->mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  const GALGAS_uint_36__34_PredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST::GALGAS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GALGAS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::class_func_new (const GALGAS_bool & inAttribute_isPredefined,
                                                                                           const GALGAS_string & inAttribute_mPredefinedTypeName
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (inAttribute_isPredefined.isValid () && inAttribute_mPredefinedTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_uint_36__34_PredefinedTypeAST (inAttribute_isPredefined, inAttribute_mPredefinedTypeName COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @uint64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GALGAS_bool & in_isPredefined,
                                                                        const GALGAS_string & in_mPredefinedTypeName
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

void cPtr_uint_36__34_PredefinedTypeAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@uint64PredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_uint_36__34_PredefinedTypeAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @uint64PredefinedTypeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                                                     & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  const GALGAS_uint_36__34_PredefinedTypeAST * p = (const GALGAS_uint_36__34_PredefinedTypeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::objectCompare (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (void) :
GALGAS_predefinedTypeAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak & GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::operator = (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (const GALGAS_uint_36__34_PredefinedTypeAST & inSource) :
GALGAS_predefinedTypeAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::bang_uint_36__34_PredefinedTypeAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_uint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uint_36__34_PredefinedTypeAST) ;
      result = GALGAS_uint_36__34_PredefinedTypeAST ((cPtr_uint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @uint64PredefinedTypeAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ("uint64PredefinedTypeAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_predefinedTypeAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_uint_36__34_PredefinedTypeAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint_36__34_PredefinedTypeAST_2D_weak GALGAS_uint_36__34_PredefinedTypeAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_uint_36__34_PredefinedTypeAST_2D_weak result ;
  const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak * p = (const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_uint_36__34_PredefinedTypeAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("uint64PredefinedTypeAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actualParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualParameterListAST : public cCollectionElement {
  public: GALGAS_actualParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualParameterListAST (const GALGAS_actualParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GALGAS_actualParameterAST & in_mActualParameter
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualParameterListAST::cCollectionElement_actualParameterListAST (const GALGAS_actualParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualParameterListAST (mObject.mProperty_mActualParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualParameter" ":") ;
  mObject.mProperty_mActualParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_actualParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualParameterListAST * operand = (cCollectionElement_actualParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST::GALGAS_actualParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::class_func_listWithValue (const GALGAS_actualParameterAST & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actualParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actualParameterListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_actualParameterAST & in_mActualParameter
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualParameterListAST (in_mActualParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::addAssign_operation (const GALGAS_actualParameterAST & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_append (const GALGAS_actualParameterAST inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_insertAtIndex (const GALGAS_actualParameterAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_actualParameterListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_removeAtIndex (GALGAS_actualParameterAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mActualParameter ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_popFirst (GALGAS_actualParameterAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_popLast (GALGAS_actualParameterAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::method_first (GALGAS_actualParameterAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::method_last (GALGAS_actualParameterAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::add_operation (const GALGAS_actualParameterListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterListAST result = GALGAS_actualParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::plusAssign_operation (const GALGAS_actualParameterListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualParameterListAST::setter_setMActualParameterAtIndex (GALGAS_actualParameterAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterListAST::getter_mActualParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualParameterListAST * p = (cCollectionElement_actualParameterListAST *) attributes.ptr () ;
  GALGAS_actualParameterAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
    result = p->mObject.mProperty_mActualParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_actualParameterListAST::cEnumerator_actualParameterListAST (const GALGAS_actualParameterListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST_2D_element cEnumerator_actualParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST cEnumerator_actualParameterListAST::current_mActualParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualParameterListAST * p = (const cCollectionElement_actualParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualParameterListAST) ;
  return p->mObject.mProperty_mActualParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @actualParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterListAST ("actualParameterListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListAST GALGAS_actualParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterListAST result ;
  const GALGAS_actualParameterListAST * p = (const GALGAS_actualParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actualParameterAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_actualParameterAST::objectCompare (const GALGAS_actualParameterAST & inOperand) const {
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

GALGAS_actualParameterAST::GALGAS_actualParameterAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST::GALGAS_actualParameterAST (const cPtr_actualParameterAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @actualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_actualParameterAST::cPtr_actualParameterAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @actualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST ("actualParameterAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterAST result ;
  const GALGAS_actualParameterAST * p = (const GALGAS_actualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterParameterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterParameterInSemanticContext (cPtr_actualParameterAST * inObject,
                                                          GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterParameterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@actualParameterAST isCompatibleWith'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isCompatibleWith (const cPtr_actualParameterAST * inObject,
                                                  const GALGAS_formalArgumentPassingModeAST in_inFormalPassingMode,
                                                  const GALGAS_string in_inSelector,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isCompatibleWith (in_inFormalPassingMode, in_inSelector, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST enterInActualOutputParameterList'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInActualOutputParameterList (cPtr_actualParameterAST * inObject,
                                                           GALGAS_actualOutputExpressionList & io_ioActualOutputArgumentList,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_enterInActualOutputParameterList (io_ioActualOutputArgumentList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@actualParameterAST checkAgainstFormalArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkAgainstFormalArgument (cPtr_actualParameterAST * inObject,
                                                     const GALGAS_lstring constin_inUsefulnessCallerEntityName,
                                                     GALGAS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GALGAS_analysisContext constin_inAnalysisContext,
                                                     GALGAS_unifiedTypeMap & io_ioTypeMap,
                                                     const GALGAS_lstring constin_inFormalSelector,
                                                     const GALGAS_unifiedTypeMapEntry constin_inFormalArgumentType,
                                                     const GALGAS_formalArgumentPassingModeAST constin_inFormalArgumentPassingMode,
                                                     GALGAS_localVarManager & io_ioVariableMap,
                                                     GALGAS_actualParameterListForGeneration & io_ioActualParameterListForGeneration,
                                                     GALGAS_stringset & io_ioExclusiveVariableSet,
                                                     GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_actualParameterAST) ;
    inObject->method_checkAgainstFormalArgument (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, constin_inFormalSelector, constin_inFormalArgumentType, constin_inFormalArgumentPassingMode, io_ioVariableMap, io_ioActualParameterListForGeneration, io_ioExclusiveVariableSet, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_actualParameterAST_2D_weak::objectCompare (const GALGAS_actualParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_actualParameterAST_2D_weak::GALGAS_actualParameterAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak & GALGAS_actualParameterAST_2D_weak::operator = (const GALGAS_actualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak::GALGAS_actualParameterAST_2D_weak (const GALGAS_actualParameterAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak GALGAS_actualParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_actualParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST GALGAS_actualParameterAST_2D_weak::bang_actualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_actualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actualParameterAST) ;
      result = GALGAS_actualParameterAST ((cPtr_actualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @actualParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualParameterAST_2D_weak ("actualParameterAST-weak",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterAST_2D_weak GALGAS_actualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_actualParameterAST_2D_weak result ;
  const GALGAS_actualParameterAST_2D_weak * p = (const GALGAS_actualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticExpressionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_semanticExpressionAST::objectCompare (const GALGAS_semanticExpressionAST & inOperand) const {
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

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST::GALGAS_semanticExpressionAST (const cPtr_semanticExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionAST::cPtr_semanticExpressionAST (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST ("semanticExpressionAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_semanticExpressionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionAST result ;
  const GALGAS_semanticExpressionAST * p = (const GALGAS_semanticExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outputActualParameterAST_2D_weak::objectCompare (const GALGAS_outputActualParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_outputActualParameterAST_2D_weak::GALGAS_outputActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak & GALGAS_outputActualParameterAST_2D_weak::operator = (const GALGAS_outputActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak::GALGAS_outputActualParameterAST_2D_weak (const GALGAS_outputActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak GALGAS_outputActualParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_outputActualParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST GALGAS_outputActualParameterAST_2D_weak::bang_outputActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputActualParameterAST) ;
      result = GALGAS_outputActualParameterAST ((cPtr_outputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputActualParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ("outputActualParameterAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputActualParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputActualParameterAST_2D_weak GALGAS_outputActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outputActualParameterAST_2D_weak result ;
  const GALGAS_outputActualParameterAST_2D_weak * p = (const GALGAS_outputActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outputInputActualParameterAST_2D_weak::objectCompare (const GALGAS_outputInputActualParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_outputInputActualParameterAST_2D_weak::GALGAS_outputInputActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak & GALGAS_outputInputActualParameterAST_2D_weak::operator = (const GALGAS_outputInputActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak::GALGAS_outputInputActualParameterAST_2D_weak (const GALGAS_outputInputActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak GALGAS_outputInputActualParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST GALGAS_outputInputActualParameterAST_2D_weak::bang_outputInputActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputActualParameterAST) ;
      result = GALGAS_outputInputActualParameterAST ((cPtr_outputInputActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputActualParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ("outputInputActualParameterAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputActualParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputActualParameterAST_2D_weak GALGAS_outputInputActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outputInputActualParameterAST_2D_weak result ;
  const GALGAS_outputInputActualParameterAST_2D_weak * p = (const GALGAS_outputInputActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outputInputSingleJokerParameterAST_2D_weak::objectCompare (const GALGAS_outputInputSingleJokerParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_outputInputSingleJokerParameterAST_2D_weak::GALGAS_outputInputSingleJokerParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak & GALGAS_outputInputSingleJokerParameterAST_2D_weak::operator = (const GALGAS_outputInputSingleJokerParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak::GALGAS_outputInputSingleJokerParameterAST_2D_weak (const GALGAS_outputInputSingleJokerParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak GALGAS_outputInputSingleJokerParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST GALGAS_outputInputSingleJokerParameterAST_2D_weak::bang_outputInputSingleJokerParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputSingleJokerParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputSingleJokerParameterAST) ;
      result = GALGAS_outputInputSingleJokerParameterAST ((cPtr_outputInputSingleJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputSingleJokerParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST_2D_weak ("outputInputSingleJokerParameterAST-weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSingleJokerParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSingleJokerParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSingleJokerParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSingleJokerParameterAST_2D_weak GALGAS_outputInputSingleJokerParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSingleJokerParameterAST_2D_weak result ;
  const GALGAS_outputInputSingleJokerParameterAST_2D_weak * p = (const GALGAS_outputInputSingleJokerParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputSingleJokerParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSingleJokerParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outputInputSelfParameterAST_2D_weak::objectCompare (const GALGAS_outputInputSelfParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_outputInputSelfParameterAST_2D_weak::GALGAS_outputInputSelfParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST_2D_weak & GALGAS_outputInputSelfParameterAST_2D_weak::operator = (const GALGAS_outputInputSelfParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST_2D_weak::GALGAS_outputInputSelfParameterAST_2D_weak (const GALGAS_outputInputSelfParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST_2D_weak GALGAS_outputInputSelfParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_outputInputSelfParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST GALGAS_outputInputSelfParameterAST_2D_weak::bang_outputInputSelfParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputSelfParameterAST) ;
      result = GALGAS_outputInputSelfParameterAST ((cPtr_outputInputSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputSelfParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2D_weak ("outputInputSelfParameterAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputSelfParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputSelfParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputSelfParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputSelfParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputSelfParameterAST_2D_weak GALGAS_outputInputSelfParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outputInputSelfParameterAST_2D_weak result ;
  const GALGAS_outputInputSelfParameterAST_2D_weak * p = (const GALGAS_outputInputSelfParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputSelfParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputSelfParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outputInputJokerParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outputInputJokerParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mQualifierLocation.printNonNullClassInstanceProperties ("mQualifierLocation") ;
    mProperty_mJokerIndex.printNonNullClassInstanceProperties ("mJokerIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_outputInputJokerParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_outputInputJokerParameterAST * p = (const cPtr_outputInputJokerParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mQualifierLocation.objectCompare (p->mProperty_mQualifierLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mJokerIndex.objectCompare (p->mProperty_mJokerIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_outputInputJokerParameterAST::objectCompare (const GALGAS_outputInputJokerParameterAST & inOperand) const {
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

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::init_28__2C__29_ (const GALGAS_location & in_mQualifierLocation,
                                                                                           const GALGAS_uint & in_mJokerIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_outputInputJokerParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_outputInputJokerParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mQualifierLocation = in_mQualifierLocation ;
  object->mProperty_mJokerIndex = in_mJokerIndex ;
  const GALGAS_outputInputJokerParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST::GALGAS_outputInputJokerParameterAST (const cPtr_outputInputJokerParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outputInputJokerParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::class_func_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                         const GALGAS_uint & inAttribute_mJokerIndex
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outputInputJokerParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_outputInputJokerParameterAST::readProperty_mQualifierLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_outputInputJokerParameterAST::readProperty_mJokerIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_outputInputJokerParameterAST * p = (cPtr_outputInputJokerParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outputInputJokerParameterAST) ;
    return p->mProperty_mJokerIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outputInputJokerParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_outputInputJokerParameterAST::cPtr_outputInputJokerParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mQualifierLocation (in_mQualifierLocation),
mProperty_mJokerIndex (in_mJokerIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outputInputJokerParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

void cPtr_outputInputJokerParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@outputInputJokerParameterAST:") ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outputInputJokerParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outputInputJokerParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outputInputJokerParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST ("outputInputJokerParameterAST",
                                                                                    & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputJokerParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputJokerParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputJokerParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST result ;
  const GALGAS_outputInputJokerParameterAST * p = (const GALGAS_outputInputJokerParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputJokerParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_outputInputJokerParameterAST_2D_weak::objectCompare (const GALGAS_outputInputJokerParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_outputInputJokerParameterAST_2D_weak::GALGAS_outputInputJokerParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak & GALGAS_outputInputJokerParameterAST_2D_weak::operator = (const GALGAS_outputInputJokerParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak::GALGAS_outputInputJokerParameterAST_2D_weak (const GALGAS_outputInputJokerParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak GALGAS_outputInputJokerParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST GALGAS_outputInputJokerParameterAST_2D_weak::bang_outputInputJokerParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outputInputJokerParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_outputInputJokerParameterAST) ;
      result = GALGAS_outputInputJokerParameterAST ((cPtr_outputInputJokerParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @outputInputJokerParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2D_weak ("outputInputJokerParameterAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outputInputJokerParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outputInputJokerParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outputInputJokerParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outputInputJokerParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outputInputJokerParameterAST_2D_weak GALGAS_outputInputJokerParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_outputInputJokerParameterAST_2D_weak result ;
  const GALGAS_outputInputJokerParameterAST_2D_weak * p = (const GALGAS_outputInputJokerParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outputInputJokerParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outputInputJokerParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputActualExistingVariableParameterAST_2D_weak::objectCompare (const GALGAS_inputActualExistingVariableParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputActualExistingVariableParameterAST_2D_weak::GALGAS_inputActualExistingVariableParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak & GALGAS_inputActualExistingVariableParameterAST_2D_weak::operator = (const GALGAS_inputActualExistingVariableParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak::GALGAS_inputActualExistingVariableParameterAST_2D_weak (const GALGAS_inputActualExistingVariableParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak GALGAS_inputActualExistingVariableParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST GALGAS_inputActualExistingVariableParameterAST_2D_weak::bang_inputActualExistingVariableParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualExistingVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualExistingVariableParameterAST) ;
      result = GALGAS_inputActualExistingVariableParameterAST ((cPtr_inputActualExistingVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualExistingVariableParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ("inputActualExistingVariableParameterAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualExistingVariableParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualExistingVariableParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualExistingVariableParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualExistingVariableParameterAST_2D_weak GALGAS_inputActualExistingVariableParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputActualExistingVariableParameterAST_2D_weak result ;
  const GALGAS_inputActualExistingVariableParameterAST_2D_weak * p = (const GALGAS_inputActualExistingVariableParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualExistingVariableParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualExistingVariableParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputActualSelfPropertyParameterAST_2D_weak::objectCompare (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputActualSelfPropertyParameterAST_2D_weak::GALGAS_inputActualSelfPropertyParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak & GALGAS_inputActualSelfPropertyParameterAST_2D_weak::operator = (const GALGAS_inputActualSelfPropertyParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak::GALGAS_inputActualSelfPropertyParameterAST_2D_weak (const GALGAS_inputActualSelfPropertyParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak GALGAS_inputActualSelfPropertyParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST GALGAS_inputActualSelfPropertyParameterAST_2D_weak::bang_inputActualSelfPropertyParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualSelfPropertyParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfPropertyParameterAST) ;
      result = GALGAS_inputActualSelfPropertyParameterAST ((cPtr_inputActualSelfPropertyParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfPropertyParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ("inputActualSelfPropertyParameterAST-weak",
                                                                                                   & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfPropertyParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfPropertyParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfPropertyParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfPropertyParameterAST_2D_weak GALGAS_inputActualSelfPropertyParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfPropertyParameterAST_2D_weak result ;
  const GALGAS_inputActualSelfPropertyParameterAST_2D_weak * p = (const GALGAS_inputActualSelfPropertyParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualSelfPropertyParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfPropertyParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputActualSelfParameterAST_2D_weak::objectCompare (const GALGAS_inputActualSelfParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputActualSelfParameterAST_2D_weak::GALGAS_inputActualSelfParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST_2D_weak & GALGAS_inputActualSelfParameterAST_2D_weak::operator = (const GALGAS_inputActualSelfParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST_2D_weak::GALGAS_inputActualSelfParameterAST_2D_weak (const GALGAS_inputActualSelfParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST_2D_weak GALGAS_inputActualSelfParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputActualSelfParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST GALGAS_inputActualSelfParameterAST_2D_weak::bang_inputActualSelfParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualSelfParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualSelfParameterAST) ;
      result = GALGAS_inputActualSelfParameterAST ((cPtr_inputActualSelfParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualSelfParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2D_weak ("inputActualSelfParameterAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualSelfParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualSelfParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualSelfParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualSelfParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualSelfParameterAST_2D_weak GALGAS_inputActualSelfParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_inputActualSelfParameterAST_2D_weak result ;
  const GALGAS_inputActualSelfParameterAST_2D_weak * p = (const GALGAS_inputActualSelfParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualSelfParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualSelfParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputActualNewVariableParameterAST_2D_weak::objectCompare (const GALGAS_inputActualNewVariableParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputActualNewVariableParameterAST_2D_weak::GALGAS_inputActualNewVariableParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak & GALGAS_inputActualNewVariableParameterAST_2D_weak::operator = (const GALGAS_inputActualNewVariableParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak::GALGAS_inputActualNewVariableParameterAST_2D_weak (const GALGAS_inputActualNewVariableParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak GALGAS_inputActualNewVariableParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST GALGAS_inputActualNewVariableParameterAST_2D_weak::bang_inputActualNewVariableParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualNewVariableParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewVariableParameterAST) ;
      result = GALGAS_inputActualNewVariableParameterAST ((cPtr_inputActualNewVariableParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewVariableParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ("inputActualNewVariableParameterAST-weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewVariableParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewVariableParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewVariableParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewVariableParameterAST_2D_weak GALGAS_inputActualNewVariableParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewVariableParameterAST_2D_weak result ;
  const GALGAS_inputActualNewVariableParameterAST_2D_weak * p = (const GALGAS_inputActualNewVariableParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualNewVariableParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewVariableParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputActualNewConstantParameterAST_2D_weak::objectCompare (const GALGAS_inputActualNewConstantParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputActualNewConstantParameterAST_2D_weak::GALGAS_inputActualNewConstantParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak & GALGAS_inputActualNewConstantParameterAST_2D_weak::operator = (const GALGAS_inputActualNewConstantParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak::GALGAS_inputActualNewConstantParameterAST_2D_weak (const GALGAS_inputActualNewConstantParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak GALGAS_inputActualNewConstantParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST GALGAS_inputActualNewConstantParameterAST_2D_weak::bang_inputActualNewConstantParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputActualNewConstantParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputActualNewConstantParameterAST) ;
      result = GALGAS_inputActualNewConstantParameterAST ((cPtr_inputActualNewConstantParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputActualNewConstantParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ("inputActualNewConstantParameterAST-weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputActualNewConstantParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputActualNewConstantParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputActualNewConstantParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputActualNewConstantParameterAST_2D_weak GALGAS_inputActualNewConstantParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputActualNewConstantParameterAST_2D_weak result ;
  const GALGAS_inputActualNewConstantParameterAST_2D_weak * p = (const GALGAS_inputActualNewConstantParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputActualNewConstantParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputActualNewConstantParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputSingleJokerActualParameterAST_2D_weak::objectCompare (const GALGAS_inputSingleJokerActualParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputSingleJokerActualParameterAST_2D_weak::GALGAS_inputSingleJokerActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak & GALGAS_inputSingleJokerActualParameterAST_2D_weak::operator = (const GALGAS_inputSingleJokerActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak::GALGAS_inputSingleJokerActualParameterAST_2D_weak (const GALGAS_inputSingleJokerActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak GALGAS_inputSingleJokerActualParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST GALGAS_inputSingleJokerActualParameterAST_2D_weak::bang_inputSingleJokerActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputSingleJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputSingleJokerActualParameterAST) ;
      result = GALGAS_inputSingleJokerActualParameterAST ((cPtr_inputSingleJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputSingleJokerActualParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ("inputSingleJokerActualParameterAST-weak",
                                                                                                  & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputSingleJokerActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputSingleJokerActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputSingleJokerActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputSingleJokerActualParameterAST_2D_weak GALGAS_inputSingleJokerActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_inputSingleJokerActualParameterAST_2D_weak result ;
  const GALGAS_inputSingleJokerActualParameterAST_2D_weak * p = (const GALGAS_inputSingleJokerActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputSingleJokerActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputSingleJokerActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputJokerActualParameterAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (inCompiler COMMA_THERE),
mProperty_mQualifierLocation (),
mProperty_mJokerIndex () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputJokerActualParameterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_actualParameterAST::printNonNullClassInstanceProperties () ;
    mProperty_mQualifierLocation.printNonNullClassInstanceProperties ("mQualifierLocation") ;
    mProperty_mJokerIndex.printNonNullClassInstanceProperties ("mJokerIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputJokerActualParameterAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cPtr_inputJokerActualParameterAST * p = (const cPtr_inputJokerActualParameterAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mQualifierLocation.objectCompare (p->mProperty_mQualifierLocation) ;
  }
  if (ComparisonResult::operandEqual == result) {
    result = mProperty_mJokerIndex.objectCompare (p->mProperty_mJokerIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputJokerActualParameterAST::objectCompare (const GALGAS_inputJokerActualParameterAST & inOperand) const {
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

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (void) :
GALGAS_actualParameterAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::init_28__2C__29_ (const GALGAS_location & in_mQualifierLocation,
                                                                                           const GALGAS_uint & in_mJokerIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cPtr_inputJokerActualParameterAST * object = nullptr ;
  macroMyNew (object, cPtr_inputJokerActualParameterAST (inCompiler COMMA_THERE)) ;
  object->mProperty_mQualifierLocation = in_mQualifierLocation ;
  object->mProperty_mJokerIndex = in_mJokerIndex ;
  const GALGAS_inputJokerActualParameterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST::GALGAS_inputJokerActualParameterAST (const cPtr_inputJokerActualParameterAST * inSourcePtr) :
GALGAS_actualParameterAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputJokerActualParameterAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::class_func_new (const GALGAS_location & inAttribute_mQualifierLocation,
                                                                                         const GALGAS_uint & inAttribute_mJokerIndex
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  if (inAttribute_mQualifierLocation.isValid () && inAttribute_mJokerIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_inputJokerActualParameterAST (inAttribute_mQualifierLocation, inAttribute_mJokerIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_inputJokerActualParameterAST::readProperty_mQualifierLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mQualifierLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_inputJokerActualParameterAST::readProperty_mJokerIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_inputJokerActualParameterAST * p = (cPtr_inputJokerActualParameterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_inputJokerActualParameterAST) ;
    return p->mProperty_mJokerIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputJokerActualParameterAST class
//--------------------------------------------------------------------------------------------------

cPtr_inputJokerActualParameterAST::cPtr_inputJokerActualParameterAST (const GALGAS_location & in_mQualifierLocation,
                                                                      const GALGAS_uint & in_mJokerIndex
                                                                      COMMA_LOCATION_ARGS) :
cPtr_actualParameterAST (THERE),
mProperty_mQualifierLocation (in_mQualifierLocation),
mProperty_mJokerIndex (in_mJokerIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputJokerActualParameterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

void cPtr_inputJokerActualParameterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@inputJokerActualParameterAST:") ;
  mProperty_mQualifierLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mJokerIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputJokerActualParameterAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputJokerActualParameterAST (mProperty_mQualifierLocation, mProperty_mJokerIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputJokerActualParameterAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST ("inputJokerActualParameterAST",
                                                                                    & kTypeDescriptor_GALGAS_actualParameterAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerActualParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerActualParameterAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerActualParameterAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST result ;
  const GALGAS_inputJokerActualParameterAST * p = (const GALGAS_inputJokerActualParameterAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputJokerActualParameterAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputJokerActualParameterAST_2D_weak::objectCompare (const GALGAS_inputJokerActualParameterAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputJokerActualParameterAST_2D_weak::GALGAS_inputJokerActualParameterAST_2D_weak (void) :
GALGAS_actualParameterAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak & GALGAS_inputJokerActualParameterAST_2D_weak::operator = (const GALGAS_inputJokerActualParameterAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak::GALGAS_inputJokerActualParameterAST_2D_weak (const GALGAS_inputJokerActualParameterAST & inSource) :
GALGAS_actualParameterAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak GALGAS_inputJokerActualParameterAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST GALGAS_inputJokerActualParameterAST_2D_weak::bang_inputJokerActualParameterAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputJokerActualParameterAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputJokerActualParameterAST) ;
      result = GALGAS_inputJokerActualParameterAST ((cPtr_inputJokerActualParameterAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputJokerActualParameterAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2D_weak ("inputJokerActualParameterAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_actualParameterAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputJokerActualParameterAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputJokerActualParameterAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputJokerActualParameterAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputJokerActualParameterAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputJokerActualParameterAST_2D_weak GALGAS_inputJokerActualParameterAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_inputJokerActualParameterAST_2D_weak result ;
  const GALGAS_inputJokerActualParameterAST_2D_weak * p = (const GALGAS_inputJokerActualParameterAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputJokerActualParameterAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputJokerActualParameterAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externProcedureDeclarationAST_2D_weak::objectCompare (const GALGAS_externProcedureDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_externProcedureDeclarationAST_2D_weak::GALGAS_externProcedureDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST_2D_weak & GALGAS_externProcedureDeclarationAST_2D_weak::operator = (const GALGAS_externProcedureDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST_2D_weak::GALGAS_externProcedureDeclarationAST_2D_weak (const GALGAS_externProcedureDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST_2D_weak GALGAS_externProcedureDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST GALGAS_externProcedureDeclarationAST_2D_weak::bang_externProcedureDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externProcedureDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externProcedureDeclarationAST) ;
      result = GALGAS_externProcedureDeclarationAST ((cPtr_externProcedureDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externProcedureDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2D_weak ("externProcedureDeclarationAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externProcedureDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externProcedureDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externProcedureDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externProcedureDeclarationAST_2D_weak GALGAS_externProcedureDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_externProcedureDeclarationAST_2D_weak result ;
  const GALGAS_externProcedureDeclarationAST_2D_weak * p = (const GALGAS_externProcedureDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externProcedureDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externProcedureDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procDeclarationAST_2D_weak::objectCompare (const GALGAS_procDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_procDeclarationAST_2D_weak::GALGAS_procDeclarationAST_2D_weak (void) :
GALGAS_externProcedureDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak & GALGAS_procDeclarationAST_2D_weak::operator = (const GALGAS_procDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak::GALGAS_procDeclarationAST_2D_weak (const GALGAS_procDeclarationAST & inSource) :
GALGAS_externProcedureDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak GALGAS_procDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_procDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST GALGAS_procDeclarationAST_2D_weak::bang_procDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procDeclarationAST) ;
      result = GALGAS_procDeclarationAST ((cPtr_procDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ("procDeclarationAST-weak",
                                                                                  & kTypeDescriptor_GALGAS_externProcedureDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procDeclarationAST_2D_weak GALGAS_procDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_procDeclarationAST_2D_weak result ;
  const GALGAS_procDeclarationAST_2D_weak * p = (const GALGAS_procDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticExpressionAST_2D_weak::objectCompare (const GALGAS_semanticExpressionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_semanticExpressionAST_2D_weak::GALGAS_semanticExpressionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak & GALGAS_semanticExpressionAST_2D_weak::operator = (const GALGAS_semanticExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak::GALGAS_semanticExpressionAST_2D_weak (const GALGAS_semanticExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak GALGAS_semanticExpressionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticExpressionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_semanticExpressionAST_2D_weak::bang_semanticExpressionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticExpressionAST) ;
      result = GALGAS_semanticExpressionAST ((cPtr_semanticExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticExpressionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak ("semanticExpressionAST-weak",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticExpressionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticExpressionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticExpressionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST_2D_weak GALGAS_semanticExpressionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_semanticExpressionAST_2D_weak result ;
  const GALGAS_semanticExpressionAST_2D_weak * p = (const GALGAS_semanticExpressionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticExpressionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticExpressionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST::GALGAS_formalArgumentPassingModeAST (void) :
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::class_func_argumentIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentIn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::class_func_argumentOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentOut ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::class_func_argumentInOut (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentInOut ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::class_func_argumentConstantIn (UNUSED_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  result.mEnum = kEnum_argumentConstantIn ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentIn () const {
  const bool ok = mEnum == kEnum_argumentIn ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentOut () const {
  const bool ok = mEnum == kEnum_argumentOut ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentInOut () const {
  const bool ok = mEnum == kEnum_argumentInOut ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_formalArgumentPassingModeAST::optional_argumentConstantIn () const {
  const bool ok = mEnum == kEnum_argumentConstantIn ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_formalArgumentPassingModeAST [5] = {
  "(not built)",
  "argumentIn",
  "argumentOut",
  "argumentInOut",
  "argumentConstantIn"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentIn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentOut == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentInOut (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentInOut == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalArgumentPassingModeAST::getter_isArgumentConstantIn (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_argumentConstantIn == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalArgumentPassingModeAST::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @formalArgumentPassingModeAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_formalArgumentPassingModeAST [mEnum]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_formalArgumentPassingModeAST::objectCompare (const GALGAS_formalArgumentPassingModeAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @formalArgumentPassingModeAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ("formalArgumentPassingModeAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalArgumentPassingModeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalArgumentPassingModeAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalArgumentPassingModeAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalArgumentPassingModeAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalArgumentPassingModeAST GALGAS_formalArgumentPassingModeAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_formalArgumentPassingModeAST result ;
  const GALGAS_formalArgumentPassingModeAST * p = (const GALGAS_formalArgumentPassingModeAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalArgumentPassingModeAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalArgumentPassingModeAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST string'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_formalArgumentPassingModeAST & inObject,
                                      Compiler *
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("\?let") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("\?") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("!") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("\?!") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalArgumentPassingModeAST formalArgumentMessage'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_formalArgumentMessage (const GALGAS_formalArgumentPassingModeAST & inObject,
                                                     Compiler *
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    {
      result_result = GALGAS_string ("a constant input (\?let) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    {
      result_result = GALGAS_string ("an input (\?) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
    {
      result_result = GALGAS_string ("an output (!) formal argument") ;
    }
    break ;
  case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
    {
      result_result = GALGAS_string ("an input/output (\?!) formal argument") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalParameterListAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_keyRepresentation (const GALGAS_formalParameterListAST & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_formalParameterListAST temp_0 = inObject ;
  cEnumerator_formalParameterListAST enumerator_3196 (temp_0, EnumerationOrder::up) ;
  while (enumerator_3196.hasCurrentObject ()) {
    switch (enumerator_3196.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        result_result.plusAssign_operation(GALGAS_string ("\?"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 82)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("\?!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 84)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        result_result.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 86)) ;
      }
      break ;
    }
    result_result.plusAssign_operation(enumerator_3196.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 88)) ;
    if (enumerator_3196.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 90)) ;
    }
    enumerator_3196.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 92)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@formalInputParameterListAST signature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_signature (const GALGAS_formalInputParameterListAST & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("(") ;
  const GALGAS_formalInputParameterListAST temp_0 = inObject ;
  cEnumerator_formalInputParameterListAST enumerator_4095 (temp_0, EnumerationOrder::up) ;
  while (enumerator_4095.hasCurrentObject ()) {
    result_result.plusAssign_operation(enumerator_4095.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 114)) ;
    if (enumerator_4095.hasNextObject ()) {
      result_result.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 116)) ;
    }
    enumerator_4095.gotoNextObject () ;
  }
  result_result.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 118)) ;
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @abstractInputParameter reference class
//--------------------------------------------------------------------------------------------------

cPtr_abstractInputParameter::cPtr_abstractInputParameter (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractInputParameter::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_abstractInputParameter::objectCompare (const GALGAS_abstractInputParameter & inOperand) const {
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

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter::GALGAS_abstractInputParameter (const cPtr_abstractInputParameter * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractInputParameter) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractInputParameter class
//--------------------------------------------------------------------------------------------------

cPtr_abstractInputParameter::cPtr_abstractInputParameter (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractInputParameter generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInputParameter ("abstractInputParameter",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInputParameter::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInputParameter::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInputParameter (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_abstractInputParameter::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractInputParameter result ;
  const GALGAS_abstractInputParameter * p = (const GALGAS_abstractInputParameter *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractInputParameter *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_abstractInputParameter_2D_weak::objectCompare (const GALGAS_abstractInputParameter_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_abstractInputParameter_2D_weak::GALGAS_abstractInputParameter_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak & GALGAS_abstractInputParameter_2D_weak::operator = (const GALGAS_abstractInputParameter & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak::GALGAS_abstractInputParameter_2D_weak (const GALGAS_abstractInputParameter & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak GALGAS_abstractInputParameter_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_abstractInputParameter_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_abstractInputParameter_2D_weak::bang_abstractInputParameter_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractInputParameter result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractInputParameter) ;
      result = GALGAS_abstractInputParameter ((cPtr_abstractInputParameter *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractInputParameter-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak ("abstractInputParameter-weak",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractInputParameter_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractInputParameter_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractInputParameter_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter_2D_weak GALGAS_abstractInputParameter_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractInputParameter_2D_weak result ;
  const GALGAS_abstractInputParameter_2D_weak * p = (const GALGAS_abstractInputParameter_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractInputParameter_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractInputParameter-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @inputParameterAnonymousVariable reference class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractInputParameter (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_inputParameterAnonymousVariable::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractInputParameter::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult cPtr_inputParameterAnonymousVariable::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return ComparisonResult::operandEqual ;
}

//--------------------------------------------------------------------------------------------------


ComparisonResult GALGAS_inputParameterAnonymousVariable::objectCompare (const GALGAS_inputParameterAnonymousVariable & inOperand) const {
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

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (void) :
GALGAS_abstractInputParameter () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::init_28__29_ (Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cPtr_inputParameterAnonymousVariable * object = nullptr ;
  macroMyNew (object, cPtr_inputParameterAnonymousVariable (inCompiler COMMA_THERE)) ;
  const GALGAS_inputParameterAnonymousVariable result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable::GALGAS_inputParameterAnonymousVariable (const cPtr_inputParameterAnonymousVariable * inSourcePtr) :
GALGAS_abstractInputParameter (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_inputParameterAnonymousVariable) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::class_func_new (LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  macroMyNew (result.mObjectPtr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @inputParameterAnonymousVariable class
//--------------------------------------------------------------------------------------------------

cPtr_inputParameterAnonymousVariable::cPtr_inputParameterAnonymousVariable (LOCATION_ARGS) :
cPtr_abstractInputParameter (THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_inputParameterAnonymousVariable::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

void cPtr_inputParameterAnonymousVariable::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@inputParameterAnonymousVariable]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_inputParameterAnonymousVariable::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_inputParameterAnonymousVariable (THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @inputParameterAnonymousVariable generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ("inputParameterAnonymousVariable",
                                                                                       & kTypeDescriptor_GALGAS_abstractInputParameter) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterAnonymousVariable::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterAnonymousVariable::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterAnonymousVariable (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable result ;
  const GALGAS_inputParameterAnonymousVariable * p = (const GALGAS_inputParameterAnonymousVariable *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterAnonymousVariable *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputParameterAnonymousVariable_2D_weak::objectCompare (const GALGAS_inputParameterAnonymousVariable_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputParameterAnonymousVariable_2D_weak::GALGAS_inputParameterAnonymousVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak & GALGAS_inputParameterAnonymousVariable_2D_weak::operator = (const GALGAS_inputParameterAnonymousVariable & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak::GALGAS_inputParameterAnonymousVariable_2D_weak (const GALGAS_inputParameterAnonymousVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak GALGAS_inputParameterAnonymousVariable_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable GALGAS_inputParameterAnonymousVariable_2D_weak::bang_inputParameterAnonymousVariable_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterAnonymousVariable result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterAnonymousVariable) ;
      result = GALGAS_inputParameterAnonymousVariable ((cPtr_inputParameterAnonymousVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputParameterAnonymousVariable-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2D_weak ("inputParameterAnonymousVariable-weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterAnonymousVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterAnonymousVariable_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterAnonymousVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterAnonymousVariable_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterAnonymousVariable_2D_weak GALGAS_inputParameterAnonymousVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterAnonymousVariable_2D_weak result ;
  const GALGAS_inputParameterAnonymousVariable_2D_weak * p = (const GALGAS_inputParameterAnonymousVariable_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterAnonymousVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterAnonymousVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputParameterVariable_2D_weak::objectCompare (const GALGAS_inputParameterVariable_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputParameterVariable_2D_weak::GALGAS_inputParameterVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak & GALGAS_inputParameterVariable_2D_weak::operator = (const GALGAS_inputParameterVariable & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak::GALGAS_inputParameterVariable_2D_weak (const GALGAS_inputParameterVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak GALGAS_inputParameterVariable_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputParameterVariable_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable GALGAS_inputParameterVariable_2D_weak::bang_inputParameterVariable_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterVariable result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterVariable) ;
      result = GALGAS_inputParameterVariable ((cPtr_inputParameterVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputParameterVariable-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterVariable_2D_weak ("inputParameterVariable-weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterVariable_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterVariable_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterVariable_2D_weak GALGAS_inputParameterVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterVariable_2D_weak result ;
  const GALGAS_inputParameterVariable_2D_weak * p = (const GALGAS_inputParameterVariable_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputParameterDeclaredVariable_2D_weak::objectCompare (const GALGAS_inputParameterDeclaredVariable_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputParameterDeclaredVariable_2D_weak::GALGAS_inputParameterDeclaredVariable_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak & GALGAS_inputParameterDeclaredVariable_2D_weak::operator = (const GALGAS_inputParameterDeclaredVariable & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak::GALGAS_inputParameterDeclaredVariable_2D_weak (const GALGAS_inputParameterDeclaredVariable & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak GALGAS_inputParameterDeclaredVariable_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable GALGAS_inputParameterDeclaredVariable_2D_weak::bang_inputParameterDeclaredVariable_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterDeclaredVariable result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredVariable) ;
      result = GALGAS_inputParameterDeclaredVariable ((cPtr_inputParameterDeclaredVariable *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredVariable-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2D_weak ("inputParameterDeclaredVariable-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredVariable_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredVariable_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredVariable_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredVariable_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredVariable_2D_weak GALGAS_inputParameterDeclaredVariable_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredVariable_2D_weak result ;
  const GALGAS_inputParameterDeclaredVariable_2D_weak * p = (const GALGAS_inputParameterDeclaredVariable_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredVariable_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredVariable-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_inputParameterDeclaredConstant_2D_weak::objectCompare (const GALGAS_inputParameterDeclaredConstant_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_inputParameterDeclaredConstant_2D_weak::GALGAS_inputParameterDeclaredConstant_2D_weak (void) :
GALGAS_abstractInputParameter_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak & GALGAS_inputParameterDeclaredConstant_2D_weak::operator = (const GALGAS_inputParameterDeclaredConstant & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak::GALGAS_inputParameterDeclaredConstant_2D_weak (const GALGAS_inputParameterDeclaredConstant & inSource) :
GALGAS_abstractInputParameter_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak GALGAS_inputParameterDeclaredConstant_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant GALGAS_inputParameterDeclaredConstant_2D_weak::bang_inputParameterDeclaredConstant_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_inputParameterDeclaredConstant result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_inputParameterDeclaredConstant) ;
      result = GALGAS_inputParameterDeclaredConstant ((cPtr_inputParameterDeclaredConstant *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @inputParameterDeclaredConstant-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2D_weak ("inputParameterDeclaredConstant-weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractInputParameter_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_inputParameterDeclaredConstant_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_inputParameterDeclaredConstant_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_inputParameterDeclaredConstant_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_inputParameterDeclaredConstant_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_inputParameterDeclaredConstant_2D_weak GALGAS_inputParameterDeclaredConstant_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_inputParameterDeclaredConstant_2D_weak result ;
  const GALGAS_inputParameterDeclaredConstant_2D_weak * p = (const GALGAS_inputParameterDeclaredConstant_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_inputParameterDeclaredConstant_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("inputParameterDeclaredConstant-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@actualInputParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_actualInputParameterListAST : public cCollectionElement {
  public: GALGAS_actualInputParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                          const GALGAS_abstractInputParameter & in_mInputParameter
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actualInputParameterListAST (const GALGAS_actualInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualInputParameterListAST::cCollectionElement_actualInputParameterListAST (const GALGAS_lstring & in_mActualSelector,
                                                                                                const GALGAS_abstractInputParameter & in_mInputParameter
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mActualSelector, in_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actualInputParameterListAST::cCollectionElement_actualInputParameterListAST (const GALGAS_actualInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mActualSelector, inElement.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actualInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actualInputParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actualInputParameterListAST (mObject.mProperty_mActualSelector, mObject.mProperty_mInputParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_actualInputParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mActualSelector" ":") ;
  mObject.mProperty_mActualSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInputParameter" ":") ;
  mObject.mProperty_mInputParameter.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_actualInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actualInputParameterListAST * operand = (cCollectionElement_actualInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actualInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST::GALGAS_actualInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actualInputParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                 const GALGAS_abstractInputParameter & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actualInputParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actualInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mActualSelector,
                                                                    const GALGAS_abstractInputParameter & in_mInputParameter
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_actualInputParameterListAST (in_mActualSelector,
                                                                 in_mInputParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_abstractInputParameter & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                        const GALGAS_abstractInputParameter inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_abstractInputParameter inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_actualInputParameterListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_abstractInputParameter & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mActualSelector ;
        outOperand1 = p->mObject.mProperty_mInputParameter ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_abstractInputParameter & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_abstractInputParameter & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_abstractInputParameter & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_abstractInputParameter & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mActualSelector ;
    outOperand1 = p->mObject.mProperty_mInputParameter ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::add_operation (const GALGAS_actualInputParameterListAST & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_actualInputParameterListAST result = GALGAS_actualInputParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::plusAssign_operation (const GALGAS_actualInputParameterListAST inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_setMActualSelectorAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActualSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_actualInputParameterListAST::getter_mActualSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mProperty_mActualSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_actualInputParameterListAST::setter_setMInputParameterAtIndex (GALGAS_abstractInputParameter inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInputParameter = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter GALGAS_actualInputParameterListAST::getter_mInputParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actualInputParameterListAST * p = (cCollectionElement_actualInputParameterListAST *) attributes.ptr () ;
  GALGAS_abstractInputParameter result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
    result = p->mObject.mProperty_mInputParameter ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_actualInputParameterListAST::cEnumerator_actualInputParameterListAST (const GALGAS_actualInputParameterListAST & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST_2D_element cEnumerator_actualInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_actualInputParameterListAST::current_mActualSelector (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mProperty_mActualSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractInputParameter cEnumerator_actualInputParameterListAST::current_mInputParameter (LOCATION_ARGS) const {
  const cCollectionElement_actualInputParameterListAST * p = (const cCollectionElement_actualInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actualInputParameterListAST) ;
  return p->mObject.mProperty_mInputParameter ;
}




//--------------------------------------------------------------------------------------------------
//
//     @actualInputParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actualInputParameterListAST ("actualInputParameterListAST",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actualInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actualInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actualInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualInputParameterListAST GALGAS_actualInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_actualInputParameterListAST result ;
  const GALGAS_actualInputParameterListAST * p = (const GALGAS_actualInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_actualInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actualInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (Compiler * /* inCompiler */ COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_syntaxInstructionAST::objectCompare (const GALGAS_syntaxInstructionAST & inOperand) const {
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

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST::GALGAS_syntaxInstructionAST (const cPtr_syntaxInstructionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syntaxInstructionAST::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_syntaxInstructionAST * p = (cPtr_syntaxInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxInstructionAST) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxInstructionAST::cPtr_syntaxInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                      COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mInstructionLocation (in_mInstructionLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST ("syntaxInstructionAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST result ;
  const GALGAS_syntaxInstructionAST * p = (const GALGAS_syntaxInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_syntaxInstructionAST_2D_weak::objectCompare (const GALGAS_syntaxInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_syntaxInstructionAST_2D_weak::GALGAS_syntaxInstructionAST_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak & GALGAS_syntaxInstructionAST_2D_weak::operator = (const GALGAS_syntaxInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak::GALGAS_syntaxInstructionAST_2D_weak (const GALGAS_syntaxInstructionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak GALGAS_syntaxInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionAST_2D_weak::bang_syntaxInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxInstructionAST) ;
      result = GALGAS_syntaxInstructionAST ((cPtr_syntaxInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak ("syntaxInstructionAST-weak",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST_2D_weak GALGAS_syntaxInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionAST_2D_weak result ;
  const GALGAS_syntaxInstructionAST_2D_weak * p = (const GALGAS_syntaxInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @semanticInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------



ComparisonResult GALGAS_semanticInstructionAST::objectCompare (const GALGAS_semanticInstructionAST & inOperand) const {
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

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST::GALGAS_semanticInstructionAST (const cPtr_semanticInstructionAST * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (const GALGAS_location & in_mInstructionLocation
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST ("semanticInstructionAST",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionAST result ;
  const GALGAS_semanticInstructionAST * p = (const GALGAS_semanticInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_semanticInstructionAST_2D_weak::objectCompare (const GALGAS_semanticInstructionAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_semanticInstructionAST_2D_weak::GALGAS_semanticInstructionAST_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak & GALGAS_semanticInstructionAST_2D_weak::operator = (const GALGAS_semanticInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak::GALGAS_semanticInstructionAST_2D_weak (const GALGAS_semanticInstructionAST & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak GALGAS_semanticInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_semanticInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST GALGAS_semanticInstructionAST_2D_weak::bang_semanticInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_semanticInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionAST) ;
      result = GALGAS_semanticInstructionAST ((cPtr_semanticInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak ("semanticInstructionAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionAST_2D_weak GALGAS_semanticInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_semanticInstructionAST_2D_weak result ;
  const GALGAS_semanticInstructionAST_2D_weak * p = (const GALGAS_semanticInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@semanticDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_semanticDeclarationListAST : public cCollectionElement {
  public: GALGAS_semanticDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListAST::cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSemanticDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_semanticDeclarationListAST::cCollectionElement_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSemanticDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_semanticDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_semanticDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_semanticDeclarationListAST (mObject.mProperty_mSemanticDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_semanticDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSemanticDeclaration" ":") ;
  mObject.mProperty_mSemanticDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_semanticDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_semanticDeclarationListAST * operand = (cCollectionElement_semanticDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_semanticDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST::GALGAS_semanticDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::class_func_listWithValue (const GALGAS_semanticDeclarationAST & inOperand0
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_semanticDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_semanticDeclarationAST & in_mSemanticDeclaration
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_semanticDeclarationListAST (in_mSemanticDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::addAssign_operation (const GALGAS_semanticDeclarationAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_append (const GALGAS_semanticDeclarationAST inOperand0,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_insertAtIndex (const GALGAS_semanticDeclarationAST inOperand0,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_semanticDeclarationListAST (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_removeAtIndex (GALGAS_semanticDeclarationAST & outOperand0,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_popFirst (GALGAS_semanticDeclarationAST & outOperand0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_popLast (GALGAS_semanticDeclarationAST & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::method_first (GALGAS_semanticDeclarationAST & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::method_last (GALGAS_semanticDeclarationAST & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mSemanticDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::add_operation (const GALGAS_semanticDeclarationListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_semanticDeclarationListAST result = GALGAS_semanticDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::plusAssign_operation (const GALGAS_semanticDeclarationListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticDeclarationListAST::setter_setMSemanticDeclarationAtIndex (GALGAS_semanticDeclarationAST inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSemanticDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST GALGAS_semanticDeclarationListAST::getter_mSemanticDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_semanticDeclarationListAST * p = (cCollectionElement_semanticDeclarationListAST *) attributes.ptr () ;
  GALGAS_semanticDeclarationAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
    result = p->mObject.mProperty_mSemanticDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_semanticDeclarationListAST::cEnumerator_semanticDeclarationListAST (const GALGAS_semanticDeclarationListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST_2D_element cEnumerator_semanticDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationAST cEnumerator_semanticDeclarationListAST::current_mSemanticDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_semanticDeclarationListAST * p = (const cCollectionElement_semanticDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_semanticDeclarationListAST) ;
  return p->mObject.mProperty_mSemanticDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @semanticDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticDeclarationListAST ("semanticDeclarationListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationListAST GALGAS_semanticDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_semanticDeclarationListAST result ;
  const GALGAS_semanticDeclarationListAST * p = (const GALGAS_semanticDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_externFunctionDeclarationAST_2D_weak::objectCompare (const GALGAS_externFunctionDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_externFunctionDeclarationAST_2D_weak::GALGAS_externFunctionDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak & GALGAS_externFunctionDeclarationAST_2D_weak::operator = (const GALGAS_externFunctionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak::GALGAS_externFunctionDeclarationAST_2D_weak (const GALGAS_externFunctionDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak GALGAS_externFunctionDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST GALGAS_externFunctionDeclarationAST_2D_weak::bang_externFunctionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_externFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_externFunctionDeclarationAST) ;
      result = GALGAS_externFunctionDeclarationAST ((cPtr_externFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @externFunctionDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ("externFunctionDeclarationAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_externFunctionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_externFunctionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_externFunctionDeclarationAST_2D_weak GALGAS_externFunctionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionDeclarationAST_2D_weak result ;
  const GALGAS_externFunctionDeclarationAST_2D_weak * p = (const GALGAS_externFunctionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_externFunctionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_functionDeclarationAST_2D_weak::objectCompare (const GALGAS_functionDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (void) :
GALGAS_externFunctionDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak & GALGAS_functionDeclarationAST_2D_weak::operator = (const GALGAS_functionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak::GALGAS_functionDeclarationAST_2D_weak (const GALGAS_functionDeclarationAST & inSource) :
GALGAS_externFunctionDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST GALGAS_functionDeclarationAST_2D_weak::bang_functionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_functionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_functionDeclarationAST) ;
      result = GALGAS_functionDeclarationAST ((cPtr_functionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @functionDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ("functionDeclarationAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_externFunctionDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionDeclarationAST_2D_weak GALGAS_functionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_functionDeclarationAST_2D_weak result ;
  const GALGAS_functionDeclarationAST_2D_weak * p = (const GALGAS_functionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_onceFunctionDeclarationAST_2D_weak::objectCompare (const GALGAS_onceFunctionDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_onceFunctionDeclarationAST_2D_weak::GALGAS_onceFunctionDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak & GALGAS_onceFunctionDeclarationAST_2D_weak::operator = (const GALGAS_onceFunctionDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak::GALGAS_onceFunctionDeclarationAST_2D_weak (const GALGAS_onceFunctionDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak GALGAS_onceFunctionDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST GALGAS_onceFunctionDeclarationAST_2D_weak::bang_onceFunctionDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_onceFunctionDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_onceFunctionDeclarationAST) ;
      result = GALGAS_onceFunctionDeclarationAST ((cPtr_onceFunctionDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @onceFunctionDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ("onceFunctionDeclarationAST-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_onceFunctionDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_onceFunctionDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_onceFunctionDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_onceFunctionDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_onceFunctionDeclarationAST_2D_weak GALGAS_onceFunctionDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_onceFunctionDeclarationAST_2D_weak result ;
  const GALGAS_onceFunctionDeclarationAST_2D_weak * p = (const GALGAS_onceFunctionDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_onceFunctionDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("onceFunctionDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@propertyInCollectionListAST buildPropertyInitializationCode'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_buildPropertyInitializationCode (const GALGAS_propertyInCollectionListAST inObject,
                                                      const GALGAS_lstring constinArgument_inTypeNameForUsefulness,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      GALGAS_stringset & outArgument_outUnusedVariableCppNameSet,
                                                      GALGAS_string & outArgument_outInitializationCode,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnusedVariableCppNameSet.drop () ; // Release 'out' argument
  outArgument_outInitializationCode.drop () ; // Release 'out' argument
  outArgument_outInitializationCode = GALGAS_string::makeEmptyString () ;
  GALGAS_stringset var_inclusionSet_9179 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticsTypesForAST.galgas", 250)) ;
  GALGAS_uint var_temporaryVariableIndex_9222 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticsTypesForAST.galgas", 252)) ;
  temp_0.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 252))  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 252)) ;
  outArgument_outUnusedVariableCppNameSet = temp_0 ;
  const GALGAS_propertyInCollectionListAST temp_1 = inObject ;
  cEnumerator_propertyInCollectionListAST enumerator_9360 (temp_1, EnumerationOrder::up) ;
  while (enumerator_9360.hasCurrentObject ()) {
    switch (enumerator_9360.current_initialization (HERE).enumValue ()) {
    case GALGAS_propertyInCollectionInitializationAST::kNotBuilt:
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_none:
      {
      }
      break ;
    case GALGAS_propertyInCollectionInitializationAST::kEnum_some:
      {
        const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * extractPtr_10789 = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) (enumerator_9360.current_initialization (HERE).unsafePointer ()) ;
        const GALGAS_semanticExpressionAST extractedValue_9449_expressionAST = extractPtr_10789->mAssociatedValue0 ;
        GALGAS_localVarManager var_variableMap_9478 = GALGAS_localVarManager::class_func_new (inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 257)) ;
        GALGAS_analysisContext var_analysisContext_9545 = GALGAS_analysisContext::class_func_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::class_func_none (SOURCE_FILE ("semanticsTypesForAST.galgas", 262)), GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 258)) ;
        GALGAS_unifiedTypeMapEntry var_propertyType_9823 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_9360.current_propertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 266)) ;
        GALGAS_semanticExpressionForGeneration var_expression_10194 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_9449_expressionAST.ptr (), constinArgument_inTypeNameForUsefulness, ioArgument_ioUsefulEntitiesGraph, var_propertyType_9823, var_analysisContext_9545, ioArgument_ioTypeMap, var_variableMap_9478, var_expression_10194, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 267)) ;
        {
        routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (var_propertyType_9823, var_expression_10194.readProperty_mResultType (), enumerator_9360.current_propertyName (HERE).readProperty_location (), var_expression_10194, inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 277)) ;
        }
        GALGAS_string var_sourceVar_10626 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) var_expression_10194.ptr (), outArgument_outInitializationCode, var_inclusionSet_9179, var_temporaryVariableIndex_9222, outArgument_outUnusedVariableCppNameSet, var_sourceVar_10626, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 283)) ;
        outArgument_outInitializationCode.plusAssign_operation(GALGAS_string ("  mProperty_").add_operation (enumerator_9360.current_propertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticsTypesForAST.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 290)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 290)) ;
        outArgument_outInitializationCode.plusAssign_operation(GALGAS_string (" = ").add_operation (var_sourceVar_10626, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 291)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas", 291)) ;
      }
      break ;
    }
    enumerator_9360.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControlAST_fileprivateAccess::cEnumAssociatedValues_AccessControlAST_fileprivateAccess (const GALGAS_location inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControlAST_fileprivateAccess::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_AccessControlAST_fileprivateAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControlAST_fileprivateAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControlAST_fileprivateAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess::cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess (const GALGAS_location inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess * ptr = dynamic_cast<const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST::GALGAS_AccessControlAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  result.mEnum = kEnum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_protectedAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  result.mEnum = kEnum_protectedAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_protectedSetAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  result.mEnum = kEnum_protectedSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_privateAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  result.mEnum = kEnum_privateAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_privateSetAccess (UNUSED_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  result.mEnum = kEnum_privateSetAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_fileprivateAccess (const GALGAS_location & inAssociatedValue0
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fileprivateAccess ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControlAST_fileprivateAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::class_func_fileprivateSetAccess (const GALGAS_location & inAssociatedValue0
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_fileprivateSetAccess ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST::method_fileprivateAccess (GALGAS_location & outAssociatedValue0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fileprivateAccess) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @AccessControlAST fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControlAST_fileprivateAccess * ptr = (const cEnumAssociatedValues_AccessControlAST_fileprivateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST::method_fileprivateSetAccess (GALGAS_location & outAssociatedValue0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_fileprivateSetAccess) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @AccessControlAST fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess * ptr = (const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_publicAccess () const {
  const bool ok = mEnum == kEnum_publicAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_protectedAccess () const {
  const bool ok = mEnum == kEnum_protectedAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_protectedSetAccess () const {
  const bool ok = mEnum == kEnum_protectedSetAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_privateAccess () const {
  const bool ok = mEnum == kEnum_privateAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_privateSetAccess () const {
  const bool ok = mEnum == kEnum_privateSetAccess ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_fileprivateAccess (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fileprivateAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControlAST_fileprivateAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_AccessControlAST::optional_fileprivateSetAccess (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_fileprivateSetAccess ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_AccessControlAST_fileprivateSetAccess *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControlAST [8] = {
  "(not built)",
  "publicAccess",
  "protectedAccess",
  "protectedSetAccess",
  "privateAccess",
  "privateSetAccess",
  "fileprivateAccess",
  "fileprivateSetAccess"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_AccessControlAST::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_AccessControlAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControlAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControlAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_AccessControlAST::objectCompare (const GALGAS_AccessControlAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @AccessControlAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_AccessControlAST ("AccessControlAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_AccessControlAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_AccessControlAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_AccessControlAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_AccessControlAST GALGAS_AccessControlAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_AccessControlAST result ;
  const GALGAS_AccessControlAST * p = (const GALGAS_AccessControlAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_AccessControlAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("AccessControlAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyInCollectionInitializationAST_some::cEnumAssociatedValues_propertyInCollectionInitializationAST_some (const GALGAS_semanticExpressionAST inAssociatedValue0
                                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//--------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyInCollectionInitializationAST_some::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("(\n") ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cEnumAssociatedValues_propertyInCollectionInitializationAST_some::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * ptr = dynamic_cast<const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *> (inOperand) ;
  macroValidPointer (ptr) ;
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST::GALGAS_propertyInCollectionInitializationAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST GALGAS_propertyInCollectionInitializationAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST GALGAS_propertyInCollectionInitializationAST::class_func_some (const GALGAS_semanticExpressionAST & inAssociatedValue0
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_some ;
    cEnumAssociatedValues * ptr = nullptr ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyInCollectionInitializationAST_some (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST::method_some (GALGAS_semanticExpressionAST & outAssociatedValue0,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_some) {
    outAssociatedValue0.drop () ;
    String s ;
    s.appendCString ("method @propertyInCollectionInitializationAST some invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyInCollectionInitializationAST_some * ptr = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyInCollectionInitializationAST::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyInCollectionInitializationAST::optional_some (GALGAS_semanticExpressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_some ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyInCollectionInitializationAST_some *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyInCollectionInitializationAST [3] = {
  "(not built)",
  "none",
  "some"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyInCollectionInitializationAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_propertyInCollectionInitializationAST::getter_isSome (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_some == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyInCollectionInitializationAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyInCollectionInitializationAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyInCollectionInitializationAST [mEnum]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_propertyInCollectionInitializationAST::objectCompare (const GALGAS_propertyInCollectionInitializationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyInCollectionInitializationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ("propertyInCollectionInitializationAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyInCollectionInitializationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyInCollectionInitializationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyInCollectionInitializationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyInCollectionInitializationAST GALGAS_propertyInCollectionInitializationAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_propertyInCollectionInitializationAST result ;
  const GALGAS_propertyInCollectionInitializationAST * p = (const GALGAS_propertyInCollectionInitializationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyInCollectionInitializationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyInCollectionInitializationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@formalTemplateInputParameterListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_formalTemplateInputParameterListAST : public cCollectionElement {
  public: GALGAS_formalTemplateInputParameterListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                  const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                  const GALGAS_lstring & in_mFormalArgumentName,
                                                                  const GALGAS_bool & in_mIsUnused
                                                                  COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalTemplateInputParameterListAST::cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                                                                const GALGAS_lstring & in_mFormalArgumentName,
                                                                                                                const GALGAS_bool & in_mIsUnused
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalTemplateSelector, in_mFormalArgumentTypeName, in_mFormalArgumentName, in_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_formalTemplateInputParameterListAST::cCollectionElement_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalTemplateSelector, inElement.mProperty_mFormalArgumentTypeName, inElement.mProperty_mFormalArgumentName, inElement.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_formalTemplateInputParameterListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_formalTemplateInputParameterListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_formalTemplateInputParameterListAST (mObject.mProperty_mFormalTemplateSelector, mObject.mProperty_mFormalArgumentTypeName, mObject.mProperty_mFormalArgumentName, mObject.mProperty_mIsUnused COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_formalTemplateInputParameterListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalTemplateSelector" ":") ;
  mObject.mProperty_mFormalTemplateSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentTypeName" ":") ;
  mObject.mProperty_mFormalArgumentTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsUnused" ":") ;
  mObject.mProperty_mIsUnused.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_formalTemplateInputParameterListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_formalTemplateInputParameterListAST * operand = (cCollectionElement_formalTemplateInputParameterListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_formalTemplateInputParameterListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST::GALGAS_formalTemplateInputParameterListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_formalTemplateInputParameterListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                 const GALGAS_lstring & inOperand1,
                                                                                                                 const GALGAS_lstring & inOperand2,
                                                                                                                 const GALGAS_bool & inOperand3
                                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_formalTemplateInputParameterListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_lstring & in_mFormalTemplateSelector,
                                                                            const GALGAS_lstring & in_mFormalArgumentTypeName,
                                                                            const GALGAS_lstring & in_mFormalArgumentName,
                                                                            const GALGAS_bool & in_mIsUnused
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (in_mFormalTemplateSelector,
                                                                         in_mFormalArgumentTypeName,
                                                                         in_mFormalArgumentName,
                                                                         in_mIsUnused COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                      const GALGAS_lstring & inOperand1,
                                                                      const GALGAS_lstring & inOperand2,
                                                                      const GALGAS_bool & inOperand3
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_append (const GALGAS_lstring inOperand0,
                                                                const GALGAS_lstring inOperand1,
                                                                const GALGAS_lstring inOperand2,
                                                                const GALGAS_bool inOperand3,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                       const GALGAS_lstring inOperand1,
                                                                       const GALGAS_lstring inOperand2,
                                                                       const GALGAS_bool inOperand3,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_formalTemplateInputParameterListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                       GALGAS_lstring & outOperand1,
                                                                       GALGAS_lstring & outOperand2,
                                                                       GALGAS_bool & outOperand3,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
        outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
        outOperand3 = p->mObject.mProperty_mIsUnused ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  GALGAS_lstring & outOperand2,
                                                                  GALGAS_bool & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 GALGAS_lstring & outOperand2,
                                                                 GALGAS_bool & outOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::method_first (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_lstring & outOperand2,
                                                               GALGAS_bool & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::method_last (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_lstring & outOperand2,
                                                              GALGAS_bool & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    outOperand0 = p->mObject.mProperty_mFormalTemplateSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentTypeName ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
    outOperand3 = p->mObject.mProperty_mIsUnused ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::add_operation (const GALGAS_formalTemplateInputParameterListAST & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_formalTemplateInputParameterListAST result = GALGAS_formalTemplateInputParameterListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::plusAssign_operation (const GALGAS_formalTemplateInputParameterListAST inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalTemplateSelectorAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalTemplateSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalTemplateSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalTemplateSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalArgumentTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalArgumentTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMFormalArgumentNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_formalTemplateInputParameterListAST::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_formalTemplateInputParameterListAST::setter_setMIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_formalTemplateInputParameterListAST::getter_mIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_formalTemplateInputParameterListAST * p = (cCollectionElement_formalTemplateInputParameterListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
    result = p->mObject.mProperty_mIsUnused ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_formalTemplateInputParameterListAST::cEnumerator_formalTemplateInputParameterListAST (const GALGAS_formalTemplateInputParameterListAST & inEnumeratedObject,
                                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST_2D_element cEnumerator_formalTemplateInputParameterListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalTemplateSelector (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalTemplateSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentTypeName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_formalTemplateInputParameterListAST::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_formalTemplateInputParameterListAST::current_mIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_formalTemplateInputParameterListAST * p = (const cCollectionElement_formalTemplateInputParameterListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_formalTemplateInputParameterListAST) ;
  return p->mObject.mProperty_mIsUnused ;
}




//--------------------------------------------------------------------------------------------------
//
//     @formalTemplateInputParameterListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ("formalTemplateInputParameterListAST",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_formalTemplateInputParameterListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalTemplateInputParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_formalTemplateInputParameterListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_formalTemplateInputParameterListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_formalTemplateInputParameterListAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_formalTemplateInputParameterListAST result ;
  const GALGAS_formalTemplateInputParameterListAST * p = (const GALGAS_formalTemplateInputParameterListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_formalTemplateInputParameterListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("formalTemplateInputParameterListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@filewrapperTemplateListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_filewrapperTemplateListAST : public cCollectionElement {
  public: GALGAS_filewrapperTemplateListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                         const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                         const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListAST::cCollectionElement_filewrapperTemplateListAST (const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                                              const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                                              const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFilewrapperTemplateName, in_mFilewrapperTemplatePath, in_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_filewrapperTemplateListAST::cCollectionElement_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFilewrapperTemplateName, inElement.mProperty_mFilewrapperTemplatePath, inElement.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_filewrapperTemplateListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_filewrapperTemplateListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_filewrapperTemplateListAST (mObject.mProperty_mFilewrapperTemplateName, mObject.mProperty_mFilewrapperTemplatePath, mObject.mProperty_mFilewrapperTemplateFormalInputParameters COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_filewrapperTemplateListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateName" ":") ;
  mObject.mProperty_mFilewrapperTemplateName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplatePath" ":") ;
  mObject.mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFilewrapperTemplateFormalInputParameters" ":") ;
  mObject.mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_filewrapperTemplateListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_filewrapperTemplateListAST * operand = (cCollectionElement_filewrapperTemplateListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_filewrapperTemplateListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST::GALGAS_filewrapperTemplateListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_filewrapperTemplateListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                               const GALGAS_lstring & inOperand1,
                                                                                               const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_filewrapperTemplateListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplateName,
                                                                   const GALGAS_lstring & in_mFilewrapperTemplatePath,
                                                                   const GALGAS_formalTemplateInputParameterListAST & in_mFilewrapperTemplateFormalInputParameters
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (in_mFilewrapperTemplateName,
                                                                in_mFilewrapperTemplatePath,
                                                                in_mFilewrapperTemplateFormalInputParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1,
                                                             const GALGAS_formalTemplateInputParameterListAST & inOperand2
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_append (const GALGAS_lstring inOperand0,
                                                       const GALGAS_lstring inOperand1,
                                                       const GALGAS_formalTemplateInputParameterListAST inOperand2,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_formalTemplateInputParameterListAST inOperand2,
                                                              const GALGAS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_filewrapperTemplateListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                              const GALGAS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
        outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
        outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
        outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     GALGAS_formalTemplateInputParameterListAST & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    outOperand0 = p->mObject.mProperty_mFilewrapperTemplateName ;
    outOperand1 = p->mObject.mProperty_mFilewrapperTemplatePath ;
    outOperand2 = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::add_operation (const GALGAS_filewrapperTemplateListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateListAST result = GALGAS_filewrapperTemplateListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::plusAssign_operation (const GALGAS_filewrapperTemplateListAST inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateNameAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplateNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplateName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplatePathAtIndex (GALGAS_lstring inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplatePath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplatePathAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplatePath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_filewrapperTemplateListAST::setter_setMFilewrapperTemplateFormalInputParametersAtIndex (GALGAS_formalTemplateInputParameterListAST inOperand,
                                                                                                    GALGAS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST GALGAS_filewrapperTemplateListAST::getter_mFilewrapperTemplateFormalInputParametersAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_filewrapperTemplateListAST * p = (cCollectionElement_filewrapperTemplateListAST *) attributes.ptr () ;
  GALGAS_formalTemplateInputParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
    result = p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_filewrapperTemplateListAST::cEnumerator_filewrapperTemplateListAST (const GALGAS_filewrapperTemplateListAST & inEnumeratedObject,
                                                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST_2D_element cEnumerator_filewrapperTemplateListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateName (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplateName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplatePath (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplatePath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalTemplateInputParameterListAST cEnumerator_filewrapperTemplateListAST::current_mFilewrapperTemplateFormalInputParameters (LOCATION_ARGS) const {
  const cCollectionElement_filewrapperTemplateListAST * p = (const cCollectionElement_filewrapperTemplateListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_filewrapperTemplateListAST) ;
  return p->mObject.mProperty_mFilewrapperTemplateFormalInputParameters ;
}




//--------------------------------------------------------------------------------------------------
//
//     @filewrapperTemplateListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperTemplateListAST ("filewrapperTemplateListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperTemplateListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperTemplateListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperTemplateListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperTemplateListAST GALGAS_filewrapperTemplateListAST::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperTemplateListAST result ;
  const GALGAS_filewrapperTemplateListAST * p = (const GALGAS_filewrapperTemplateListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperTemplateListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_filewrapperDeclarationAST_2D_weak::objectCompare (const GALGAS_filewrapperDeclarationAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_filewrapperDeclarationAST_2D_weak::GALGAS_filewrapperDeclarationAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak & GALGAS_filewrapperDeclarationAST_2D_weak::operator = (const GALGAS_filewrapperDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak::GALGAS_filewrapperDeclarationAST_2D_weak (const GALGAS_filewrapperDeclarationAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak GALGAS_filewrapperDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST GALGAS_filewrapperDeclarationAST_2D_weak::bang_filewrapperDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_filewrapperDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperDeclarationAST) ;
      result = GALGAS_filewrapperDeclarationAST ((cPtr_filewrapperDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @filewrapperDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ("filewrapperDeclarationAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_filewrapperDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_filewrapperDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_filewrapperDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_filewrapperDeclarationAST_2D_weak GALGAS_filewrapperDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_filewrapperDeclarationAST_2D_weak result ;
  const GALGAS_filewrapperDeclarationAST_2D_weak * p = (const GALGAS_filewrapperDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_filewrapperDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxInstructionList : public cCollectionElement {
  public: GALGAS_syntaxInstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionAST & in_mInstruction
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionList::cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionAST & in_mInstruction
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionList::cCollectionElement_syntaxInstructionList (const GALGAS_syntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_syntaxInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxInstructionList * operand = (cCollectionElement_syntaxInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList::GALGAS_syntaxInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList::GALGAS_syntaxInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::class_func_listWithValue (const GALGAS_syntaxInstructionAST & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_syntaxInstructionAST & in_mInstruction
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::addAssign_operation (const GALGAS_syntaxInstructionAST & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_append (const GALGAS_syntaxInstructionAST inOperand0,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_insertAtIndex (const GALGAS_syntaxInstructionAST inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syntaxInstructionList (inOperand0 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_removeAtIndex (GALGAS_syntaxInstructionAST & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
      }
    }else{
      outOperand0.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_popFirst (GALGAS_syntaxInstructionAST & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_popLast (GALGAS_syntaxInstructionAST & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::method_first (GALGAS_syntaxInstructionAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::method_last (GALGAS_syntaxInstructionAST & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::add_operation (const GALGAS_syntaxInstructionList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionList result = GALGAS_syntaxInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::plusAssign_operation (const GALGAS_syntaxInstructionList inOperand,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionList::setter_setMInstructionAtIndex (GALGAS_syntaxInstructionAST inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST GALGAS_syntaxInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionList * p = (cCollectionElement_syntaxInstructionList *) attributes.ptr () ;
  GALGAS_syntaxInstructionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxInstructionList::cEnumerator_syntaxInstructionList (const GALGAS_syntaxInstructionList & inEnumeratedObject,
                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList_2D_element cEnumerator_syntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionList * p = (const cCollectionElement_syntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionAST cEnumerator_syntaxInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionList * p = (const cCollectionElement_syntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionList ("syntaxInstructionList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxInstructionList::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionList result ;
  const GALGAS_syntaxInstructionList * p = (const GALGAS_syntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalLabelListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonTerminalLabelListAST : public cCollectionElement {
  public: GALGAS_nonTerminalLabelListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_nonTerminalLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                      const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                      const GALGAS_location & in_mEndOfArgumentLocation
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalLabelListAST::cCollectionElement_nonTerminalLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                                                        const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                                                        const GALGAS_location & in_mEndOfArgumentLocation
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mFormalArgumentList, in_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonTerminalLabelListAST::cCollectionElement_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArgumentList, inElement.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonTerminalLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonTerminalLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonTerminalLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArgumentList, mObject.mProperty_mEndOfArgumentLocation COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonTerminalLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentList" ":") ;
  mObject.mProperty_mFormalArgumentList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_nonTerminalLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonTerminalLabelListAST * operand = (cCollectionElement_nonTerminalLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonTerminalLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST::GALGAS_nonTerminalLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST::GALGAS_nonTerminalLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonTerminalLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                         const GALGAS_formalParameterListAST & inOperand1,
                                                                                         const GALGAS_location & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_nonTerminalLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_nonTerminalLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_lstring & in_mLabelName,
                                                                const GALGAS_formalParameterListAST & in_mFormalArgumentList,
                                                                const GALGAS_location & in_mEndOfArgumentLocation
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (in_mLabelName,
                                                             in_mFormalArgumentList,
                                                             in_mEndOfArgumentLocation COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                          const GALGAS_formalParameterListAST & inOperand1,
                                                          const GALGAS_location & inOperand2
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_append (const GALGAS_lstring inOperand0,
                                                    const GALGAS_formalParameterListAST inOperand1,
                                                    const GALGAS_location inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                           const GALGAS_formalParameterListAST inOperand1,
                                                           const GALGAS_location inOperand2,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_nonTerminalLabelListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                           GALGAS_formalParameterListAST & outOperand1,
                                                           GALGAS_location & outOperand2,
                                                           const GALGAS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
        outOperand0 = p->mObject.mProperty_mLabelName ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentList ;
        outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                      GALGAS_formalParameterListAST & outOperand1,
                                                      GALGAS_location & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalParameterListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                   GALGAS_formalParameterListAST & outOperand1,
                                                   GALGAS_location & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentList ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::add_operation (const GALGAS_nonTerminalLabelListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalLabelListAST result = GALGAS_nonTerminalLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::plusAssign_operation (const GALGAS_nonTerminalLabelListAST inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_setMLabelNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_nonTerminalLabelListAST::getter_mLabelNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_setMFormalArgumentListAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_nonTerminalLabelListAST::getter_mFormalArgumentListAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    result = p->mObject.mProperty_mFormalArgumentList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GALGAS_location inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_nonTerminalLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonTerminalLabelListAST * p = (cCollectionElement_nonTerminalLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalLabelListAST::cEnumerator_nonTerminalLabelListAST (const GALGAS_nonTerminalLabelListAST & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST_2D_element cEnumerator_nonTerminalLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonTerminalLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_nonTerminalLabelListAST::current_mFormalArgumentList (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mProperty_mFormalArgumentList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_nonTerminalLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_nonTerminalLabelListAST * p = (const cCollectionElement_nonTerminalLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonTerminalLabelListAST) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}




//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalLabelListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalLabelListAST ("nonTerminalLabelListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonTerminalLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalLabelListAST result ;
  const GALGAS_nonTerminalLabelListAST * p = (const GALGAS_nonTerminalLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonterminalDeclarationListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_nonterminalDeclarationListAST : public cCollectionElement {
  public: GALGAS_nonterminalDeclarationListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_nonterminalDeclarationListAST (const GALGAS_lstring & in_mNonterminalName,
                                                            const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonterminalDeclarationListAST::cCollectionElement_nonterminalDeclarationListAST (const GALGAS_lstring & in_mNonterminalName,
                                                                                                    const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabels) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_nonterminalDeclarationListAST::cCollectionElement_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mLabels) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_nonterminalDeclarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_nonterminalDeclarationListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_nonterminalDeclarationListAST (mObject.mProperty_mNonterminalName, mObject.mProperty_mLabels COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_nonterminalDeclarationListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabels" ":") ;
  mObject.mProperty_mLabels.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_nonterminalDeclarationListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_nonterminalDeclarationListAST * operand = (cCollectionElement_nonterminalDeclarationListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_nonterminalDeclarationListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST::GALGAS_nonterminalDeclarationListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST::GALGAS_nonterminalDeclarationListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_nonterminalDeclarationListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                     const GALGAS_nonTerminalLabelListAST & inOperand1
                                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_nonterminalDeclarationListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_nonterminalDeclarationListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mNonterminalName,
                                                                      const GALGAS_nonTerminalLabelListAST & in_mLabels
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_nonterminalDeclarationListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (in_mNonterminalName,
                                                                   in_mLabels COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_nonTerminalLabelListAST & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_append (const GALGAS_lstring inOperand0,
                                                          const GALGAS_nonTerminalLabelListAST inOperand1,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_nonTerminalLabelListAST inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_nonterminalDeclarationListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_nonTerminalLabelListAST & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
        outOperand0 = p->mObject.mProperty_mNonterminalName ;
        outOperand1 = p->mObject.mProperty_mLabels ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_nonTerminalLabelListAST & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_nonTerminalLabelListAST & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_nonTerminalLabelListAST & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_nonTerminalLabelListAST & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabels ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::add_operation (const GALGAS_nonterminalDeclarationListAST & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result = GALGAS_nonterminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result = GALGAS_nonterminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalDeclarationListAST result = GALGAS_nonterminalDeclarationListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::plusAssign_operation (const GALGAS_nonterminalDeclarationListAST inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_setMNonterminalNameAtIndex (GALGAS_lstring inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_nonterminalDeclarationListAST::getter_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonterminalDeclarationListAST::setter_setMLabelsAtIndex (GALGAS_nonTerminalLabelListAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabels = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST GALGAS_nonterminalDeclarationListAST::getter_mLabelsAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_nonterminalDeclarationListAST * p = (cCollectionElement_nonterminalDeclarationListAST *) attributes.ptr () ;
  GALGAS_nonTerminalLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
    result = p->mObject.mProperty_mLabels ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_nonterminalDeclarationListAST::cEnumerator_nonterminalDeclarationListAST (const GALGAS_nonterminalDeclarationListAST & inEnumeratedObject,
                                                                                      const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST_2D_element cEnumerator_nonterminalDeclarationListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonterminalDeclarationListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalLabelListAST cEnumerator_nonterminalDeclarationListAST::current_mLabels (LOCATION_ARGS) const {
  const cCollectionElement_nonterminalDeclarationListAST * p = (const cCollectionElement_nonterminalDeclarationListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_nonterminalDeclarationListAST) ;
  return p->mObject.mProperty_mLabels ;
}




//--------------------------------------------------------------------------------------------------
//
//     @nonterminalDeclarationListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ("nonterminalDeclarationListAST",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalDeclarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalDeclarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalDeclarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalDeclarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_nonterminalDeclarationListAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalDeclarationListAST result ;
  const GALGAS_nonterminalDeclarationListAST * p = (const GALGAS_nonterminalDeclarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalDeclarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalDeclarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxRuleLabelListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxRuleLabelListAST : public cCollectionElement {
  public: GALGAS_syntaxRuleLabelListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxRuleLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                     const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                     const GALGAS_location & in_mEndOfArgumentLocation,
                                                     const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                     const GALGAS_location & in_mEndOfInstructionList
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleLabelListAST::cCollectionElement_syntaxRuleLabelListAST (const GALGAS_lstring & in_mLabelName,
                                                                                      const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                                                      const GALGAS_location & in_mEndOfArgumentLocation,
                                                                                      const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                      const GALGAS_location & in_mEndOfInstructionList
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLabelName, in_mFormalArguments, in_mEndOfArgumentLocation, in_mSyntaxInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleLabelListAST::cCollectionElement_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLabelName, inElement.mProperty_mFormalArguments, inElement.mProperty_mEndOfArgumentLocation, inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxRuleLabelListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxRuleLabelListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxRuleLabelListAST (mObject.mProperty_mLabelName, mObject.mProperty_mFormalArguments, mObject.mProperty_mEndOfArgumentLocation, mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxRuleLabelListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelName" ":") ;
  mObject.mProperty_mLabelName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArguments" ":") ;
  mObject.mProperty_mFormalArguments.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfArgumentLocation" ":") ;
  mObject.mProperty_mEndOfArgumentLocation.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxInstructionList" ":") ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_syntaxRuleLabelListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxRuleLabelListAST * operand = (cCollectionElement_syntaxRuleLabelListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxRuleLabelListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST::GALGAS_syntaxRuleLabelListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST::GALGAS_syntaxRuleLabelListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleLabelListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                       const GALGAS_formalParameterListAST & inOperand1,
                                                                                       const GALGAS_location & inOperand2,
                                                                                       const GALGAS_syntaxInstructionList & inOperand3,
                                                                                       const GALGAS_location & inOperand4
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_syntaxRuleLabelListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxRuleLabelListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mLabelName,
                                                               const GALGAS_formalParameterListAST & in_mFormalArguments,
                                                               const GALGAS_location & in_mEndOfArgumentLocation,
                                                               const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                               const GALGAS_location & in_mEndOfInstructionList
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (in_mLabelName,
                                                            in_mFormalArguments,
                                                            in_mEndOfArgumentLocation,
                                                            in_mSyntaxInstructionList,
                                                            in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_formalParameterListAST & inOperand1,
                                                         const GALGAS_location & inOperand2,
                                                         const GALGAS_syntaxInstructionList & inOperand3,
                                                         const GALGAS_location & inOperand4
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_append (const GALGAS_lstring inOperand0,
                                                   const GALGAS_formalParameterListAST inOperand1,
                                                   const GALGAS_location inOperand2,
                                                   const GALGAS_syntaxInstructionList inOperand3,
                                                   const GALGAS_location inOperand4,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_formalParameterListAST inOperand1,
                                                          const GALGAS_location inOperand2,
                                                          const GALGAS_syntaxInstructionList inOperand3,
                                                          const GALGAS_location inOperand4,
                                                          const GALGAS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syntaxRuleLabelListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_formalParameterListAST & outOperand1,
                                                          GALGAS_location & outOperand2,
                                                          GALGAS_syntaxInstructionList & outOperand3,
                                                          GALGAS_location & outOperand4,
                                                          const GALGAS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
        outOperand0 = p->mObject.mProperty_mLabelName ;
        outOperand1 = p->mObject.mProperty_mFormalArguments ;
        outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
        outOperand3 = p->mObject.mProperty_mSyntaxInstructionList ;
        outOperand4 = p->mObject.mProperty_mEndOfInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_formalParameterListAST & outOperand1,
                                                     GALGAS_location & outOperand2,
                                                     GALGAS_syntaxInstructionList & outOperand3,
                                                     GALGAS_location & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArguments ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_formalParameterListAST & outOperand1,
                                                    GALGAS_location & outOperand2,
                                                    GALGAS_syntaxInstructionList & outOperand3,
                                                    GALGAS_location & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArguments ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_formalParameterListAST & outOperand1,
                                                  GALGAS_location & outOperand2,
                                                  GALGAS_syntaxInstructionList & outOperand3,
                                                  GALGAS_location & outOperand4,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArguments ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_formalParameterListAST & outOperand1,
                                                 GALGAS_location & outOperand2,
                                                 GALGAS_syntaxInstructionList & outOperand3,
                                                 GALGAS_location & outOperand4,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    outOperand0 = p->mObject.mProperty_mLabelName ;
    outOperand1 = p->mObject.mProperty_mFormalArguments ;
    outOperand2 = p->mObject.mProperty_mEndOfArgumentLocation ;
    outOperand3 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::add_operation (const GALGAS_syntaxRuleLabelListAST & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result = GALGAS_syntaxRuleLabelListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result = GALGAS_syntaxRuleLabelListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleLabelListAST result = GALGAS_syntaxRuleLabelListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::plusAssign_operation (const GALGAS_syntaxRuleLabelListAST inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_setMLabelNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxRuleLabelListAST::getter_mLabelNameAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    result = p->mObject.mProperty_mLabelName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_setMFormalArgumentsAtIndex (GALGAS_formalParameterListAST inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArguments = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST GALGAS_syntaxRuleLabelListAST::getter_mFormalArgumentsAtIndex (const GALGAS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  GALGAS_formalParameterListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    result = p->mObject.mProperty_mFormalArguments ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_setMEndOfArgumentLocationAtIndex (GALGAS_location inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfArgumentLocation = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syntaxRuleLabelListAST::getter_mEndOfArgumentLocationAtIndex (const GALGAS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    result = p->mObject.mProperty_mEndOfArgumentLocation ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_setMSyntaxInstructionListAtIndex (GALGAS_syntaxInstructionList inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_syntaxRuleLabelListAST::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  GALGAS_syntaxInstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleLabelListAST::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                            GALGAS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_syntaxRuleLabelListAST::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleLabelListAST * p = (cCollectionElement_syntaxRuleLabelListAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxRuleLabelListAST::cEnumerator_syntaxRuleLabelListAST (const GALGAS_syntaxRuleLabelListAST & inEnumeratedObject,
                                                                        const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST_2D_element cEnumerator_syntaxRuleLabelListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxRuleLabelListAST::current_mLabelName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mProperty_mLabelName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_formalParameterListAST cEnumerator_syntaxRuleLabelListAST::current_mFormalArguments (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mProperty_mFormalArguments ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_syntaxRuleLabelListAST::current_mEndOfArgumentLocation (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mProperty_mEndOfArgumentLocation ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cEnumerator_syntaxRuleLabelListAST::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_syntaxRuleLabelListAST::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleLabelListAST * p = (const cCollectionElement_syntaxRuleLabelListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleLabelListAST) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxRuleLabelListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ("syntaxRuleLabelListAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxRuleLabelListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleLabelListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxRuleLabelListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleLabelListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleLabelListAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleLabelListAST result ;
  const GALGAS_syntaxRuleLabelListAST * p = (const GALGAS_syntaxRuleLabelListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxRuleLabelListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleLabelListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxRuleListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxRuleListAST : public cCollectionElement {
  public: GALGAS_syntaxRuleListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxRuleListAST (const GALGAS_syntaxRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GALGAS_lstring & in_mNonterminalName,
                                                                            const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mNonterminalName, in_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxRuleListAST::cCollectionElement_syntaxRuleListAST (const GALGAS_syntaxRuleListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mNonterminalName, inElement.mProperty_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxRuleListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxRuleListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxRuleListAST (mObject.mProperty_mNonterminalName, mObject.mProperty_mLabelList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxRuleListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalName" ":") ;
  mObject.mProperty_mNonterminalName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLabelList" ":") ;
  mObject.mProperty_mLabelList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_syntaxRuleListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxRuleListAST * operand = (cCollectionElement_syntaxRuleListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxRuleListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST::GALGAS_syntaxRuleListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxRuleListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxRuleListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxRuleListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mNonterminalName,
                                                          const GALGAS_syntaxRuleLabelListAST & in_mLabelList
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxRuleListAST (in_mNonterminalName,
                                                       in_mLabelList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_syntaxRuleLabelListAST & inOperand1
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_append (const GALGAS_lstring inOperand0,
                                              const GALGAS_syntaxRuleLabelListAST inOperand1,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_syntaxRuleLabelListAST inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syntaxRuleListAST (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
        outOperand0 = p->mObject.mProperty_mNonterminalName ;
        outOperand1 = p->mObject.mProperty_mLabelList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_syntaxRuleLabelListAST & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_syntaxRuleLabelListAST & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_syntaxRuleLabelListAST & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_syntaxRuleLabelListAST & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    outOperand0 = p->mObject.mProperty_mNonterminalName ;
    outOperand1 = p->mObject.mProperty_mLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::add_operation (const GALGAS_syntaxRuleListAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxRuleListAST result = GALGAS_syntaxRuleListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::plusAssign_operation (const GALGAS_syntaxRuleListAST inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_setMNonterminalNameAtIndex (GALGAS_lstring inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxRuleListAST::getter_mNonterminalNameAtIndex (const GALGAS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mNonterminalName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxRuleListAST::setter_setMLabelListAtIndex (GALGAS_syntaxRuleLabelListAST inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLabelList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST GALGAS_syntaxRuleListAST::getter_mLabelListAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxRuleListAST * p = (cCollectionElement_syntaxRuleListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleLabelListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
    result = p->mObject.mProperty_mLabelList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxRuleListAST::cEnumerator_syntaxRuleListAST (const GALGAS_syntaxRuleListAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST_2D_element cEnumerator_syntaxRuleListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxRuleListAST::current_mNonterminalName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mNonterminalName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleLabelListAST cEnumerator_syntaxRuleListAST::current_mLabelList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxRuleListAST * p = (const cCollectionElement_syntaxRuleListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxRuleListAST) ;
  return p->mObject.mProperty_mLabelList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxRuleListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxRuleListAST ("syntaxRuleListAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxRuleListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxRuleListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxRuleListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_syntaxRuleListAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_syntaxRuleListAST result ;
  const GALGAS_syntaxRuleListAST * p = (const GALGAS_syntaxRuleListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxRuleListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxRuleListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@listOfSyntaxInstructionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_listOfSyntaxInstructionList : public cCollectionElement {
  public: GALGAS_listOfSyntaxInstructionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                          const GALGAS_location & in_mEndOf_5F_instructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                                                const GALGAS_location & in_mEndOf_5F_instructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList, in_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_listOfSyntaxInstructionList::cCollectionElement_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList, inElement.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_listOfSyntaxInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_listOfSyntaxInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_listOfSyntaxInstructionList (mObject.mProperty_mSyntaxInstructionList, mObject.mProperty_mEndOf_5F_instructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_listOfSyntaxInstructionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxInstructionList" ":") ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOf_instructions" ":") ;
  mObject.mProperty_mEndOf_5F_instructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_listOfSyntaxInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_listOfSyntaxInstructionList * operand = (cCollectionElement_listOfSyntaxInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_listOfSyntaxInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList::GALGAS_listOfSyntaxInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::class_func_listWithValue (const GALGAS_syntaxInstructionList & inOperand0,
                                                                                                 const GALGAS_location & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_listOfSyntaxInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_listOfSyntaxInstructionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_syntaxInstructionList & in_mSyntaxInstructionList,
                                                                    const GALGAS_location & in_mEndOf_5F_instructions
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (in_mSyntaxInstructionList,
                                                                 in_mEndOf_5F_instructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::addAssign_operation (const GALGAS_syntaxInstructionList & inOperand0,
                                                              const GALGAS_location & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_append (const GALGAS_syntaxInstructionList inOperand0,
                                                        const GALGAS_location inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_insertAtIndex (const GALGAS_syntaxInstructionList inOperand0,
                                                               const GALGAS_location inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_listOfSyntaxInstructionList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_removeAtIndex (GALGAS_syntaxInstructionList & outOperand0,
                                                               GALGAS_location & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
        outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
        outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_popFirst (GALGAS_syntaxInstructionList & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_popLast (GALGAS_syntaxInstructionList & outOperand0,
                                                         GALGAS_location & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::method_first (GALGAS_syntaxInstructionList & outOperand0,
                                                       GALGAS_location & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::method_last (GALGAS_syntaxInstructionList & outOperand0,
                                                      GALGAS_location & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::add_operation (const GALGAS_listOfSyntaxInstructionList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_listOfSyntaxInstructionList result = GALGAS_listOfSyntaxInstructionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::plusAssign_operation (const GALGAS_listOfSyntaxInstructionList inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_setMSyntaxInstructionListAtIndex (GALGAS_syntaxInstructionList inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_listOfSyntaxInstructionList::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GALGAS_syntaxInstructionList result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_listOfSyntaxInstructionList::setter_setMEndOf_5F_instructionsAtIndex (GALGAS_location inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOf_5F_instructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_listOfSyntaxInstructionList::getter_mEndOf_5F_instructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_listOfSyntaxInstructionList * p = (cCollectionElement_listOfSyntaxInstructionList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
    result = p->mObject.mProperty_mEndOf_5F_instructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_listOfSyntaxInstructionList::cEnumerator_listOfSyntaxInstructionList (const GALGAS_listOfSyntaxInstructionList & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList_2D_element cEnumerator_listOfSyntaxInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList cEnumerator_listOfSyntaxInstructionList::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_listOfSyntaxInstructionList::current_mEndOf_5F_instructions (LOCATION_ARGS) const {
  const cCollectionElement_listOfSyntaxInstructionList * p = (const cCollectionElement_listOfSyntaxInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_listOfSyntaxInstructionList) ;
  return p->mObject.mProperty_mEndOf_5F_instructions ;
}




//--------------------------------------------------------------------------------------------------
//
//     @listOfSyntaxInstructionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ("listOfSyntaxInstructionList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_listOfSyntaxInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSyntaxInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_listOfSyntaxInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_listOfSyntaxInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_listOfSyntaxInstructionList::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_listOfSyntaxInstructionList result ;
  const GALGAS_listOfSyntaxInstructionList * p = (const GALGAS_listOfSyntaxInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_listOfSyntaxInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("listOfSyntaxInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_galgas_33_SyntaxComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak & GALGAS_galgas_33_SyntaxComponentAST_2D_weak::operator = (const GALGAS_galgas_33_SyntaxComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak::GALGAS_galgas_33_SyntaxComponentAST_2D_weak (const GALGAS_galgas_33_SyntaxComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST GALGAS_galgas_33_SyntaxComponentAST_2D_weak::bang_galgas_33_SyntaxComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_SyntaxComponentAST) ;
      result = GALGAS_galgas_33_SyntaxComponentAST ((cPtr_galgas_33_SyntaxComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ("galgas3SyntaxComponentAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentAST_2D_weak GALGAS_galgas_33_SyntaxComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentAST_2D_weak result ;
  const GALGAS_galgas_33_SyntaxComponentAST_2D_weak * p = (const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_galgas_33_GrammarComponentAST_2D_weak::objectCompare (const GALGAS_galgas_33_GrammarComponentAST_2D_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
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

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (void) :
GALGAS_semanticDeclarationAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak & GALGAS_galgas_33_GrammarComponentAST_2D_weak::operator = (const GALGAS_galgas_33_GrammarComponentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak::GALGAS_galgas_33_GrammarComponentAST_2D_weak (const GALGAS_galgas_33_GrammarComponentAST & inSource) :
GALGAS_semanticDeclarationAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST GALGAS_galgas_33_GrammarComponentAST_2D_weak::bang_galgas_33_GrammarComponentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_GrammarComponentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_galgas_33_GrammarComponentAST) ;
      result = GALGAS_galgas_33_GrammarComponentAST ((cPtr_galgas_33_GrammarComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @galgas3GrammarComponentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ("galgas3GrammarComponentAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticDeclarationAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_GrammarComponentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_GrammarComponentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_GrammarComponentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_GrammarComponentAST_2D_weak GALGAS_galgas_33_GrammarComponentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_GrammarComponentAST_2D_weak result ;
  const GALGAS_galgas_33_GrammarComponentAST_2D_weak * p = (const GALGAS_galgas_33_GrammarComponentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_GrammarComponentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxComponentListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxComponentListAST : public cCollectionElement {
  public: GALGAS_galgas_33_SyntaxComponentListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                               const GALGAS_bool & in_mHasTranslateFeature
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                                                          const GALGAS_bool & in_mHasTranslateFeature
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mImportedLexiqueFilePath, in_mNonterminalDeclarationList, in_mRuleList, in_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxComponentListAST::cCollectionElement_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mImportedLexiqueFilePath, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList, inElement.mProperty_mHasTranslateFeature) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxComponentListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxComponentListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxComponentListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mImportedLexiqueFilePath, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList, mObject.mProperty_mHasTranslateFeature COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxComponentListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mImportedLexiqueFilePath" ":") ;
  mObject.mProperty_mImportedLexiqueFilePath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mHasTranslateFeature" ":") ;
  mObject.mProperty_mHasTranslateFeature.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_galgas_33_SyntaxComponentListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxComponentListAST * operand = (cCollectionElement_galgas_33_SyntaxComponentListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST::GALGAS_galgas_33_SyntaxComponentListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_lstring & inOperand1,
                                                                                                           const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                                                           const GALGAS_syntaxRuleListAST & inOperand3,
                                                                                                           const GALGAS_bool & inOperand4
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_galgas_33_SyntaxComponentListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                         const GALGAS_lstring & in_mImportedLexiqueFilePath,
                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList,
                                                                         const GALGAS_bool & in_mHasTranslateFeature
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (in_mSyntaxComponentName,
                                                                      in_mImportedLexiqueFilePath,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList,
                                                                      in_mHasTranslateFeature COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_lstring & inOperand1,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand2,
                                                                   const GALGAS_syntaxRuleListAST & inOperand3,
                                                                   const GALGAS_bool & inOperand4
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_lstring inOperand1,
                                                             const GALGAS_nonterminalDeclarationListAST inOperand2,
                                                             const GALGAS_syntaxRuleListAST inOperand3,
                                                             const GALGAS_bool inOperand4,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_lstring inOperand1,
                                                                    const GALGAS_nonterminalDeclarationListAST inOperand2,
                                                                    const GALGAS_syntaxRuleListAST inOperand3,
                                                                    const GALGAS_bool inOperand4,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxComponentListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                                    GALGAS_syntaxRuleListAST & outOperand3,
                                                                    GALGAS_bool & outOperand4,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
        outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
        outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
        outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
        outOperand3 = p->mObject.mProperty_mRuleList ;
        outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                               GALGAS_syntaxRuleListAST & outOperand3,
                                                               GALGAS_bool & outOperand4,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                              GALGAS_syntaxRuleListAST & outOperand3,
                                                              GALGAS_bool & outOperand4,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                            GALGAS_syntaxRuleListAST & outOperand3,
                                                            GALGAS_bool & outOperand4,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_lstring & outOperand1,
                                                           GALGAS_nonterminalDeclarationListAST & outOperand2,
                                                           GALGAS_syntaxRuleListAST & outOperand3,
                                                           GALGAS_bool & outOperand4,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mImportedLexiqueFilePath ;
    outOperand2 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand3 = p->mObject.mProperty_mRuleList ;
    outOperand4 = p->mObject.mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::add_operation (const GALGAS_galgas_33_SyntaxComponentListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxComponentListAST result = GALGAS_galgas_33_SyntaxComponentListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::plusAssign_operation (const GALGAS_galgas_33_SyntaxComponentListAST inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMImportedLexiqueFilePathAtIndex (GALGAS_lstring inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mImportedLexiqueFilePath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxComponentListAST::getter_mImportedLexiqueFilePathAtIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mImportedLexiqueFilePath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMNonterminalDeclarationListAtIndex (GALGAS_nonterminalDeclarationListAST inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMRuleListAtIndex (GALGAS_syntaxRuleListAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxComponentListAST::getter_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxComponentListAST::setter_setMHasTranslateFeatureAtIndex (GALGAS_bool inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHasTranslateFeature = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_galgas_33_SyntaxComponentListAST::getter_mHasTranslateFeatureAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxComponentListAST * p = (cCollectionElement_galgas_33_SyntaxComponentListAST *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
    result = p->mObject.mProperty_mHasTranslateFeature ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxComponentListAST::cEnumerator_galgas_33_SyntaxComponentListAST (const GALGAS_galgas_33_SyntaxComponentListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST_2D_element cEnumerator_galgas_33_SyntaxComponentListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxComponentListAST::current_mImportedLexiqueFilePath (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mImportedLexiqueFilePath ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxComponentListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mRuleList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_galgas_33_SyntaxComponentListAST::current_mHasTranslateFeature (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxComponentListAST * p = (const cCollectionElement_galgas_33_SyntaxComponentListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxComponentListAST) ;
  return p->mObject.mProperty_mHasTranslateFeature ;
}




//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxComponentListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ("galgas3SyntaxComponentListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxComponentListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxComponentListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxComponentListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxComponentListAST GALGAS_galgas_33_SyntaxComponentListAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxComponentListAST result ;
  const GALGAS_galgas_33_SyntaxComponentListAST * p = (const GALGAS_galgas_33_SyntaxComponentListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_SyntaxComponentListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxComponentListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@galgas_33_SyntaxExtensionListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_SyntaxExtensionListAST : public cCollectionElement {
  public: GALGAS_galgas_33_SyntaxExtensionListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                               const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                               const GALGAS_syntaxRuleListAST & in_mRuleList
                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_lstring & in_mSyntaxComponentName,
                                                                                                          const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                                                          const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxComponentName, in_mNonterminalDeclarationList, in_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_SyntaxExtensionListAST::cCollectionElement_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxComponentName, inElement.mProperty_mNonterminalDeclarationList, inElement.mProperty_mRuleList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_SyntaxExtensionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_SyntaxExtensionListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_SyntaxExtensionListAST (mObject.mProperty_mSyntaxComponentName, mObject.mProperty_mNonterminalDeclarationList, mObject.mProperty_mRuleList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_SyntaxExtensionListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalDeclarationList" ":") ;
  mObject.mProperty_mNonterminalDeclarationList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mRuleList" ":") ;
  mObject.mProperty_mRuleList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_galgas_33_SyntaxExtensionListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * operand = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST::GALGAS_galgas_33_SyntaxExtensionListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                           const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                                                           const GALGAS_syntaxRuleListAST & inOperand2
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_galgas_33_SyntaxExtensionListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                         const GALGAS_lstring & in_mSyntaxComponentName,
                                                                         const GALGAS_nonterminalDeclarationListAST & in_mNonterminalDeclarationList,
                                                                         const GALGAS_syntaxRuleListAST & in_mRuleList
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (in_mSyntaxComponentName,
                                                                      in_mNonterminalDeclarationList,
                                                                      in_mRuleList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                   const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                                   const GALGAS_syntaxRuleListAST & inOperand2
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_append (const GALGAS_lstring inOperand0,
                                                             const GALGAS_nonterminalDeclarationListAST inOperand1,
                                                             const GALGAS_syntaxRuleListAST inOperand2,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                    const GALGAS_nonterminalDeclarationListAST inOperand1,
                                                                    const GALGAS_syntaxRuleListAST inOperand2,
                                                                    const GALGAS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_galgas_33_SyntaxExtensionListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                    GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                                    GALGAS_syntaxRuleListAST & outOperand2,
                                                                    const GALGAS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
        outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
        outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
        outOperand2 = p->mObject.mProperty_mRuleList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                               GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                               GALGAS_syntaxRuleListAST & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                              GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                              GALGAS_syntaxRuleListAST & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::method_first (GALGAS_lstring & outOperand0,
                                                            GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                            GALGAS_syntaxRuleListAST & outOperand2,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::method_last (GALGAS_lstring & outOperand0,
                                                           GALGAS_nonterminalDeclarationListAST & outOperand1,
                                                           GALGAS_syntaxRuleListAST & outOperand2,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    outOperand0 = p->mObject.mProperty_mSyntaxComponentName ;
    outOperand1 = p->mObject.mProperty_mNonterminalDeclarationList ;
    outOperand2 = p->mObject.mProperty_mRuleList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::add_operation (const GALGAS_galgas_33_SyntaxExtensionListAST & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_galgas_33_SyntaxExtensionListAST result = GALGAS_galgas_33_SyntaxExtensionListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::plusAssign_operation (const GALGAS_galgas_33_SyntaxExtensionListAST inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_galgas_33_SyntaxExtensionListAST::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMNonterminalDeclarationListAtIndex (GALGAS_nonterminalDeclarationListAST inOperand,
                                                                                            GALGAS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mNonterminalDeclarationList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_mNonterminalDeclarationListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_nonterminalDeclarationListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mNonterminalDeclarationList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgas_33_SyntaxExtensionListAST::setter_setMRuleListAtIndex (GALGAS_syntaxRuleListAST inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRuleList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST GALGAS_galgas_33_SyntaxExtensionListAST::getter_mRuleListAtIndex (const GALGAS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (cCollectionElement_galgas_33_SyntaxExtensionListAST *) attributes.ptr () ;
  GALGAS_syntaxRuleListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
    result = p->mObject.mProperty_mRuleList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_galgas_33_SyntaxExtensionListAST::cEnumerator_galgas_33_SyntaxExtensionListAST (const GALGAS_galgas_33_SyntaxExtensionListAST & inEnumeratedObject,
                                                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST_2D_element cEnumerator_galgas_33_SyntaxExtensionListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_galgas_33_SyntaxExtensionListAST::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalDeclarationListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mNonterminalDeclarationList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mNonterminalDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxRuleListAST cEnumerator_galgas_33_SyntaxExtensionListAST::current_mRuleList (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_SyntaxExtensionListAST * p = (const cCollectionElement_galgas_33_SyntaxExtensionListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_SyntaxExtensionListAST) ;
  return p->mObject.mProperty_mRuleList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @galgas3SyntaxExtensionListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ("galgas3SyntaxExtensionListAST",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgas_33_SyntaxExtensionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_SyntaxExtensionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgas_33_SyntaxExtensionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgas_33_SyntaxExtensionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_galgas_33_SyntaxExtensionListAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_galgas_33_SyntaxExtensionListAST result ;
  const GALGAS_galgas_33_SyntaxExtensionListAST * p = (const GALGAS_galgas_33_SyntaxExtensionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgas_33_SyntaxExtensionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3SyntaxExtensionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions::GALGAS_syntaxExtensions (void) :
AC_GALGAS_listmap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions GALGAS_syntaxExtensions::class_func_emptyMap (LOCATION_ARGS) {
  GALGAS_syntaxExtensions result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions::addAssign_operation (const GALGAS_string & inKey,
                                                   const GALGAS_lstring & inOperand0,
                                                   const GALGAS_nonterminalDeclarationListAST & inOperand1,
                                                   const GALGAS_syntaxRuleListAST & inOperand2
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxExtensions::setter_insert (const GALGAS_string inKey,
                                             const GALGAS_lstring inOperand0,
                                             const GALGAS_nonterminalDeclarationListAST inOperand1,
                                             const GALGAS_syntaxRuleListAST inOperand2,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_galgas_33_SyntaxExtensionListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST GALGAS_syntaxExtensions::getter_listForKey (const GALGAS_string & inKey
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_galgas_33_SyntaxExtensionListAST (listForKey (inKey)) ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxExtensions::cEnumerator_syntaxExtensions (const GALGAS_syntaxExtensions & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions_2D_element cEnumerator_syntaxExtensions::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_syntaxExtensions_2D_element (p->mKey, p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_syntaxExtensions::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgas_33_SyntaxExtensionListAST cEnumerator_syntaxExtensions::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_galgas_33_SyntaxExtensionListAST (p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxExtensions generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxExtensions ("syntaxExtensions",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxExtensions::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxExtensions ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxExtensions::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxExtensions (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxExtensions GALGAS_syntaxExtensions::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_syntaxExtensions result ;
  const GALGAS_syntaxExtensions * p = (const GALGAS_syntaxExtensions *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxExtensions *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxExtensions", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@prologueEpilogueList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_prologueEpilogueList : public cCollectionElement {
  public: GALGAS_prologueEpilogueList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                   const GALGAS_location & in_mEndOfInstructionList
                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_prologueEpilogueList (const GALGAS_prologueEpilogueList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                                  const GALGAS_location & in_mEndOfInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_prologueEpilogueList::cCollectionElement_prologueEpilogueList (const GALGAS_prologueEpilogueList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_prologueEpilogueList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_prologueEpilogueList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_prologueEpilogueList (mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_prologueEpilogueList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_prologueEpilogueList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_prologueEpilogueList * operand = (cCollectionElement_prologueEpilogueList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_prologueEpilogueList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList::GALGAS_prologueEpilogueList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_prologueEpilogueList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::class_func_listWithValue (const GALGAS_semanticInstructionListAST & inOperand0,
                                                                                   const GALGAS_location & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prologueEpilogueList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_prologueEpilogueList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                             const GALGAS_location & in_mEndOfInstructionList
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = nullptr ;
  macroMyNew (p, cCollectionElement_prologueEpilogueList (in_mInstructionList,
                                                          in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::addAssign_operation (const GALGAS_semanticInstructionListAST & inOperand0,
                                                       const GALGAS_location & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_append (const GALGAS_semanticInstructionListAST inOperand0,
                                                 const GALGAS_location inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_insertAtIndex (const GALGAS_semanticInstructionListAST inOperand0,
                                                        const GALGAS_location inOperand1,
                                                        const GALGAS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_prologueEpilogueList (inOperand0, inOperand1 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_removeAtIndex (GALGAS_semanticInstructionListAST & outOperand0,
                                                        GALGAS_location & outOperand1,
                                                        const GALGAS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
        outOperand0 = p->mObject.mProperty_mInstructionList ;
        outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_popFirst (GALGAS_semanticInstructionListAST & outOperand0,
                                                   GALGAS_location & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_popLast (GALGAS_semanticInstructionListAST & outOperand0,
                                                  GALGAS_location & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::method_first (GALGAS_semanticInstructionListAST & outOperand0,
                                                GALGAS_location & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::method_last (GALGAS_semanticInstructionListAST & outOperand0,
                                               GALGAS_location & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    outOperand0 = p->mObject.mProperty_mInstructionList ;
    outOperand1 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::add_operation (const GALGAS_prologueEpilogueList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_prologueEpilogueList result = GALGAS_prologueEpilogueList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::plusAssign_operation (const GALGAS_prologueEpilogueList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_prologueEpilogueList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prologueEpilogueList::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_prologueEpilogueList::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_prologueEpilogueList * p = (cCollectionElement_prologueEpilogueList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_prologueEpilogueList::cEnumerator_prologueEpilogueList (const GALGAS_prologueEpilogueList & inEnumeratedObject,
                                                                    const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList_2D_element cEnumerator_prologueEpilogueList::current (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_prologueEpilogueList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_prologueEpilogueList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_prologueEpilogueList * p = (const cCollectionElement_prologueEpilogueList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_prologueEpilogueList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @prologueEpilogueList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prologueEpilogueList ("prologueEpilogueList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prologueEpilogueList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prologueEpilogueList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prologueEpilogueList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prologueEpilogueList GALGAS_prologueEpilogueList::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prologueEpilogueList result ;
  const GALGAS_prologueEpilogueList * p = (const GALGAS_prologueEpilogueList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prologueEpilogueList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prologueEpilogueList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@programRuleList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_programRuleList : public cCollectionElement {
  public: GALGAS_programRuleList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_programRuleList (const GALGAS_lstring & in_mSourceFileExtension,
                                              const GALGAS_lstring & in_mSourceFileHelp,
                                              const GALGAS_lstring & in_mSourceFileVariableName,
                                              const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                              const GALGAS_lstring & in_mReferenceGrammar,
                                              const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                              const GALGAS_location & in_mEndOfInstructionList
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programRuleList (const GALGAS_programRuleList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GALGAS_lstring & in_mSourceFileExtension,
                                                                        const GALGAS_lstring & in_mSourceFileHelp,
                                                                        const GALGAS_lstring & in_mSourceFileVariableName,
                                                                        const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                                        const GALGAS_lstring & in_mReferenceGrammar,
                                                                        const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                                        const GALGAS_location & in_mEndOfInstructionList
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSourceFileExtension, in_mSourceFileHelp, in_mSourceFileVariableName, in_mSourceFileVariableNameIsUnused, in_mReferenceGrammar, in_mInstructionList, in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_programRuleList::cCollectionElement_programRuleList (const GALGAS_programRuleList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSourceFileExtension, inElement.mProperty_mSourceFileHelp, inElement.mProperty_mSourceFileVariableName, inElement.mProperty_mSourceFileVariableNameIsUnused, inElement.mProperty_mReferenceGrammar, inElement.mProperty_mInstructionList, inElement.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_programRuleList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programRuleList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_programRuleList (mObject.mProperty_mSourceFileExtension, mObject.mProperty_mSourceFileHelp, mObject.mProperty_mSourceFileVariableName, mObject.mProperty_mSourceFileVariableNameIsUnused, mObject.mProperty_mReferenceGrammar, mObject.mProperty_mInstructionList, mObject.mProperty_mEndOfInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_programRuleList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileExtension" ":") ;
  mObject.mProperty_mSourceFileExtension.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileHelp" ":") ;
  mObject.mProperty_mSourceFileHelp.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileVariableName" ":") ;
  mObject.mProperty_mSourceFileVariableName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSourceFileVariableNameIsUnused" ":") ;
  mObject.mProperty_mSourceFileVariableNameIsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mReferenceGrammar" ":") ;
  mObject.mProperty_mReferenceGrammar.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructionList" ":") ;
  mObject.mProperty_mEndOfInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_programRuleList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programRuleList * operand = (cCollectionElement_programRuleList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programRuleList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList::GALGAS_programRuleList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList::GALGAS_programRuleList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_programRuleList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                         const GALGAS_lstring & inOperand1,
                                                                         const GALGAS_lstring & inOperand2,
                                                                         const GALGAS_bool & inOperand3,
                                                                         const GALGAS_lstring & inOperand4,
                                                                         const GALGAS_semanticInstructionListAST & inOperand5,
                                                                         const GALGAS_location & inOperand6
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_programRuleList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_programRuleList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GALGAS_lstring & in_mSourceFileExtension,
                                                        const GALGAS_lstring & in_mSourceFileHelp,
                                                        const GALGAS_lstring & in_mSourceFileVariableName,
                                                        const GALGAS_bool & in_mSourceFileVariableNameIsUnused,
                                                        const GALGAS_lstring & in_mReferenceGrammar,
                                                        const GALGAS_semanticInstructionListAST & in_mInstructionList,
                                                        const GALGAS_location & in_mEndOfInstructionList
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = nullptr ;
  macroMyNew (p, cCollectionElement_programRuleList (in_mSourceFileExtension,
                                                     in_mSourceFileHelp,
                                                     in_mSourceFileVariableName,
                                                     in_mSourceFileVariableNameIsUnused,
                                                     in_mReferenceGrammar,
                                                     in_mInstructionList,
                                                     in_mEndOfInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_lstring & inOperand1,
                                                  const GALGAS_lstring & inOperand2,
                                                  const GALGAS_bool & inOperand3,
                                                  const GALGAS_lstring & inOperand4,
                                                  const GALGAS_semanticInstructionListAST & inOperand5,
                                                  const GALGAS_location & inOperand6
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_append (const GALGAS_lstring inOperand0,
                                            const GALGAS_lstring inOperand1,
                                            const GALGAS_lstring inOperand2,
                                            const GALGAS_bool inOperand3,
                                            const GALGAS_lstring inOperand4,
                                            const GALGAS_semanticInstructionListAST inOperand5,
                                            const GALGAS_location inOperand6,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                   const GALGAS_lstring inOperand1,
                                                   const GALGAS_lstring inOperand2,
                                                   const GALGAS_bool inOperand3,
                                                   const GALGAS_lstring inOperand4,
                                                   const GALGAS_semanticInstructionListAST inOperand5,
                                                   const GALGAS_location inOperand6,
                                                   const GALGAS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_programRuleList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_lstring & outOperand2,
                                                   GALGAS_bool & outOperand3,
                                                   GALGAS_lstring & outOperand4,
                                                   GALGAS_semanticInstructionListAST & outOperand5,
                                                   GALGAS_location & outOperand6,
                                                   const GALGAS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        outOperand4.drop () ;
        outOperand5.drop () ;
        outOperand6.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_programRuleList) ;
        outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
        outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
        outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
        outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
        outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
        outOperand5 = p->mObject.mProperty_mInstructionList ;
        outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
      outOperand4.drop () ;
      outOperand5.drop () ;
      outOperand6.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_popFirst (GALGAS_lstring & outOperand0,
                                              GALGAS_lstring & outOperand1,
                                              GALGAS_lstring & outOperand2,
                                              GALGAS_bool & outOperand3,
                                              GALGAS_lstring & outOperand4,
                                              GALGAS_semanticInstructionListAST & outOperand5,
                                              GALGAS_location & outOperand6,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_popLast (GALGAS_lstring & outOperand0,
                                             GALGAS_lstring & outOperand1,
                                             GALGAS_lstring & outOperand2,
                                             GALGAS_bool & outOperand3,
                                             GALGAS_lstring & outOperand4,
                                             GALGAS_semanticInstructionListAST & outOperand5,
                                             GALGAS_location & outOperand6,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::method_first (GALGAS_lstring & outOperand0,
                                           GALGAS_lstring & outOperand1,
                                           GALGAS_lstring & outOperand2,
                                           GALGAS_bool & outOperand3,
                                           GALGAS_lstring & outOperand4,
                                           GALGAS_semanticInstructionListAST & outOperand5,
                                           GALGAS_location & outOperand6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::method_last (GALGAS_lstring & outOperand0,
                                          GALGAS_lstring & outOperand1,
                                          GALGAS_lstring & outOperand2,
                                          GALGAS_bool & outOperand3,
                                          GALGAS_lstring & outOperand4,
                                          GALGAS_semanticInstructionListAST & outOperand5,
                                          GALGAS_location & outOperand6,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    outOperand0 = p->mObject.mProperty_mSourceFileExtension ;
    outOperand1 = p->mObject.mProperty_mSourceFileHelp ;
    outOperand2 = p->mObject.mProperty_mSourceFileVariableName ;
    outOperand3 = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
    outOperand4 = p->mObject.mProperty_mReferenceGrammar ;
    outOperand5 = p->mObject.mProperty_mInstructionList ;
    outOperand6 = p->mObject.mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::add_operation (const GALGAS_programRuleList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_programRuleList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_programRuleList result = GALGAS_programRuleList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::plusAssign_operation (const GALGAS_programRuleList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileExtensionAtIndex (GALGAS_lstring inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileExtension = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileExtensionAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileExtension ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileHelpAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileHelp = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileHelpAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileHelp ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileVariableNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mSourceFileVariableNameAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMSourceFileVariableNameIsUnusedAtIndex (GALGAS_bool inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSourceFileVariableNameIsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_programRuleList::getter_mSourceFileVariableNameIsUnusedAtIndex (const GALGAS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMReferenceGrammarAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mReferenceGrammar = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_programRuleList::getter_mReferenceGrammarAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mReferenceGrammar ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMInstructionListAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                                GALGAS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_programRuleList::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programRuleList::setter_setMEndOfInstructionListAtIndex (GALGAS_location inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_programRuleList::getter_mEndOfInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programRuleList * p = (cCollectionElement_programRuleList *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programRuleList) ;
    result = p->mObject.mProperty_mEndOfInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_programRuleList::cEnumerator_programRuleList (const GALGAS_programRuleList & inEnumeratedObject,
                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList_2D_element cEnumerator_programRuleList::current (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileExtension (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileExtension ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileHelp (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileHelp ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mSourceFileVariableName (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_programRuleList::current_mSourceFileVariableNameIsUnused (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mSourceFileVariableNameIsUnused ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_programRuleList::current_mReferenceGrammar (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mReferenceGrammar ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_programRuleList::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_programRuleList::current_mEndOfInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_programRuleList * p = (const cCollectionElement_programRuleList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programRuleList) ;
  return p->mObject.mProperty_mEndOfInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @programRuleList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programRuleList ("programRuleList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programRuleList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programRuleList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programRuleList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programRuleList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programRuleList GALGAS_programRuleList::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_programRuleList result ;
  const GALGAS_programRuleList * p = (const GALGAS_programRuleList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programRuleList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programRuleList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::GALGAS_galgasDeclarationAST (void) :
mProperty_mDeclarationList (),
mProperty_mImplicitTypeDeclarationSet (),
mProperty_mSyntaxComponentList (),
mProperty_mSyntaxExtensions (),
mProperty_mGUIComponentList (),
mProperty_mPrologueDeclarationList (),
mProperty_mSourceRuleList (),
mProperty_mEpilogueDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::~ GALGAS_galgasDeclarationAST (void) {
}

//---Synthetized initializer -----------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::init_28__29_ (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
  mProperty_mDeclarationList = GALGAS_semanticDeclarationListAST::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 462)) ;
  mProperty_mImplicitTypeDeclarationSet = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("semanticsTypesForAST.galgas", 463)) ;
  mProperty_mSyntaxComponentList = GALGAS_galgas_33_SyntaxComponentListAST::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 464)) ;
  mProperty_mSyntaxExtensions = GALGAS_syntaxExtensions::class_func_emptyMap (SOURCE_FILE ("semanticsTypesForAST.galgas", 465)) ;
  mProperty_mGUIComponentList = GALGAS_galgasGUIComponentListAST::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 466)) ;
  mProperty_mPrologueDeclarationList = GALGAS_prologueEpilogueList::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 467)) ;
  mProperty_mSourceRuleList = GALGAS_programRuleList::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 468)) ;
  mProperty_mEpilogueDeclarationList = GALGAS_prologueEpilogueList::class_func_emptyList (SOURCE_FILE ("semanticsTypesForAST.galgas", 469)) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST::GALGAS_galgasDeclarationAST (const GALGAS_semanticDeclarationListAST & inOperand0,
                                                          const GALGAS_stringset & inOperand1,
                                                          const GALGAS_galgas_33_SyntaxComponentListAST & inOperand2,
                                                          const GALGAS_syntaxExtensions & inOperand3,
                                                          const GALGAS_galgasGUIComponentListAST & inOperand4,
                                                          const GALGAS_prologueEpilogueList & inOperand5,
                                                          const GALGAS_programRuleList & inOperand6,
                                                          const GALGAS_prologueEpilogueList & inOperand7) :
mProperty_mDeclarationList (inOperand0),
mProperty_mImplicitTypeDeclarationSet (inOperand1),
mProperty_mSyntaxComponentList (inOperand2),
mProperty_mSyntaxExtensions (inOperand3),
mProperty_mGUIComponentList (inOperand4),
mProperty_mPrologueDeclarationList (inOperand5),
mProperty_mSourceRuleList (inOperand6),
mProperty_mEpilogueDeclarationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::class_func_new (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_galgasDeclarationAST::objectCompare (const GALGAS_galgasDeclarationAST & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mDeclarationList.objectCompare (inOperand.mProperty_mDeclarationList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mImplicitTypeDeclarationSet.objectCompare (inOperand.mProperty_mImplicitTypeDeclarationSet) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSyntaxComponentList.objectCompare (inOperand.mProperty_mSyntaxComponentList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSyntaxExtensions.objectCompare (inOperand.mProperty_mSyntaxExtensions) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mGUIComponentList.objectCompare (inOperand.mProperty_mGUIComponentList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mPrologueDeclarationList.objectCompare (inOperand.mProperty_mPrologueDeclarationList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mSourceRuleList.objectCompare (inOperand.mProperty_mSourceRuleList) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEpilogueDeclarationList.objectCompare (inOperand.mProperty_mEpilogueDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_galgasDeclarationAST::isValid (void) const {
  return mProperty_mDeclarationList.isValid () && mProperty_mImplicitTypeDeclarationSet.isValid () && mProperty_mSyntaxComponentList.isValid () && mProperty_mSyntaxExtensions.isValid () && mProperty_mGUIComponentList.isValid () && mProperty_mPrologueDeclarationList.isValid () && mProperty_mSourceRuleList.isValid () && mProperty_mEpilogueDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasDeclarationAST::drop (void) {
  mProperty_mDeclarationList.drop () ;
  mProperty_mImplicitTypeDeclarationSet.drop () ;
  mProperty_mSyntaxComponentList.drop () ;
  mProperty_mSyntaxExtensions.drop () ;
  mProperty_mGUIComponentList.drop () ;
  mProperty_mPrologueDeclarationList.drop () ;
  mProperty_mSourceRuleList.drop () ;
  mProperty_mEpilogueDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_galgasDeclarationAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @galgasDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mImplicitTypeDeclarationSet.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxExtensions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGUIComponentList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPrologueDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceRuleList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEpilogueDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @galgasDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgasDeclarationAST ("galgasDeclarationAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_galgasDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgasDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_galgasDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_galgasDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_galgasDeclarationAST GALGAS_galgasDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_galgasDeclarationAST result ;
  const GALGAS_galgasDeclarationAST * p = (const GALGAS_galgasDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_galgasDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgasDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@functionSignature' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_functionSignature : public cCollectionElement {
  public: GALGAS_functionSignature_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                const GALGAS_string & in_mFormalArgumentName
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_functionSignature (const GALGAS_functionSignature_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual ComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_lstring & in_mFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                            const GALGAS_string & in_mFormalArgumentName
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFormalSelector, in_mFormalArgumentType, in_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_functionSignature::cCollectionElement_functionSignature (const GALGAS_functionSignature_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFormalSelector, inElement.mProperty_mFormalArgumentType, inElement.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_functionSignature::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_functionSignature::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_functionSignature (mObject.mProperty_mFormalSelector, mObject.mProperty_mFormalArgumentType, mObject.mProperty_mFormalArgumentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_functionSignature::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalSelector" ":") ;
  mObject.mProperty_mFormalSelector.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentType" ":") ;
  mObject.mProperty_mFormalArgumentType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFormalArgumentName" ":") ;
  mObject.mProperty_mFormalArgumentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cCollectionElement_functionSignature::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_functionSignature * operand = (cCollectionElement_functionSignature *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_functionSignature) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature::GALGAS_functionSignature (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature::GALGAS_functionSignature (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_functionSignature (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                                             const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                                             const GALGAS_string & inOperand2
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_functionSignature (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_functionSignature::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS_lstring & in_mFormalSelector,
                                                          const GALGAS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                          const GALGAS_string & in_mFormalArgumentName
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = nullptr ;
  macroMyNew (p, cCollectionElement_functionSignature (in_mFormalSelector,
                                                       in_mFormalArgumentType,
                                                       in_mFormalArgumentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                    const GALGAS_unifiedTypeMapEntry & inOperand1,
                                                    const GALGAS_string & inOperand2
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_append (const GALGAS_lstring inOperand0,
                                              const GALGAS_unifiedTypeMapEntry inOperand1,
                                              const GALGAS_string inOperand2,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_unifiedTypeMapEntry inOperand1,
                                                     const GALGAS_string inOperand2,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_functionSignature (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
      capCollectionElement attributes ;
      attributes.setPointer (p) ;
      macroDetachSharedObject (p) ;
      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
    }else{
      drop () ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_unifiedTypeMapEntry & outOperand1,
                                                     GALGAS_string & outOperand2,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_functionSignature) ;
        outOperand0 = p->mObject.mProperty_mFormalSelector ;
        outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
        outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
      }
    }else{
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      drop () ;    
    }
  }else{
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_popFirst (GALGAS_lstring & outOperand0,
                                                GALGAS_unifiedTypeMapEntry & outOperand1,
                                                GALGAS_string & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_popLast (GALGAS_lstring & outOperand0,
                                               GALGAS_unifiedTypeMapEntry & outOperand1,
                                               GALGAS_string & outOperand2,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::method_first (GALGAS_lstring & outOperand0,
                                             GALGAS_unifiedTypeMapEntry & outOperand1,
                                             GALGAS_string & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::method_last (GALGAS_lstring & outOperand0,
                                            GALGAS_unifiedTypeMapEntry & outOperand1,
                                            GALGAS_string & outOperand2,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    outOperand0 = p->mObject.mProperty_mFormalSelector ;
    outOperand1 = p->mObject.mProperty_mFormalArgumentType ;
    outOperand2 = p->mObject.mProperty_mFormalArgumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::add_operation (const GALGAS_functionSignature & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_functionSignature result = GALGAS_functionSignature::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::plusAssign_operation (const GALGAS_functionSignature inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalSelectorAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalSelector = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_functionSignature::getter_mFormalSelectorAtIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalSelector ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalArgumentTypeAtIndex (GALGAS_unifiedTypeMapEntry inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_functionSignature::getter_mFormalArgumentTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_functionSignature::setter_setMFormalArgumentNameAtIndex (GALGAS_string inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFormalArgumentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_functionSignature::getter_mFormalArgumentNameAtIndex (const GALGAS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_functionSignature * p = (cCollectionElement_functionSignature *) attributes.ptr () ;
  GALGAS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_functionSignature) ;
    result = p->mObject.mProperty_mFormalArgumentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_functionSignature::cEnumerator_functionSignature (const GALGAS_functionSignature & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature_2D_element cEnumerator_functionSignature::current (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_functionSignature::current_mFormalSelector (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalSelector ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry cEnumerator_functionSignature::current_mFormalArgumentType (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_functionSignature::current_mFormalArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_functionSignature * p = (const cCollectionElement_functionSignature *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_functionSignature) ;
  return p->mObject.mProperty_mFormalArgumentName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @functionSignature generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_functionSignature ("functionSignature",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_functionSignature::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_functionSignature ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_functionSignature::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_functionSignature (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_functionSignature GALGAS_functionSignature::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_functionSignature result ;
  const GALGAS_functionSignature * p = (const GALGAS_functionSignature *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_functionSignature *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("functionSignature", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

