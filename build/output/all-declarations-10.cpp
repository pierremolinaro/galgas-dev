#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::objectCompare (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (void) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak & GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::operator = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst & inSource) :
GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::bang_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
      result = GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst ((cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak",
                                                                                                                                & kTypeDescriptor_GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                Compiler * inCompiler
                                                                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak result ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak * p = (const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInFileInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInFileInstructionAST_2D_weak & inOperand) const {
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

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak & GALGAS_grammarInFileInstructionAST_2D_weak::operator = (const GALGAS_grammarInFileInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak::GALGAS_grammarInFileInstructionAST_2D_weak (const GALGAS_grammarInFileInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST GALGAS_grammarInFileInstructionAST_2D_weak::bang_grammarInFileInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInFileInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInFileInstructionAST) ;
      result = GALGAS_grammarInFileInstructionAST ((cPtr_grammarInFileInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInFileInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ("grammarInFileInstructionAST-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInFileInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInFileInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInFileInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInFileInstructionAST_2D_weak GALGAS_grammarInFileInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInFileInstructionAST_2D_weak result ;
  const GALGAS_grammarInFileInstructionAST_2D_weak * p = (const GALGAS_grammarInFileInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInFileInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInFileInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInStringInstructionAST_2D_weak::objectCompare (const GALGAS_grammarInStringInstructionAST_2D_weak & inOperand) const {
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

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak & GALGAS_grammarInStringInstructionAST_2D_weak::operator = (const GALGAS_grammarInStringInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak::GALGAS_grammarInStringInstructionAST_2D_weak (const GALGAS_grammarInStringInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST GALGAS_grammarInStringInstructionAST_2D_weak::bang_grammarInStringInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInStringInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInStringInstructionAST) ;
      result = GALGAS_grammarInStringInstructionAST ((cPtr_grammarInStringInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInStringInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ("grammarInStringInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInStringInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInStringInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInStringInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInStringInstructionAST_2D_weak GALGAS_grammarInStringInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInStringInstructionAST_2D_weak result ;
  const GALGAS_grammarInStringInstructionAST_2D_weak * p = (const GALGAS_grammarInStringInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInStringInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInStringInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceFileForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::bang_grammarInstructionWithSourceFileForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceFileForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceFileForGeneration ((cPtr_grammarInstructionWithSourceFileForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceFileForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ("grammarInstructionWithSourceFileForGeneration-weak",
                                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceFileForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceFileForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak & GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::operator = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (const GALGAS_grammarInstructionWithSourceExpressionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::bang_grammarInstructionWithSourceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
      result = GALGAS_grammarInstructionWithSourceExpressionForGeneration ((cPtr_grammarInstructionWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @grammarInstructionWithSourceExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ("grammarInstructionWithSourceExpressionForGeneration-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak result ;
  const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak * p = (const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_grammarInstructionWithSourceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("grammarInstructionWithSourceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind::GALGAS_incDecKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::class_func_increment (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  result.mEnum = Enumeration::enum_increment ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::class_func_decrement (UNUSED_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
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

GALGAS_bool GALGAS_incDecKind::getter_isIncrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_increment == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_incDecKind::getter_isDecrement (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_decrement == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_incDecKind::description (String & ioString,
                                     const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @incDecKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_incDecKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecKind ("incDecKind",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecKind::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_incDecKind result ;
  const GALGAS_incDecKind * p = (const GALGAS_incDecKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecInstructionAST_2D_weak::objectCompare (const GALGAS_incDecInstructionAST_2D_weak & inOperand) const {
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

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak & GALGAS_incDecInstructionAST_2D_weak::operator = (const GALGAS_incDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak::GALGAS_incDecInstructionAST_2D_weak (const GALGAS_incDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST GALGAS_incDecInstructionAST_2D_weak::bang_incDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionAST) ;
      result = GALGAS_incDecInstructionAST ((cPtr_incDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ("incDecInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionAST_2D_weak GALGAS_incDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionAST_2D_weak result ;
  const GALGAS_incDecInstructionAST_2D_weak * p = (const GALGAS_incDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionAST_2D_weak & inOperand) const {
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

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak & GALGAS_incDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak::GALGAS_incDecNoOVFInstructionAST_2D_weak (const GALGAS_incDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST GALGAS_incDecNoOVFInstructionAST_2D_weak::bang_incDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionAST) ;
      result = GALGAS_incDecNoOVFInstructionAST ((cPtr_incDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ("incDecNoOVFInstructionAST-weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionAST_2D_weak GALGAS_incDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_incDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecInstructionAST::objectCompare (const GALGAS_selfIncDecInstructionAST & inOperand) const {
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

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GALGAS_selfIncDecInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecInstructionAST::
selfIncDecInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                       const GALGAS_incDecKind & in_mKind,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST::GALGAS_selfIncDecInstructionAST (const cPtr_selfIncDecInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                 const GALGAS_incDecKind & in_mKind
                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecInstructionAST (in_mInstructionLocation, in_mKind COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_selfIncDecInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_selfIncDecInstructionAST * p = (cPtr_selfIncDecInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecInstructionAST::cPtr_selfIncDecInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_incDecKind & in_mKind
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_selfIncDecInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST ("selfIncDecInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST result ;
  const GALGAS_selfIncDecInstructionAST * p = (const GALGAS_selfIncDecInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecInstructionAST_2D_weak::objectCompare (const GALGAS_selfIncDecInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfIncDecInstructionAST_2D_weak::GALGAS_selfIncDecInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak & GALGAS_selfIncDecInstructionAST_2D_weak::operator = (const GALGAS_selfIncDecInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak::GALGAS_selfIncDecInstructionAST_2D_weak (const GALGAS_selfIncDecInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak GALGAS_selfIncDecInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST GALGAS_selfIncDecInstructionAST_2D_weak::bang_selfIncDecInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfIncDecInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecInstructionAST) ;
      result = GALGAS_selfIncDecInstructionAST ((cPtr_selfIncDecInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2D_weak ("selfIncDecInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecInstructionAST_2D_weak GALGAS_selfIncDecInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecInstructionAST_2D_weak result ;
  const GALGAS_selfIncDecInstructionAST_2D_weak * p = (const GALGAS_selfIncDecInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfIncDecNoOVFInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfIncDecNoOVFInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecNoOVFInstructionAST::objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST & inOperand) const {
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

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_incDecKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfIncDecNoOVFInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfIncDecNoOVFInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfIncDecNoOVFInstructionAST_init_21__21_ (in_mInstructionLocation, in_mKind, inCompiler) ;
  const GALGAS_selfIncDecNoOVFInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfIncDecNoOVFInstructionAST::
selfIncDecNoOVFInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_incDecKind & in_mKind,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST::GALGAS_selfIncDecNoOVFInstructionAST (const cPtr_selfIncDecNoOVFInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfIncDecNoOVFInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_incDecKind & in_mKind
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfIncDecNoOVFInstructionAST (in_mInstructionLocation, in_mKind COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_selfIncDecNoOVFInstructionAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_selfIncDecNoOVFInstructionAST * p = (cPtr_selfIncDecNoOVFInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfIncDecNoOVFInstructionAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfIncDecNoOVFInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfIncDecNoOVFInstructionAST::cPtr_selfIncDecNoOVFInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_incDecKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
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

acPtr_class * cPtr_selfIncDecNoOVFInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfIncDecNoOVFInstructionAST (mProperty_mInstructionLocation, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecNoOVFInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ("selfIncDecNoOVFInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  const GALGAS_selfIncDecNoOVFInstructionAST * p = (const GALGAS_selfIncDecNoOVFInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecNoOVFInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::objectCompare (const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak & GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::operator = (const GALGAS_selfIncDecNoOVFInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (const GALGAS_selfIncDecNoOVFInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::bang_selfIncDecNoOVFInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfIncDecNoOVFInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfIncDecNoOVFInstructionAST) ;
      result = GALGAS_selfIncDecNoOVFInstructionAST ((cPtr_selfIncDecNoOVFInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfIncDecNoOVFInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2D_weak ("selfIncDecNoOVFInstructionAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfIncDecNoOVFInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfIncDecNoOVFInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfIncDecNoOVFInstructionAST_2D_weak GALGAS_selfIncDecNoOVFInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfIncDecNoOVFInstructionAST_2D_weak result ;
  const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak * p = (const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfIncDecNoOVFInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfIncDecNoOVFInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecInstructionForGeneration reference class
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

ComparisonResult GALGAS_incDecInstructionForGeneration::objectCompare (const GALGAS_incDecInstructionForGeneration & inOperand) const {
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

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_string & in_mReceiverCppName,
                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                          const GALGAS_lstringlist & in_mStructAttributeList,
                          const GALGAS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GALGAS_incDecInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecInstructionForGeneration::
incDecInstructionForGeneration_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                         const GALGAS_string & in_mReceiverCppName,
                                                         const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                         const GALGAS_lstringlist & in_mStructAttributeList,
                                                         const GALGAS_incDecKind & in_mKind,
                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration::GALGAS_incDecInstructionForGeneration (const cPtr_incDecInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                             const GALGAS_string & in_mReceiverCppName,
                                                                                             const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                             const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                             const GALGAS_incDecKind & in_mKind
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_incDecInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecInstructionForGeneration * p = (cPtr_incDecInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecInstructionForGeneration::cPtr_incDecInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mReceiverCppName,
                                                                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                          const GALGAS_lstringlist & in_mStructAttributeList,
                                                                          const GALGAS_incDecKind & in_mKind
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
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

acPtr_class * cPtr_incDecInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration ("incDecInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration result ;
  const GALGAS_incDecInstructionForGeneration * p = (const GALGAS_incDecInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak & GALGAS_incDecInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak::GALGAS_incDecInstructionForGeneration_2D_weak (const GALGAS_incDecInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration GALGAS_incDecInstructionForGeneration_2D_weak::bang_incDecInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecInstructionForGeneration) ;
      result = GALGAS_incDecInstructionForGeneration ((cPtr_incDecInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ("incDecInstructionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecInstructionForGeneration_2D_weak GALGAS_incDecInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_incDecInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecInstructionForGeneration_2D_weak * p = (const GALGAS_incDecInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @incDecNoOVFInstructionForGeneration reference class
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

ComparisonResult GALGAS_incDecNoOVFInstructionForGeneration::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration & inOperand) const {
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

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_string & in_mReceiverCppName,
                          const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                          const GALGAS_lstringlist & in_mStructAttributeList,
                          const GALGAS_incDecKind & in_mKind,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_incDecNoOVFInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_incDecNoOVFInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind, inCompiler) ;
  const GALGAS_incDecNoOVFInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_incDecNoOVFInstructionForGeneration::
incDecNoOVFInstructionForGeneration_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_string & in_mReceiverCppName,
                                                              const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                              const GALGAS_lstringlist & in_mStructAttributeList,
                                                              const GALGAS_incDecKind & in_mKind,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverCppName = in_mReceiverCppName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration::GALGAS_incDecNoOVFInstructionForGeneration (const cPtr_incDecNoOVFInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_incDecNoOVFInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                       const GALGAS_string & in_mReceiverCppName,
                                                                                                       const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                       const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                                       const GALGAS_incDecKind & in_mKind
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_incDecNoOVFInstructionForGeneration (in_mInstructionLocation, in_mReceiverCppName, in_mReceiverType, in_mStructAttributeList, in_mKind COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecKind GALGAS_incDecNoOVFInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_incDecKind () ;
  }else{
    cPtr_incDecNoOVFInstructionForGeneration * p = (cPtr_incDecNoOVFInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_incDecNoOVFInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @incDecNoOVFInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_incDecNoOVFInstructionForGeneration::cPtr_incDecNoOVFInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mReceiverCppName,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                    const GALGAS_lstringlist & in_mStructAttributeList,
                                                                                    const GALGAS_incDecKind & in_mKind
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
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

acPtr_class * cPtr_incDecNoOVFInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_incDecNoOVFInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverCppName, mProperty_mReceiverType, mProperty_mStructAttributeList, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ("incDecNoOVFInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  const GALGAS_incDecNoOVFInstructionForGeneration * p = (const GALGAS_incDecNoOVFInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::objectCompare (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak & GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::operator = (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (const GALGAS_incDecNoOVFInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::bang_incDecNoOVFInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_incDecNoOVFInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_incDecNoOVFInstructionForGeneration) ;
      result = GALGAS_incDecNoOVFInstructionForGeneration ((cPtr_incDecNoOVFInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @incDecNoOVFInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ("incDecNoOVFInstructionForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_incDecNoOVFInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_incDecNoOVFInstructionForGeneration_2D_weak GALGAS_incDecNoOVFInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_incDecNoOVFInstructionForGeneration_2D_weak result ;
  const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak * p = (const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_incDecNoOVFInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("incDecNoOVFInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind::GALGAS_ifExpressionKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::class_func_regularExp (const GALGAS_semanticExpressionAST & inAssociatedValue0,
                                                                        const GALGAS_location & inAssociatedValue1
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_regularExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_ifExpressionKind_2D_regularExp (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::class_func_letExp (const GALGAS_lstring & inAssociatedValue0,
                                                                    const GALGAS_semanticExpressionAST & inAssociatedValue1,
                                                                    const GALGAS_location & inAssociatedValue2,
                                                                    const GALGAS_lstring & inAssociatedValue3
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  result.mEnum = Enumeration::enum_letExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_ifExpressionKind_2D_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::method_extractRegularExp (GALGAS_semanticExpressionAST & outAssociatedValue_exp,
                                                        GALGAS_location & outAssociatedValue_endOfExp,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regularExp) {
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.regularExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_ifExpressionKind_2D_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::method_extractLetExp (GALGAS_lstring & outAssociatedValue_constantName,
                                                    GALGAS_semanticExpressionAST & outAssociatedValue_exp,
                                                    GALGAS_location & outAssociatedValue_endOfExp,
                                                    GALGAS_lstring & outAssociatedValue_typeName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letExp) {
    outAssociatedValue_constantName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_endOfExp.drop () ;
    outAssociatedValue_typeName.drop () ;
    String s ;
    s.appendCString ("method @ifExpressionKind.letExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_ifExpressionKind_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_constantName = ptr->mProperty_constantName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_endOfExp = ptr->mProperty_endOfExp ;
    outAssociatedValue_typeName = ptr->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_regularExp_3F_ GALGAS_ifExpressionKind::getter_getRegularExp (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionKind_2D_regularExp_3F_ result ;
  if (mEnum == Enumeration::enum_regularExp) {
    const auto ptr = (const GALGAS_ifExpressionKind_2D_regularExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_ifExpressionKind_2D_regularExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::getAssociatedValuesFor_regularExp (GALGAS_semanticExpressionAST & out_exp,
                                                                 GALGAS_location & out_endOfExp) const {
  const auto ptr = (const GALGAS_ifExpressionKind_2D_regularExp *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind_2D_letExp_3F_ GALGAS_ifExpressionKind::getter_getLetExp (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionKind_2D_letExp_3F_ result ;
  if (mEnum == Enumeration::enum_letExp) {
    const auto ptr = (const GALGAS_ifExpressionKind_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_ifExpressionKind_2D_letExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::getAssociatedValuesFor_letExp (GALGAS_lstring & out_constantName,
                                                             GALGAS_semanticExpressionAST & out_exp,
                                                             GALGAS_location & out_endOfExp,
                                                             GALGAS_lstring & out_typeName) const {
  const auto ptr = (const GALGAS_ifExpressionKind_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
  out_constantName = ptr->mProperty_constantName ;
  out_exp = ptr->mProperty_exp ;
  out_endOfExp = ptr->mProperty_endOfExp ;
  out_typeName = ptr->mProperty_typeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifExpressionKind [3] = {
  "(not built)",
  "regularExp",
  "letExp"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifExpressionKind::getter_isRegularExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regularExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifExpressionKind::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionKind::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifExpressionKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifExpressionKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionKind generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionKind ("ifExpressionKind",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionKind::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionKind result ;
  const GALGAS_ifExpressionKind * p = (const GALGAS_ifExpressionKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ifExpressionList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ifExpressionList : public cCollectionElement {
  public: GALGAS_ifExpressionList_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionKind & in_mExpression
                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifExpressionList::cCollectionElement_ifExpressionList (const GALGAS_ifExpressionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ifExpressionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ifExpressionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ifExpressionList (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ifExpressionList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList::GALGAS_ifExpressionList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList::GALGAS_ifExpressionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ifExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_ifExpressionList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::enterElement (const GALGAS_ifExpressionList_2D_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifExpressionList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::class_func_listWithValue (const GALGAS_ifExpressionKind & inOperand0
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ifExpressionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ifExpressionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                         const GALGAS_ifExpressionKind & in_mExpression
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_ifExpressionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifExpressionList (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::addAssign_operation (const GALGAS_ifExpressionKind & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_append (const GALGAS_ifExpressionKind inOperand0,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_insertAtIndex (const GALGAS_ifExpressionKind inOperand0,
                                                    const GALGAS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ifExpressionList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_ifExpressionList::setter_removeAtIndex (GALGAS_ifExpressionKind & outOperand0,
                                                    const GALGAS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
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

void GALGAS_ifExpressionList::setter_popFirst (GALGAS_ifExpressionKind & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_popLast (GALGAS_ifExpressionKind & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::method_first (GALGAS_ifExpressionKind & outOperand0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::method_last (GALGAS_ifExpressionKind & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::add_operation (const GALGAS_ifExpressionList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifExpressionList result = GALGAS_ifExpressionList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::plusAssign_operation (const GALGAS_ifExpressionList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifExpressionList::setter_setMExpressionAtIndex (GALGAS_ifExpressionKind inOperand,
                                                            GALGAS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind GALGAS_ifExpressionList::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifExpressionList * p = (cCollectionElement_ifExpressionList *) attributes.ptr () ;
  GALGAS_ifExpressionKind result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ifExpressionList::cEnumerator_ifExpressionList (const GALGAS_ifExpressionList & inEnumeratedObject,
                                                            const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList_2D_element cEnumerator_ifExpressionList::current (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionKind cEnumerator_ifExpressionList::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifExpressionList * p = (const cCollectionElement_ifExpressionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifExpressionList) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ifExpressionList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifExpressionList ("ifExpressionList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifExpressionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifExpressionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifExpressionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifExpressionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifExpressionList::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifExpressionList result ;
  const GALGAS_ifExpressionList * p = (const GALGAS_ifExpressionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifExpressionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifExpressionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_mEndOf_5F_then_5F_branch.printNonNullClassInstanceProperties ("mEndOf_then_branch") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
    mProperty_mEndOf_5F_if_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_if_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST::objectCompare (const GALGAS_ifInstructionAST & inOperand) const {
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

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_ifExpressionList & in_mExpressions,
                              const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                              const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                              const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GALGAS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_ifExpressionList & in_mExpressions,
                                               const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                               const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                               const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                               const GALGAS_location & in_mEndOf_5F_if_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST::GALGAS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                 const GALGAS_ifExpressionList & in_mExpressions,
                                                                 const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                                                 const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                                                 const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                                                 const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionAST (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifExpressionList GALGAS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ifExpressionList () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_then_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_then_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_ifInstructionAST::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_ifExpressionList & in_mExpressions,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_then_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_then_5F_branch,
                                              const GALGAS_semanticInstructionListAST & in_m_5F_else_5F_instructionList,
                                              const GALGAS_location & in_mEndOf_5F_if_5F_instruction
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_mEndOf_5F_then_5F_branch (),
mProperty_m_5F_else_5F_instructionList (),
mProperty_mEndOf_5F_if_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

void cPtr_ifInstructionAST::description (String & ioString,
                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_then_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_if_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST result ;
  const GALGAS_ifInstructionAST * p = (const GALGAS_ifInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionAST_2D_weak::objectCompare (const GALGAS_ifInstructionAST_2D_weak & inOperand) const {
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

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak & GALGAS_ifInstructionAST_2D_weak::operator = (const GALGAS_ifInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak::GALGAS_ifInstructionAST_2D_weak (const GALGAS_ifInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST GALGAS_ifInstructionAST_2D_weak::bang_ifInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GALGAS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ("ifInstructionAST-weak",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionAST_2D_weak GALGAS_ifInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionAST_2D_weak result ;
  const GALGAS_ifInstructionAST_2D_weak * p = (const GALGAS_ifInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration::GALGAS_ifTestForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_regular (const GALGAS_semanticExpressionForGeneration & inAssociatedValue0
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_regular ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_ifTestForGeneration_2D_regular (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_letExp (const GALGAS_string & inAssociatedValue0,
                                                                          const GALGAS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                          const GALGAS_unifiedTypeMapEntry & inAssociatedValue2,
                                                                          const GALGAS_unifiedTypeMapEntry & inAssociatedValue3
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_letExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_ifTestForGeneration_2D_letExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::class_func_optionalExp (const GALGAS_string & inAssociatedValue0,
                                                                               const GALGAS_semanticExpressionForGeneration & inAssociatedValue1,
                                                                               const GALGAS_unifiedTypeMapEntry & inAssociatedValue2
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  result.mEnum = Enumeration::enum_optionalExp ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GALGAS_ifTestForGeneration_2D_optionalExp (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_extractRegular (GALGAS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_regular) {
    outAssociatedValue_exp.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.regular invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_ifTestForGeneration_2D_regular *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_extractLetExp (GALGAS_string & outAssociatedValue_targetVarCppName,
                                                       GALGAS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                       GALGAS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                       GALGAS_unifiedTypeMapEntry & outAssociatedValue_testType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_letExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    outAssociatedValue_testType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.letExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_ifTestForGeneration_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
    outAssociatedValue_testType = ptr->mProperty_testType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::method_extractOptionalExp (GALGAS_string & outAssociatedValue_targetVarCppName,
                                                            GALGAS_semanticExpressionForGeneration & outAssociatedValue_exp,
                                                            GALGAS_unifiedTypeMapEntry & outAssociatedValue_targetType,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_optionalExp) {
    outAssociatedValue_targetVarCppName.drop () ;
    outAssociatedValue_exp.drop () ;
    outAssociatedValue_targetType.drop () ;
    String s ;
    s.appendCString ("method @ifTestForGeneration.optionalExp invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GALGAS_ifTestForGeneration_2D_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetVarCppName = ptr->mProperty_targetVarCppName ;
    outAssociatedValue_exp = ptr->mProperty_exp ;
    outAssociatedValue_targetType = ptr->mProperty_targetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration_2D_regular_3F_ GALGAS_ifTestForGeneration::getter_getRegular (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestForGeneration_2D_regular_3F_ result ;
  if (mEnum == Enumeration::enum_regular) {
    const auto ptr = (const GALGAS_ifTestForGeneration_2D_regular *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_ifTestForGeneration_2D_regular (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::getAssociatedValuesFor_regular (GALGAS_semanticExpressionForGeneration & out_exp) const {
  const auto ptr = (const GALGAS_ifTestForGeneration_2D_regular *) mAssociatedValues.associatedValuesPointer () ;
  out_exp = ptr->mProperty_exp ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration_2D_letExp_3F_ GALGAS_ifTestForGeneration::getter_getLetExp (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestForGeneration_2D_letExp_3F_ result ;
  if (mEnum == Enumeration::enum_letExp) {
    const auto ptr = (const GALGAS_ifTestForGeneration_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_ifTestForGeneration_2D_letExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::getAssociatedValuesFor_letExp (GALGAS_string & out_targetVarCppName,
                                                                GALGAS_semanticExpressionForGeneration & out_exp,
                                                                GALGAS_unifiedTypeMapEntry & out_targetType,
                                                                GALGAS_unifiedTypeMapEntry & out_testType) const {
  const auto ptr = (const GALGAS_ifTestForGeneration_2D_letExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
  out_testType = ptr->mProperty_testType ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration_2D_optionalExp_3F_ GALGAS_ifTestForGeneration::getter_getOptionalExp (UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestForGeneration_2D_optionalExp_3F_ result ;
  if (mEnum == Enumeration::enum_optionalExp) {
    const auto ptr = (const GALGAS_ifTestForGeneration_2D_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
    result = GALGAS_ifTestForGeneration_2D_optionalExp (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::getAssociatedValuesFor_optionalExp (GALGAS_string & out_targetVarCppName,
                                                                     GALGAS_semanticExpressionForGeneration & out_exp,
                                                                     GALGAS_unifiedTypeMapEntry & out_targetType) const {
  const auto ptr = (const GALGAS_ifTestForGeneration_2D_optionalExp *) mAssociatedValues.associatedValuesPointer () ;
  out_targetVarCppName = ptr->mProperty_targetVarCppName ;
  out_exp = ptr->mProperty_exp ;
  out_targetType = ptr->mProperty_targetType ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_ifTestForGeneration [4] = {
  "(not built)",
  "regular",
  "letExp",
  "optionalExp"
} ;

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isRegular (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_regular == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isLetExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_letExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_ifTestForGeneration::getter_isOptionalExp (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (Enumeration::invalid != mEnum, Enumeration::enum_optionalExp == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestForGeneration::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<enum @ifTestForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_ifTestForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifTestForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestForGeneration ("ifTestForGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifTestForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifTestForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ifTestForGeneration result ;
  const GALGAS_ifTestForGeneration * p = (const GALGAS_ifTestForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifTestForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@ifTestListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_ifTestListForGeneration : public cCollectionElement {
  public: GALGAS_ifTestListForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestForGeneration & in_mExpression
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestForGeneration & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ifTestListForGeneration::cCollectionElement_ifTestListForGeneration (const GALGAS_ifTestListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ifTestListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ifTestListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ifTestListForGeneration (mObject.mProperty_mExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_ifTestListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExpression" ":") ;
  mObject.mProperty_mExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration::GALGAS_ifTestListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration::GALGAS_ifTestListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_ifTestListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::enterElement (const GALGAS_ifTestListForGeneration_2D_element & inValue,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::class_func_listWithValue (const GALGAS_ifTestForGeneration & inOperand0
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_ifTestListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ifTestListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_ifTestForGeneration & in_mExpression
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_ifTestListForGeneration (in_mExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::addAssign_operation (const GALGAS_ifTestForGeneration & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::setter_append (const GALGAS_ifTestForGeneration inOperand0,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::setter_insertAtIndex (const GALGAS_ifTestForGeneration inOperand0,
                                                           const GALGAS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_ifTestListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_ifTestListForGeneration::setter_removeAtIndex (GALGAS_ifTestForGeneration & outOperand0,
                                                           const GALGAS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mExpression ;
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

void GALGAS_ifTestListForGeneration::setter_popFirst (GALGAS_ifTestForGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::setter_popLast (GALGAS_ifTestForGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::method_first (GALGAS_ifTestForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::method_last (GALGAS_ifTestForGeneration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::add_operation (const GALGAS_ifTestListForGeneration & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_ifTestListForGeneration result = GALGAS_ifTestListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::plusAssign_operation (const GALGAS_ifTestListForGeneration inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_ifTestListForGeneration::setter_setMExpressionAtIndex (GALGAS_ifTestForGeneration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration GALGAS_ifTestListForGeneration::getter_mExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ifTestListForGeneration * p = (cCollectionElement_ifTestListForGeneration *) attributes.ptr () ;
  GALGAS_ifTestForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
    result = p->mObject.mProperty_mExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_ifTestListForGeneration::cEnumerator_ifTestListForGeneration (const GALGAS_ifTestListForGeneration & inEnumeratedObject,
                                                                          const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration_2D_element cEnumerator_ifTestListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_ifTestForGeneration cEnumerator_ifTestListForGeneration::current_mExpression (LOCATION_ARGS) const {
  const cCollectionElement_ifTestListForGeneration * p = (const cCollectionElement_ifTestListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ifTestListForGeneration) ;
  return p->mObject.mProperty_mExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @ifTestListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifTestListForGeneration ("ifTestListForGeneration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifTestListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifTestListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifTestListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifTestListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifTestListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_ifTestListForGeneration result ;
  const GALGAS_ifTestListForGeneration * p = (const GALGAS_ifTestListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifTestListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifTestListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @ifInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_ifInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
    mProperty_m_5F_then_5F_instructionList.printNonNullClassInstanceProperties ("m_then_instructionList") ;
    mProperty_m_5F_else_5F_instructionList.printNonNullClassInstanceProperties ("m_else_instructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionForGeneration::objectCompare (const GALGAS_ifInstructionForGeneration & inOperand) const {
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

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_ifTestListForGeneration & in_mExpressions,
                      const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                      const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->ifInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList, inCompiler) ;
  const GALGAS_ifInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionForGeneration::
ifInstructionForGeneration_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                 const GALGAS_ifTestListForGeneration & in_mExpressions,
                                                 const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                 const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration::GALGAS_ifInstructionForGeneration (const cPtr_ifInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                     const GALGAS_ifTestListForGeneration & in_mExpressions,
                                                                                     const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                                     const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_ifInstructionForGeneration (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_ifInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifTestListForGeneration GALGAS_ifInstructionForGeneration::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ifTestListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_ifInstructionForGeneration::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_ifInstructionForGeneration * p = (cPtr_ifInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionForGeneration) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_ifInstructionForGeneration::cPtr_ifInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                  const GALGAS_ifTestListForGeneration & in_mExpressions,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_then_5F_instructionList,
                                                                  const GALGAS_semanticInstructionListForGeneration & in_m_5F_else_5F_instructionList
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (),
mProperty_mExpressions (),
mProperty_m_5F_then_5F_instructionList (),
mProperty_m_5F_else_5F_instructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_ifInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

void cPtr_ifInstructionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@ifInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_then_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_else_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_ifInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_m_5F_else_5F_instructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration ("ifInstructionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration result ;
  const GALGAS_ifInstructionForGeneration * p = (const GALGAS_ifInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_ifInstructionForGeneration_2D_weak::objectCompare (const GALGAS_ifInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_ifInstructionForGeneration_2D_weak::GALGAS_ifInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration_2D_weak & GALGAS_ifInstructionForGeneration_2D_weak::operator = (const GALGAS_ifInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration_2D_weak::GALGAS_ifInstructionForGeneration_2D_weak (const GALGAS_ifInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration_2D_weak GALGAS_ifInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration GALGAS_ifInstructionForGeneration_2D_weak::bang_ifInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_ifInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionForGeneration) ;
      result = GALGAS_ifInstructionForGeneration ((cPtr_ifInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @ifInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ifInstructionForGeneration_2D_weak ("ifInstructionForGeneration-weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ifInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ifInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ifInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ifInstructionForGeneration_2D_weak GALGAS_ifInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ifInstructionForGeneration_2D_weak result ;
  const GALGAS_ifInstructionForGeneration_2D_weak * p = (const GALGAS_ifInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_ifInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ifInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ("localVariableOrConstantDeclarationWithAssignmentAST-weak",
                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak & GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (const GALGAS_undefinedLocalConstantDeclarationAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::bang_undefinedLocalConstantDeclarationAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GALGAS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ("undefinedLocalConstantDeclarationAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationAST_2D_weak GALGAS_undefinedLocalConstantDeclarationAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationAST_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak & GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (const GALGAS_localConstantDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::bang_localConstantDeclarationWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GALGAS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localConstantDeclarationWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ("localConstantDeclarationWithAssignmentAST-weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localConstantDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localConstantDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
              const GALGAS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationForGeneration_init_21__21_ (in_mTargetType, in_mCppVariableName, inCompiler) ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationForGeneration::
undefinedLocalConstantDeclarationForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                             const GALGAS_string & in_mCppVariableName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration::GALGAS_undefinedLocalConstantDeclarationForGeneration (const cPtr_undefinedLocalConstantDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                             const GALGAS_string & in_mCppVariableName
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_undefinedLocalConstantDeclarationForGeneration (in_mTargetType, in_mCppVariableName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_undefinedLocalConstantDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationForGeneration * p = (cPtr_undefinedLocalConstantDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationForGeneration::cPtr_undefinedLocalConstantDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                          const GALGAS_string & in_mCppVariableName
                                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mTargetType (),
mProperty_mCppVariableName () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_undefinedLocalConstantDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

void cPtr_undefinedLocalConstantDeclarationForGeneration::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_undefinedLocalConstantDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationForGeneration (mProperty_mTargetType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ("undefinedLocalConstantDeclarationForGeneration",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak & GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::operator = (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (const GALGAS_undefinedLocalConstantDeclarationForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::bang_undefinedLocalConstantDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_undefinedLocalConstantDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationForGeneration) ;
      result = GALGAS_undefinedLocalConstantDeclarationForGeneration ((cPtr_undefinedLocalConstantDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @undefinedLocalConstantDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ("undefinedLocalConstantDeclarationForGeneration-weak",
                                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak result ;
  const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak * p = (const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_undefinedLocalConstantDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("undefinedLocalConstantDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::objectCompare (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & inOperand) const {
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

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak & GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::operator = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::bang_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
      result = GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ((cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak",
                                                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak result ;
  const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak * p = (const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@logListAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_logListAST : public cCollectionElement {
  public: GALGAS_logListAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                         const GALGAS_semanticExpressionAST & in_mLogExpression
                                         COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_logListAST (const GALGAS_logListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GALGAS_lstring & in_mLogMessage,
                                                              const GALGAS_semanticExpressionAST & in_mLogExpression
                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLogMessage, in_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_logListAST::cCollectionElement_logListAST (const GALGAS_logListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLogMessage, inElement.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_logListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_logListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_logListAST (mObject.mProperty_mLogMessage, mObject.mProperty_mLogExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_logListAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogMessage" ":") ;
  mObject.mProperty_mLogMessage.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLogExpression" ":") ;
  mObject.mProperty_mLogExpression.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST::GALGAS_logListAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST::GALGAS_logListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_logListAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::enterElement (const GALGAS_logListAST_2D_element & inValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::class_func_listWithValue (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_semanticExpressionAST & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_logListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_logListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GALGAS_lstring & in_mLogMessage,
                                                   const GALGAS_semanticExpressionAST & in_mLogExpression
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_logListAST (in_mLogMessage,
                                                in_mLogExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                             const GALGAS_semanticExpressionAST & inOperand1
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::setter_append (const GALGAS_lstring inOperand0,
                                       const GALGAS_semanticExpressionAST inOperand1,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                              const GALGAS_semanticExpressionAST inOperand1,
                                              const GALGAS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_logListAST (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_logListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                              GALGAS_semanticExpressionAST & outOperand1,
                                              const GALGAS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_logListAST) ;
        outOperand0 = p->mObject.mProperty_mLogMessage ;
        outOperand1 = p->mObject.mProperty_mLogExpression ;
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

void GALGAS_logListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                         GALGAS_semanticExpressionAST & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                        GALGAS_semanticExpressionAST & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::method_first (GALGAS_lstring & outOperand0,
                                      GALGAS_semanticExpressionAST & outOperand1,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::method_last (GALGAS_lstring & outOperand0,
                                     GALGAS_semanticExpressionAST & outOperand1,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    outOperand0 = p->mObject.mProperty_mLogMessage ;
    outOperand1 = p->mObject.mProperty_mLogExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::add_operation (const GALGAS_logListAST & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_logListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_logListAST result = GALGAS_logListAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::plusAssign_operation (const GALGAS_logListAST inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::setter_setMLogMessageAtIndex (GALGAS_lstring inOperand,
                                                      GALGAS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogMessage = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_logListAST::getter_mLogMessageAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogMessage ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_logListAST::setter_setMLogExpressionAtIndex (GALGAS_semanticExpressionAST inOperand,
                                                         GALGAS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLogExpression = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_logListAST::getter_mLogExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_logListAST * p = (cCollectionElement_logListAST *) attributes.ptr () ;
  GALGAS_semanticExpressionAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_logListAST) ;
    result = p->mObject.mProperty_mLogExpression ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_logListAST::cEnumerator_logListAST (const GALGAS_logListAST & inEnumeratedObject,
                                                const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST_2D_element cEnumerator_logListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_logListAST::current_mLogMessage (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogMessage ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST cEnumerator_logListAST::current_mLogExpression (LOCATION_ARGS) const {
  const cCollectionElement_logListAST * p = (const cCollectionElement_logListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_logListAST) ;
  return p->mObject.mProperty_mLogExpression ;
}




//--------------------------------------------------------------------------------------------------
//
//     @logListAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logListAST ("logListAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logListAST::extractObject (const GALGAS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GALGAS_logListAST result ;
  const GALGAS_logListAST * p = (const GALGAS_logListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @logInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLogList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_logInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLogList.printNonNullClassInstanceProperties ("mLogList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logInstructionAST::objectCompare (const GALGAS_logInstructionAST & inOperand) const {
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

GALGAS_logInstructionAST::GALGAS_logInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_logInstructionAST GALGAS_logInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_logListAST & in_mLogList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_logInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_logInstructionAST (inCompiler COMMA_THERE)) ;
  object->logInstructionAST_init_21__21_ (in_mInstructionLocation, in_mLogList, inCompiler) ;
  const GALGAS_logInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_logInstructionAST::
logInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                const GALGAS_logListAST & in_mLogList,
                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST::GALGAS_logInstructionAST (const cPtr_logInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_logInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST GALGAS_logInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_logListAST & in_mLogList
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_logInstructionAST (in_mInstructionLocation, in_mLogList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logListAST GALGAS_logInstructionAST::readProperty_mLogList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_logListAST () ;
  }else{
    cPtr_logInstructionAST * p = (cPtr_logInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_logInstructionAST) ;
    return p->mProperty_mLogList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @logInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_logInstructionAST::cPtr_logInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_logListAST & in_mLogList
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLogList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLogList = in_mLogList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_logInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

void cPtr_logInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@logInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLogList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_logInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_logInstructionAST (mProperty_mInstructionLocation, mProperty_mLogList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @logInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST ("logInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST GALGAS_logInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionAST result ;
  const GALGAS_logInstructionAST * p = (const GALGAS_logInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logInstructionAST_2D_weak::objectCompare (const GALGAS_logInstructionAST_2D_weak & inOperand) const {
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

GALGAS_logInstructionAST_2D_weak::GALGAS_logInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST_2D_weak & GALGAS_logInstructionAST_2D_weak::operator = (const GALGAS_logInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST_2D_weak::GALGAS_logInstructionAST_2D_weak (const GALGAS_logInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST_2D_weak GALGAS_logInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_logInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST GALGAS_logInstructionAST_2D_weak::bang_logInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionAST) ;
      result = GALGAS_logInstructionAST ((cPtr_logInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionAST_2D_weak ("logInstructionAST-weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionAST_2D_weak GALGAS_logInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionAST_2D_weak result ;
  const GALGAS_logInstructionAST_2D_weak * p = (const GALGAS_logInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_logInstructionForGeneration_2D_weak::objectCompare (const GALGAS_logInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_logInstructionForGeneration_2D_weak::GALGAS_logInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak & GALGAS_logInstructionForGeneration_2D_weak::operator = (const GALGAS_logInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak::GALGAS_logInstructionForGeneration_2D_weak (const GALGAS_logInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak GALGAS_logInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration GALGAS_logInstructionForGeneration_2D_weak::bang_logInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_logInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionForGeneration) ;
      result = GALGAS_logInstructionForGeneration ((cPtr_logInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @logInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2D_weak ("logInstructionForGeneration-weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_logInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_logInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_logInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_logInstructionForGeneration_2D_weak GALGAS_logInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_logInstructionForGeneration_2D_weak result ;
  const GALGAS_logInstructionForGeneration_2D_weak * p = (const GALGAS_logInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_logInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("logInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithVariantAST::objectCompare (const GALGAS_loopInstructionWithVariantAST & inOperand) const {
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

GALGAS_loopInstructionWithVariantAST::GALGAS_loopInstructionWithVariantAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST GALGAS_loopInstructionWithVariantAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                              const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                              const GALGAS_location & in_mEndOfVariantExpression,
                                              const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                              const GALGAS_location & in_mEndOfFirstInstructions,
                                              const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                              const GALGAS_location & in_mEndOfLoopExpression,
                                              const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                              const GALGAS_location & in_mEndOfSecondInstructions,
                                              const GALGAS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GALGAS_loopInstructionWithVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::
loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                                            const GALGAS_location & in_mEndOfVariantExpression,
                                                                            const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                            const GALGAS_location & in_mEndOfFirstInstructions,
                                                                            const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                            const GALGAS_location & in_mEndOfLoopExpression,
                                                                            const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                            const GALGAS_location & in_mEndOfSecondInstructions,
                                                                            const GALGAS_location & in_mEndOfLoopInstruction,
                                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST::GALGAS_loopInstructionWithVariantAST (const cPtr_loopInstructionWithVariantAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST GALGAS_loopInstructionWithVariantAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                           const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                                                           const GALGAS_location & in_mEndOfVariantExpression,
                                                                                           const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                           const GALGAS_location & in_mEndOfFirstInstructions,
                                                                                           const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                                           const GALGAS_location & in_mEndOfLoopExpression,
                                                                                           const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                           const GALGAS_location & in_mEndOfSecondInstructions,
                                                                                           const GALGAS_location & in_mEndOfLoopInstruction
                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithVariantAST (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_loopInstructionWithVariantAST::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantAST::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_loopInstructionWithVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_loopInstructionWithVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_loopInstructionWithVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (const GALGAS_location & in_mInstructionLocation,
                                                                        const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                                        const GALGAS_location & in_mEndOfVariantExpression,
                                                                        const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                        const GALGAS_location & in_mEndOfFirstInstructions,
                                                                        const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                        const GALGAS_location & in_mEndOfLoopExpression,
                                                                        const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                        const GALGAS_location & in_mEndOfSecondInstructions,
                                                                        const GALGAS_location & in_mEndOfLoopInstruction
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

void cPtr_loopInstructionWithVariantAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithVariantAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ("loopInstructionWithVariantAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST GALGAS_loopInstructionWithVariantAST::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantAST result ;
  const GALGAS_loopInstructionWithVariantAST * p = (const GALGAS_loopInstructionWithVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithVariantAST_2D_weak::objectCompare (const GALGAS_loopInstructionWithVariantAST_2D_weak & inOperand) const {
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

GALGAS_loopInstructionWithVariantAST_2D_weak::GALGAS_loopInstructionWithVariantAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST_2D_weak & GALGAS_loopInstructionWithVariantAST_2D_weak::operator = (const GALGAS_loopInstructionWithVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST_2D_weak::GALGAS_loopInstructionWithVariantAST_2D_weak (const GALGAS_loopInstructionWithVariantAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST_2D_weak GALGAS_loopInstructionWithVariantAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST GALGAS_loopInstructionWithVariantAST_2D_weak::bang_loopInstructionWithVariantAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loopInstructionWithVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantAST) ;
      result = GALGAS_loopInstructionWithVariantAST ((cPtr_loopInstructionWithVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2D_weak ("loopInstructionWithVariantAST-weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithVariantAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithVariantAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithVariantAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantAST_2D_weak GALGAS_loopInstructionWithVariantAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantAST_2D_weak result ;
  const GALGAS_loopInstructionWithVariantAST_2D_weak * p = (const GALGAS_loopInstructionWithVariantAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithVariantAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithVariantForGeneration_2D_weak::objectCompare (const GALGAS_loopInstructionWithVariantForGeneration_2D_weak & inOperand) const {
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

GALGAS_loopInstructionWithVariantForGeneration_2D_weak::GALGAS_loopInstructionWithVariantForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration_2D_weak & GALGAS_loopInstructionWithVariantForGeneration_2D_weak::operator = (const GALGAS_loopInstructionWithVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration_2D_weak::GALGAS_loopInstructionWithVariantForGeneration_2D_weak (const GALGAS_loopInstructionWithVariantForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration_2D_weak GALGAS_loopInstructionWithVariantForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration GALGAS_loopInstructionWithVariantForGeneration_2D_weak::bang_loopInstructionWithVariantForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loopInstructionWithVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantForGeneration) ;
      result = GALGAS_loopInstructionWithVariantForGeneration ((cPtr_loopInstructionWithVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithVariantForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2D_weak ("loopInstructionWithVariantForGeneration-weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithVariantForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithVariantForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithVariantForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithVariantForGeneration_2D_weak GALGAS_loopInstructionWithVariantForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithVariantForGeneration_2D_weak result ;
  const GALGAS_loopInstructionWithVariantForGeneration_2D_weak * p = (const GALGAS_loopInstructionWithVariantForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithVariantForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithVariantForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithoutVariantAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mEndOfFirstInstructions.printNonNullClassInstanceProperties ("mEndOfFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mEndOfLoopExpression.printNonNullClassInstanceProperties ("mEndOfLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
    mProperty_mEndOfSecondInstructions.printNonNullClassInstanceProperties ("mEndOfSecondInstructions") ;
    mProperty_mEndOfLoopInstruction.printNonNullClassInstanceProperties ("mEndOfLoopInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithoutVariantAST::objectCompare (const GALGAS_loopInstructionWithoutVariantAST & inOperand) const {
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

GALGAS_loopInstructionWithoutVariantAST::GALGAS_loopInstructionWithoutVariantAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST GALGAS_loopInstructionWithoutVariantAST::
init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                      const GALGAS_location & in_mEndOfFirstInstructions,
                                      const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                      const GALGAS_location & in_mEndOfLoopExpression,
                                      const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                      const GALGAS_location & in_mEndOfSecondInstructions,
                                      const GALGAS_location & in_mEndOfLoopInstruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GALGAS_loopInstructionWithoutVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::
loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                                       const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                       const GALGAS_location & in_mEndOfFirstInstructions,
                                                                       const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                       const GALGAS_location & in_mEndOfLoopExpression,
                                                                       const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                       const GALGAS_location & in_mEndOfSecondInstructions,
                                                                       const GALGAS_location & in_mEndOfLoopInstruction,
                                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST::GALGAS_loopInstructionWithoutVariantAST (const cPtr_loopInstructionWithoutVariantAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST GALGAS_loopInstructionWithoutVariantAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                 const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                                                 const GALGAS_location & in_mEndOfFirstInstructions,
                                                                                                 const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                                                 const GALGAS_location & in_mEndOfLoopExpression,
                                                                                                 const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                                                 const GALGAS_location & in_mEndOfSecondInstructions,
                                                                                                 const GALGAS_location & in_mEndOfLoopInstruction
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantAST result ;
  macroMyNew (result.mObjectPtr, cPtr_loopInstructionWithoutVariantAST (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_loopInstructionWithoutVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_loopInstructionWithoutVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListAST () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantAST class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (const GALGAS_location & in_mInstructionLocation,
                                                                              const GALGAS_semanticInstructionListAST & in_mFirstInstructions,
                                                                              const GALGAS_location & in_mEndOfFirstInstructions,
                                                                              const GALGAS_semanticExpressionAST & in_mLoopExpression,
                                                                              const GALGAS_location & in_mEndOfLoopExpression,
                                                                              const GALGAS_semanticInstructionListAST & in_mSecondInstructions,
                                                                              const GALGAS_location & in_mEndOfSecondInstructions,
                                                                              const GALGAS_location & in_mEndOfLoopInstruction
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mFirstInstructions (),
mProperty_mEndOfFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mEndOfLoopExpression (),
mProperty_mSecondInstructions (),
mProperty_mEndOfSecondInstructions (),
mProperty_mEndOfLoopInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mEndOfFirstInstructions = in_mEndOfFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mEndOfLoopExpression = in_mEndOfLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
  mProperty_mEndOfSecondInstructions = in_mEndOfSecondInstructions ;
  mProperty_mEndOfLoopInstruction = in_mEndOfLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_loopInstructionWithoutVariantAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

void cPtr_loopInstructionWithoutVariantAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithoutVariantAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfLoopInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_loopInstructionWithoutVariantAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantAST (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ("loopInstructionWithoutVariantAST",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithoutVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithoutVariantAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithoutVariantAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST GALGAS_loopInstructionWithoutVariantAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantAST result ;
  const GALGAS_loopInstructionWithoutVariantAST * p = (const GALGAS_loopInstructionWithoutVariantAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithoutVariantAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithoutVariantAST_2D_weak::objectCompare (const GALGAS_loopInstructionWithoutVariantAST_2D_weak & inOperand) const {
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

GALGAS_loopInstructionWithoutVariantAST_2D_weak::GALGAS_loopInstructionWithoutVariantAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST_2D_weak & GALGAS_loopInstructionWithoutVariantAST_2D_weak::operator = (const GALGAS_loopInstructionWithoutVariantAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST_2D_weak::GALGAS_loopInstructionWithoutVariantAST_2D_weak (const GALGAS_loopInstructionWithoutVariantAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST_2D_weak GALGAS_loopInstructionWithoutVariantAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST GALGAS_loopInstructionWithoutVariantAST_2D_weak::bang_loopInstructionWithoutVariantAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loopInstructionWithoutVariantAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantAST) ;
      result = GALGAS_loopInstructionWithoutVariantAST ((cPtr_loopInstructionWithoutVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2D_weak ("loopInstructionWithoutVariantAST-weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithoutVariantAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithoutVariantAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithoutVariantAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantAST_2D_weak GALGAS_loopInstructionWithoutVariantAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantAST_2D_weak result ;
  const GALGAS_loopInstructionWithoutVariantAST_2D_weak * p = (const GALGAS_loopInstructionWithoutVariantAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithoutVariantAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::objectCompare (const GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak & inOperand) const {
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

GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak & GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::operator = (const GALGAS_loopInstructionWithoutVariantForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak (const GALGAS_loopInstructionWithoutVariantForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::bang_loopInstructionWithoutVariantForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_loopInstructionWithoutVariantForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantForGeneration) ;
      result = GALGAS_loopInstructionWithoutVariantForGeneration ((cPtr_loopInstructionWithoutVariantForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @loopInstructionWithoutVariantForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak ("loopInstructionWithoutVariantForGeneration-weak",
                                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak result ;
  const GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak * p = (const GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_loopInstructionWithoutVariantForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("loopInstructionWithoutVariantForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @messageInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_messageInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_messageInstructionAST::objectCompare (const GALGAS_messageInstructionAST & inOperand) const {
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

GALGAS_messageInstructionAST::GALGAS_messageInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_messageInstructionAST GALGAS_messageInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_messageInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_messageInstructionAST (inCompiler COMMA_THERE)) ;
  object->messageInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_messageInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_messageInstructionAST::
messageInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_semanticExpressionAST & in_mExpression,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST::GALGAS_messageInstructionAST (const cPtr_messageInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_messageInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST GALGAS_messageInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_semanticExpressionAST & in_mExpression
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_messageInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_messageInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_messageInstructionAST * p = (cPtr_messageInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_messageInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @messageInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_messageInstructionAST::cPtr_messageInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_messageInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

void cPtr_messageInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@messageInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_messageInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_messageInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST ("messageInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_messageInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_messageInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST GALGAS_messageInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionAST result ;
  const GALGAS_messageInstructionAST * p = (const GALGAS_messageInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_messageInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_messageInstructionAST_2D_weak::objectCompare (const GALGAS_messageInstructionAST_2D_weak & inOperand) const {
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

GALGAS_messageInstructionAST_2D_weak::GALGAS_messageInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST_2D_weak & GALGAS_messageInstructionAST_2D_weak::operator = (const GALGAS_messageInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST_2D_weak::GALGAS_messageInstructionAST_2D_weak (const GALGAS_messageInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST_2D_weak GALGAS_messageInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_messageInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST GALGAS_messageInstructionAST_2D_weak::bang_messageInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_messageInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionAST) ;
      result = GALGAS_messageInstructionAST ((cPtr_messageInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionAST_2D_weak ("messageInstructionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_messageInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_messageInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionAST_2D_weak GALGAS_messageInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionAST_2D_weak result ;
  const GALGAS_messageInstructionAST_2D_weak * p = (const GALGAS_messageInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_messageInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_messageInstructionForGeneration_2D_weak::objectCompare (const GALGAS_messageInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_messageInstructionForGeneration_2D_weak::GALGAS_messageInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak & GALGAS_messageInstructionForGeneration_2D_weak::operator = (const GALGAS_messageInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak::GALGAS_messageInstructionForGeneration_2D_weak (const GALGAS_messageInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak GALGAS_messageInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration GALGAS_messageInstructionForGeneration_2D_weak::bang_messageInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_messageInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_messageInstructionForGeneration) ;
      result = GALGAS_messageInstructionForGeneration ((cPtr_messageInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @messageInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_messageInstructionForGeneration_2D_weak ("messageInstructionForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_messageInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_messageInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_messageInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_messageInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_messageInstructionForGeneration_2D_weak GALGAS_messageInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_messageInstructionForGeneration_2D_weak result ;
  const GALGAS_messageInstructionForGeneration_2D_weak * p = (const GALGAS_messageInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_messageInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("messageInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_methodCallInstructionAST_2D_weak::objectCompare (const GALGAS_methodCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_methodCallInstructionAST_2D_weak::GALGAS_methodCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak & GALGAS_methodCallInstructionAST_2D_weak::operator = (const GALGAS_methodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak::GALGAS_methodCallInstructionAST_2D_weak (const GALGAS_methodCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak GALGAS_methodCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST GALGAS_methodCallInstructionAST_2D_weak::bang_methodCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_methodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GALGAS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2D_weak ("methodCallInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionAST_2D_weak GALGAS_methodCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionAST_2D_weak result ;
  const GALGAS_methodCallInstructionAST_2D_weak * p = (const GALGAS_methodCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_methodCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_methodCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_methodCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_methodCallInstructionForGeneration_2D_weak::GALGAS_methodCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak & GALGAS_methodCallInstructionForGeneration_2D_weak::operator = (const GALGAS_methodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak::GALGAS_methodCallInstructionForGeneration_2D_weak (const GALGAS_methodCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak GALGAS_methodCallInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration GALGAS_methodCallInstructionForGeneration_2D_weak::bang_methodCallInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_methodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionForGeneration) ;
      result = GALGAS_methodCallInstructionForGeneration ((cPtr_methodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @methodCallInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2D_weak ("methodCallInstructionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_methodCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_methodCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_methodCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_methodCallInstructionForGeneration_2D_weak GALGAS_methodCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_methodCallInstructionForGeneration_2D_weak result ;
  const GALGAS_methodCallInstructionForGeneration_2D_weak * p = (const GALGAS_methodCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_methodCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("methodCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_superInitInstructionAST::objectCompare (const GALGAS_superInitInstructionAST & inOperand) const {
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

GALGAS_superInitInstructionAST::GALGAS_superInitInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_superInitInstructionAST GALGAS_superInitInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_actualOutputArgumentList & in_mActualParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionAST (inCompiler COMMA_THERE)) ;
  object->superInitInstructionAST_init_21__21_ (in_mInstructionLocation, in_mActualParameterList, inCompiler) ;
  const GALGAS_superInitInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::
superInitInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                      const GALGAS_actualOutputArgumentList & in_mActualParameterList,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST::GALGAS_superInitInstructionAST (const cPtr_superInitInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST GALGAS_superInitInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                               const GALGAS_actualOutputArgumentList & in_mActualParameterList
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionAST (in_mInstructionLocation, in_mActualParameterList COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList GALGAS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualOutputArgumentList () ;
  }else{
    cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                            const GALGAS_actualOutputArgumentList & in_mActualParameterList
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

void cPtr_superInitInstructionAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionAST (mProperty_mInstructionLocation, mProperty_mActualParameterList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST ("superInitInstructionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_superInitInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_superInitInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_superInitInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST GALGAS_superInitInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionAST result ;
  const GALGAS_superInitInstructionAST * p = (const GALGAS_superInitInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_superInitInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_superInitInstructionAST_2D_weak::objectCompare (const GALGAS_superInitInstructionAST_2D_weak & inOperand) const {
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

GALGAS_superInitInstructionAST_2D_weak::GALGAS_superInitInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST_2D_weak & GALGAS_superInitInstructionAST_2D_weak::operator = (const GALGAS_superInitInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST_2D_weak::GALGAS_superInitInstructionAST_2D_weak (const GALGAS_superInitInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST_2D_weak GALGAS_superInitInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_superInitInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST GALGAS_superInitInstructionAST_2D_weak::bang_superInitInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_superInitInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionAST) ;
      result = GALGAS_superInitInstructionAST ((cPtr_superInitInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2D_weak ("superInitInstructionAST-weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_superInitInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_superInitInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_superInitInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionAST_2D_weak GALGAS_superInitInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionAST_2D_weak result ;
  const GALGAS_superInitInstructionAST_2D_weak * p = (const GALGAS_superInitInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_superInitInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mSuperInitializerSignature.printNonNullClassInstanceProperties ("mSuperInitializerSignature") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mSuperTypeName.printNonNullClassInstanceProperties ("mSuperTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_superInitInstructionForGeneration::objectCompare (const GALGAS_superInitInstructionForGeneration & inOperand) const {
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

GALGAS_superInitInstructionForGeneration::GALGAS_superInitInstructionForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration GALGAS_superInitInstructionForGeneration::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_string & in_mSuperInitializerSignature,
                      const GALGAS_semanticExpressionListForGeneration & in_mActualParameterList,
                      const GALGAS_string & in_mSuperTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superInitInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName, inCompiler) ;
  const GALGAS_superInitInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::
superInitInstructionForGeneration_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_string & in_mSuperInitializerSignature,
                                                        const GALGAS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                        const GALGAS_string & in_mSuperTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration::GALGAS_superInitInstructionForGeneration (const cPtr_superInitInstructionForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration GALGAS_superInitInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                   const GALGAS_string & in_mSuperInitializerSignature,
                                                                                                   const GALGAS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                                   const GALGAS_string & in_mSuperTypeName
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_superInitInstructionForGeneration (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_superInitInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_superInitInstructionForGeneration::readProperty_mSuperInitializerSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperInitializerSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionListForGeneration GALGAS_superInitInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_superInitInstructionForGeneration::readProperty_mSuperTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                const GALGAS_string & in_mSuperInitializerSignature,
                                                                                const GALGAS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                const GALGAS_string & in_mSuperTypeName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_superInitInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

void cPtr_superInitInstructionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@superInitInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperInitializerSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_superInitInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSuperInitializerSignature, mProperty_mActualParameterList, mProperty_mSuperTypeName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ("superInitInstructionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_superInitInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_superInitInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_superInitInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration GALGAS_superInitInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionForGeneration result ;
  const GALGAS_superInitInstructionForGeneration * p = (const GALGAS_superInitInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_superInitInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_superInitInstructionForGeneration_2D_weak::objectCompare (const GALGAS_superInitInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_superInitInstructionForGeneration_2D_weak::GALGAS_superInitInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration_2D_weak & GALGAS_superInitInstructionForGeneration_2D_weak::operator = (const GALGAS_superInitInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration_2D_weak::GALGAS_superInitInstructionForGeneration_2D_weak (const GALGAS_superInitInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration_2D_weak GALGAS_superInitInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_superInitInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration GALGAS_superInitInstructionForGeneration_2D_weak::bang_superInitInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_superInitInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionForGeneration) ;
      result = GALGAS_superInitInstructionForGeneration ((cPtr_superInitInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @superInitInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2D_weak ("superInitInstructionForGeneration-weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_superInitInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_superInitInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_superInitInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_superInitInstructionForGeneration_2D_weak GALGAS_superInitInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_superInitInstructionForGeneration_2D_weak result ;
  const GALGAS_superInitInstructionForGeneration_2D_weak * p = (const GALGAS_superInitInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_superInitInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("superInitInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procCallInstructionAST_2D_weak::objectCompare (const GALGAS_procCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_procCallInstructionAST_2D_weak::GALGAS_procCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak & GALGAS_procCallInstructionAST_2D_weak::operator = (const GALGAS_procCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak::GALGAS_procCallInstructionAST_2D_weak (const GALGAS_procCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak GALGAS_procCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_procCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST GALGAS_procCallInstructionAST_2D_weak::bang_procCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionAST) ;
      result = GALGAS_procCallInstructionAST ((cPtr_procCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2D_weak ("procCallInstructionAST-weak",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionAST_2D_weak GALGAS_procCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionAST_2D_weak result ;
  const GALGAS_procCallInstructionAST_2D_weak * p = (const GALGAS_procCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_procCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_procCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_procCallInstructionForGeneration_2D_weak::GALGAS_procCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak & GALGAS_procCallInstructionForGeneration_2D_weak::operator = (const GALGAS_procCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak::GALGAS_procCallInstructionForGeneration_2D_weak (const GALGAS_procCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak GALGAS_procCallInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration GALGAS_procCallInstructionForGeneration_2D_weak::bang_procCallInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_procCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionForGeneration) ;
      result = GALGAS_procCallInstructionForGeneration ((cPtr_procCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @procCallInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2D_weak ("procCallInstructionForGeneration-weak",
                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_procCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_procCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_procCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_procCallInstructionForGeneration_2D_weak GALGAS_procCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_procCallInstructionForGeneration_2D_weak result ;
  const GALGAS_procCallInstructionForGeneration_2D_weak * p = (const GALGAS_procCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_procCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfAssignmentInstructionAST::objectCompare (const GALGAS_selfAssignmentInstructionAST & inOperand) const {
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

GALGAS_selfAssignmentInstructionAST::GALGAS_selfAssignmentInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mSourceExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21_ (in_mInstructionLocation, in_mSourceExpression, inCompiler) ;
  const GALGAS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                           const GALGAS_semanticExpressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST::GALGAS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                         const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfAssignmentInstructionAST (in_mInstructionLocation, in_mSourceExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                      const GALGAS_semanticExpressionAST & in_mSourceExpression
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfAssignmentInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSourceExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfAssignmentInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAssignmentInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAssignmentInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST result ;
  const GALGAS_selfAssignmentInstructionAST * p = (const GALGAS_selfAssignmentInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfAssignmentInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfAssignmentInstructionAST_2D_weak::objectCompare (const GALGAS_selfAssignmentInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfAssignmentInstructionAST_2D_weak::GALGAS_selfAssignmentInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST_2D_weak & GALGAS_selfAssignmentInstructionAST_2D_weak::operator = (const GALGAS_selfAssignmentInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST_2D_weak::GALGAS_selfAssignmentInstructionAST_2D_weak (const GALGAS_selfAssignmentInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST_2D_weak GALGAS_selfAssignmentInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST GALGAS_selfAssignmentInstructionAST_2D_weak::bang_selfAssignmentInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfAssignmentInstructionAST) ;
      result = GALGAS_selfAssignmentInstructionAST ((cPtr_selfAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfAssignmentInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2D_weak ("selfAssignmentInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfAssignmentInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfAssignmentInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfAssignmentInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfAssignmentInstructionAST_2D_weak GALGAS_selfAssignmentInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfAssignmentInstructionAST_2D_weak result ;
  const GALGAS_selfAssignmentInstructionAST_2D_weak * p = (const GALGAS_selfAssignmentInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfAssignmentInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfAssignmentInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualElementsInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualElementsInstructionAST::cPtr_selfPlusEqualElementsInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualElementsInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfPlusEqualElementsInstructionAST::objectCompare (const GALGAS_selfPlusEqualElementsInstructionAST & inOperand) const {
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

GALGAS_selfPlusEqualElementsInstructionAST::GALGAS_selfPlusEqualElementsInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_actualOutputArgumentList & in_mExpressions,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualElementsInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualElementsInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualElementsInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpressions, inCompiler) ;
  const GALGAS_selfPlusEqualElementsInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualElementsInstructionAST::
selfPlusEqualElementsInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                  const GALGAS_actualOutputArgumentList & in_mExpressions,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST::GALGAS_selfPlusEqualElementsInstructionAST (const cPtr_selfPlusEqualElementsInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualElementsInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                       const GALGAS_actualOutputArgumentList & in_mExpressions
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualElementsInstructionAST (in_mInstructionLocation, in_mExpressions COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualOutputArgumentList GALGAS_selfPlusEqualElementsInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualOutputArgumentList () ;
  }else{
    cPtr_selfPlusEqualElementsInstructionAST * p = (cPtr_selfPlusEqualElementsInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualElementsInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualElementsInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualElementsInstructionAST::cPtr_selfPlusEqualElementsInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_actualOutputArgumentList & in_mExpressions
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpressions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPlusEqualElementsInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

void cPtr_selfPlusEqualElementsInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPlusEqualElementsInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPlusEqualElementsInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualElementsInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualElementsInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ("selfPlusEqualElementsInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPlusEqualElementsInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPlusEqualElementsInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualElementsInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST result ;
  const GALGAS_selfPlusEqualElementsInstructionAST * p = (const GALGAS_selfPlusEqualElementsInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPlusEqualElementsInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualElementsInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::objectCompare (const GALGAS_selfPlusEqualElementsInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::GALGAS_selfPlusEqualElementsInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST_2D_weak & GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::operator = (const GALGAS_selfPlusEqualElementsInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::GALGAS_selfPlusEqualElementsInstructionAST_2D_weak (const GALGAS_selfPlusEqualElementsInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST_2D_weak GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::bang_selfPlusEqualElementsInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfPlusEqualElementsInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualElementsInstructionAST) ;
      result = GALGAS_selfPlusEqualElementsInstructionAST ((cPtr_selfPlusEqualElementsInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualElementsInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST_2D_weak ("selfPlusEqualElementsInstructionAST-weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualElementsInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualElementsInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualElementsInstructionAST_2D_weak GALGAS_selfPlusEqualElementsInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualElementsInstructionAST_2D_weak result ;
  const GALGAS_selfPlusEqualElementsInstructionAST_2D_weak * p = (const GALGAS_selfPlusEqualElementsInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPlusEqualElementsInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualElementsInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfPlusEqualExpressionInstructionAST::objectCompare (const GALGAS_selfPlusEqualExpressionInstructionAST & inOperand) const {
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

GALGAS_selfPlusEqualExpressionInstructionAST::GALGAS_selfPlusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_selfPlusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::
selfPlusEqualExpressionInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                    const GALGAS_semanticExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST::GALGAS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                           const GALGAS_semanticExpressionAST & in_mExpression
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfPlusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfPlusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfPlusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

void cPtr_selfPlusEqualExpressionInstructionAST::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPlusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfPlusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ("selfPlusEqualExpressionInstructionAST",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPlusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPlusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST result ;
  const GALGAS_selfPlusEqualExpressionInstructionAST * p = (const GALGAS_selfPlusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPlusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak & GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_selfPlusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak (const GALGAS_selfPlusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::bang_selfPlusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfPlusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
      result = GALGAS_selfPlusEqualExpressionInstructionAST ((cPtr_selfPlusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfPlusEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak ("selfPlusEqualExpressionInstructionAST-weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfPlusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfPlusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfMinusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMinusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfMinusEqualExpressionInstructionAST::objectCompare (const GALGAS_selfMinusEqualExpressionInstructionAST & inOperand) const {
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

GALGAS_selfMinusEqualExpressionInstructionAST::GALGAS_selfMinusEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST GALGAS_selfMinusEqualExpressionInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMinusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMinusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMinusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_selfMinusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::
selfMinusEqualExpressionInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_semanticExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST::GALGAS_selfMinusEqualExpressionInstructionAST (const cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST GALGAS_selfMinusEqualExpressionInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                             const GALGAS_semanticExpressionAST & in_mExpression
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_selfMinusEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfMinusEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfMinusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMinusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMinusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                          const GALGAS_semanticExpressionAST & in_mExpression
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfMinusEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

void cPtr_selfMinusEqualExpressionInstructionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@selfMinusEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfMinusEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMinusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfMinusEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ("selfMinusEqualExpressionInstructionAST",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfMinusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfMinusEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfMinusEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST GALGAS_selfMinusEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfMinusEqualExpressionInstructionAST result ;
  const GALGAS_selfMinusEqualExpressionInstructionAST * p = (const GALGAS_selfMinusEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfMinusEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak & GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_selfMinusEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak (const GALGAS_selfMinusEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::bang_selfMinusEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfMinusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
      result = GALGAS_selfMinusEqualExpressionInstructionAST ((cPtr_selfMinusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfMinusEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak ("selfMinusEqualExpressionInstructionAST-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfMinusEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMinusEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfMulEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMulEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfMulEqualExpressionInstructionAST::objectCompare (const GALGAS_selfMulEqualExpressionInstructionAST & inOperand) const {
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

GALGAS_selfMulEqualExpressionInstructionAST::GALGAS_selfMulEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST GALGAS_selfMulEqualExpressionInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMulEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMulEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMulEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_selfMulEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::
selfMulEqualExpressionInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST::GALGAS_selfMulEqualExpressionInstructionAST (const cPtr_selfMulEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMulEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST GALGAS_selfMulEqualExpressionInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                         const GALGAS_semanticExpressionAST & in_mExpression
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_selfMulEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfMulEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfMulEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfMulEqualExpressionInstructionAST * p = (cPtr_selfMulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMulEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMulEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionAST & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfMulEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;
}

void cPtr_selfMulEqualExpressionInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfMulEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfMulEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfMulEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ("selfMulEqualExpressionInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfMulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfMulEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfMulEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST GALGAS_selfMulEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfMulEqualExpressionInstructionAST result ;
  const GALGAS_selfMulEqualExpressionInstructionAST * p = (const GALGAS_selfMulEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfMulEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMulEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_selfMulEqualExpressionInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::GALGAS_selfMulEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST_2D_weak & GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_selfMulEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::GALGAS_selfMulEqualExpressionInstructionAST_2D_weak (const GALGAS_selfMulEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST_2D_weak GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfMulEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::bang_selfMulEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfMulEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMulEqualExpressionInstructionAST) ;
      result = GALGAS_selfMulEqualExpressionInstructionAST ((cPtr_selfMulEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfMulEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2D_weak ("selfMulEqualExpressionInstructionAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfMulEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfMulEqualExpressionInstructionAST_2D_weak GALGAS_selfMulEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfMulEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_selfMulEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_selfMulEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfMulEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfMulEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfDivEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfDivEqualExpressionInstructionAST::objectCompare (const GALGAS_selfDivEqualExpressionInstructionAST & inOperand) const {
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

GALGAS_selfDivEqualExpressionInstructionAST::GALGAS_selfDivEqualExpressionInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST GALGAS_selfDivEqualExpressionInstructionAST::
init_21__21_ (const GALGAS_location & in_mInstructionLocation,
              const GALGAS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfDivEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfDivEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfDivEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GALGAS_selfDivEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::
selfDivEqualExpressionInstructionAST_init_21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                   const GALGAS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST::GALGAS_selfDivEqualExpressionInstructionAST (const cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfDivEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST GALGAS_selfDivEqualExpressionInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                         const GALGAS_semanticExpressionAST & in_mExpression
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_selfDivEqualExpressionInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_selfDivEqualExpressionInstructionAST (in_mInstructionLocation, in_mExpression COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_selfDivEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfDivEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                                                      const GALGAS_semanticExpressionAST & in_mExpression
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selfDivEqualExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

void cPtr_selfDivEqualExpressionInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfDivEqualExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selfDivEqualExpressionInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfDivEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selfDivEqualExpressionInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ("selfDivEqualExpressionInstructionAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfDivEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfDivEqualExpressionInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfDivEqualExpressionInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST GALGAS_selfDivEqualExpressionInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfDivEqualExpressionInstructionAST result ;
  const GALGAS_selfDivEqualExpressionInstructionAST * p = (const GALGAS_selfDivEqualExpressionInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfDivEqualExpressionInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::objectCompare (const GALGAS_selfDivEqualExpressionInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::GALGAS_selfDivEqualExpressionInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST_2D_weak & GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::operator = (const GALGAS_selfDivEqualExpressionInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::GALGAS_selfDivEqualExpressionInstructionAST_2D_weak (const GALGAS_selfDivEqualExpressionInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST_2D_weak GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfDivEqualExpressionInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::bang_selfDivEqualExpressionInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfDivEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfDivEqualExpressionInstructionAST) ;
      result = GALGAS_selfDivEqualExpressionInstructionAST ((cPtr_selfDivEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfDivEqualExpressionInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2D_weak ("selfDivEqualExpressionInstructionAST-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfDivEqualExpressionInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfDivEqualExpressionInstructionAST_2D_weak GALGAS_selfDivEqualExpressionInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfDivEqualExpressionInstructionAST_2D_weak result ;
  const GALGAS_selfDivEqualExpressionInstructionAST_2D_weak * p = (const GALGAS_selfDivEqualExpressionInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfDivEqualExpressionInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfDivEqualExpressionInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_setterCallInstructionAST_2D_weak::objectCompare (const GALGAS_setterCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_setterCallInstructionAST_2D_weak::GALGAS_setterCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak & GALGAS_setterCallInstructionAST_2D_weak::operator = (const GALGAS_setterCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak::GALGAS_setterCallInstructionAST_2D_weak (const GALGAS_setterCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak GALGAS_setterCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST GALGAS_setterCallInstructionAST_2D_weak::bang_setterCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionAST) ;
      result = GALGAS_setterCallInstructionAST ((cPtr_setterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ("setterCallInstructionAST-weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionAST_2D_weak GALGAS_setterCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionAST_2D_weak result ;
  const GALGAS_setterCallInstructionAST_2D_weak * p = (const GALGAS_setterCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setterCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfSetterCallInstructionAST_2D_weak::objectCompare (const GALGAS_selfSetterCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_selfSetterCallInstructionAST_2D_weak::GALGAS_selfSetterCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak & GALGAS_selfSetterCallInstructionAST_2D_weak::operator = (const GALGAS_selfSetterCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak::GALGAS_selfSetterCallInstructionAST_2D_weak (const GALGAS_selfSetterCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak GALGAS_selfSetterCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST GALGAS_selfSetterCallInstructionAST_2D_weak::bang_selfSetterCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfSetterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionAST) ;
      result = GALGAS_selfSetterCallInstructionAST ((cPtr_selfSetterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ("selfSetterCallInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionAST_2D_weak GALGAS_selfSetterCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionAST_2D_weak result ;
  const GALGAS_selfSetterCallInstructionAST_2D_weak * p = (const GALGAS_selfSetterCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfSetterCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_setterCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_setterCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_setterCallInstructionForGeneration_2D_weak::GALGAS_setterCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak & GALGAS_setterCallInstructionForGeneration_2D_weak::operator = (const GALGAS_setterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak::GALGAS_setterCallInstructionForGeneration_2D_weak (const GALGAS_setterCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak GALGAS_setterCallInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration GALGAS_setterCallInstructionForGeneration_2D_weak::bang_setterCallInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_setterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionForGeneration) ;
      result = GALGAS_setterCallInstructionForGeneration ((cPtr_setterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @setterCallInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ("setterCallInstructionForGeneration-weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_setterCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_setterCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_setterCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_setterCallInstructionForGeneration_2D_weak GALGAS_setterCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_setterCallInstructionForGeneration_2D_weak result ;
  const GALGAS_setterCallInstructionForGeneration_2D_weak * p = (const GALGAS_setterCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_setterCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("setterCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selfSetterCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_selfSetterCallInstructionForGeneration_2D_weak::GALGAS_selfSetterCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak & GALGAS_selfSetterCallInstructionForGeneration_2D_weak::operator = (const GALGAS_selfSetterCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak::GALGAS_selfSetterCallInstructionForGeneration_2D_weak (const GALGAS_selfSetterCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak GALGAS_selfSetterCallInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration GALGAS_selfSetterCallInstructionForGeneration_2D_weak::bang_selfSetterCallInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selfSetterCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionForGeneration) ;
      result = GALGAS_selfSetterCallInstructionForGeneration ((cPtr_selfSetterCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selfSetterCallInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ("selfSetterCallInstructionForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selfSetterCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selfSetterCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selfSetterCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selfSetterCallInstructionForGeneration_2D_weak GALGAS_selfSetterCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selfSetterCallInstructionForGeneration_2D_weak result ;
  const GALGAS_selfSetterCallInstructionForGeneration_2D_weak * p = (const GALGAS_selfSetterCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selfSetterCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selfSetterCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchBranchesAST' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesAST : public cCollectionElement {
  public: GALGAS_switchBranchesAST_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchBranchesAST (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                const GALGAS_location & in_mEndOfBranch
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesAST (const GALGAS_switchBranchesAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesAST::cCollectionElement_switchBranchesAST (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                            const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                                            const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                                            const GALGAS_location & in_mEndOfBranch
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mAssociatedValuesExtraction, in_mInstructions, in_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesAST::cCollectionElement_switchBranchesAST (const GALGAS_switchBranchesAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mAssociatedValuesExtraction, inElement.mProperty_mInstructions, inElement.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchBranchesAST (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mAssociatedValuesExtraction, mObject.mProperty_mInstructions, mObject.mProperty_mEndOfBranch COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchBranchesAST::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSwitchConstantList" ":") ;
  mObject.mProperty_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mAssociatedValuesExtraction" ":") ;
  mObject.mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructions" ":") ;
  mObject.mProperty_mInstructions.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranch" ":") ;
  mObject.mProperty_mEndOfBranch.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST::GALGAS_switchBranchesAST (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST::GALGAS_switchBranchesAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesAST (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::enterElement (const GALGAS_switchBranchesAST_2D_element & inValue,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesAST (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::class_func_listWithValue (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                                             const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                                             const GALGAS_semanticInstructionListAST & inOperand2,
                                                                             const GALGAS_location & inOperand3
                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchBranchesAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                          const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                          const GALGAS_switchExtractedValuesListAST & in_mAssociatedValuesExtraction,
                                                          const GALGAS_semanticInstructionListAST & in_mInstructions,
                                                          const GALGAS_location & in_mEndOfBranch
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesAST (in_mSwitchConstantList,
                                                       in_mAssociatedValuesExtraction,
                                                       in_mInstructions,
                                                       in_mEndOfBranch COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::addAssign_operation (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                    const GALGAS_switchExtractedValuesListAST & inOperand1,
                                                    const GALGAS_semanticInstructionListAST & inOperand2,
                                                    const GALGAS_location & inOperand3
                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_append (const GALGAS__5B_lstring_5D_ inOperand0,
                                              const GALGAS_switchExtractedValuesListAST inOperand1,
                                              const GALGAS_semanticInstructionListAST inOperand2,
                                              const GALGAS_location inOperand3,
                                              Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_insertAtIndex (const GALGAS__5B_lstring_5D_ inOperand0,
                                                     const GALGAS_switchExtractedValuesListAST inOperand1,
                                                     const GALGAS_semanticInstructionListAST inOperand2,
                                                     const GALGAS_location inOperand3,
                                                     const GALGAS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchBranchesAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_switchBranchesAST::setter_removeAtIndex (GALGAS__5B_lstring_5D_ & outOperand0,
                                                     GALGAS_switchExtractedValuesListAST & outOperand1,
                                                     GALGAS_semanticInstructionListAST & outOperand2,
                                                     GALGAS_location & outOperand3,
                                                     const GALGAS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
        outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
        outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
        outOperand2 = p->mObject.mProperty_mInstructions ;
        outOperand3 = p->mObject.mProperty_mEndOfBranch ;
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

void GALGAS_switchBranchesAST::setter_popFirst (GALGAS__5B_lstring_5D_ & outOperand0,
                                                GALGAS_switchExtractedValuesListAST & outOperand1,
                                                GALGAS_semanticInstructionListAST & outOperand2,
                                                GALGAS_location & outOperand3,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_popLast (GALGAS__5B_lstring_5D_ & outOperand0,
                                               GALGAS_switchExtractedValuesListAST & outOperand1,
                                               GALGAS_semanticInstructionListAST & outOperand2,
                                               GALGAS_location & outOperand3,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::method_first (GALGAS__5B_lstring_5D_ & outOperand0,
                                             GALGAS_switchExtractedValuesListAST & outOperand1,
                                             GALGAS_semanticInstructionListAST & outOperand2,
                                             GALGAS_location & outOperand3,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::method_last (GALGAS__5B_lstring_5D_ & outOperand0,
                                            GALGAS_switchExtractedValuesListAST & outOperand1,
                                            GALGAS_semanticInstructionListAST & outOperand2,
                                            GALGAS_location & outOperand3,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mAssociatedValuesExtraction ;
    outOperand2 = p->mObject.mProperty_mInstructions ;
    outOperand3 = p->mObject.mProperty_mEndOfBranch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::add_operation (const GALGAS_switchBranchesAST & inOperand,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesAST result = GALGAS_switchBranchesAST::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::plusAssign_operation (const GALGAS_switchBranchesAST inOperand,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_setMSwitchConstantListAtIndex (GALGAS__5B_lstring_5D_ inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSwitchConstantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__5B_lstring_5D_ GALGAS_switchBranchesAST::getter_mSwitchConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mSwitchConstantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_setMAssociatedValuesExtractionAtIndex (GALGAS_switchExtractedValuesListAST inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mAssociatedValuesExtraction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST GALGAS_switchBranchesAST::getter_mAssociatedValuesExtractionAtIndex (const GALGAS_uint & inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_switchExtractedValuesListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mAssociatedValuesExtraction ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_setMInstructionsAtIndex (GALGAS_semanticInstructionListAST inOperand,
                                                               GALGAS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST GALGAS_switchBranchesAST::getter_mInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_semanticInstructionListAST result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mInstructions ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesAST::setter_setMEndOfBranchAtIndex (GALGAS_location inOperand,
                                                              GALGAS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranch = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchBranchesAST::getter_mEndOfBranchAtIndex (const GALGAS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesAST * p = (cCollectionElement_switchBranchesAST *) attributes.ptr () ;
  GALGAS_location result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
    result = p->mObject.mProperty_mEndOfBranch ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchBranchesAST::cEnumerator_switchBranchesAST (const GALGAS_switchBranchesAST & inEnumeratedObject,
                                                              const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST_2D_element cEnumerator_switchBranchesAST::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS__5B_lstring_5D_ cEnumerator_switchBranchesAST::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchExtractedValuesListAST cEnumerator_switchBranchesAST::current_mAssociatedValuesExtraction (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mAssociatedValuesExtraction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListAST cEnumerator_switchBranchesAST::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mInstructions ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_location cEnumerator_switchBranchesAST::current_mEndOfBranch (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesAST * p = (const cCollectionElement_switchBranchesAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesAST) ;
  return p->mObject.mProperty_mEndOfBranch ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesAST ("switchBranchesAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchBranchesAST::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesAST result ;
  const GALGAS_switchBranchesAST * p = (const GALGAS_switchBranchesAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mEndOfSwitchExpression.printNonNullClassInstanceProperties ("mEndOfSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
    mProperty_mEndOf_5F_switch_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_switch_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionAST::objectCompare (const GALGAS_switchInstructionAST & inOperand) const {
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

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                          const GALGAS_location & in_mEndOfSwitchExpression,
                          const GALGAS_switchBranchesAST & in_mBranches,
                          const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GALGAS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                               const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                               const GALGAS_location & in_mEndOfSwitchExpression,
                                               const GALGAS_switchBranchesAST & in_mBranches,
                                               const GALGAS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST::GALGAS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                         const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                                                         const GALGAS_location & in_mEndOfSwitchExpression,
                                                                         const GALGAS_switchBranchesAST & in_mBranches,
                                                                         const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_switchInstructionAST (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOfSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOfSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesAST GALGAS_switchInstructionAST::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_switchBranchesAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GALGAS_location & in_mEndOfSwitchExpression,
                                                      const GALGAS_switchBranchesAST & in_mBranches,
                                                      const GALGAS_location & in_mEndOf_5F_switch_5F_instruction
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

void cPtr_switchInstructionAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_switch_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_switchInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST result ;
  const GALGAS_switchInstructionAST * p = (const GALGAS_switchInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionAST_2D_weak::objectCompare (const GALGAS_switchInstructionAST_2D_weak & inOperand) const {
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

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak & GALGAS_switchInstructionAST_2D_weak::operator = (const GALGAS_switchInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak::GALGAS_switchInstructionAST_2D_weak (const GALGAS_switchInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST GALGAS_switchInstructionAST_2D_weak::bang_switchInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GALGAS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ("switchInstructionAST-weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionAST_2D_weak GALGAS_switchInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionAST_2D_weak result ;
  const GALGAS_switchInstructionAST_2D_weak * p = (const GALGAS_switchInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@switchBranchesForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_switchBranchesForGeneration : public cCollectionElement {
  public: GALGAS_switchBranchesForGeneration_2D_element mObject ;

//--- Class functions
  public: cCollectionElement_switchBranchesForGeneration (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                          const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                          const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                          const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                                const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                                                const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                                                const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSwitchConstantList, in_mExtractedAssociatedValuesForGeneration, in_mEndOfBranchLocationIndex, in_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_switchBranchesForGeneration::cCollectionElement_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSwitchConstantList, inElement.mProperty_mExtractedAssociatedValuesForGeneration, inElement.mProperty_mEndOfBranchLocationIndex, inElement.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_switchBranchesForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_switchBranchesForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_switchBranchesForGeneration (mObject.mProperty_mSwitchConstantList, mObject.mProperty_mExtractedAssociatedValuesForGeneration, mObject.mProperty_mEndOfBranchLocationIndex, mObject.mProperty_mInstructions COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_switchBranchesForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSwitchConstantList" ":") ;
  mObject.mProperty_mSwitchConstantList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mExtractedAssociatedValuesForGeneration" ":") ;
  mObject.mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mEndOfBranchLocationIndex" ":") ;
  mObject.mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructions" ":") ;
  mObject.mProperty_mInstructions.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration::GALGAS_switchBranchesForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GALGAS_switchBranchesForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::enterElement (const GALGAS_switchBranchesForGeneration_2D_element & inValue,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::class_func_listWithValue (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                                                                 const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                                                                 const GALGAS_uint & inOperand2,
                                                                                                 const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_switchBranchesForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                    const GALGAS_extractedAssociatedValuesForGeneration & in_mExtractedAssociatedValuesForGeneration,
                                                                    const GALGAS_uint & in_mEndOfBranchLocationIndex,
                                                                    const GALGAS_semanticInstructionListForGeneration & in_mInstructions
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_switchBranchesForGeneration (in_mSwitchConstantList,
                                                                 in_mExtractedAssociatedValuesForGeneration,
                                                                 in_mEndOfBranchLocationIndex,
                                                                 in_mInstructions COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::addAssign_operation (const GALGAS__5B_lstring_5D_ & inOperand0,
                                                              const GALGAS_extractedAssociatedValuesForGeneration & inOperand1,
                                                              const GALGAS_uint & inOperand2,
                                                              const GALGAS_semanticInstructionListForGeneration & inOperand3
                                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_append (const GALGAS__5B_lstring_5D_ inOperand0,
                                                        const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                        const GALGAS_uint inOperand2,
                                                        const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_insertAtIndex (const GALGAS__5B_lstring_5D_ inOperand0,
                                                               const GALGAS_extractedAssociatedValuesForGeneration inOperand1,
                                                               const GALGAS_uint inOperand2,
                                                               const GALGAS_semanticInstructionListForGeneration inOperand3,
                                                               const GALGAS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_switchBranchesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_switchBranchesForGeneration::setter_removeAtIndex (GALGAS__5B_lstring_5D_ & outOperand0,
                                                               GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                               GALGAS_uint & outOperand2,
                                                               GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                               const GALGAS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
        outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
        outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
        outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
        outOperand3 = p->mObject.mProperty_mInstructions ;
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

void GALGAS_switchBranchesForGeneration::setter_popFirst (GALGAS__5B_lstring_5D_ & outOperand0,
                                                          GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                          GALGAS_uint & outOperand2,
                                                          GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_popLast (GALGAS__5B_lstring_5D_ & outOperand0,
                                                         GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                         GALGAS_uint & outOperand2,
                                                         GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::method_first (GALGAS__5B_lstring_5D_ & outOperand0,
                                                       GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                       GALGAS_uint & outOperand2,
                                                       GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::method_last (GALGAS__5B_lstring_5D_ & outOperand0,
                                                      GALGAS_extractedAssociatedValuesForGeneration & outOperand1,
                                                      GALGAS_uint & outOperand2,
                                                      GALGAS_semanticInstructionListForGeneration & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    outOperand0 = p->mObject.mProperty_mSwitchConstantList ;
    outOperand1 = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
    outOperand2 = p->mObject.mProperty_mEndOfBranchLocationIndex ;
    outOperand3 = p->mObject.mProperty_mInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::add_operation (const GALGAS_switchBranchesForGeneration & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_switchBranchesForGeneration result = GALGAS_switchBranchesForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::plusAssign_operation (const GALGAS_switchBranchesForGeneration inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMSwitchConstantListAtIndex (GALGAS__5B_lstring_5D_ inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSwitchConstantList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__5B_lstring_5D_ GALGAS_switchBranchesForGeneration::getter_mSwitchConstantListAtIndex (const GALGAS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS__5B_lstring_5D_ result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mSwitchConstantList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMExtractedAssociatedValuesForGenerationAtIndex (GALGAS_extractedAssociatedValuesForGeneration inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mExtractedAssociatedValuesForGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration GALGAS_switchBranchesForGeneration::getter_mExtractedAssociatedValuesForGenerationAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_extractedAssociatedValuesForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMEndOfBranchLocationIndexAtIndex (GALGAS_uint inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEndOfBranchLocationIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_switchBranchesForGeneration::getter_mEndOfBranchLocationIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mEndOfBranchLocationIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_switchBranchesForGeneration::setter_setMInstructionsAtIndex (GALGAS_semanticInstructionListForGeneration inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructions = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_switchBranchesForGeneration::getter_mInstructionsAtIndex (const GALGAS_uint & inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_switchBranchesForGeneration * p = (cCollectionElement_switchBranchesForGeneration *) attributes.ptr () ;
  GALGAS_semanticInstructionListForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
    result = p->mObject.mProperty_mInstructions ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_switchBranchesForGeneration::cEnumerator_switchBranchesForGeneration (const GALGAS_switchBranchesForGeneration & inEnumeratedObject,
                                                                                  const EnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration_2D_element cEnumerator_switchBranchesForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS__5B_lstring_5D_ cEnumerator_switchBranchesForGeneration::current_mSwitchConstantList (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mSwitchConstantList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extractedAssociatedValuesForGeneration cEnumerator_switchBranchesForGeneration::current_mExtractedAssociatedValuesForGeneration (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mExtractedAssociatedValuesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_switchBranchesForGeneration::current_mEndOfBranchLocationIndex (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mEndOfBranchLocationIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration cEnumerator_switchBranchesForGeneration::current_mInstructions (LOCATION_ARGS) const {
  const cCollectionElement_switchBranchesForGeneration * p = (const cCollectionElement_switchBranchesForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_switchBranchesForGeneration) ;
  return p->mObject.mProperty_mInstructions ;
}




//--------------------------------------------------------------------------------------------------
//
//     @switchBranchesForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchBranchesForGeneration ("switchBranchesForGeneration",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchBranchesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchBranchesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchBranchesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchBranchesForGeneration GALGAS_switchBranchesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_switchBranchesForGeneration result ;
  const GALGAS_switchBranchesForGeneration * p = (const GALGAS_switchBranchesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchBranchesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchBranchesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_switchInstructionForGeneration_2D_weak::objectCompare (const GALGAS_switchInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_switchInstructionForGeneration_2D_weak::GALGAS_switchInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak & GALGAS_switchInstructionForGeneration_2D_weak::operator = (const GALGAS_switchInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak::GALGAS_switchInstructionForGeneration_2D_weak (const GALGAS_switchInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak GALGAS_switchInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration GALGAS_switchInstructionForGeneration_2D_weak::bang_switchInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_switchInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionForGeneration) ;
      result = GALGAS_switchInstructionForGeneration ((cPtr_switchInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @switchInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ("switchInstructionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_switchInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_switchInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_switchInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_switchInstructionForGeneration_2D_weak GALGAS_switchInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_switchInstructionForGeneration_2D_weak result ;
  const GALGAS_switchInstructionForGeneration_2D_weak * p = (const GALGAS_switchInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_switchInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("switchInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeMethodCallInstructionAST_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionAST_2D_weak & inOperand) const {
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

GALGAS_typeMethodCallInstructionAST_2D_weak::GALGAS_typeMethodCallInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak & GALGAS_typeMethodCallInstructionAST_2D_weak::operator = (const GALGAS_typeMethodCallInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak::GALGAS_typeMethodCallInstructionAST_2D_weak (const GALGAS_typeMethodCallInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak GALGAS_typeMethodCallInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST GALGAS_typeMethodCallInstructionAST_2D_weak::bang_typeMethodCallInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionAST) ;
      result = GALGAS_typeMethodCallInstructionAST ((cPtr_typeMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ("typeMethodCallInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionAST_2D_weak GALGAS_typeMethodCallInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionAST_2D_weak result ;
  const GALGAS_typeMethodCallInstructionAST_2D_weak * p = (const GALGAS_typeMethodCallInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeMethodCallInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_typeMethodCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_typeMethodCallInstructionForGeneration_2D_weak::GALGAS_typeMethodCallInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak & GALGAS_typeMethodCallInstructionForGeneration_2D_weak::operator = (const GALGAS_typeMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak::GALGAS_typeMethodCallInstructionForGeneration_2D_weak (const GALGAS_typeMethodCallInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak GALGAS_typeMethodCallInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration GALGAS_typeMethodCallInstructionForGeneration_2D_weak::bang_typeMethodCallInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_typeMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionForGeneration) ;
      result = GALGAS_typeMethodCallInstructionForGeneration ((cPtr_typeMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeMethodCallInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ("typeMethodCallInstructionForGeneration-weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeMethodCallInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeMethodCallInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeMethodCallInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeMethodCallInstructionForGeneration_2D_weak GALGAS_typeMethodCallInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_typeMethodCallInstructionForGeneration_2D_weak result ;
  const GALGAS_typeMethodCallInstructionForGeneration_2D_weak * p = (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeMethodCallInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::operator = (const GALGAS_localVariableDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (const GALGAS_localVariableDeclarationWithAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::bang_localVariableDeclarationWithAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
      result = GALGAS_localVariableDeclarationWithAssignmentAST ((cPtr_localVariableDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationWithAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ("localVariableDeclarationWithAssignmentAST-weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak result ;
  const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak * p = (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak & GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::operator = (const GALGAS_localVariableDeclarationNoAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak (const GALGAS_localVariableDeclarationNoAssignmentAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::bang_localVariableDeclarationNoAssignmentAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationNoAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
      result = GALGAS_localVariableDeclarationNoAssignmentAST ((cPtr_localVariableDeclarationNoAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationNoAssignmentAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak ("localVariableDeclarationNoAssignmentAST-weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak result ;
  const GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak * p = (const GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationNoAssignmentAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mVariableType.printNonNullClassInstanceProperties ("mVariableType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableDeclarationForGeneration::objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const {
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

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::
init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mVariableType,
              const GALGAS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationForGeneration_init_21__21_ (in_mVariableType, in_mCppVariableName, inCompiler) ;
  const GALGAS_localVariableDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::
localVariableDeclarationForGeneration_init_21__21_ (const GALGAS_unifiedTypeMapEntry & in_mVariableType,
                                                    const GALGAS_string & in_mCppVariableName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::class_func_new (const GALGAS_unifiedTypeMapEntry & in_mVariableType,
                                                                                                           const GALGAS_string & in_mCppVariableName
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (in_mVariableType, in_mCppVariableName COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntry GALGAS_localVariableDeclarationForGeneration::readProperty_mVariableType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mVariableType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_localVariableDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GALGAS_unifiedTypeMapEntry & in_mVariableType,
                                                                                        const GALGAS_string & in_mCppVariableName
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableDeclarationForGeneration:") ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  const GALGAS_localVariableDeclarationForGeneration * p = (const GALGAS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_localVariableDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_localVariableDeclarationForGeneration_2D_weak & inOperand) const {
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

GALGAS_localVariableDeclarationForGeneration_2D_weak::GALGAS_localVariableDeclarationForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak & GALGAS_localVariableDeclarationForGeneration_2D_weak::operator = (const GALGAS_localVariableDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak::GALGAS_localVariableDeclarationForGeneration_2D_weak (const GALGAS_localVariableDeclarationForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak GALGAS_localVariableDeclarationForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration_2D_weak::bang_localVariableDeclarationForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationForGeneration) ;
      result = GALGAS_localVariableDeclarationForGeneration ((cPtr_localVariableDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @localVariableDeclarationForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ("localVariableDeclarationForGeneration-weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_localVariableDeclarationForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_localVariableDeclarationForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_localVariableDeclarationForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration_2D_weak GALGAS_localVariableDeclarationForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration_2D_weak result ;
  const GALGAS_localVariableDeclarationForGeneration_2D_weak * p = (const GALGAS_localVariableDeclarationForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_localVariableDeclarationForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_warningInstructionAST::objectCompare (const GALGAS_warningInstructionAST & inOperand) const {
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

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_semanticExpressionAST & in_mLocationExpression,
                      const GALGAS_semanticExpressionAST & in_mMessageExpression,
                      const GALGAS_fixitListAST & in_mFixitListAST,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionAST (inCompiler COMMA_THERE)) ;
  object->warningInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST, inCompiler) ;
  const GALGAS_warningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::
warningInstructionAST_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                            const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                            const GALGAS_fixitListAST & in_mFixitListAST,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                           const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                                           const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                                           const GALGAS_fixitListAST & in_mFixitListAST
                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_warningInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_fixitListAST GALGAS_warningInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_fixitListAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mLocationExpression,
                                                        const GALGAS_semanticExpressionAST & in_mMessageExpression,
                                                        const GALGAS_fixitListAST & in_mFixitListAST
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@warningInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_warningInstructionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mFixitListAST COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  const GALGAS_warningInstructionAST * p = (const GALGAS_warningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_warningInstructionAST_2D_weak::objectCompare (const GALGAS_warningInstructionAST_2D_weak & inOperand) const {
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

GALGAS_warningInstructionAST_2D_weak::GALGAS_warningInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST_2D_weak & GALGAS_warningInstructionAST_2D_weak::operator = (const GALGAS_warningInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST_2D_weak::GALGAS_warningInstructionAST_2D_weak (const GALGAS_warningInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST_2D_weak GALGAS_warningInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_warningInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST_2D_weak::bang_warningInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_warningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionAST) ;
      result = GALGAS_warningInstructionAST ((cPtr_warningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST_2D_weak ("warningInstructionAST-weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST_2D_weak GALGAS_warningInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST_2D_weak result ;
  const GALGAS_warningInstructionAST_2D_weak * p = (const GALGAS_warningInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_warningInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_warningInstructionForGeneration_2D_weak::objectCompare (const GALGAS_warningInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_warningInstructionForGeneration_2D_weak::GALGAS_warningInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak & GALGAS_warningInstructionForGeneration_2D_weak::operator = (const GALGAS_warningInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak::GALGAS_warningInstructionForGeneration_2D_weak (const GALGAS_warningInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak GALGAS_warningInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration GALGAS_warningInstructionForGeneration_2D_weak::bang_warningInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_warningInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionForGeneration) ;
      result = GALGAS_warningInstructionForGeneration ((cPtr_warningInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @warningInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ("warningInstructionForGeneration-weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_warningInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_warningInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_warningInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionForGeneration_2D_weak GALGAS_warningInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionForGeneration_2D_weak result ;
  const GALGAS_warningInstructionForGeneration_2D_weak * p = (const GALGAS_warningInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_warningInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_readAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readAccessWithInstructionAST_2D_weak & inOperand) const {
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

GALGAS_readAccessWithInstructionAST_2D_weak::GALGAS_readAccessWithInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak & GALGAS_readAccessWithInstructionAST_2D_weak::operator = (const GALGAS_readAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak::GALGAS_readAccessWithInstructionAST_2D_weak (const GALGAS_readAccessWithInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak GALGAS_readAccessWithInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST GALGAS_readAccessWithInstructionAST_2D_weak::bang_readAccessWithInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readAccessWithInstructionAST) ;
      result = GALGAS_readAccessWithInstructionAST ((cPtr_readAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readAccessWithInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ("readAccessWithInstructionAST-weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readAccessWithInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readAccessWithInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readAccessWithInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readAccessWithInstructionAST_2D_weak GALGAS_readAccessWithInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readAccessWithInstructionAST_2D_weak result ;
  const GALGAS_readAccessWithInstructionAST_2D_weak * p = (const GALGAS_readAccessWithInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readAccessWithInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_readWriteAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readWriteAccessWithInstructionAST_2D_weak & inOperand) const {
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

GALGAS_readWriteAccessWithInstructionAST_2D_weak::GALGAS_readWriteAccessWithInstructionAST_2D_weak (void) :
GALGAS_semanticInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak & GALGAS_readWriteAccessWithInstructionAST_2D_weak::operator = (const GALGAS_readWriteAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak::GALGAS_readWriteAccessWithInstructionAST_2D_weak (const GALGAS_readWriteAccessWithInstructionAST & inSource) :
GALGAS_semanticInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak GALGAS_readWriteAccessWithInstructionAST_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST GALGAS_readWriteAccessWithInstructionAST_2D_weak::bang_readWriteAccessWithInstructionAST_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readWriteAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteAccessWithInstructionAST) ;
      result = GALGAS_readWriteAccessWithInstructionAST ((cPtr_readWriteAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readWriteAccessWithInstructionAST-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ("readWriteAccessWithInstructionAST-weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteAccessWithInstructionAST_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteAccessWithInstructionAST_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteAccessWithInstructionAST_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteAccessWithInstructionAST_2D_weak GALGAS_readWriteAccessWithInstructionAST_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_readWriteAccessWithInstructionAST_2D_weak result ;
  const GALGAS_readWriteAccessWithInstructionAST_2D_weak * p = (const GALGAS_readWriteAccessWithInstructionAST_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readWriteAccessWithInstructionAST_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_readOnlyWithInstructionForGeneration_2D_weak::objectCompare (const GALGAS_readOnlyWithInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_readOnlyWithInstructionForGeneration_2D_weak::GALGAS_readOnlyWithInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration_2D_weak & GALGAS_readOnlyWithInstructionForGeneration_2D_weak::operator = (const GALGAS_readOnlyWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration_2D_weak::GALGAS_readOnlyWithInstructionForGeneration_2D_weak (const GALGAS_readOnlyWithInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration_2D_weak GALGAS_readOnlyWithInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration GALGAS_readOnlyWithInstructionForGeneration_2D_weak::bang_readOnlyWithInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readOnlyWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readOnlyWithInstructionForGeneration) ;
      result = GALGAS_readOnlyWithInstructionForGeneration ((cPtr_readOnlyWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readOnlyWithInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2D_weak ("readOnlyWithInstructionForGeneration-weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readOnlyWithInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readOnlyWithInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readOnlyWithInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readOnlyWithInstructionForGeneration_2D_weak GALGAS_readOnlyWithInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_readOnlyWithInstructionForGeneration_2D_weak result ;
  const GALGAS_readOnlyWithInstructionForGeneration_2D_weak * p = (const GALGAS_readOnlyWithInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readOnlyWithInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readOnlyWithInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_readWriteWithInstructionForGeneration_2D_weak::objectCompare (const GALGAS_readWriteWithInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_readWriteWithInstructionForGeneration_2D_weak::GALGAS_readWriteWithInstructionForGeneration_2D_weak (void) :
GALGAS_semanticInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration_2D_weak & GALGAS_readWriteWithInstructionForGeneration_2D_weak::operator = (const GALGAS_readWriteWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration_2D_weak::GALGAS_readWriteWithInstructionForGeneration_2D_weak (const GALGAS_readWriteWithInstructionForGeneration & inSource) :
GALGAS_semanticInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration_2D_weak GALGAS_readWriteWithInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration GALGAS_readWriteWithInstructionForGeneration_2D_weak::bang_readWriteWithInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_readWriteWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteWithInstructionForGeneration) ;
      result = GALGAS_readWriteWithInstructionForGeneration ((cPtr_readWriteWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @readWriteWithInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2D_weak ("readWriteWithInstructionForGeneration-weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_readWriteWithInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_readWriteWithInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_readWriteWithInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_readWriteWithInstructionForGeneration_2D_weak GALGAS_readWriteWithInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_readWriteWithInstructionForGeneration_2D_weak result ;
  const GALGAS_readWriteWithInstructionForGeneration_2D_weak * p = (const GALGAS_readWriteWithInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_readWriteWithInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteWithInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalCallInstruction_2D_weak::objectCompare (const GALGAS_nonterminalCallInstruction_2D_weak & inOperand) const {
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

GALGAS_nonterminalCallInstruction_2D_weak::GALGAS_nonterminalCallInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction_2D_weak & GALGAS_nonterminalCallInstruction_2D_weak::operator = (const GALGAS_nonterminalCallInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction_2D_weak::GALGAS_nonterminalCallInstruction_2D_weak (const GALGAS_nonterminalCallInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction_2D_weak GALGAS_nonterminalCallInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction GALGAS_nonterminalCallInstruction_2D_weak::bang_nonterminalCallInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalCallInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalCallInstruction) ;
      result = GALGAS_nonterminalCallInstruction ((cPtr_nonterminalCallInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalCallInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2D_weak ("nonterminalCallInstruction-weak",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalCallInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalCallInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalCallInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalCallInstruction_2D_weak GALGAS_nonterminalCallInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalCallInstruction_2D_weak result ;
  const GALGAS_nonterminalCallInstruction_2D_weak * p = (const GALGAS_nonterminalCallInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalCallInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonterminalInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalName.printNonNullClassInstanceProperties ("mNonterminalName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalInstructionForGeneration::objectCompare (const GALGAS_nonterminalInstructionForGeneration & inOperand) const {
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

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_string & in_mNonterminalName,
                          const GALGAS_string & in_mLabelName,
                          const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                          const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_nonterminalInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->nonterminalInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GALGAS_nonterminalInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::
nonterminalInstructionForGeneration_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                              const GALGAS_string & in_mNonterminalName,
                                                              const GALGAS_string & in_mLabelName,
                                                              const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                                       const GALGAS_string & in_mNonterminalName,
                                                                                                       const GALGAS_string & in_mLabelName,
                                                                                                       const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                       const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_nonterminalInstructionForGeneration::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_nonterminalInstructionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actualParameterListForGeneration GALGAS_nonterminalInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actualParameterListForGeneration () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult GALGAS_nonterminalInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_string & in_mNonterminalName,
                                                                                    const GALGAS_string & in_mLabelName,
                                                                                    const GALGAS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@nonterminalInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_nonterminalInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @nonterminalInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  const GALGAS_nonterminalInstructionForGeneration * p = (const GALGAS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_nonterminalInstructionForGeneration_2D_weak::objectCompare (const GALGAS_nonterminalInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_nonterminalInstructionForGeneration_2D_weak::GALGAS_nonterminalInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration_2D_weak & GALGAS_nonterminalInstructionForGeneration_2D_weak::operator = (const GALGAS_nonterminalInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration_2D_weak::GALGAS_nonterminalInstructionForGeneration_2D_weak (const GALGAS_nonterminalInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration_2D_weak GALGAS_nonterminalInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration_2D_weak::bang_nonterminalInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nonterminalInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalInstructionForGeneration) ;
      result = GALGAS_nonterminalInstructionForGeneration ((cPtr_nonterminalInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonterminalInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2D_weak ("nonterminalInstructionForGeneration-weak",
                                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonterminalInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonterminalInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonterminalInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration_2D_weak GALGAS_nonterminalInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration_2D_weak result ;
  const GALGAS_nonterminalInstructionForGeneration_2D_weak * p = (const GALGAS_nonterminalInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonterminalInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.printNonNullClassInstanceProperties ("mEndOf_repeated_instructions_branch") ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mEndOf_5F_repeat_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_repeat_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_repeatInstruction::objectCompare (const GALGAS_repeatInstruction & inOperand) const {
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

GALGAS_repeatInstruction::GALGAS_repeatInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::
init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                          const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                          const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                          const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                          const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_repeatInstruction * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstruction (inCompiler COMMA_THERE)) ;
  object->repeatInstruction_init_21__21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction, inCompiler) ;
  const GALGAS_repeatInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::
repeatInstruction_init_21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                            const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                            const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                            const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                            const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction::GALGAS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                                   const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                                   const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                                   const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_repeatInstruction::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstruction::readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_repeatInstruction::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstruction::readProperty_mEndOf_5F_repeat_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeat_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GALGAS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GALGAS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GALGAS_location & in_mEndOf_5F_repeat_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstruction (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, mProperty_mRepeatBranchList, mProperty_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @repeatInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  const GALGAS_repeatInstruction * p = (const GALGAS_repeatInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_repeatInstruction_2D_weak::objectCompare (const GALGAS_repeatInstruction_2D_weak & inOperand) const {
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

GALGAS_repeatInstruction_2D_weak::GALGAS_repeatInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction_2D_weak & GALGAS_repeatInstruction_2D_weak::operator = (const GALGAS_repeatInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction_2D_weak::GALGAS_repeatInstruction_2D_weak (const GALGAS_repeatInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction_2D_weak GALGAS_repeatInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_repeatInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction_2D_weak::bang_repeatInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_repeatInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstruction) ;
      result = GALGAS_repeatInstruction ((cPtr_repeatInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @repeatInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction_2D_weak ("repeatInstruction-weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction_2D_weak GALGAS_repeatInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction_2D_weak result ;
  const GALGAS_repeatInstruction_2D_weak * p = (const GALGAS_repeatInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_m_5F_repeated_5F_instructionList.printNonNullClassInstanceProperties ("m_repeated_instructionList") ;
    mProperty_mEndOfRepeatedInstructions.printNonNullClassInstanceProperties ("mEndOfRepeatedInstructions") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_repeatInstructionForGeneration::objectCompare (const GALGAS_repeatInstructionForGeneration & inOperand) const {
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

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::
init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                              const GALGAS_string & in_mSyntaxComponentName,
                              const GALGAS_uint & in_mChoiceIndex,
                              const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                              const GALGAS_location & in_mEndOfRepeatedInstructions,
                              const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGeneration_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GALGAS_repeatInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::
repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                             const GALGAS_string & in_mSyntaxComponentName,
                                                             const GALGAS_uint & in_mChoiceIndex,
                                                             const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                             const GALGAS_location & in_mEndOfRepeatedInstructions,
                                                             const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                             const GALGAS_string & in_mSyntaxComponentName,
                                                                                             const GALGAS_uint & in_mChoiceIndex,
                                                                                             const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                                             const GALGAS_location & in_mEndOfRepeatedInstructions,
                                                                                             const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_repeatInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_repeatInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::readProperty_m_5F_repeated_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_m_5F_repeated_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_repeatInstructionForGeneration::readProperty_mEndOfRepeatedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mEndOfRepeatedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_repeatInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GALGAS_location & in_mEndOfRepeatedInstructions,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_m_5F_repeated_5F_instructionList (),
mProperty_mEndOfRepeatedInstructions (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_m_5F_repeated_5F_instructionList, mProperty_mEndOfRepeatedInstructions, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  const GALGAS_repeatInstructionForGeneration * p = (const GALGAS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_repeatInstructionForGeneration_2D_weak::objectCompare (const GALGAS_repeatInstructionForGeneration_2D_weak & inOperand) const {
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

GALGAS_repeatInstructionForGeneration_2D_weak::GALGAS_repeatInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration_2D_weak & GALGAS_repeatInstructionForGeneration_2D_weak::operator = (const GALGAS_repeatInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration_2D_weak::GALGAS_repeatInstructionForGeneration_2D_weak (const GALGAS_repeatInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration_2D_weak GALGAS_repeatInstructionForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration_2D_weak::bang_repeatInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_repeatInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGeneration) ;
      result = GALGAS_repeatInstructionForGeneration ((cPtr_repeatInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2D_weak ("repeatInstructionForGeneration-weak",
                                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration_2D_weak GALGAS_repeatInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration_2D_weak result ;
  const GALGAS_repeatInstructionForGeneration_2D_weak * p = (const GALGAS_repeatInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mEndOf_5F_select_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_select_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectInstruction::objectCompare (const GALGAS_selectInstruction & inOperand) const {
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

GALGAS_selectInstruction::GALGAS_selectInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::
init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                  const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                  const GALGAS_location & in_mEndOf_5F_select_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstruction * object = nullptr ;
  macroMyNew (object, cPtr_selectInstruction (inCompiler COMMA_THERE)) ;
  object->selectInstruction_init_21__21__21_ (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction, inCompiler) ;
  const GALGAS_selectInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::
selectInstruction_init_21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                    const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                    const GALGAS_location & in_mEndOf_5F_select_5F_instruction,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction::GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                   const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                                   const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstruction (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_selectInstruction::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_selectInstruction::readProperty_mEndOf_5F_select_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mEndOf_5F_select_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (const GALGAS_location & in_mInstructionLocation,
                                                const GALGAS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GALGAS_location & in_mEndOf_5F_select_5F_instruction
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstruction (mProperty_mInstructionLocation, mProperty_mSelectBranchList, mProperty_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  const GALGAS_selectInstruction * p = (const GALGAS_selectInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectInstruction_2D_weak::objectCompare (const GALGAS_selectInstruction_2D_weak & inOperand) const {
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

GALGAS_selectInstruction_2D_weak::GALGAS_selectInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction_2D_weak & GALGAS_selectInstruction_2D_weak::operator = (const GALGAS_selectInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction_2D_weak::GALGAS_selectInstruction_2D_weak (const GALGAS_selectInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction_2D_weak GALGAS_selectInstruction_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_selectInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction_2D_weak::bang_selectInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstruction) ;
      result = GALGAS_selectInstruction ((cPtr_selectInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction_2D_weak ("selectInstruction-weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction_2D_weak GALGAS_selectInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction_2D_weak result ;
  const GALGAS_selectInstruction_2D_weak * p = (const GALGAS_selectInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

ComparisonResult GALGAS_selectInstructionForGeneration::objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const {
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

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::
init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                      const GALGAS_string & in_mSyntaxComponentName,
                      const GALGAS_uint & in_mChoiceIndex,
                      const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GALGAS_selectInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::
selectInstructionForGeneration_init_21__21__21__21_ (const GALGAS_location & in_mInstructionLocation,
                                                     const GALGAS_string & in_mSyntaxComponentName,
                                                     const GALGAS_uint & in_mChoiceIndex,
                                                     const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::class_func_new (const GALGAS_location & in_mInstructionLocation,
                                                                                             const GALGAS_string & in_mSyntaxComponentName,
                                                                                             const GALGAS_uint & in_mChoiceIndex,
                                                                                             const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_selectInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_selectInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_selectInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                          const GALGAS_string & in_mSyntaxComponentName,
                                                                          const GALGAS_uint & in_mChoiceIndex,
                                                                          const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  const GALGAS_selectInstructionForGeneration * p = (const GALGAS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

