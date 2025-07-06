#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionAST_2E_weak::objectCompare (const GGS_openedSliceExpressionAST_2E_weak & inOperand) const {
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

GGS_openedSliceExpressionAST_2E_weak::GGS_openedSliceExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak & GGS_openedSliceExpressionAST_2E_weak::operator = (const GGS_openedSliceExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak::GGS_openedSliceExpressionAST_2E_weak (const GGS_openedSliceExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak GGS_openedSliceExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_openedSliceExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST GGS_openedSliceExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_openedSliceExpressionAST result ;
  if (isValid ()) {
    const cPtr_openedSliceExpressionAST * p = (cPtr_openedSliceExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_openedSliceExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST GGS_openedSliceExpressionAST_2E_weak::bang_openedSliceExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_openedSliceExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionAST) ;
      result = GGS_openedSliceExpressionAST ((cPtr_openedSliceExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionAST_2E_weak ("openedSliceExpressionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_openedSliceExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedSliceExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedSliceExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionAST_2E_weak GGS_openedSliceExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_openedSliceExpressionAST_2E_weak result ;
  const GGS_openedSliceExpressionAST_2E_weak * p = (const GGS_openedSliceExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedSliceExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_orShortExpressionForGeneration_2E_weak::objectCompare (const GGS_orShortExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_orShortExpressionForGeneration_2E_weak::GGS_orShortExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak & GGS_orShortExpressionForGeneration_2E_weak::operator = (const GGS_orShortExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak::GGS_orShortExpressionForGeneration_2E_weak (const GGS_orShortExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak GGS_orShortExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_orShortExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_orShortExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_orShortExpressionForGeneration * p = (cPtr_orShortExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_orShortExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration GGS_orShortExpressionForGeneration_2E_weak::bang_orShortExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orShortExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_orShortExpressionForGeneration) ;
      result = GGS_orShortExpressionForGeneration ((cPtr_orShortExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @orShortExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2E_weak ("orShortExpressionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_orShortExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orShortExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_orShortExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_orShortExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orShortExpressionForGeneration_2E_weak GGS_orShortExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_orShortExpressionForGeneration_2E_weak result ;
  const GGS_orShortExpressionForGeneration_2E_weak * p = (const GGS_orShortExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_orShortExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("orShortExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_openedSliceExpressionForGeneration_2E_weak::objectCompare (const GGS_openedSliceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_openedSliceExpressionForGeneration_2E_weak::GGS_openedSliceExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak & GGS_openedSliceExpressionForGeneration_2E_weak::operator = (const GGS_openedSliceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak::GGS_openedSliceExpressionForGeneration_2E_weak (const GGS_openedSliceExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak GGS_openedSliceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_openedSliceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_openedSliceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_openedSliceExpressionForGeneration * p = (cPtr_openedSliceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_openedSliceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration GGS_openedSliceExpressionForGeneration_2E_weak::bang_openedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_openedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_openedSliceExpressionForGeneration) ;
      result = GGS_openedSliceExpressionForGeneration ((cPtr_openedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @openedSliceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2E_weak ("openedSliceExpressionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_openedSliceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_openedSliceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_openedSliceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_openedSliceExpressionForGeneration_2E_weak GGS_openedSliceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_openedSliceExpressionForGeneration_2E_weak result ;
  const GGS_openedSliceExpressionForGeneration_2E_weak * p = (const GGS_openedSliceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_openedSliceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("openedSliceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_closedSliceExpressionForGeneration_2E_weak::objectCompare (const GGS_closedSliceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_closedSliceExpressionForGeneration_2E_weak::GGS_closedSliceExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak & GGS_closedSliceExpressionForGeneration_2E_weak::operator = (const GGS_closedSliceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak::GGS_closedSliceExpressionForGeneration_2E_weak (const GGS_closedSliceExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak GGS_closedSliceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_closedSliceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_closedSliceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_closedSliceExpressionForGeneration * p = (cPtr_closedSliceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_closedSliceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration GGS_closedSliceExpressionForGeneration_2E_weak::bang_closedSliceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_closedSliceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_closedSliceExpressionForGeneration) ;
      result = GGS_closedSliceExpressionForGeneration ((cPtr_closedSliceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @closedSliceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2E_weak ("closedSliceExpressionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_closedSliceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_closedSliceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_closedSliceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_closedSliceExpressionForGeneration_2E_weak GGS_closedSliceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_closedSliceExpressionForGeneration_2E_weak result ;
  const GGS_closedSliceExpressionForGeneration_2E_weak * p = (const GGS_closedSliceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_closedSliceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("closedSliceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@actualOutputArgumentList initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS_actualOutputArgumentList & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1663 (temp_0) ;
  while (enumerator_1663.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1663.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 32)) ;
    enumerator_1663.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@actualOutputArgumentList subscriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subscriptSignature (const GGS_actualOutputArgumentList & inObject,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_1932 (temp_0) ;
  while (enumerator_1932.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_1932.current (HERE).readProperty_mActualSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 41)) ;
    enumerator_1932.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@actualOutputArgumentList enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterInSemanticContext (const GGS_actualOutputArgumentList inObject,
                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actualOutputArgumentList temp_0 = inObject ;
  UpEnumerator_actualOutputArgumentList enumerator_2197 (temp_0) ;
  while (enumerator_2197.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) enumerator_2197.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 49)) ;
    enumerator_2197.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @tildeExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionAST::objectCompare (const GGS_tildeExpressionAST & inOperand) const {
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

GGS_tildeExpressionAST::GGS_tildeExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_tildeExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_tildeExpressionAST (inCompiler COMMA_THERE)) ;
  object->tildeExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_tildeExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_tildeExpressionAST::
tildeExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                 const GGS_semanticExpressionAST & in_mExpression,
                                 Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST::GGS_tildeExpressionAST (const cPtr_tildeExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_tildeExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                               const GGS_semanticExpressionAST & in_mExpression,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_tildeExpressionAST (in_mOperatorLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_tildeExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_tildeExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_tildeExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @tildeExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_tildeExpressionAST::cPtr_tildeExpressionAST (const GGS_location & in_mOperatorLocation,
                                                  const GGS_semanticExpressionAST & in_mExpression,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_tildeExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

void cPtr_tildeExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@tildeExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_tildeExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_tildeExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_tildeExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST ("tildeExpressionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tildeExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tildeExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tildeExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionAST result ;
  const GGS_tildeExpressionAST * p = (const GGS_tildeExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tildeExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionAST_2E_weak::objectCompare (const GGS_tildeExpressionAST_2E_weak & inOperand) const {
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

GGS_tildeExpressionAST_2E_weak::GGS_tildeExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak & GGS_tildeExpressionAST_2E_weak::operator = (const GGS_tildeExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak::GGS_tildeExpressionAST_2E_weak (const GGS_tildeExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak GGS_tildeExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_tildeExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_tildeExpressionAST result ;
  if (isValid ()) {
    const cPtr_tildeExpressionAST * p = (cPtr_tildeExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_tildeExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST GGS_tildeExpressionAST_2E_weak::bang_tildeExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_tildeExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tildeExpressionAST) ;
      result = GGS_tildeExpressionAST ((cPtr_tildeExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionAST_2E_weak ("tildeExpressionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tildeExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tildeExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tildeExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionAST_2E_weak GGS_tildeExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionAST_2E_weak result ;
  const GGS_tildeExpressionAST_2E_weak * p = (const GGS_tildeExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tildeExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tildeExpressionForGeneration_2E_weak::objectCompare (const GGS_tildeExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_tildeExpressionForGeneration_2E_weak::GGS_tildeExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak & GGS_tildeExpressionForGeneration_2E_weak::operator = (const GGS_tildeExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak::GGS_tildeExpressionForGeneration_2E_weak (const GGS_tildeExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak GGS_tildeExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_tildeExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_tildeExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_tildeExpressionForGeneration * p = (cPtr_tildeExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_tildeExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration GGS_tildeExpressionForGeneration_2E_weak::bang_tildeExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_tildeExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_tildeExpressionForGeneration) ;
      result = GGS_tildeExpressionForGeneration ((cPtr_tildeExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @tildeExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2E_weak ("tildeExpressionForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tildeExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tildeExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tildeExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tildeExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tildeExpressionForGeneration_2E_weak GGS_tildeExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_tildeExpressionForGeneration_2E_weak result ;
  const GGS_tildeExpressionForGeneration_2E_weak * p = (const GGS_tildeExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tildeExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tildeExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST::objectCompare (const GGS_unaryMinusExpressionAST & inOperand) const {
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

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionAST::
unaryMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                      const GGS_semanticExpressionAST & in_mExpression,
                                      Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST::GGS_unaryMinusExpressionAST (const cPtr_unaryMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                         const GGS_semanticExpressionAST & in_mExpression,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_unaryMinusExpressionAST (in_mOperatorLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionAST::cPtr_unaryMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

void cPtr_unaryMinusExpressionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST ("unaryMinusExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST result ;
  const GGS_unaryMinusExpressionAST * p = (const GGS_unaryMinusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryMinusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak & GGS_unaryMinusExpressionAST_2E_weak::operator = (const GGS_unaryMinusExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak::GGS_unaryMinusExpressionAST_2E_weak (const GGS_unaryMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak GGS_unaryMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionAST * p = (cPtr_unaryMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST GGS_unaryMinusExpressionAST_2E_weak::bang_unaryMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionAST) ;
      result = GGS_unaryMinusExpressionAST ((cPtr_unaryMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ("unaryMinusExpressionAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionAST_2E_weak GGS_unaryMinusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionAST_2E_weak result ;
  const GGS_unaryMinusExpressionAST_2E_weak * p = (const GGS_unaryMinusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryMinusExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak & GGS_unaryMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryMinusExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak::GGS_unaryMinusExpressionForGeneration_2E_weak (const GGS_unaryMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak GGS_unaryMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration_2E_weak::bang_unaryMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryMinusExpressionForGeneration) ;
      result = GGS_unaryMinusExpressionForGeneration ((cPtr_unaryMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ("unaryMinusExpressionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration_2E_weak GGS_unaryMinusExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration_2E_weak result ;
  const GGS_unaryMinusExpressionForGeneration_2E_weak * p = (const GGS_unaryMinusExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryPlusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST::objectCompare (const GGS_unaryPlusExpressionAST & inOperand) const {
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

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryPlusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryPlusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryPlusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryPlusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryPlusExpressionAST::
unaryPlusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                     const GGS_semanticExpressionAST & in_mExpression,
                                     Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST::GGS_unaryPlusExpressionAST (const cPtr_unaryPlusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryPlusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                       const GGS_semanticExpressionAST & in_mExpression,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_unaryPlusExpressionAST (in_mOperatorLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryPlusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryPlusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryPlusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryPlusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryPlusExpressionAST::cPtr_unaryPlusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                          const GGS_semanticExpressionAST & in_mExpression,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryPlusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

void cPtr_unaryPlusExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryPlusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryPlusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryPlusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryPlusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST ("unaryPlusExpressionAST",
                                                                              & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryPlusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryPlusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryPlusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST result ;
  const GGS_unaryPlusExpressionAST * p = (const GGS_unaryPlusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryPlusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryPlusExpressionAST_2E_weak::objectCompare (const GGS_unaryPlusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak & GGS_unaryPlusExpressionAST_2E_weak::operator = (const GGS_unaryPlusExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak::GGS_unaryPlusExpressionAST_2E_weak (const GGS_unaryPlusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak GGS_unaryPlusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryPlusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryPlusExpressionAST * p = (cPtr_unaryPlusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryPlusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST GGS_unaryPlusExpressionAST_2E_weak::bang_unaryPlusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryPlusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryPlusExpressionAST) ;
      result = GGS_unaryPlusExpressionAST ((cPtr_unaryPlusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryPlusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ("unaryPlusExpressionAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryPlusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryPlusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryPlusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryPlusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryPlusExpressionAST_2E_weak GGS_unaryPlusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_unaryPlusExpressionAST_2E_weak result ;
  const GGS_unaryPlusExpressionAST_2E_weak * p = (const GGS_unaryPlusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryPlusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryPlusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST::objectCompare (const GGS_unaryWrappingMinusExpressionAST & inOperand) const {
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

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::
init_21__21_ (const GGS_location & in_mOperatorLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_unaryWrappingMinusExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_unaryWrappingMinusExpressionAST (inCompiler COMMA_THERE)) ;
  object->unaryWrappingMinusExpressionAST_init_21__21_ (in_mOperatorLocation, in_mExpression, inCompiler) ;
  const GGS_unaryWrappingMinusExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionAST::
unaryWrappingMinusExpressionAST_init_21__21_ (const GGS_location & in_mOperatorLocation,
                                              const GGS_semanticExpressionAST & in_mExpression,
                                              Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST::GGS_unaryWrappingMinusExpressionAST (const cPtr_unaryWrappingMinusExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::class_func_new (const GGS_location & in_mOperatorLocation,
                                                                                         const GGS_semanticExpressionAST & in_mExpression,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_unaryWrappingMinusExpressionAST (in_mOperatorLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_unaryWrappingMinusExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_unaryWrappingMinusExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionAST::cPtr_unaryWrappingMinusExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                            const GGS_semanticExpressionAST & in_mExpression,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_unaryWrappingMinusExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

void cPtr_unaryWrappingMinusExpressionAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryWrappingMinusExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_unaryWrappingMinusExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ("unaryWrappingMinusExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryWrappingMinusExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST result ;
  const GGS_unaryWrappingMinusExpressionAST * p = (const GGS_unaryWrappingMinusExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionAST_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionAST_2E_weak & inOperand) const {
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

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (void) :
GGS_semanticExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak & GGS_unaryWrappingMinusExpressionAST_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak::GGS_unaryWrappingMinusExpressionAST_2E_weak (const GGS_unaryWrappingMinusExpressionAST & inSource) :
GGS_semanticExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak GGS_unaryWrappingMinusExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionAST * p = (cPtr_unaryWrappingMinusExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST GGS_unaryWrappingMinusExpressionAST_2E_weak::bang_unaryWrappingMinusExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionAST) ;
      result = GGS_unaryWrappingMinusExpressionAST ((cPtr_unaryWrappingMinusExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ("unaryWrappingMinusExpressionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryWrappingMinusExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionAST_2E_weak GGS_unaryWrappingMinusExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionAST_2E_weak result ;
  const GGS_unaryWrappingMinusExpressionAST_2E_weak * p = (const GGS_unaryWrappingMinusExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak & GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::operator = (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (const GGS_unaryWrappingMinusExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_unaryWrappingMinusExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::bang_unaryWrappingMinusExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
      result = GGS_unaryWrappingMinusExpressionForGeneration ((cPtr_unaryWrappingMinusExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ("unaryWrappingMinusExpressionForGeneration.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration_2E_weak GGS_unaryWrappingMinusExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration_2E_weak result ;
  const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak * p = (const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum selfMutability
//--------------------------------------------------------------------------------------------------

GGS_selfMutability::GGS_selfMutability (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_propertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_propertiesAreMutableSelfIsNot ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_selfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_selfAndPropertiesAreMutable ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::class_func_initializer (UNUSED_LOCATION_ARGS) {
  GGS_selfMutability result ;
  result.mEnum = Enumeration::enum_initializer ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfMutability [5] = {
  "(not built)",
  "none",
  "propertiesAreMutableSelfIsNot",
  "selfAndPropertiesAreMutable",
  "initializer"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isPropertiesAreMutableSelfIsNot (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_propertiesAreMutableSelfIsNot == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isSelfAndPropertiesAreMutable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfAndPropertiesAreMutable == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfMutability::getter_isInitializer (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_initializer == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfMutability::description (String & ioString,
                                      const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @selfMutability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfMutability [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMutability::objectCompare (const GGS_selfMutability & inOperand) const {
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
//     @selfMutability generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMutability ("selfMutability",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMutability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfMutability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfMutability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMutability GGS_selfMutability::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_selfMutability result ;
  const GGS_selfMutability * p = (const GGS_selfMutability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfMutability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMutability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability selfIsMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_selfIsMutable (const GGS_selfMutability & inObject,
                                        Compiler *
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_selfMutability temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_selfMutability::Enumeration::invalid:
    break ;
  case GGS_selfMutability::Enumeration::enum_none:
  case GGS_selfMutability::Enumeration::enum_propertiesAreMutableSelfIsNot:
    {
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_selfMutability::Enumeration::enum_selfAndPropertiesAreMutable:
  case GGS_selfMutability::Enumeration::enum_initializer:
    {
      result_result = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum selfAvailability
//--------------------------------------------------------------------------------------------------

GGS_selfAvailability::GGS_selfAvailability (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::class_func_available (const GGS_unifiedTypeMapEntry & inAssociatedValue0,
                                                                 const GGS_selfMutability & inAssociatedValue1
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  result.mEnum = Enumeration::enum_available ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_selfAvailability_2E_available (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::method_extractAvailable (GGS_unifiedTypeMapEntry & outAssociatedValue_type,
                                                    GGS_selfMutability & outAssociatedValue_selfMutability,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_available) {
    outAssociatedValue_type.drop () ;
    outAssociatedValue_selfMutability.drop () ;
    String s ;
    s.appendCString ("method @selfAvailability.available invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_type = ptr->mProperty_type ;
    outAssociatedValue_selfMutability = ptr->mProperty_selfMutability ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability_2E_available_3F_ GGS_selfAvailability::getter_getAvailable (UNUSED_LOCATION_ARGS) const {
  GGS_selfAvailability_2E_available_3F_ result ;
  if (mEnum == Enumeration::enum_available) {
    const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_selfAvailability_2E_available (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::getAssociatedValuesFor_available (GGS_unifiedTypeMapEntry & out_type,
                                                             GGS_selfMutability & out_selfMutability) const {
  const auto ptr = (const GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
  out_type = ptr->mProperty_type ;
  out_selfMutability = ptr->mProperty_selfMutability ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_selfAvailability [3] = {
  "(not built)",
  "none",
  "available"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_selfAvailability::getter_isAvailable (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_available == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selfAvailability::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @selfAvailability: ") ;
  ioString.appendCString (gEnumNameArrayFor_selfAvailability [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAvailability::objectCompare (const GGS_selfAvailability & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_available: {
        const auto left = (GGS_selfAvailability_2E_available *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_selfAvailability_2E_available *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      default:
        result = ComparisonResult::operandEqual ;
        break ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAvailability generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfAvailability::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfAvailability (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAvailability GGS_selfAvailability::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_selfAvailability result ;
  const GGS_selfAvailability * p = (const GGS_selfAvailability *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfAvailability *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAvailability", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@semanticExpressionAST analyzeSemanticExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticExpression (cPtr_semanticExpressionAST * inObject,
                                                    const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                    const GGS_unifiedTypeMapEntry constin_inType,
                                                    const GGS_analysisContext constin_inAnalysisContext,
                                                    GGS_unifiedTypeMap & io_ioTypeMap,
                                                    GGS_localVarManager & io_ioVariableMap,
                                                    GGS_semanticExpressionForGeneration & out_outExpression,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticExpressionAST) ;
    inObject->method_analyzeSemanticExpression (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inType, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, out_outExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST_2E_weak::objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_assignmentInstructionAST_2E_weak::GGS_assignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak & GGS_assignmentInstructionAST_2E_weak::operator = (const GGS_assignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak::GGS_assignmentInstructionAST_2E_weak (const GGS_assignmentInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak GGS_assignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_assignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST_2E_weak::bang_assignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionAST) ;
      result = GGS_assignmentInstructionAST ((cPtr_assignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ("assignmentInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak GGS_assignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionAST_2E_weak result ;
  const GGS_assignmentInstructionAST_2E_weak * p = (const GGS_assignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPropertyAssignmentInstructionAST_2E_weak::objectCompare (const GGS_selfPropertyAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPropertyAssignmentInstructionAST_2E_weak::GGS_selfPropertyAssignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST_2E_weak & GGS_selfPropertyAssignmentInstructionAST_2E_weak::operator = (const GGS_selfPropertyAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST_2E_weak::GGS_selfPropertyAssignmentInstructionAST_2E_weak (const GGS_selfPropertyAssignmentInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST_2E_weak GGS_selfPropertyAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfPropertyAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST GGS_selfPropertyAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfPropertyAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfPropertyAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST GGS_selfPropertyAssignmentInstructionAST_2E_weak::bang_selfPropertyAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfPropertyAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPropertyAssignmentInstructionAST) ;
      result = GGS_selfPropertyAssignmentInstructionAST ((cPtr_selfPropertyAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfPropertyAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ("selfPropertyAssignmentInstructionAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfPropertyAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfPropertyAssignmentInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfPropertyAssignmentInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST_2E_weak GGS_selfPropertyAssignmentInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_selfPropertyAssignmentInstructionAST_2E_weak result ;
  const GGS_selfPropertyAssignmentInstructionAST_2E_weak * p = (const GGS_selfPropertyAssignmentInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfPropertyAssignmentInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPropertyAssignmentInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionForGeneration_2E_weak::objectCompare (const GGS_assignmentInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_assignmentInstructionForGeneration_2E_weak::GGS_assignmentInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration_2E_weak & GGS_assignmentInstructionForGeneration_2E_weak::operator = (const GGS_assignmentInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration_2E_weak::GGS_assignmentInstructionForGeneration_2E_weak (const GGS_assignmentInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration_2E_weak GGS_assignmentInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_assignmentInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration GGS_assignmentInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_assignmentInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_assignmentInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration GGS_assignmentInstructionForGeneration_2E_weak::bang_assignmentInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_assignmentInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_assignmentInstructionForGeneration) ;
      result = GGS_assignmentInstructionForGeneration ((cPtr_assignmentInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2E_weak ("assignmentInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_assignmentInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_assignmentInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_assignmentInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration_2E_weak GGS_assignmentInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_assignmentInstructionForGeneration_2E_weak result ;
  const GGS_assignmentInstructionForGeneration_2E_weak * p = (const GGS_assignmentInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_assignmentInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("assignmentInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@castInstructionBranchListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListAST : public cCollectionElement {
  public: GGS_castInstructionBranchListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_castInstructionBranchListAST (const GGS_lstring & in_mTypeName,
                                                           const GGS_lstring & in_mConstantVarName,
                                                           const GGS_semanticInstructionListAST & in_mInstructionList,
                                                           const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                           const GGS_location & in_mEndOfInstructions
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListAST (const GGS_castInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GGS_lstring & in_mTypeName,
                                                                                                  const GGS_lstring & in_mConstantVarName,
                                                                                                  const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                                                  const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                  const GGS_location & in_mEndOfInstructions
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mConstantVarName, in_mInstructionList, in_mTypeComparisonKind, in_mEndOfInstructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListAST::cCollectionElement_castInstructionBranchListAST (const GGS_castInstructionBranchListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mConstantVarName, inElement.mProperty_mInstructionList, inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mEndOfInstructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListAST (mObject.mProperty_mTypeName, mObject.mProperty_mConstantVarName, mObject.mProperty_mInstructionList, mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mEndOfInstructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mConstantVarName" ":") ;
  mObject.mProperty_mConstantVarName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeComparisonKind" ":") ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfInstructions" ":") ;
  mObject.mProperty_mEndOfInstructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST::GGS_castInstructionBranchListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST::GGS_castInstructionBranchListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_castInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_castInstructionBranchListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::plusPlusAssignOperation (const GGS_castInstructionBranchListAST_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                             const GGS_lstring & inOperand1,
                                                                                             const GGS_semanticInstructionListAST & inOperand2,
                                                                                             const GGS_dynamicTypeComparisonKind & inOperand3,
                                                                                             const GGS_location & inOperand4
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GGS_castInstructionBranchListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_castInstructionBranchListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_lstring & in_mTypeName,
                                                                  const GGS_lstring & in_mConstantVarName,
                                                                  const GGS_semanticInstructionListAST & in_mInstructionList,
                                                                  const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                  const GGS_location & in_mEndOfInstructions
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListAST (in_mTypeName,
                                                                  in_mConstantVarName,
                                                                  in_mInstructionList,
                                                                  in_mTypeComparisonKind,
                                                                  in_mEndOfInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                           const GGS_lstring & inOperand1,
                                                           const GGS_semanticInstructionListAST & inOperand2,
                                                           const GGS_dynamicTypeComparisonKind & inOperand3,
                                                           const GGS_location & inOperand4
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_append (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_semanticInstructionListAST inOperand2,
                                                      const GGS_dynamicTypeComparisonKind inOperand3,
                                                      const GGS_location inOperand4,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_semanticInstructionListAST inOperand2,
                                                             const GGS_dynamicTypeComparisonKind inOperand3,
                                                             const GGS_location inOperand4,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListAST (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             GGS_semanticInstructionListAST & outOperand2,
                                                             GGS_dynamicTypeComparisonKind & outOperand3,
                                                             GGS_location & outOperand4,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  outOperand4.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mConstantVarName ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
      outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        GGS_semanticInstructionListAST & outOperand2,
                                                        GGS_dynamicTypeComparisonKind & outOperand3,
                                                        GGS_location & outOperand4,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_popLast (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       GGS_semanticInstructionListAST & outOperand2,
                                                       GGS_dynamicTypeComparisonKind & outOperand3,
                                                       GGS_location & outOperand4,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::method_first (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS_semanticInstructionListAST & outOperand2,
                                                     GGS_dynamicTypeComparisonKind & outOperand3,
                                                     GGS_location & outOperand4,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::method_last (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_semanticInstructionListAST & outOperand2,
                                                    GGS_dynamicTypeComparisonKind & outOperand3,
                                                    GGS_location & outOperand4,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mConstantVarName ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand4 = p->mObject.mProperty_mEndOfInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::add_operation (const GGS_castInstructionBranchListAST & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_castInstructionBranchListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListAST result = GGS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListAST result = GGS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListAST result = GGS_castInstructionBranchListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::plusAssignOperation (const GGS_castInstructionBranchListAST inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_setMTypeNameAtIndex (GGS_lstring inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_castInstructionBranchListAST::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_setMConstantVarNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mConstantVarName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_castInstructionBranchListAST::getter_mConstantVarNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mConstantVarName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_setMInstructionListAtIndex (GGS_semanticInstructionListAST inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_castInstructionBranchListAST::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GGS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_setMTypeComparisonKindAtIndex (GGS_dynamicTypeComparisonKind inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_castInstructionBranchListAST::getter_mTypeComparisonKindAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GGS_dynamicTypeComparisonKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListAST::setter_setMEndOfInstructionsAtIndex (GGS_location inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_castInstructionBranchListAST::getter_mEndOfInstructionsAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListAST * p = (cCollectionElement_castInstructionBranchListAST *) attributes.ptr () ;
  GGS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
    result = p->mObject.mProperty_mEndOfInstructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @castInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_castInstructionBranchListAST::DownEnumerator_castInstructionBranchListAST (const GGS_castInstructionBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element DownEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST DownEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind DownEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location DownEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @castInstructionBranchListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_castInstructionBranchListAST::UpEnumerator_castInstructionBranchListAST (const GGS_castInstructionBranchListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST_2E_element UpEnumerator_castInstructionBranchListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_castInstructionBranchListAST::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_castInstructionBranchListAST::current_mConstantVarName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mConstantVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST UpEnumerator_castInstructionBranchListAST::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind UpEnumerator_castInstructionBranchListAST::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_location UpEnumerator_castInstructionBranchListAST::current_mEndOfInstructions (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListAST * p = (const cCollectionElement_castInstructionBranchListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListAST) ;
  return p->mObject.mProperty_mEndOfInstructions ;
}




//--------------------------------------------------------------------------------------------------
//     @castInstructionBranchListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListAST ("castInstructionBranchListAST",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInstructionBranchListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInstructionBranchListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInstructionBranchListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_castInstructionBranchListAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListAST result ;
  const GGS_castInstructionBranchListAST * p = (const GGS_castInstructionBranchListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInstructionBranchListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structuredCastInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structuredCastInstructionAST::objectCompare (const GGS_structuredCastInstructionAST & inOperand) const {
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

GGS_structuredCastInstructionAST::GGS_structuredCastInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structuredCastInstructionAST GGS_structuredCastInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mCastExpression,
                          const GGS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                          const GGS_semanticInstructionListAST & in_mElseInstructionList,
                          const GGS_location & in_mEndOfCastInstruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_structuredCastInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_structuredCastInstructionAST (inCompiler COMMA_THERE)) ;
  object->structuredCastInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mCastExpression, in_mCastInstructionBranchList, in_mElseInstructionList, in_mEndOfCastInstruction, inCompiler) ;
  const GGS_structuredCastInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structuredCastInstructionAST::
structuredCastInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mCastExpression,
                                                       const GGS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                       const GGS_semanticInstructionListAST & in_mElseInstructionList,
                                                       const GGS_location & in_mEndOfCastInstruction,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCastExpression = in_mCastExpression ;
  mProperty_mCastInstructionBranchList = in_mCastInstructionBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfCastInstruction = in_mEndOfCastInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST::GGS_structuredCastInstructionAST (const cPtr_structuredCastInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structuredCastInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST GGS_structuredCastInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                   const GGS_semanticExpressionAST & in_mCastExpression,
                                                                                   const GGS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                                   const GGS_semanticInstructionListAST & in_mElseInstructionList,
                                                                                   const GGS_location & in_mEndOfCastInstruction,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_structuredCastInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_structuredCastInstructionAST (in_mInstructionLocation, in_mCastExpression, in_mCastInstructionBranchList, in_mElseInstructionList, in_mEndOfCastInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_structuredCastInstructionAST::readProperty_mCastExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListAST GGS_structuredCastInstructionAST::readProperty_mCastInstructionBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_castInstructionBranchListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mCastInstructionBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_structuredCastInstructionAST::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_structuredCastInstructionAST::readProperty_mEndOfCastInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structuredCastInstructionAST) ;
    return p->mProperty_mEndOfCastInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structuredCastInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mCastExpression (),
mProperty_mCastInstructionBranchList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfCastInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structuredCastInstructionAST::cPtr_structuredCastInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_semanticExpressionAST & in_mCastExpression,
                                                                      const GGS_castInstructionBranchListAST & in_mCastInstructionBranchList,
                                                                      const GGS_semanticInstructionListAST & in_mElseInstructionList,
                                                                      const GGS_location & in_mEndOfCastInstruction,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mCastExpression (),
mProperty_mCastInstructionBranchList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfCastInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mCastExpression = in_mCastExpression ;
  mProperty_mCastInstructionBranchList = in_mCastInstructionBranchList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfCastInstruction = in_mEndOfCastInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_structuredCastInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

void cPtr_structuredCastInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@structuredCastInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCastInstructionBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfCastInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_structuredCastInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structuredCastInstructionAST (mProperty_mInstructionLocation, mProperty_mCastExpression, mProperty_mCastInstructionBranchList, mProperty_mElseInstructionList, mProperty_mEndOfCastInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structuredCastInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCastExpression.printNonNullClassInstanceProperties ("mCastExpression") ;
    mProperty_mCastInstructionBranchList.printNonNullClassInstanceProperties ("mCastInstructionBranchList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfCastInstruction.printNonNullClassInstanceProperties ("mEndOfCastInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structuredCastInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST ("structuredCastInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structuredCastInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structuredCastInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structuredCastInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST GGS_structuredCastInstructionAST::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_structuredCastInstructionAST result ;
  const GGS_structuredCastInstructionAST * p = (const GGS_structuredCastInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structuredCastInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structuredCastInstructionAST_2E_weak::objectCompare (const GGS_structuredCastInstructionAST_2E_weak & inOperand) const {
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

GGS_structuredCastInstructionAST_2E_weak::GGS_structuredCastInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST_2E_weak & GGS_structuredCastInstructionAST_2E_weak::operator = (const GGS_structuredCastInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST_2E_weak::GGS_structuredCastInstructionAST_2E_weak (const GGS_structuredCastInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST_2E_weak GGS_structuredCastInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structuredCastInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST GGS_structuredCastInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_structuredCastInstructionAST result ;
  if (isValid ()) {
    const cPtr_structuredCastInstructionAST * p = (cPtr_structuredCastInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_structuredCastInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST GGS_structuredCastInstructionAST_2E_weak::bang_structuredCastInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structuredCastInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structuredCastInstructionAST) ;
      result = GGS_structuredCastInstructionAST ((cPtr_structuredCastInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structuredCastInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionAST_2E_weak ("structuredCastInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structuredCastInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structuredCastInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structuredCastInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionAST_2E_weak GGS_structuredCastInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_structuredCastInstructionAST_2E_weak result ;
  const GGS_structuredCastInstructionAST_2E_weak * p = (const GGS_structuredCastInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structuredCastInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@castInstructionBranchListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_castInstructionBranchListForGeneration : public cCollectionElement {
  public: GGS_castInstructionBranchListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_castInstructionBranchListForGeneration (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                     const GGS_unifiedTypeMapEntry & in_mType,
                                                                     const GGS_string & in_mCastedVarCppName,
                                                                     const GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_castInstructionBranchListForGeneration (const GGS_castInstructionBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                                                                      const GGS_unifiedTypeMapEntry & in_mType,
                                                                                                                      const GGS_string & in_mCastedVarCppName,
                                                                                                                      const GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeComparisonKind, in_mType, in_mCastedVarCppName, in_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_castInstructionBranchListForGeneration::cCollectionElement_castInstructionBranchListForGeneration (const GGS_castInstructionBranchListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeComparisonKind, inElement.mProperty_mType, inElement.mProperty_mCastedVarCppName, inElement.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_castInstructionBranchListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_castInstructionBranchListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_castInstructionBranchListForGeneration (mObject.mProperty_mTypeComparisonKind, mObject.mProperty_mType, mObject.mProperty_mCastedVarCppName, mObject.mProperty_mInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_castInstructionBranchListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeComparisonKind" ":") ;
  mObject.mProperty_mTypeComparisonKind.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mType" ":") ;
  mObject.mProperty_mType.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mCastedVarCppName" ":") ;
  mObject.mProperty_mCastedVarCppName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration::GGS_castInstructionBranchListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration::GGS_castInstructionBranchListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::plusPlusAssignOperation (const GGS_castInstructionBranchListForGeneration_2E_element & inValue
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::class_func_listWithValue (const GGS_dynamicTypeComparisonKind & inOperand0,
                                                                                                                 const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                                 const GGS_string & inOperand2,
                                                                                                                 const GGS_semanticInstructionListForGeneration & inOperand3
                                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_castInstructionBranchListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_castInstructionBranchListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                            const GGS_unifiedTypeMapEntry & in_mType,
                                                                            const GGS_string & in_mCastedVarCppName,
                                                                            const GGS_semanticInstructionListForGeneration & in_mInstructionList
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (in_mTypeComparisonKind,
                                                                            in_mType,
                                                                            in_mCastedVarCppName,
                                                                            in_mInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::addAssignOperation (const GGS_dynamicTypeComparisonKind & inOperand0,
                                                                     const GGS_unifiedTypeMapEntry & inOperand1,
                                                                     const GGS_string & inOperand2,
                                                                     const GGS_semanticInstructionListForGeneration & inOperand3
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_append (const GGS_dynamicTypeComparisonKind inOperand0,
                                                                const GGS_unifiedTypeMapEntry inOperand1,
                                                                const GGS_string inOperand2,
                                                                const GGS_semanticInstructionListForGeneration inOperand3,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_insertAtIndex (const GGS_dynamicTypeComparisonKind inOperand0,
                                                                       const GGS_unifiedTypeMapEntry inOperand1,
                                                                       const GGS_string inOperand2,
                                                                       const GGS_semanticInstructionListForGeneration inOperand3,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_castInstructionBranchListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_removeAtIndex (GGS_dynamicTypeComparisonKind & outOperand0,
                                                                       GGS_unifiedTypeMapEntry & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       GGS_semanticInstructionListForGeneration & outOperand3,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
      outOperand1 = p->mObject.mProperty_mType ;
      outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
      outOperand3 = p->mObject.mProperty_mInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_popFirst (GGS_dynamicTypeComparisonKind & outOperand0,
                                                                  GGS_unifiedTypeMapEntry & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  GGS_semanticInstructionListForGeneration & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_popLast (GGS_dynamicTypeComparisonKind & outOperand0,
                                                                 GGS_unifiedTypeMapEntry & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 GGS_semanticInstructionListForGeneration & outOperand3,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::method_first (GGS_dynamicTypeComparisonKind & outOperand0,
                                                               GGS_unifiedTypeMapEntry & outOperand1,
                                                               GGS_string & outOperand2,
                                                               GGS_semanticInstructionListForGeneration & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::method_last (GGS_dynamicTypeComparisonKind & outOperand0,
                                                              GGS_unifiedTypeMapEntry & outOperand1,
                                                              GGS_string & outOperand2,
                                                              GGS_semanticInstructionListForGeneration & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mTypeComparisonKind ;
    outOperand1 = p->mObject.mProperty_mType ;
    outOperand2 = p->mObject.mProperty_mCastedVarCppName ;
    outOperand3 = p->mObject.mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::add_operation (const GGS_castInstructionBranchListForGeneration & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_castInstructionBranchListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListForGeneration result = GGS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListForGeneration result = GGS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_castInstructionBranchListForGeneration result = GGS_castInstructionBranchListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::plusAssignOperation (const GGS_castInstructionBranchListForGeneration inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_setMTypeComparisonKindAtIndex (GGS_dynamicTypeComparisonKind inOperand,
                                                                                       GGS_uint inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeComparisonKind = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_castInstructionBranchListForGeneration::getter_mTypeComparisonKindAtIndex (const GGS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GGS_dynamicTypeComparisonKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mTypeComparisonKind ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_setMTypeAtIndex (GGS_unifiedTypeMapEntry inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mType = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_castInstructionBranchListForGeneration::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GGS_unifiedTypeMapEntry result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mType ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_setMCastedVarCppNameAtIndex (GGS_string inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mCastedVarCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_castInstructionBranchListForGeneration::getter_mCastedVarCppNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mCastedVarCppName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_castInstructionBranchListForGeneration::setter_setMInstructionListAtIndex (GGS_semanticInstructionListForGeneration inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_castInstructionBranchListForGeneration::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_castInstructionBranchListForGeneration * p = (cCollectionElement_castInstructionBranchListForGeneration *) attributes.ptr () ;
  GGS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @castInstructionBranchListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_castInstructionBranchListForGeneration::DownEnumerator_castInstructionBranchListForGeneration (const GGS_castInstructionBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element DownEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind DownEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry DownEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @castInstructionBranchListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_castInstructionBranchListForGeneration::UpEnumerator_castInstructionBranchListForGeneration (const GGS_castInstructionBranchListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration_2E_element UpEnumerator_castInstructionBranchListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind UpEnumerator_castInstructionBranchListForGeneration::current_mTypeComparisonKind (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mTypeComparisonKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry UpEnumerator_castInstructionBranchListForGeneration::current_mType (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mType ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_castInstructionBranchListForGeneration::current_mCastedVarCppName (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mCastedVarCppName ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator_castInstructionBranchListForGeneration::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_castInstructionBranchListForGeneration * p = (const cCollectionElement_castInstructionBranchListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_castInstructionBranchListForGeneration) ;
  return p->mObject.mProperty_mInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @castInstructionBranchListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ("castInstructionBranchListForGeneration",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_castInstructionBranchListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_castInstructionBranchListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_castInstructionBranchListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_castInstructionBranchListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_castInstructionBranchListForGeneration GGS_castInstructionBranchListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_castInstructionBranchListForGeneration result ;
  const GGS_castInstructionBranchListForGeneration * p = (const GGS_castInstructionBranchListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_castInstructionBranchListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("castInstructionBranchListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structuredCastInstructionForGeneration_2E_weak::objectCompare (const GGS_structuredCastInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_structuredCastInstructionForGeneration_2E_weak::GGS_structuredCastInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration_2E_weak & GGS_structuredCastInstructionForGeneration_2E_weak::operator = (const GGS_structuredCastInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration_2E_weak::GGS_structuredCastInstructionForGeneration_2E_weak (const GGS_structuredCastInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration_2E_weak GGS_structuredCastInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_structuredCastInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration GGS_structuredCastInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_structuredCastInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_structuredCastInstructionForGeneration * p = (cPtr_structuredCastInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_structuredCastInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration GGS_structuredCastInstructionForGeneration_2E_weak::bang_structuredCastInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_structuredCastInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_structuredCastInstructionForGeneration) ;
      result = GGS_structuredCastInstructionForGeneration ((cPtr_structuredCastInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @structuredCastInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2E_weak ("structuredCastInstructionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_structuredCastInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structuredCastInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structuredCastInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structuredCastInstructionForGeneration_2E_weak GGS_structuredCastInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_structuredCastInstructionForGeneration_2E_weak result ;
  const GGS_structuredCastInstructionForGeneration_2E_weak * p = (const GGS_structuredCastInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structuredCastInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structuredCastInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum opAssignmentOperator
//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator::GGS_opAssignmentOperator (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_andAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_andAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_orAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_orAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_xorAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_xorAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_plusAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_plusAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_minusAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_minusAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_mulAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_mulAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::class_func_divAssign (UNUSED_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  result.mEnum = Enumeration::enum_divAssign ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_opAssignmentOperator [8] = {
  "(not built)",
  "andAssign",
  "orAssign",
  "xorAssign",
  "plusAssign",
  "minusAssign",
  "mulAssign",
  "divAssign"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isAndAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_andAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isOrAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_orAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isXorAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_xorAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isPlusAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_plusAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isMinusAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_minusAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isMulAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_mulAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignmentOperator::getter_isDivAssign (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_divAssign == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_opAssignmentOperator::description (String & ioString,
                                            const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @opAssignmentOperator: ") ;
  ioString.appendCString (gEnumNameArrayFor_opAssignmentOperator [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @opAssignmentOperator generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignmentOperator ("opAssignmentOperator",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_opAssignmentOperator::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignmentOperator ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_opAssignmentOperator::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_opAssignmentOperator (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignmentOperator::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_opAssignmentOperator result ;
  const GGS_opAssignmentOperator * p = (const GGS_opAssignmentOperator *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_opAssignmentOperator *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opAssignmentOperator", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@opAssignmentOperator string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_opAssignmentOperator & inObject,
                                   Compiler *
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_opAssignmentOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_opAssignmentOperator::Enumeration::invalid:
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_orAssign:
    {
      result_result = GGS_string ("|=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_xorAssign:
    {
      result_result = GGS_string ("^=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_andAssign:
    {
      result_result = GGS_string ("&=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_plusAssign:
    {
      result_result = GGS_string ("+=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_minusAssign:
    {
      result_result = GGS_string ("-=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_mulAssign:
    {
      result_result = GGS_string ("*=") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_divAssign:
    {
      result_result = GGS_string ("/=") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@opAssignmentOperator cppFunctionName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppFunctionName (const GGS_opAssignmentOperator & inObject,
                                            Compiler *
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_opAssignmentOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_opAssignmentOperator::Enumeration::invalid:
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_orAssign:
    {
      result_result = GGS_string ("orAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_xorAssign:
    {
      result_result = GGS_string ("xorAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_andAssign:
    {
      result_result = GGS_string ("andAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_plusAssign:
    {
      result_result = GGS_string ("plusAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_minusAssign:
    {
      result_result = GGS_string ("minusAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_mulAssign:
    {
      result_result = GGS_string ("mulAssignOperation") ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_divAssign:
    {
      result_result = GGS_string ("divAssignOperation") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignExpressionInstructionAST_2E_weak::objectCompare (const GGS_opAssignExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_opAssignExpressionInstructionAST_2E_weak::GGS_opAssignExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST_2E_weak & GGS_opAssignExpressionInstructionAST_2E_weak::operator = (const GGS_opAssignExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST_2E_weak::GGS_opAssignExpressionInstructionAST_2E_weak (const GGS_opAssignExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST_2E_weak GGS_opAssignExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_opAssignExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST GGS_opAssignExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_opAssignExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_opAssignExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST GGS_opAssignExpressionInstructionAST_2E_weak::bang_opAssignExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_opAssignExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_opAssignExpressionInstructionAST) ;
      result = GGS_opAssignExpressionInstructionAST ((cPtr_opAssignExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @opAssignExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ("opAssignExpressionInstructionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_opAssignExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_opAssignExpressionInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_opAssignExpressionInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST_2E_weak GGS_opAssignExpressionInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_opAssignExpressionInstructionAST_2E_weak result ;
  const GGS_opAssignExpressionInstructionAST_2E_weak * p = (const GGS_opAssignExpressionInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_opAssignExpressionInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opAssignExpressionInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusEqualElementsInstructionAST_2E_weak::objectCompare (const GGS_plusEqualElementsInstructionAST_2E_weak & inOperand) const {
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

GGS_plusEqualElementsInstructionAST_2E_weak::GGS_plusEqualElementsInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST_2E_weak & GGS_plusEqualElementsInstructionAST_2E_weak::operator = (const GGS_plusEqualElementsInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST_2E_weak::GGS_plusEqualElementsInstructionAST_2E_weak (const GGS_plusEqualElementsInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST_2E_weak GGS_plusEqualElementsInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_plusEqualElementsInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST GGS_plusEqualElementsInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_plusEqualElementsInstructionAST result ;
  if (isValid ()) {
    const cPtr_plusEqualElementsInstructionAST * p = (cPtr_plusEqualElementsInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_plusEqualElementsInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST GGS_plusEqualElementsInstructionAST_2E_weak::bang_plusEqualElementsInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_plusEqualElementsInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualElementsInstructionAST) ;
      result = GGS_plusEqualElementsInstructionAST ((cPtr_plusEqualElementsInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @plusEqualElementsInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2E_weak ("plusEqualElementsInstructionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_plusEqualElementsInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualElementsInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusEqualElementsInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusEqualElementsInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualElementsInstructionAST_2E_weak GGS_plusEqualElementsInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_plusEqualElementsInstructionAST_2E_weak result ;
  const GGS_plusEqualElementsInstructionAST_2E_weak * p = (const GGS_plusEqualElementsInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusEqualElementsInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualElementsInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusEqualElementInstructionAST_2E_weak::objectCompare (const GGS_plusPlusEqualElementInstructionAST_2E_weak & inOperand) const {
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

GGS_plusPlusEqualElementInstructionAST_2E_weak::GGS_plusPlusEqualElementInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST_2E_weak & GGS_plusPlusEqualElementInstructionAST_2E_weak::operator = (const GGS_plusPlusEqualElementInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST_2E_weak::GGS_plusPlusEqualElementInstructionAST_2E_weak (const GGS_plusPlusEqualElementInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST_2E_weak GGS_plusPlusEqualElementInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_plusPlusEqualElementInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST GGS_plusPlusEqualElementInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_plusPlusEqualElementInstructionAST result ;
  if (isValid ()) {
    const cPtr_plusPlusEqualElementInstructionAST * p = (cPtr_plusPlusEqualElementInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_plusPlusEqualElementInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST GGS_plusPlusEqualElementInstructionAST_2E_weak::bang_plusPlusEqualElementInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_plusPlusEqualElementInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusPlusEqualElementInstructionAST) ;
      result = GGS_plusPlusEqualElementInstructionAST ((cPtr_plusPlusEqualElementInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @plusPlusEqualElementInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST_2E_weak ("plusPlusEqualElementInstructionAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_plusPlusEqualElementInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusPlusEqualElementInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusPlusEqualElementInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST_2E_weak GGS_plusPlusEqualElementInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_plusPlusEqualElementInstructionAST_2E_weak result ;
  const GGS_plusPlusEqualElementInstructionAST_2E_weak * p = (const GGS_plusPlusEqualElementInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusPlusEqualElementInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusPlusEqualElementInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @plusEqualnstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusEqualnstructionForGeneration::objectCompare (const GGS_plusEqualnstructionForGeneration & inOperand) const {
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

GGS_plusEqualnstructionForGeneration::GGS_plusEqualnstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration GGS_plusEqualnstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_string & in_mReceiverCppName,
                              const GGS_unifiedTypeMapEntry & in_mTargetType,
                              const GGS_string & in_mNameForCheckingFormalParameterUsing,
                              const GGS_location & in_mInstructionLocation,
                              const GGS_lstringlist & in_mStructAttributeList,
                              const GGS_semanticExpressionListForGeneration & in_mExpressionList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_plusEqualnstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_plusEqualnstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->plusEqualnstructionForGeneration_init_21__21__21__21__21__21_ (in_mReceiverCppName, in_mTargetType, in_mNameForCheckingFormalParameterUsing, in_mInstructionLocation, in_mStructAttributeList, in_mExpressionList, inCompiler) ;
  const GGS_plusEqualnstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_plusEqualnstructionForGeneration::
plusEqualnstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_string & in_mReceiverCppName,
                                                               const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                               const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                               const GGS_location & in_mInstructionLocation,
                                                               const GGS_lstringlist & in_mStructAttributeList,
                                                               const GGS_semanticExpressionListForGeneration & in_mExpressionList,
                                                               Compiler * /* inCompiler */) {
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration::GGS_plusEqualnstructionForGeneration (const cPtr_plusEqualnstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusEqualnstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration GGS_plusEqualnstructionForGeneration::class_func_new (const GGS_string & in_mReceiverCppName,
                                                                                           const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                           const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                           const GGS_location & in_mInstructionLocation,
                                                                                           const GGS_lstringlist & in_mStructAttributeList,
                                                                                           const GGS_semanticExpressionListForGeneration & in_mExpressionList,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  GGS_plusEqualnstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_plusEqualnstructionForGeneration (in_mReceiverCppName, in_mTargetType, in_mNameForCheckingFormalParameterUsing, in_mInstructionLocation, in_mStructAttributeList, in_mExpressionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_plusEqualnstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_plusEqualnstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_plusEqualnstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_plusEqualnstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_plusEqualnstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_plusEqualnstructionForGeneration::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusEqualnstructionForGeneration) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusEqualnstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverCppName (),
mProperty_mTargetType (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mInstructionLocation (),
mProperty_mStructAttributeList (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_plusEqualnstructionForGeneration::cPtr_plusEqualnstructionForGeneration (const GGS_string & in_mReceiverCppName,
                                                                              const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                              const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GGS_location & in_mInstructionLocation,
                                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                                              const GGS_semanticExpressionListForGeneration & in_mExpressionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverCppName (),
mProperty_mTargetType (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mInstructionLocation (),
mProperty_mStructAttributeList (),
mProperty_mExpressionList () {
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_plusEqualnstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

void cPtr_plusEqualnstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@plusEqualnstructionForGeneration:") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_plusEqualnstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusEqualnstructionForGeneration (mProperty_mReceiverCppName, mProperty_mTargetType, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mInstructionLocation, mProperty_mStructAttributeList, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusEqualnstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @plusEqualnstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ("plusEqualnstructionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_plusEqualnstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusEqualnstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusEqualnstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration GGS_plusEqualnstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_plusEqualnstructionForGeneration result ;
  const GGS_plusEqualnstructionForGeneration * p = (const GGS_plusEqualnstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusEqualnstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusEqualnstructionForGeneration_2E_weak::objectCompare (const GGS_plusEqualnstructionForGeneration_2E_weak & inOperand) const {
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

GGS_plusEqualnstructionForGeneration_2E_weak::GGS_plusEqualnstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration_2E_weak & GGS_plusEqualnstructionForGeneration_2E_weak::operator = (const GGS_plusEqualnstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration_2E_weak::GGS_plusEqualnstructionForGeneration_2E_weak (const GGS_plusEqualnstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration_2E_weak GGS_plusEqualnstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_plusEqualnstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration GGS_plusEqualnstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_plusEqualnstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_plusEqualnstructionForGeneration * p = (cPtr_plusEqualnstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_plusEqualnstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration GGS_plusEqualnstructionForGeneration_2E_weak::bang_plusEqualnstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_plusEqualnstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusEqualnstructionForGeneration) ;
      result = GGS_plusEqualnstructionForGeneration ((cPtr_plusEqualnstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @plusEqualnstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2E_weak ("plusEqualnstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_plusEqualnstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusEqualnstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusEqualnstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusEqualnstructionForGeneration_2E_weak GGS_plusEqualnstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_plusEqualnstructionForGeneration_2E_weak result ;
  const GGS_plusEqualnstructionForGeneration_2E_weak * p = (const GGS_plusEqualnstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusEqualnstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusEqualnstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignInstructionForGeneration_2E_weak::objectCompare (const GGS_opAssignInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_opAssignInstructionForGeneration_2E_weak::GGS_opAssignInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak & GGS_opAssignInstructionForGeneration_2E_weak::operator = (const GGS_opAssignInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak::GGS_opAssignInstructionForGeneration_2E_weak (const GGS_opAssignInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak GGS_opAssignInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_opAssignInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration GGS_opAssignInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_opAssignInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_opAssignInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration GGS_opAssignInstructionForGeneration_2E_weak::bang_opAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_opAssignInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_opAssignInstructionForGeneration) ;
      result = GGS_opAssignInstructionForGeneration ((cPtr_opAssignInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @opAssignInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ("opAssignInstructionForGeneration.weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_opAssignInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_opAssignInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_opAssignInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration_2E_weak GGS_opAssignInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_opAssignInstructionForGeneration_2E_weak result ;
  const GGS_opAssignInstructionForGeneration_2E_weak * p = (const GGS_opAssignInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_opAssignInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("opAssignInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusAssignInstructionForGeneration_2E_weak::objectCompare (const GGS_plusPlusAssignInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_plusPlusAssignInstructionForGeneration_2E_weak::GGS_plusPlusAssignInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak & GGS_plusPlusAssignInstructionForGeneration_2E_weak::operator = (const GGS_plusPlusAssignInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak::GGS_plusPlusAssignInstructionForGeneration_2E_weak (const GGS_plusPlusAssignInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak GGS_plusPlusAssignInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_plusPlusAssignInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration GGS_plusPlusAssignInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_plusPlusAssignInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_plusPlusAssignInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration GGS_plusPlusAssignInstructionForGeneration_2E_weak::bang_plusPlusAssignInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_plusPlusAssignInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_plusPlusAssignInstructionForGeneration) ;
      result = GGS_plusPlusAssignInstructionForGeneration ((cPtr_plusPlusAssignInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @plusPlusAssignInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration_2E_weak ("plusPlusAssignInstructionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_plusPlusAssignInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_plusPlusAssignInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_plusPlusAssignInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration_2E_weak GGS_plusPlusAssignInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_plusPlusAssignInstructionForGeneration_2E_weak result ;
  const GGS_plusPlusAssignInstructionForGeneration_2E_weak * p = (const GGS_plusPlusAssignInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_plusPlusAssignInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("plusPlusAssignInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @dropInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dropInstructionAST::objectCompare (const GGS_dropInstructionAST & inOperand) const {
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

GGS_dropInstructionAST::GGS_dropInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_lstringlist & in_mDropList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_dropInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_dropInstructionAST (inCompiler COMMA_THERE)) ;
  object->dropInstructionAST_init_21__21_ (in_mInstructionLocation, in_mDropList, inCompiler) ;
  const GGS_dropInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dropInstructionAST::
dropInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                 const GGS_lstringlist & in_mDropList,
                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDropList = in_mDropList ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST::GGS_dropInstructionAST (const cPtr_dropInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dropInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                               const GGS_lstringlist & in_mDropList,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_dropInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_dropInstructionAST (in_mInstructionLocation, in_mDropList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_dropInstructionAST::readProperty_mDropList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_dropInstructionAST) ;
    return p->mProperty_mDropList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @dropInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mDropList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_dropInstructionAST::cPtr_dropInstructionAST (const GGS_location & in_mInstructionLocation,
                                                  const GGS_lstringlist & in_mDropList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mDropList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDropList = in_mDropList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

void cPtr_dropInstructionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@dropInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDropList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_dropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dropInstructionAST (mProperty_mInstructionLocation, mProperty_mDropList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dropInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDropList.printNonNullClassInstanceProperties ("mDropList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dropInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dropInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dropInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_dropInstructionAST result ;
  const GGS_dropInstructionAST * p = (const GGS_dropInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dropInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dropInstructionAST_2E_weak::objectCompare (const GGS_dropInstructionAST_2E_weak & inOperand) const {
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

GGS_dropInstructionAST_2E_weak::GGS_dropInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST_2E_weak & GGS_dropInstructionAST_2E_weak::operator = (const GGS_dropInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST_2E_weak::GGS_dropInstructionAST_2E_weak (const GGS_dropInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST_2E_weak GGS_dropInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dropInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_dropInstructionAST result ;
  if (isValid ()) {
    const cPtr_dropInstructionAST * p = (cPtr_dropInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_dropInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST GGS_dropInstructionAST_2E_weak::bang_dropInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dropInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dropInstructionAST) ;
      result = GGS_dropInstructionAST ((cPtr_dropInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dropInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ("dropInstructionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_dropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_dropInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_dropInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST_2E_weak GGS_dropInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_dropInstructionAST_2E_weak result ;
  const GGS_dropInstructionAST_2E_weak * p = (const GGS_dropInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_dropInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("dropInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum fixitElementAST
//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST::GGS_fixitElementAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItReplace (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItReplace (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertAfter (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                      const GGS_location & inAssociatedValue1
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertAfter (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::class_func_fixItInsertBefore (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                       const GGS_location & inAssociatedValue1
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementAST_2E_fixItInsertBefore (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItReplace (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                      GGS_location & outAssociatedValue_errorLocation,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertAfter (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                          GGS_location & outAssociatedValue_errorLocation,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::method_extractFixItInsertBefore (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                           GGS_location & outAssociatedValue_errorLocation,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_errorLocation.drop () ;
    String s ;
    s.appendCString ("method @fixitElementAST.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_errorLocation = ptr->mProperty_errorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItReplace_3F_ GGS_fixitElementAST::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionAST & out_exp,
                                                               GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertAfter_3F_ GGS_fixitElementAST::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionAST & out_exp,
                                                                   GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST_2E_fixItInsertBefore_3F_ GGS_fixitElementAST::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementAST_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementAST_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionAST & out_exp,
                                                                    GGS_location & out_errorLocation) const {
  const auto ptr = (const GGS_fixitElementAST_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_errorLocation = ptr->mProperty_errorLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementAST [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertAfter",
  "fixItInsertBefore"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementAST::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementAST ("fixitElementAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitElementAST::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_fixitElementAST result ;
  const GGS_fixitElementAST * p = (const GGS_fixitElementAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@fixitListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListAST : public cCollectionElement {
  public: GGS_fixitListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_fixitListAST (const GGS_fixitElementAST & in_mElement
                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListAST (const GGS_fixitListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GGS_fixitElementAST & in_mElement
                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListAST::cCollectionElement_fixitListAST (const GGS_fixitListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fixitListAST (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST::GGS_fixitListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST::GGS_fixitListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_fixitListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_fixitListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::plusPlusAssignOperation (const GGS_fixitListAST_2E_element & inValue
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::class_func_listWithValue (const GGS_fixitElementAST & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  GGS_fixitListAST result ;
  if (inOperand0.isValid ()) {
    result = GGS_fixitListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_fixitListAST::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                  const GGS_fixitElementAST & in_mElement
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListAST (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::addAssignOperation (const GGS_fixitElementAST & inOperand0
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_append (const GGS_fixitElementAST inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_insertAtIndex (const GGS_fixitElementAST inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListAST (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_removeAtIndex (GGS_fixitElementAST & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_popFirst (GGS_fixitElementAST & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_popLast (GGS_fixitElementAST & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::method_first (GGS_fixitElementAST & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::method_last (GGS_fixitElementAST & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::add_operation (const GGS_fixitListAST & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fixitListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_fixitListAST result = GGS_fixitListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_fixitListAST result = GGS_fixitListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_fixitListAST result = GGS_fixitListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::plusAssignOperation (const GGS_fixitListAST inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListAST::setter_setMElementAtIndex (GGS_fixitElementAST inOperand,
                                                  GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST GGS_fixitListAST::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListAST * p = (cCollectionElement_fixitListAST *) attributes.ptr () ;
  GGS_fixitElementAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @fixitListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_fixitListAST::DownEnumerator_fixitListAST (const GGS_fixitListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element DownEnumerator_fixitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST DownEnumerator_fixitListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject.mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @fixitListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_fixitListAST::UpEnumerator_fixitListAST (const GGS_fixitListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST_2E_element UpEnumerator_fixitListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementAST UpEnumerator_fixitListAST::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListAST * p = (const cCollectionElement_fixitListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListAST) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @fixitListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListAST ("fixitListAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_fixitListAST::extractObject (const GGS_object & inObject,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_fixitListAST result ;
  const GGS_fixitListAST * p = (const GGS_fixitListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @errorInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionAST::objectCompare (const GGS_errorInstructionAST & inOperand) const {
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

GGS_errorInstructionAST::GGS_errorInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mLocationExpression,
                          const GGS_semanticExpressionAST & in_mMessageExpression,
                          const GGS_lstringlist & in_mBuiltVariableList,
                          const GGS_fixitListAST & in_mFixitListAST,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_errorInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_errorInstructionAST (inCompiler COMMA_THERE)) ;
  object->errorInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mBuiltVariableList, in_mFixitListAST, inCompiler) ;
  const GGS_errorInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionAST::
errorInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mLocationExpression,
                                              const GGS_semanticExpressionAST & in_mMessageExpression,
                                              const GGS_lstringlist & in_mBuiltVariableList,
                                              const GGS_fixitListAST & in_mFixitListAST,
                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mBuiltVariableList = in_mBuiltVariableList ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST::GGS_errorInstructionAST (const cPtr_errorInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                 const GGS_semanticExpressionAST & in_mLocationExpression,
                                                                 const GGS_semanticExpressionAST & in_mMessageExpression,
                                                                 const GGS_lstringlist & in_mBuiltVariableList,
                                                                 const GGS_fixitListAST & in_mFixitListAST,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_errorInstructionAST (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mBuiltVariableList, in_mFixitListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_errorInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_errorInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_errorInstructionAST::readProperty_mBuiltVariableList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mBuiltVariableList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_errorInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListAST () ;
  }else{
    cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mBuiltVariableList (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionAST::cPtr_errorInstructionAST (const GGS_location & in_mInstructionLocation,
                                                    const GGS_semanticExpressionAST & in_mLocationExpression,
                                                    const GGS_semanticExpressionAST & in_mMessageExpression,
                                                    const GGS_lstringlist & in_mBuiltVariableList,
                                                    const GGS_fixitListAST & in_mFixitListAST,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mBuiltVariableList (),
mProperty_mFixitListAST () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mBuiltVariableList = in_mBuiltVariableList ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

void cPtr_errorInstructionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@errorInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBuiltVariableList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_errorInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mBuiltVariableList, mProperty_mFixitListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mBuiltVariableList.printNonNullClassInstanceProperties ("mBuiltVariableList") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @errorInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST result ;
  const GGS_errorInstructionAST * p = (const GGS_errorInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionAST_2E_weak::objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const {
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

GGS_errorInstructionAST_2E_weak::GGS_errorInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak & GGS_errorInstructionAST_2E_weak::operator = (const GGS_errorInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak::GGS_errorInstructionAST_2E_weak (const GGS_errorInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak GGS_errorInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionAST result ;
  if (isValid ()) {
    const cPtr_errorInstructionAST * p = (cPtr_errorInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST GGS_errorInstructionAST_2E_weak::bang_errorInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionAST) ;
      result = GGS_errorInstructionAST ((cPtr_errorInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ("errorInstructionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_errorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak GGS_errorInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_errorInstructionAST_2E_weak result ;
  const GGS_errorInstructionAST_2E_weak * p = (const GGS_errorInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListAST enterFixItListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterFixItListInSemanticContext (const GGS_fixitListAST inObject,
                                                      GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_fixitListAST temp_0 = inObject ;
  UpEnumerator_fixitListAST enumerator_8090 (temp_0) ;
  while (enumerator_8090.hasCurrentObject ()) {
    switch (enumerator_8090.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementAST::Enumeration::invalid:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItRemove:
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionAST extractedValue_8198_exp_0 ;
        GGS_location extractedValue_8202__1 ;
        enumerator_8090.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_8198_exp_0, extractedValue_8202__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8198_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 222)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionAST extractedValue_8315_exp_0 ;
        GGS_location extractedValue_8319__1 ;
        enumerator_8090.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_8315_exp_0, extractedValue_8319__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8315_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 224)) ;
      }
      break ;
    case GGS_fixitElementAST::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionAST extractedValue_8431_exp_0 ;
        GGS_location extractedValue_8435__1 ;
        enumerator_8090.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_8431_exp_0, extractedValue_8435__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_8431_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 226)) ;
      }
      break ;
    }
    enumerator_8090.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Enum fixitElementForGeneration
//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration::GGS_fixitElementForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItRemove (UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItRemove ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItReplace (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItReplace ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItReplace (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertBefore (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertBefore ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertBefore (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::class_func_fixItInsertAfter (const GGS_semanticExpressionForGeneration & inAssociatedValue0
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  result.mEnum = Enumeration::enum_fixItInsertAfter ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_fixitElementForGeneration_2E_fixItInsertAfter (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItReplace (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItReplace) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItReplace invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertBefore (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertBefore) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItInsertBefore invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::method_extractFixItInsertAfter (GGS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fixItInsertAfter) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @fixitElementForGeneration.fixItInsertAfter invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItReplace_3F_ GGS_fixitElementForGeneration::getter_getFixItReplace (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItReplace_3F_ result ;
  if (mEnum == Enumeration::enum_fixItReplace) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItReplace (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItReplace (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItReplace *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertBefore_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertBefore) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertBefore (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertBefore (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertBefore *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ GGS_fixitElementForGeneration::getter_getFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  GGS_fixitElementForGeneration_2E_fixItInsertAfter_3F_ result ;
  if (mEnum == Enumeration::enum_fixItInsertAfter) {
    const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_fixitElementForGeneration_2E_fixItInsertAfter (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::getAssociatedValuesFor_fixItInsertAfter (GGS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GGS_fixitElementForGeneration_2E_fixItInsertAfter *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_fixitElementForGeneration [5] = {
  "(not built)",
  "fixItRemove",
  "fixItReplace",
  "fixItInsertBefore",
  "fixItInsertAfter"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItRemove (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItRemove == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItReplace (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItReplace == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertBefore (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertBefore == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_fixitElementForGeneration::getter_isFixItInsertAfter (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fixItInsertAfter == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitElementForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @fixitElementForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_fixitElementForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @fixitElementForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitElementForGeneration ("fixitElementForGeneration",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitElementForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitElementForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitElementForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitElementForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitElementForGeneration::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_fixitElementForGeneration result ;
  const GGS_fixitElementForGeneration * p = (const GGS_fixitElementForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitElementForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitElementForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@fixitListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fixitListForGeneration : public cCollectionElement {
  public: GGS_fixitListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_fixitListForGeneration (const GGS_fixitElementForGeneration & in_mElement
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fixitListForGeneration (const GGS_fixitListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GGS_fixitElementForGeneration & in_mElement
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fixitListForGeneration::cCollectionElement_fixitListForGeneration (const GGS_fixitListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fixitListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fixitListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fixitListForGeneration (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fixitListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration::GGS_fixitListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration::GGS_fixitListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_fixitListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_fixitListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::plusPlusAssignOperation (const GGS_fixitListForGeneration_2E_element & inValue
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::class_func_listWithValue (const GGS_fixitElementForGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  GGS_fixitListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_fixitListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_fixitListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_fixitElementForGeneration & in_mElement
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_fixitListForGeneration (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::addAssignOperation (const GGS_fixitElementForGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_append (const GGS_fixitElementForGeneration inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_insertAtIndex (const GGS_fixitElementForGeneration inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fixitListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_removeAtIndex (GGS_fixitElementForGeneration & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_popFirst (GGS_fixitElementForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_popLast (GGS_fixitElementForGeneration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::method_first (GGS_fixitElementForGeneration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::method_last (GGS_fixitElementForGeneration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::add_operation (const GGS_fixitListForGeneration & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fixitListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_fixitListForGeneration result = GGS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_fixitListForGeneration result = GGS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_fixitListForGeneration result = GGS_fixitListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::plusAssignOperation (const GGS_fixitListForGeneration inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fixitListForGeneration::setter_setMElementAtIndex (GGS_fixitElementForGeneration inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration GGS_fixitListForGeneration::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fixitListForGeneration * p = (cCollectionElement_fixitListForGeneration *) attributes.ptr () ;
  GGS_fixitElementForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @fixitListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_fixitListForGeneration::DownEnumerator_fixitListForGeneration (const GGS_fixitListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element DownEnumerator_fixitListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration DownEnumerator_fixitListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @fixitListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_fixitListForGeneration::UpEnumerator_fixitListForGeneration (const GGS_fixitListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration_2E_element UpEnumerator_fixitListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_fixitElementForGeneration UpEnumerator_fixitListForGeneration::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_fixitListForGeneration * p = (const cCollectionElement_fixitListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fixitListForGeneration) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @fixitListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fixitListForGeneration ("fixitListForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fixitListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fixitListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fixitListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListForGeneration GGS_fixitListForGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_fixitListForGeneration result ;
  const GGS_fixitListForGeneration * p = (const GGS_fixitListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fixitListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fixitListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@fixitListForGeneration generateFixIt'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateFixIt (const GGS_fixitListForGeneration inObject,
                                    GGS_stringset & ioArgument_ioInclusionSet,
                                    GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                    GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                    const GGS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                    GGS_string & ioArgument_ioGeneratedCode,
                                    GGS_string & outArgument_outFixItArrayCppName,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFixItArrayCppName.drop () ; // Release 'out' argument
  outArgument_outFixItArrayCppName = GGS_string ("fixItArray").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-error.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 416)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 417)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("TC_Array <FixItDescription> ").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 418)) ;
  const GGS_fixitListForGeneration temp_0 = inObject ;
  UpEnumerator_fixitListForGeneration enumerator_16225 (temp_0) ;
  while (enumerator_16225.hasCurrentObject ()) {
    switch (enumerator_16225.current_mElement (HERE).enumValue ()) {
    case GGS_fixitElementForGeneration::Enumeration::invalid:
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItRemove:
      {
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outFixItArrayCppName.add_operation (GGS_string (".appendObject (FixItDescription (EnumFixItKind::fixItRemove, \"\")) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 422)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItReplace:
      {
        GGS_semanticExpressionForGeneration extractedValue_16467_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItReplace (extractedValue_16467_exp_0) ;
        GGS_string var_receiverCppVarName_16640 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16467_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_16640, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 424)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (", EnumFixItKind::fixItReplace, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (var_receiverCppVarName_16640, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 431)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertBefore:
      {
        GGS_semanticExpressionForGeneration extractedValue_16866_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItInsertBefore (extractedValue_16866_exp_0) ;
        GGS_string var_receiverCppVarName_17039 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16866_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17039, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 433)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (", EnumFixItKind::fixItInsertBefore, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (var_receiverCppVarName_17039, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 440)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 440)) ;
      }
      break ;
    case GGS_fixitElementForGeneration::Enumeration::enum_fixItInsertAfter:
      {
        GGS_semanticExpressionForGeneration extractedValue_17269_exp_0 ;
        enumerator_16225.current_mElement (HERE).getAssociatedValuesFor_fixItInsertAfter (extractedValue_17269_exp_0) ;
        GGS_string var_receiverCppVarName_17442 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_17269_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName_17442, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 442)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("appendFixItActions (").add_operation (outArgument_outFixItArrayCppName, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (", EnumFixItKind::fixItInsertAfter, "), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (var_receiverCppVarName_17442, inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-error.galgas", 449)), inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas", 449)) ;
      }
      break ;
    }
    enumerator_16225.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration_2E_weak::objectCompare (const GGS_errorInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak & GGS_errorInstructionForGeneration_2E_weak::operator = (const GGS_errorInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak::GGS_errorInstructionForGeneration_2E_weak (const GGS_errorInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_errorInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_errorInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration_2E_weak::bang_errorInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_errorInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_errorInstructionForGeneration) ;
      result = GGS_errorInstructionForGeneration ((cPtr_errorInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ("errorInstructionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_errorInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_errorInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_errorInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration_2E_weak GGS_errorInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_errorInstructionForGeneration_2E_weak result ;
  const GGS_errorInstructionForGeneration_2E_weak * p = (const GGS_errorInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_errorInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("errorInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectElementListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectElementListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectElementListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                           const GGS_bool & in_mDeclaredAsUnused,
                                                                           const GGS_lstring & in_mOptionalConstantName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_lstring & in_mOptionalTypeName,
                                                                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionalTypeName, in_mDeclaredAsUnused, in_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectElementListAST::cCollectionElement_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionalTypeName, inElement.mProperty_mDeclaredAsUnused, inElement.mProperty_mOptionalConstantName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectElementListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectElementListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectElementListAST (mObject.mProperty_mOptionalTypeName, mObject.mProperty_mDeclaredAsUnused, mObject.mProperty_mOptionalConstantName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectElementListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalTypeName" ":") ;
  mObject.mProperty_mOptionalTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaredAsUnused" ":") ;
  mObject.mProperty_mDeclaredAsUnused.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mOptionalConstantName" ":") ;
  mObject.mProperty_mOptionalConstantName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST::GGS_forInstructionEnumeratedObjectElementListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST_2E_element & inValue
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_bool & inOperand1,
                                                                                                                             const GGS_lstring & inOperand2
                                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectElementListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mOptionalTypeName,
                                                                                  const GGS_bool & in_mDeclaredAsUnused,
                                                                                  const GGS_lstring & in_mOptionalConstantName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (in_mOptionalTypeName,
                                                                                  in_mDeclaredAsUnused,
                                                                                  in_mOptionalConstantName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                           const GGS_bool & inOperand1,
                                                                           const GGS_lstring & inOperand2
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_bool inOperand1,
                                                                      const GGS_lstring inOperand2,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_bool inOperand1,
                                                                             const GGS_lstring inOperand2,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_bool & outOperand1,
                                                                             GGS_lstring & outOperand2,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
      outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
      outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
      outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_bool & outOperand1,
                                                                        GGS_lstring & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_bool & outOperand1,
                                                                       GGS_lstring & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_bool & outOperand1,
                                                                     GGS_lstring & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_bool & outOperand1,
                                                                    GGS_lstring & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    outOperand0 = p->mObject.mProperty_mOptionalTypeName ;
    outOperand1 = p->mObject.mProperty_mDeclaredAsUnused ;
    outOperand2 = p->mObject.mProperty_mOptionalConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::add_operation (const GGS_forInstructionEnumeratedObjectElementListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectElementListAST result = GGS_forInstructionEnumeratedObjectElementListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectElementListAST inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalTypeNameAtIndex (GGS_lstring inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMDeclaredAsUnusedAtIndex (GGS_bool inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaredAsUnused = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forInstructionEnumeratedObjectElementListAST::getter_mDeclaredAsUnusedAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mDeclaredAsUnused ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectElementListAST::setter_setMOptionalConstantNameAtIndex (GGS_lstring inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionalConstantName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionEnumeratedObjectElementListAST::getter_mOptionalConstantNameAtIndex (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (cCollectionElement_forInstructionEnumeratedObjectElementListAST *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
    result = p->mObject.mProperty_mOptionalConstantName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectElementListAST::DownEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectElementListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectElementListAST::UpEnumerator_forInstructionEnumeratedObjectElementListAST (const GGS_forInstructionEnumeratedObjectElementListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectElementListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalTypeName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mDeclaredAsUnused (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mDeclaredAsUnused ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_forInstructionEnumeratedObjectElementListAST::current_mOptionalConstantName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectElementListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectElementListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectElementListAST) ;
  return p->mObject.mProperty_mOptionalConstantName ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectElementListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ("forInstructionEnumeratedObjectElementListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectElementListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectElementListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectElementListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectElementListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_forInstructionEnumeratedObjectElementListAST::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectElementListAST result ;
  const GGS_forInstructionEnumeratedObjectElementListAST * p = (const GGS_forInstructionEnumeratedObjectElementListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectElementListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectElementListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractEnumeratedCollectionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST::objectCompare (const GGS_abstractEnumeratedCollectionAST & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractEnumeratedCollectionAST::
abstractEnumeratedCollectionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST::GGS_abstractEnumeratedCollectionAST (const cPtr_abstractEnumeratedCollectionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractEnumeratedCollectionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractEnumeratedCollectionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractEnumeratedCollectionAST::cPtr_abstractEnumeratedCollectionAST (Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ("abstractEnumeratedCollectionAST",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractEnumeratedCollectionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST result ;
  const GGS_abstractEnumeratedCollectionAST * p = (const GGS_abstractEnumeratedCollectionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractEnumeratedCollectionAST_2E_weak::objectCompare (const GGS_abstractEnumeratedCollectionAST_2E_weak & inOperand) const {
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

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak & GGS_abstractEnumeratedCollectionAST_2E_weak::operator = (const GGS_abstractEnumeratedCollectionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak::GGS_abstractEnumeratedCollectionAST_2E_weak (const GGS_abstractEnumeratedCollectionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (isValid ()) {
    const cPtr_abstractEnumeratedCollectionAST * p = (cPtr_abstractEnumeratedCollectionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractEnumeratedCollectionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_abstractEnumeratedCollectionAST_2E_weak::bang_abstractEnumeratedCollectionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractEnumeratedCollectionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractEnumeratedCollectionAST) ;
      result = GGS_abstractEnumeratedCollectionAST ((cPtr_abstractEnumeratedCollectionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractEnumeratedCollectionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ("abstractEnumeratedCollectionAST.weak",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractEnumeratedCollectionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractEnumeratedCollectionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractEnumeratedCollectionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST_2E_weak GGS_abstractEnumeratedCollectionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_abstractEnumeratedCollectionAST_2E_weak result ;
  const GGS_abstractEnumeratedCollectionAST_2E_weak * p = (const GGS_abstractEnumeratedCollectionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractEnumeratedCollectionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractEnumeratedCollectionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak & GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (const GGS_enumeratedCollectionImplicitVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionImplicitVarInExpAST * p = (cPtr_enumeratedCollectionImplicitVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionImplicitVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::bang_enumeratedCollectionImplicitVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionImplicitVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionImplicitVarInExpAST) ;
      result = GGS_enumeratedCollectionImplicitVarInExpAST ((cPtr_enumeratedCollectionImplicitVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionImplicitVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ("enumeratedCollectionImplicitVarInExpAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionImplicitVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionImplicitVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionImplicitVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionVarInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionVarInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak & GGS_enumeratedCollectionVarInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionVarInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak::GGS_enumeratedCollectionVarInExpAST_2E_weak (const GGS_enumeratedCollectionVarInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionVarInExpAST * p = (cPtr_enumeratedCollectionVarInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionVarInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST GGS_enumeratedCollectionVarInExpAST_2E_weak::bang_enumeratedCollectionVarInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionVarInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionVarInExpAST) ;
      result = GGS_enumeratedCollectionVarInExpAST ((cPtr_enumeratedCollectionVarInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionVarInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ("enumeratedCollectionVarInExpAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionVarInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionVarInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionVarInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionVarInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionVarInExpAST_2E_weak GGS_enumeratedCollectionVarInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionVarInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionVarInExpAST_2E_weak * p = (const GGS_enumeratedCollectionVarInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionVarInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionVarInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumeratedCollectionCstListInExpAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST::objectCompare (const GGS_enumeratedCollectionCstListInExpAST & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (void) :
GGS_abstractEnumeratedCollectionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::
init_21__21_mEndsWithEllipsis_21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                       const GGS_bool & in_mEndsWithEllipsis,
                                       const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                       const GGS_location & in_mEndOfEnumerationExpression,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  cPtr_enumeratedCollectionCstListInExpAST * object = nullptr ;
  macroMyNew (object, cPtr_enumeratedCollectionCstListInExpAST (inCompiler COMMA_THERE)) ;
  object->enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (in_mElementList, in_mEndsWithEllipsis, in_mEnumeratedExpression, in_mEndOfEnumerationExpression, inCompiler) ;
  const GGS_enumeratedCollectionCstListInExpAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumeratedCollectionCstListInExpAST::
enumeratedCollectionCstListInExpAST_init_21__21_mEndsWithEllipsis_21__21_ (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                           const GGS_bool & in_mEndsWithEllipsis,
                                                                           const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                           const GGS_location & in_mEndOfEnumerationExpression,
                                                                           Compiler * /* inCompiler */) {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEndsWithEllipsis = in_mEndsWithEllipsis ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST::GGS_enumeratedCollectionCstListInExpAST (const cPtr_enumeratedCollectionCstListInExpAST * inSourcePtr) :
GGS_abstractEnumeratedCollectionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumeratedCollectionCstListInExpAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::class_func_new (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                                 const GGS_bool & in_mEndsWithEllipsis,
                                                                                                 const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                                 const GGS_location & in_mEndOfEnumerationExpression,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  macroMyNew (result.mObjectPtr, cPtr_enumeratedCollectionCstListInExpAST (in_mElementList, in_mEndsWithEllipsis, in_mEnumeratedExpression, in_mEndOfEnumerationExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectElementListAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mElementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_forInstructionEnumeratedObjectElementListAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mElementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndsWithEllipsis (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndsWithEllipsis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_enumeratedCollectionCstListInExpAST::readProperty_mEnumeratedExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEnumeratedExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumeratedCollectionCstListInExpAST::readProperty_mEndOfEnumerationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumeratedCollectionCstListInExpAST) ;
    return p->mProperty_mEndOfEnumerationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumeratedCollectionCstListInExpAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEndsWithEllipsis (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumeratedCollectionCstListInExpAST::cPtr_enumeratedCollectionCstListInExpAST (const GGS_forInstructionEnumeratedObjectElementListAST & in_mElementList,
                                                                                    const GGS_bool & in_mEndsWithEllipsis,
                                                                                    const GGS_semanticExpressionAST & in_mEnumeratedExpression,
                                                                                    const GGS_location & in_mEndOfEnumerationExpression,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractEnumeratedCollectionAST (inCompiler COMMA_THERE),
mProperty_mElementList (),
mProperty_mEndsWithEllipsis (),
mProperty_mEnumeratedExpression (),
mProperty_mEndOfEnumerationExpression () {
  mProperty_mElementList = in_mElementList ;
  mProperty_mEndsWithEllipsis = in_mEndsWithEllipsis ;
  mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  mProperty_mEndOfEnumerationExpression = in_mEndOfEnumerationExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumeratedCollectionCstListInExpAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

void cPtr_enumeratedCollectionCstListInExpAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@enumeratedCollectionCstListInExpAST:") ;
  mProperty_mElementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndsWithEllipsis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfEnumerationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumeratedCollectionCstListInExpAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumeratedCollectionCstListInExpAST (mProperty_mElementList, mProperty_mEndsWithEllipsis, mProperty_mEnumeratedExpression, mProperty_mEndOfEnumerationExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumeratedCollectionCstListInExpAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractEnumeratedCollectionAST::printNonNullClassInstanceProperties () ;
    mProperty_mElementList.printNonNullClassInstanceProperties ("mElementList") ;
    mProperty_mEndsWithEllipsis.printNonNullClassInstanceProperties ("mEndsWithEllipsis") ;
    mProperty_mEnumeratedExpression.printNonNullClassInstanceProperties ("mEnumeratedExpression") ;
    mProperty_mEndOfEnumerationExpression.printNonNullClassInstanceProperties ("mEndOfEnumerationExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ("enumeratedCollectionCstListInExpAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionCstListInExpAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST result ;
  const GGS_enumeratedCollectionCstListInExpAST * p = (const GGS_enumeratedCollectionCstListInExpAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumeratedCollectionCstListInExpAST_2E_weak::objectCompare (const GGS_enumeratedCollectionCstListInExpAST_2E_weak & inOperand) const {
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

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (void) :
GGS_abstractEnumeratedCollectionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak & GGS_enumeratedCollectionCstListInExpAST_2E_weak::operator = (const GGS_enumeratedCollectionCstListInExpAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak::GGS_enumeratedCollectionCstListInExpAST_2E_weak (const GGS_enumeratedCollectionCstListInExpAST & inSource) :
GGS_abstractEnumeratedCollectionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::unwrappedValue (void) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (isValid ()) {
    const cPtr_enumeratedCollectionCstListInExpAST * p = (cPtr_enumeratedCollectionCstListInExpAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumeratedCollectionCstListInExpAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST GGS_enumeratedCollectionCstListInExpAST_2E_weak::bang_enumeratedCollectionCstListInExpAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumeratedCollectionCstListInExpAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumeratedCollectionCstListInExpAST) ;
      result = GGS_enumeratedCollectionCstListInExpAST ((cPtr_enumeratedCollectionCstListInExpAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumeratedCollectionCstListInExpAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ("enumeratedCollectionCstListInExpAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractEnumeratedCollectionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumeratedCollectionCstListInExpAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumeratedCollectionCstListInExpAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumeratedCollectionCstListInExpAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumeratedCollectionCstListInExpAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumeratedCollectionCstListInExpAST_2E_weak GGS_enumeratedCollectionCstListInExpAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_enumeratedCollectionCstListInExpAST_2E_weak result ;
  const GGS_enumeratedCollectionCstListInExpAST_2E_weak * p = (const GGS_enumeratedCollectionCstListInExpAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumeratedCollectionCstListInExpAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumeratedCollectionCstListInExpAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectListAST' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListAST : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_bool & in_mAscending,
                                                                                                                    const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mAscending, in_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListAST::cCollectionElement_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mAscending, inElement.mProperty_mEnumeratedCollection) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListAST (mObject.mProperty_mAscending, mObject.mProperty_mEnumeratedCollection COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAscending" ":") ;
  mObject.mProperty_mAscending.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedCollection" ":") ;
  mObject.mProperty_mEnumeratedCollection.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST::GGS_forInstructionEnumeratedObjectListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST_2E_element & inValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                               const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_bool & in_mAscending,
                                                                           const GGS_abstractEnumeratedCollectionAST & in_mEnumeratedCollection
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (in_mAscending,
                                                                           in_mEnumeratedCollection COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::addAssignOperation (const GGS_bool & inOperand0,
                                                                    const GGS_abstractEnumeratedCollectionAST & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_append (const GGS_bool inOperand0,
                                                               const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                               Compiler * /* inCompiler */
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_insertAtIndex (const GGS_bool inOperand0,
                                                                      const GGS_abstractEnumeratedCollectionAST inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                      GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
      outOperand0 = p->mObject.mProperty_mAscending ;
      outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                 GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_popLast (GGS_bool & outOperand0,
                                                                GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_first (GGS_bool & outOperand0,
                                                              GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::method_last (GGS_bool & outOperand0,
                                                             GGS_abstractEnumeratedCollectionAST & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    outOperand0 = p->mObject.mProperty_mAscending ;
    outOperand1 = p->mObject.mProperty_mEnumeratedCollection ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::add_operation (const GGS_forInstructionEnumeratedObjectListAST & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListAST result = GGS_forInstructionEnumeratedObjectListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::plusAssignOperation (const GGS_forInstructionEnumeratedObjectListAST inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMAscendingAtIndex (GGS_bool inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAscending = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_forInstructionEnumeratedObjectListAST::getter_mAscendingAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mAscending ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListAST::setter_setMEnumeratedCollectionAtIndex (GGS_abstractEnumeratedCollectionAST inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedCollection = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST GGS_forInstructionEnumeratedObjectListAST::getter_mEnumeratedCollectionAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListAST * p = (cCollectionElement_forInstructionEnumeratedObjectListAST *) attributes.ptr () ;
  GGS_abstractEnumeratedCollectionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
    result = p->mObject.mProperty_mEnumeratedCollection ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectListAST::DownEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element DownEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST DownEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectListAST::UpEnumerator_forInstructionEnumeratedObjectListAST (const GGS_forInstructionEnumeratedObjectListAST & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST_2E_element UpEnumerator_forInstructionEnumeratedObjectListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_forInstructionEnumeratedObjectListAST::current_mAscending (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mAscending ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractEnumeratedCollectionAST UpEnumerator_forInstructionEnumeratedObjectListAST::current_mEnumeratedCollection (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListAST * p = (const cCollectionElement_forInstructionEnumeratedObjectListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListAST) ;
  return p->mObject.mProperty_mEnumeratedCollection ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ("forInstructionEnumeratedObjectListAST",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListAST GGS_forInstructionEnumeratedObjectListAST::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListAST result ;
  const GGS_forInstructionEnumeratedObjectListAST * p = (const GGS_forInstructionEnumeratedObjectListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST_2E_weak::objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const {
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

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak & GGS_forInstructionAST_2E_weak::operator = (const GGS_forInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (const GGS_forInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionAST result ;
  if (isValid ()) {
    const cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST_2E_weak::bang_forInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionAST) ;
      result = GGS_forInstructionAST ((cPtr_forInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak GGS_forInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_forInstructionAST_2E_weak result ;
  const GGS_forInstructionAST_2E_weak * p = (const GGS_forInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GGS_unifiedTypeMap & io_ioTypeMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_enterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractEnumeratedCollectionAST analyzeEnumeration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeEnumeration (cPtr_abstractEnumeratedCollectionAST * inObject,
                                             const GGS_lstring constin_inUsefulnessCallerEntityName,
                                             GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                             const GGS_analysisContext constin_inAnalysisContext,
                                             GGS_unifiedTypeMap & io_ioTypeMap,
                                             GGS_localVarManager & io_ioVariableMap,
                                             GGS_localConstantList & io_ioLocalConstantListForDoBranch,
                                             GGS_string & out_outEnumeratorCppName,
                                             GGS_semanticExpressionForGeneration & out_outEnumerationExpression,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outEnumeratorCppName.drop () ;
  out_outEnumerationExpression.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_analyzeEnumeration (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioVariableMap, io_ioLocalConstantListForDoBranch, out_outEnumeratorCppName, out_outEnumerationExpression, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//Class for element of '@forInstructionEnumeratedObjectListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_forInstructionEnumeratedObjectListForGeneration : public cCollectionElement {
  public: GGS_forInstructionEnumeratedObjectListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_string & in_mEnumerationOrder,
                                                                              const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                              const GGS_string & in_mEnumeratorCppName
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_string & in_mEnumerationOrder,
                                                                                                                                        const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                                        const GGS_string & in_mEnumeratorCppName
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEnumerationOrder, in_mEnumeratedExpression, in_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_forInstructionEnumeratedObjectListForGeneration::cCollectionElement_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEnumerationOrder, inElement.mProperty_mEnumeratedExpression, inElement.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_forInstructionEnumeratedObjectListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_forInstructionEnumeratedObjectListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (mObject.mProperty_mEnumerationOrder, mObject.mProperty_mEnumeratedExpression, mObject.mProperty_mEnumeratorCppName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_forInstructionEnumeratedObjectListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumerationOrder" ":") ;
  mObject.mProperty_mEnumerationOrder.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratedExpression" ":") ;
  mObject.mProperty_mEnumeratedExpression.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEnumeratorCppName" ":") ;
  mObject.mProperty_mEnumeratorCppName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration::GGS_forInstructionEnumeratedObjectListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration::GGS_forInstructionEnumeratedObjectListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::plusPlusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration_2E_element & inValue
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                   const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                                                   const GGS_string & inOperand2
                                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_forInstructionEnumeratedObjectListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GGS_string & in_mEnumerationOrder,
                                                                                     const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                     const GGS_string & in_mEnumeratorCppName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (in_mEnumerationOrder,
                                                                                     in_mEnumeratedExpression,
                                                                                     in_mEnumeratorCppName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                              const GGS_semanticExpressionForGeneration & inOperand1,
                                                                              const GGS_string & inOperand2
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_append (const GGS_string inOperand0,
                                                                         const GGS_semanticExpressionForGeneration inOperand1,
                                                                         const GGS_string inOperand2,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                const GGS_semanticExpressionForGeneration inOperand1,
                                                                                const GGS_string inOperand2,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                GGS_semanticExpressionForGeneration & outOperand1,
                                                                                GGS_string & outOperand2,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
      outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
      outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                           GGS_semanticExpressionForGeneration & outOperand1,
                                                                           GGS_string & outOperand2,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                          GGS_semanticExpressionForGeneration & outOperand1,
                                                                          GGS_string & outOperand2,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::method_first (GGS_string & outOperand0,
                                                                        GGS_semanticExpressionForGeneration & outOperand1,
                                                                        GGS_string & outOperand2,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::method_last (GGS_string & outOperand0,
                                                                       GGS_semanticExpressionForGeneration & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mEnumerationOrder ;
    outOperand1 = p->mObject.mProperty_mEnumeratedExpression ;
    outOperand2 = p->mObject.mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::add_operation (const GGS_forInstructionEnumeratedObjectListForGeneration & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_forInstructionEnumeratedObjectListForGeneration result = GGS_forInstructionEnumeratedObjectListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::plusAssignOperation (const GGS_forInstructionEnumeratedObjectListForGeneration inOperand,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumerationOrderAtIndex (GGS_string inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumerationOrder = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumerationOrderAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumerationOrder ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratedExpressionAtIndex (GGS_semanticExpressionForGeneration inOperand,
                                                                                                  GGS_uint inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratedExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratedExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_semanticExpressionForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratedExpression ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectListForGeneration::setter_setMEnumeratorCppNameAtIndex (GGS_string inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnumeratorCppName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionEnumeratedObjectListForGeneration::getter_mEnumeratorCppNameAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
    result = p->mObject.mProperty_mEnumeratorCppName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @forInstructionEnumeratedObjectListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_forInstructionEnumeratedObjectListForGeneration::DownEnumerator_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @forInstructionEnumeratedObjectListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_forInstructionEnumeratedObjectListForGeneration::UpEnumerator_forInstructionEnumeratedObjectListForGeneration (const GGS_forInstructionEnumeratedObjectListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration_2E_element UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumerationOrder (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumerationOrder ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratedExpression (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratedExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_forInstructionEnumeratedObjectListForGeneration::current_mEnumeratorCppName (LOCATION_ARGS) const {
  const cCollectionElement_forInstructionEnumeratedObjectListForGeneration * p = (const cCollectionElement_forInstructionEnumeratedObjectListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_forInstructionEnumeratedObjectListForGeneration) ;
  return p->mObject.mProperty_mEnumeratorCppName ;
}




//--------------------------------------------------------------------------------------------------
//     @forInstructionEnumeratedObjectListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ("forInstructionEnumeratedObjectListForGeneration",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionEnumeratedObjectListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionEnumeratedObjectListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionEnumeratedObjectListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectListForGeneration GGS_forInstructionEnumeratedObjectListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectListForGeneration result ;
  const GGS_forInstructionEnumeratedObjectListForGeneration * p = (const GGS_forInstructionEnumeratedObjectListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionEnumeratedObjectListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionEnumeratedObjectListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionForGeneration_2E_weak::objectCompare (const GGS_forInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak & GGS_forInstructionForGeneration_2E_weak::operator = (const GGS_forInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak::GGS_forInstructionForGeneration_2E_weak (const GGS_forInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_forInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_forInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration_2E_weak::bang_forInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_forInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_forInstructionForGeneration) ;
      result = GGS_forInstructionForGeneration ((cPtr_forInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @forInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ("forInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_forInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_forInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_forInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration_2E_weak GGS_forInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_forInstructionForGeneration_2E_weak result ;
  const GGS_forInstructionForGeneration_2E_weak * p = (const GGS_forInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_forInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("forInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::objectCompare (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & inOperand) const {
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

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak & GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::operator = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::unwrappedValue (void) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (isValid ()) {
    const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * p = (cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::bang_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;
      result = GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult ((cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractGrammarInstructionSyntaxDirectedTranslationResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak",
                                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                            Compiler * inCompiler
                                                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak result ;
  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak * p = (const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractGrammarInstructionSyntaxDirectedTranslationResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationResultNone reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationResultNone_init (inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::
grammarInstructionSyntaxDirectedTranslationResultNone_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone::GGS_grammarInstructionSyntaxDirectedTranslationResultNone (const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::class_func_new (Compiler * inCompiler COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationResultNone class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::description (String & ioString,
                                                                              const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationResultNone]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ("grammarInstructionSyntaxDirectedTranslationResultNone",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultNone * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultNone) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultNone ((cPtr_grammarInstructionSyntaxDirectedTranslationResultNone *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultNone.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultNone.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultNone_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultNone.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionSyntaxDirectedTranslationDropResult reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (inCompiler COMMA_THERE)) ;
  object->grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (in_mLocation, inCompiler) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::
grammarInstructionSyntaxDirectedTranslationDropResult_init_21_ (const GGS_location & in_mLocation,
                                                                Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult::GGS_grammarInstructionSyntaxDirectedTranslationDropResult (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * inSourcePtr) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
}
//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::class_func_new (const GGS_location & in_mLocation,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  macroMyNew (result.mObjectPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (in_mLocation,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionSyntaxDirectedTranslationDropResult::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionSyntaxDirectedTranslationDropResult class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (const GGS_location & in_mLocation,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionSyntaxDirectedTranslationDropResult:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ("grammarInstructionSyntaxDirectedTranslationDropResult",
                                                                                                             & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * p = (cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult ((cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationDropResult.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ("grammarInstructionSyntaxDirectedTranslationDropResult.weak",
                                                                                                                     & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationDropResult_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationDropResult.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak",
                                                                                                                      & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak",
                                                                                                                              & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::objectCompare (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & inOperand) const {
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

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (void) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak & GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::operator = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (isValid ()) {
    const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * p = (cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak",
                                                                                                                                & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                                          Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak result ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak * p = (const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInFileInstructionAST_2E_weak::objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak & GGS_grammarInFileInstructionAST_2E_weak::operator = (const GGS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (const GGS_grammarInFileInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInFileInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInFileInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST_2E_weak::bang_grammarInFileInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInFileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GGS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInFileInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ("grammarInFileInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInFileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInFileInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInFileInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak GGS_grammarInFileInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInFileInstructionAST_2E_weak result ;
  const GGS_grammarInFileInstructionAST_2E_weak * p = (const GGS_grammarInFileInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInFileInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInStringInstructionAST_2E_weak::objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak & GGS_grammarInStringInstructionAST_2E_weak::operator = (const GGS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (const GGS_grammarInStringInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_grammarInStringInstructionAST result ;
  if (isValid ()) {
    const cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInStringInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST_2E_weak::bang_grammarInStringInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInStringInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GGS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInStringInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ("grammarInStringInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInStringInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInStringInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInStringInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak GGS_grammarInStringInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInStringInstructionAST_2E_weak result ;
  const GGS_grammarInStringInstructionAST_2E_weak * p = (const GGS_grammarInStringInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInStringInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak & GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (const GGS_grammarInstructionWithSourceFileForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceFileForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::bang_grammarInstructionWithSourceFileForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GGS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ("grammarInstructionWithSourceFileForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceFileForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration_2E_weak GGS_grammarInstructionWithSourceFileForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceFileForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceFileForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak & GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::operator = (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (const GGS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_grammarInstructionWithSourceExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GGS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ("grammarInstructionWithSourceExpressionForGeneration.weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak result ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak * p = (const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_grammarInstructionWithSourceExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum incDecKind
//--------------------------------------------------------------------------------------------------

GGS_incDecKind::GGS_incDecKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::class_func_increment (UNUSED_LOCATION_ARGS) {
  GGS_incDecKind result ;
  result.mEnum = Enumeration::enum_increment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::class_func_decrement (UNUSED_LOCATION_ARGS) {
  GGS_incDecKind result ;
  result.mEnum = Enumeration::enum_decrement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_incDecKind [3] = {
  "(not built)",
  "increment",
  "decrement"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecKind::getter_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_increment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_incDecKind::getter_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_decrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_incDecKind::description (String & ioString,
                                  const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @incDecKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_incDecKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @incDecKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecKind::extractObject (const GGS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GGS_incDecKind result ;
  const GGS_incDecKind * p = (const GGS_incDecKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionAST_2E_weak::objectCompare (const GGS_incDecInstructionAST_2E_weak & inOperand) const {
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

GGS_incDecInstructionAST_2E_weak::GGS_incDecInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak & GGS_incDecInstructionAST_2E_weak::operator = (const GGS_incDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak::GGS_incDecInstructionAST_2E_weak (const GGS_incDecInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak GGS_incDecInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_incDecInstructionAST result ;
  if (isValid ()) {
    const cPtr_incDecInstructionAST * p = (cPtr_incDecInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST GGS_incDecInstructionAST_2E_weak::bang_incDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GGS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ("incDecInstructionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionAST_2E_weak GGS_incDecInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionAST_2E_weak result ;
  const GGS_incDecInstructionAST_2E_weak * p = (const GGS_incDecInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionAST_2E_weak::objectCompare (const GGS_incDecNoOVFInstructionAST_2E_weak & inOperand) const {
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

GGS_incDecNoOVFInstructionAST_2E_weak::GGS_incDecNoOVFInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak & GGS_incDecNoOVFInstructionAST_2E_weak::operator = (const GGS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak::GGS_incDecNoOVFInstructionAST_2E_weak (const GGS_incDecNoOVFInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak GGS_incDecNoOVFInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_incDecNoOVFInstructionAST result ;
  if (isValid ()) {
    const cPtr_incDecNoOVFInstructionAST * p = (cPtr_incDecNoOVFInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecNoOVFInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST GGS_incDecNoOVFInstructionAST_2E_weak::bang_incDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GGS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ("incDecNoOVFInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionAST_2E_weak GGS_incDecNoOVFInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionAST_2E_weak result ;
  const GGS_incDecNoOVFInstructionAST_2E_weak * p = (const GGS_incDecNoOVFInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecInstructionAST::objectCompare (const GGS_selfIncDecInstructionAST & inOperand) const {
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

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::
selfIncDecInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_incDecKind & in_mKind,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST::GGS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_incDecKind & in_mKind,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_incDecKind & in_mKind,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

void cPtr_selfIncDecInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST result ;
  const GGS_selfIncDecInstructionAST * p = (const GGS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecInstructionAST_2E_weak::objectCompare (const GGS_selfIncDecInstructionAST_2E_weak & inOperand) const {
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

GGS_selfIncDecInstructionAST_2E_weak::GGS_selfIncDecInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak & GGS_selfIncDecInstructionAST_2E_weak::operator = (const GGS_selfIncDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak::GGS_selfIncDecInstructionAST_2E_weak (const GGS_selfIncDecInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak GGS_selfIncDecInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfIncDecInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfIncDecInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST GGS_selfIncDecInstructionAST_2E_weak::bang_selfIncDecInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfIncDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecInstructionAST) ;
      result = GGS_selfIncDecInstructionAST ((cPtr_selfIncDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfIncDecInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ("selfIncDecInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecInstructionAST_2E_weak GGS_selfIncDecInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_selfIncDecInstructionAST_2E_weak result ;
  const GGS_selfIncDecInstructionAST_2E_weak * p = (const GGS_selfIncDecInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecNoOVFInstructionAST::objectCompare (const GGS_selfIncDecNoOVFInstructionAST & inOperand) const {
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

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecNoOVFInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecNoOVFInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecNoOVFInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GGS_selfIncDecNoOVFInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::
selfIncDecNoOVFInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_incDecKind & in_mKind,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST::GGS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                     const GGS_incDecKind & in_mKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (in_mInstructionLocation, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_selfIncDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_incDecKind & in_mKind,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfIncDecNoOVFInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

void cPtr_selfIncDecNoOVFInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@selfIncDecNoOVFInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfIncDecNoOVFInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST result ;
  const GGS_selfIncDecNoOVFInstructionAST * p = (const GGS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfIncDecNoOVFInstructionAST_2E_weak::objectCompare (const GGS_selfIncDecNoOVFInstructionAST_2E_weak & inOperand) const {
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

GGS_selfIncDecNoOVFInstructionAST_2E_weak::GGS_selfIncDecNoOVFInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak & GGS_selfIncDecNoOVFInstructionAST_2E_weak::operator = (const GGS_selfIncDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak::GGS_selfIncDecNoOVFInstructionAST_2E_weak (const GGS_selfIncDecNoOVFInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak GGS_selfIncDecNoOVFInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfIncDecNoOVFInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfIncDecNoOVFInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST GGS_selfIncDecNoOVFInstructionAST_2E_weak::bang_selfIncDecNoOVFInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfIncDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecNoOVFInstructionAST) ;
      result = GGS_selfIncDecNoOVFInstructionAST ((cPtr_selfIncDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfIncDecNoOVFInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ("selfIncDecNoOVFInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selfIncDecNoOVFInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selfIncDecNoOVFInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selfIncDecNoOVFInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfIncDecNoOVFInstructionAST_2E_weak GGS_selfIncDecNoOVFInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_selfIncDecNoOVFInstructionAST_2E_weak result ;
  const GGS_selfIncDecNoOVFInstructionAST_2E_weak * p = (const GGS_selfIncDecNoOVFInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selfIncDecNoOVFInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionForGeneration::objectCompare (const GGS_incDecInstructionForGeneration & inOperand) const {
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

GGS_incDecInstructionForGeneration::GGS_incDecInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mReceiverCppName,
                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::
incDecInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                         const GGS_string & in_mReceiverCppName,
                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                         const GGS_lstringlist & in_mStructAttributeList,
                                                         const GGS_incDecKind & in_mKind,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration::GGS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mReceiverCppName,
                                                                                       const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                       const GGS_lstringlist & in_mStructAttributeList,
                                                                                       const GGS_incDecKind & in_mKind,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mReceiverCppName,
                                                                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                          const GGS_lstringlist & in_mStructAttributeList,
                                                                          const GGS_incDecKind & in_mKind,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

void cPtr_incDecInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration result ;
  const GGS_incDecInstructionForGeneration * p = (const GGS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecInstructionForGeneration_2E_weak::objectCompare (const GGS_incDecInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_incDecInstructionForGeneration_2E_weak::GGS_incDecInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak & GGS_incDecInstructionForGeneration_2E_weak::operator = (const GGS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak::GGS_incDecInstructionForGeneration_2E_weak (const GGS_incDecInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak GGS_incDecInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_incDecInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration GGS_incDecInstructionForGeneration_2E_weak::bang_incDecInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GGS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ("incDecInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecInstructionForGeneration_2E_weak GGS_incDecInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_incDecInstructionForGeneration_2E_weak result ;
  const GGS_incDecInstructionForGeneration_2E_weak * p = (const GGS_incDecInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionForGeneration::objectCompare (const GGS_incDecNoOVFInstructionForGeneration & inOperand) const {
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

GGS_incDecNoOVFInstructionForGeneration::GGS_incDecNoOVFInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mReceiverCppName,
                          const GGS_unifiedTypeMapEntry & in_mReceiverType,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecNoOVFInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecNoOVFInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GGS_incDecNoOVFInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::
incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mReceiverCppName,
                                                              const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                              const GGS_incDecKind & in_mKind,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration::GGS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_string & in_mReceiverCppName,
                                                                                                 const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                 const GGS_lstringlist & in_mStructAttributeList,
                                                                                                 const GGS_incDecKind & in_mKind,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_incDecKind GGS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mReceiverCppName,
                                                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                    const GGS_lstringlist & in_mStructAttributeList,
                                                                                    const GGS_incDecKind & in_mKind,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverCppName (),
mProperty_mReceiverType (),
mProperty_mStructAttributeList (),
mProperty_mKind () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_incDecNoOVFInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

void cPtr_incDecNoOVFInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@incDecNoOVFInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_incDecNoOVFInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverCppName.printNonNullClassInstanceProperties ("mReceiverCppName") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration result ;
  const GGS_incDecNoOVFInstructionForGeneration * p = (const GGS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_incDecNoOVFInstructionForGeneration_2E_weak::objectCompare (const GGS_incDecNoOVFInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_incDecNoOVFInstructionForGeneration_2E_weak::GGS_incDecNoOVFInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak & GGS_incDecNoOVFInstructionForGeneration_2E_weak::operator = (const GGS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak::GGS_incDecNoOVFInstructionForGeneration_2E_weak (const GGS_incDecNoOVFInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak GGS_incDecNoOVFInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_incDecNoOVFInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_incDecNoOVFInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration GGS_incDecNoOVFInstructionForGeneration_2E_weak::bang_incDecNoOVFInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_incDecNoOVFInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GGS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @incDecNoOVFInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ("incDecNoOVFInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_incDecNoOVFInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_incDecNoOVFInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_incDecNoOVFInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_incDecNoOVFInstructionForGeneration_2E_weak GGS_incDecNoOVFInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_incDecNoOVFInstructionForGeneration_2E_weak result ;
  const GGS_incDecNoOVFInstructionForGeneration_2E_weak * p = (const GGS_incDecNoOVFInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_incDecNoOVFInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum ifExpressionKind
//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind::GGS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_regularExp (const GGS_semanticExpressionAST & inAssociatedValue0,
                                                                  const GGS_location & inAssociatedValue1
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_regularExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_regularExp (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::class_func_letVarExp (const GGS_lstring & inAssociatedValue0,
                                                                 const GGS_bool & inAssociatedValue1,
                                                                 const GGS_semanticExpressionAST & inAssociatedValue2,
                                                                 const GGS_location & inAssociatedValue3,
                                                                 const GGS_lstring & inAssociatedValue4
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_letVarExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_ifExpressionKind_2E_letVarExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractRegularExp (GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                     GGS_location & outAssociatedValue_endOfExp,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regularExp) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::method_extractLetVarExp (GGS_lstring & outAssociatedValue_varName,
                                                    GGS_bool & outAssociatedValue_isConstant,
                                                    GGS_semanticExpressionAST & outAssociatedValue_exp,
                                                    GGS_location & outAssociatedValue_endOfExp,
                                                    GGS_lstring & outAssociatedValue_typeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letVarExp) {
    outAssociatedValue_varName.drop () ;
    outAssociatedValue_isConstant.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.letVarExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_varName = ptr->mProperty_varName ;
    outAssociatedValue_isConstant = ptr->mProperty_isConstant ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_regularExp_3F_ GGS_ifExpressionKind::getter_getRegularExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_regularExp_3F_ result ;
  if (mEnum == Enumeration::enum_regularExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_regularExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_regularExp (GGS_semanticExpressionAST & out_exp,
                                                              GGS_location & out_endOfExp) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_regularExp *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind_2E_letVarExp_3F_ GGS_ifExpressionKind::getter_getLetVarExp (UNUSED_LOCATION_ARGS) const {
  GGS_ifExpressionKind_2E_letVarExp_3F_ result ;
  if (mEnum == Enumeration::enum_letVarExp) {
    const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_ifExpressionKind_2E_letVarExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::getAssociatedValuesFor_letVarExp (GGS_lstring & out_varName,
                                                             GGS_bool & out_isConstant,
                                                             GGS_semanticExpressionAST & out_exp,
                                                             GGS_location & out_endOfExp,
                                                             GGS_lstring & out_typeName) const {
  const auto ptr = (const GGS_ifExpressionKind_2E_letVarExp *) mAssociatedValues.associatedValuesPointer () ;
  out_varName = ptr->mProperty_varName ;
  out_isConstant = ptr->mProperty_isConstant ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letVarExp"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_ifExpressionKind::getter_isLetVarExp (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letVarExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ifExpressionKind::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @ifExpressionKind generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_ifExpressionKind::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_ifExpressionKind result ;
  const GGS_ifExpressionKind * p = (const GGS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@CommaSeparatedExpressionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_CommaSeparatedExpressionList : public cCollectionElement {
  public: GGS_CommaSeparatedExpressionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_CommaSeparatedExpressionList::cCollectionElement_CommaSeparatedExpressionList (const GGS_ifExpressionKind & in_mExpression
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_CommaSeparatedExpressionList::cCollectionElement_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_CommaSeparatedExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_CommaSeparatedExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_CommaSeparatedExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_CommaSeparatedExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList::GGS_CommaSeparatedExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusPlusAssignOperation (const GGS_CommaSeparatedExpressionList_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::class_func_listWithValue (const GGS_ifExpressionKind & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GGS_CommaSeparatedExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_CommaSeparatedExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_ifExpressionKind & in_mExpression
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_CommaSeparatedExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::addAssignOperation (const GGS_ifExpressionKind & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_append (const GGS_ifExpressionKind inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_insertAtIndex (const GGS_ifExpressionKind inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_CommaSeparatedExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_removeAtIndex (GGS_ifExpressionKind & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
      outOperand0 = p->mObject.mProperty_mExpression ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_popFirst (GGS_ifExpressionKind & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_popLast (GGS_ifExpressionKind & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::method_first (GGS_ifExpressionKind & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::method_last (GGS_ifExpressionKind & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::add_operation (const GGS_CommaSeparatedExpressionList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_CommaSeparatedExpressionList result = GGS_CommaSeparatedExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::plusAssignOperation (const GGS_CommaSeparatedExpressionList inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_CommaSeparatedExpressionList::setter_setMExpressionAtIndex (GGS_ifExpressionKind inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind GGS_CommaSeparatedExpressionList::getter_mExpressionAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_CommaSeparatedExpressionList * p = (cCollectionElement_CommaSeparatedExpressionList *) attributes.ptr () ;
  GGS_ifExpressionKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_CommaSeparatedExpressionList::DownEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element DownEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind DownEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @CommaSeparatedExpressionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_CommaSeparatedExpressionList::UpEnumerator_CommaSeparatedExpressionList (const GGS_CommaSeparatedExpressionList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList_2E_element UpEnumerator_CommaSeparatedExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_ifExpressionKind UpEnumerator_CommaSeparatedExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_CommaSeparatedExpressionList * p = (const cCollectionElement_CommaSeparatedExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_CommaSeparatedExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @CommaSeparatedExpressionList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ("CommaSeparatedExpressionList",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_CommaSeparatedExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_CommaSeparatedExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_CommaSeparatedExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_CommaSeparatedExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_CommaSeparatedExpressionList GGS_CommaSeparatedExpressionList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_CommaSeparatedExpressionList result ;
  const GGS_CommaSeparatedExpressionList * p = (const GGS_CommaSeparatedExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_CommaSeparatedExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("CommaSeparatedExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@CommaSeparatedExpressionList analyzeSemanticExpressionList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeSemanticExpressionList (const GGS_CommaSeparatedExpressionList inObject,
                                                    const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                    GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                    const GGS_analysisContext constinArgument_inAnalysisContext,
                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                    GGS_ifTestListForGeneration & outArgument_outTestListForGeneration,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestListForGeneration.drop () ; // Release 'out' argument
  outArgument_outTestListForGeneration = GGS_ifTestListForGeneration::init (inCompiler COMMA_HERE) ;
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_6618 (temp_0) ;
  while (enumerator_6618.hasCurrentObject ()) {
    switch (enumerator_6618.current_mExpression (HERE).enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_6688_exp_0 ;
        GGS_location extractedValue_6692_endOfExpression_1 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_regularExp (extractedValue_6688_exp_0, extractedValue_6692_endOfExpression_1) ;
        GGS_semanticExpressionForGeneration var_analyzed_5F_if_5F_expression_6976 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_6688_exp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 191)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzed_5F_if_5F_expression_6976, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 188)) ;
        GGS_semanticExpressionForGeneration var_if_5F_expression_7149 ;
        {
        routine_checkExpressionIsBoolean_3F__3F__3F__21_ (constinArgument_inAnalysisContext, extractedValue_6692_endOfExpression_1, var_analyzed_5F_if_5F_expression_6976, var_if_5F_expression_7149, inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 197)) ;
        }
        outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_regular (var_if_5F_expression_7149  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 203)) ;
        {
        extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 204)) ;
        }
        {
        extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 205)) ;
        }
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_7353_varName_0 ;
        GGS_bool extractedValue_7361_isConstant_1 ;
        GGS_semanticExpressionAST extractedValue_7372_exp_2 ;
        GGS_location extractedValue_7376__3 ;
        GGS_lstring extractedValue_7387_typeName_4 ;
        enumerator_6618.current_mExpression (HERE).getAssociatedValuesFor_letVarExp (extractedValue_7353_varName_0, extractedValue_7361_isConstant_1, extractedValue_7372_exp_2, extractedValue_7376__3, extractedValue_7387_typeName_4) ;
        GGS_semanticExpressionForGeneration var_analyzedExpression_7664 ;
        callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) extractedValue_7372_exp_2.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 210)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_analyzedExpression_7664, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 207)) ;
        GGS_unifiedTypeMapEntry var_castType_7705 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 216)) ;
        GGS_unifiedTypeMapEntry var_testType_7754 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 217)) ;
        GGS_unifiedTypeMapEntry var_unwrappedType_7841 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 219)).readProperty_unwrappedType () ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_unwrappedType_7841.getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 220)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 221)) ;
            }
            {
            extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 222)) ;
            }
            GGS_string var_targetVariableCppName_8067 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 223)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 224)) ;
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              test_2 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_2) {
                GalgasBool test_3 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_3) {
                  test_3 = extractedValue_7361_isConstant_1.boolEnum () ;
                  if (GalgasBool::boolTrue == test_3) {
                    {
                    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 227)) ;
                    }
                  }
                }
                if (GalgasBool::boolFalse == test_3) {
                  {
                  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_unwrappedType_7841, var_targetVariableCppName_8067, var_targetVariableCppName_8067, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 234)) ;
                  }
                }
              }
            }
            var_castType_7705 = var_unwrappedType_7841 ;
            var_testType_7754 = var_analyzedExpression_7664.readProperty_mResultType () ;
            outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_optionalExp (var_targetVariableCppName_8067, extractedValue_7361_isConstant_1, var_analyzedExpression_7664, var_unwrappedType_7841  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 245)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 252)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  TC_Array <FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("on a class object, the 'as' clause is required"), fixItArray6  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 254)) ;
                  var_castType_7705.drop () ; // Release error dropped variable
                  var_testType_7754.drop () ; // Release error dropped variable
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 256)) ;
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_9582 = var_castType_7705 ;
                GGS_bool var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).isValid ()) {
                  uint32_t variant_9673 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)).uintValue () ;
                  bool loop_9673 = true ;
                  while (loop_9673) {
                    loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).isValid () ;
                    if (loop_9673) {
                      loop_9673 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_and (extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 262)).boolValue () ;
                    }
                    if (loop_9673 && (0 == variant_9673)) {
                      loop_9673 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 261)) ;
                    }
                    if (loop_9673) {
                      variant_9673 -- ;
                      var_t_9582 = extensionGetter_definition (var_t_9582, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 263)).readProperty_superType () ;
                      var_found_9617 = GGS_bool (ComparisonKind::equal, var_t_9582.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                    }
                  }
                }
                GalgasBool test_7 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_7) {
                  test_7 = var_found_9617.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 266)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_7) {
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extractedValue_7387_typeName_4.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 268)).add_operation (GGS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 269)), fixItArray8  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 267)) ;
                  }
                }
              }
              {
              extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 273)) ;
              }
              {
              extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 274)) ;
              }
              GGS_string var_targetVariableCppName_10290 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 275)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 276)) ;
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GalgasBool test_10 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_10) {
                    test_10 = extractedValue_7361_isConstant_1.boolEnum () ;
                    if (GalgasBool::boolTrue == test_10) {
                      {
                      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 279)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_10) {
                    {
                    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_10290, var_targetVariableCppName_10290, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 286)) ;
                    }
                  }
                }
              }
              outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_10290, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 295)) ;
            }
          }
          if (GalgasBool::boolFalse == test_4) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              const GGS_typeKindEnum_2E_weakReferenceType var_weakRefType_11231 = extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).unwrappedValue () ;
              if (!extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).readProperty_typeKind ().getter_getWeakReferenceType (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 301)).isValuated ()) {
                test_11 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_11) {
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, extractedValue_7387_typeName_4.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_castType_7705 = var_weakRefType_11231.readProperty_referenceType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_castType_7705 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, extractedValue_7387_typeName_4, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 305)) ;
                }
                var_testType_7754 = var_castType_7705 ;
                GGS_unifiedTypeMapEntry var_t_11574 = var_castType_7705 ;
                GGS_bool var_found_11607 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())) ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  test_13 = var_found_11607.boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 311)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_13) {
                  GalgasBool test_14 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_14) {
                    test_14 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                    if (GalgasBool::boolTrue == test_14) {
                      var_found_11607 = GGS_bool (true) ;
                    }
                  }
                }
                if (ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).isValid ()) {
                  uint32_t variant_11871 = ioArgument_ioTypeMap.getter_count (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)).uintValue () ;
                  bool loop_11871 = true ;
                  while (loop_11871) {
                    loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).isValid () ;
                    if (loop_11871) {
                      loop_11871 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_and (extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).readProperty_superType ().getter_isNull (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)) COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 316)).boolValue () ;
                    }
                    if (loop_11871 && (0 == variant_11871)) {
                      loop_11871 = false ;
                      inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 315)) ;
                    }
                    if (loop_11871) {
                      variant_11871 -- ;
                      var_t_11574 = extensionGetter_definition (var_t_11574, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 317)).readProperty_superType () ;
                      GalgasBool test_15 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_15) {
                        test_15 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_analyzedExpression_7664.readProperty_mResultType ())).boolEnum () ;
                        if (GalgasBool::boolTrue == test_15) {
                          var_found_11607 = GGS_bool (true) ;
                          extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)).readProperty_typeKind ().method_extractWeakReferenceType (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 320)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_15) {
                        GalgasBool test_16 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_16) {
                          test_16 = GGS_bool (ComparisonKind::equal, var_t_11574.objectCompare (var_weakRefType_11231.readProperty_referenceType ())).boolEnum () ;
                          if (GalgasBool::boolTrue == test_16) {
                            var_found_11607 = GGS_bool (true) ;
                          }
                        }
                      }
                    }
                  }
                }
                GalgasBool test_17 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_17) {
                  test_17 = var_found_11607.operator_not (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 325)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_17) {
                    TC_Array <FixItDescription> fixItArray18 ;
                    inCompiler->emitSemanticError (extractedValue_7387_typeName_4.readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_castType_7705, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (GGS_string ("' type is not compatible with the '@"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 327)).add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 328)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 329)), fixItArray18  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 326)) ;
                  }
                }
                {
                extensionSetter_openOverrideForSelectBlock (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 331)) ;
                }
                {
                extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 332)) ;
                }
                GGS_string var_targetVariableCppName_12681 = GGS_string ("var_").add_operation (extractedValue_7353_varName_0.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 333)).add_operation (extractedValue_7353_varName_0.readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)).getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 334)) ;
                GalgasBool test_19 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_19) {
                  test_19 = GGS_bool (ComparisonKind::notEqual, extractedValue_7353_varName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_19) {
                    GalgasBool test_20 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_20) {
                      test_20 = extractedValue_7361_isConstant_1.boolEnum () ;
                      if (GalgasBool::boolTrue == test_20) {
                        {
                        extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, extractedValue_7353_varName_0, var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 337)) ;
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_20) {
                      {
                      extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, extractedValue_7353_varName_0, GGS_bool (true), var_castType_7705, var_targetVariableCppName_12681, var_targetVariableCppName_12681, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 344)) ;
                      }
                    }
                  }
                }
                outArgument_outTestListForGeneration.addAssignOperation (GGS_ifTestForGeneration::class_func_letVarExp (var_targetVariableCppName_12681, var_analyzedExpression_7664, var_castType_7705, var_testType_7754  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 353)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              TC_Array <FixItDescription> fixItArray21 ;
              inCompiler->emitSemanticError (var_analyzedExpression_7664.readProperty_mLocation (), GGS_string ("expression should be a class instance, or a weak reference: it is an @").add_operation (extensionGetter_definition (var_analyzedExpression_7664.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 361)).add_operation (GGS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 362)), fixItArray21  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas", 360)) ;
            }
          }
        }
      }
      break ;
    }
    enumerator_6618.gotoNextObject () ;
  }
}


