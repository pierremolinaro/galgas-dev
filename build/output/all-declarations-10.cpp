#include "galgas2/Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-10.h"

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_switchInstructionForGeneration_2D_weak::objectCompare (const GALGAS_switchInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_switchInstructionForGeneration_2D_weak GALGAS_switchInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_switchInstructionForGeneration_2D_weak ("switchInstructionForGeneration-weak",
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

typeComparisonResult GALGAS_typeMethodCallInstructionAST_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_typeMethodCallInstructionAST_2D_weak GALGAS_typeMethodCallInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2D_weak ("typeMethodCallInstructionAST-weak",
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

typeComparisonResult GALGAS_typeMethodCallInstructionForGeneration_2D_weak::objectCompare (const GALGAS_typeMethodCallInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_typeMethodCallInstructionForGeneration_2D_weak GALGAS_typeMethodCallInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2D_weak ("typeMethodCallInstructionForGeneration-weak",
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

typeComparisonResult GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2D_weak ("localVariableDeclarationWithAssignmentAST-weak",
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

typeComparisonResult GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::objectCompare (const GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2D_weak ("localVariableDeclarationNoAssignmentAST-weak",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mVariableType.printNonNullClassInstanceProperties ("mVariableType") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_localVariableDeclarationForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_localVariableDeclarationForGeneration * p = (const cPtr_localVariableDeclarationForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mVariableType.objectCompare (p->mProperty_mVariableType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCppVariableName.objectCompare (p->mProperty_mCppVariableName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_localVariableDeclarationForGeneration::objectCompare (const GALGAS_localVariableDeclarationForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (void) :
GALGAS_semanticInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration::GALGAS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GALGAS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_localVariableDeclarationForGeneration GALGAS_localVariableDeclarationForGeneration::constructor_new (const GALGAS_unifiedTypeMapEntry & inAttribute_mVariableType,
                                                                                                            const GALGAS_string & inAttribute_mCppVariableName
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_localVariableDeclarationForGeneration result ;
  if (inAttribute_mVariableType.isValid () && inAttribute_mCppVariableName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (inAttribute_mVariableType, inAttribute_mCppVariableName COMMA_THERE)) ;
  }
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
mProperty_mVariableType (in_mVariableType),
mProperty_mCppVariableName (in_mCppVariableName) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_localVariableDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

void cPtr_localVariableDeclarationForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.addString ("[@localVariableDeclarationForGeneration:") ;
  mProperty_mVariableType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
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

typeComparisonResult GALGAS_localVariableDeclarationForGeneration_2D_weak::objectCompare (const GALGAS_localVariableDeclarationForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_localVariableDeclarationForGeneration_2D_weak GALGAS_localVariableDeclarationForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2D_weak ("localVariableDeclarationForGeneration-weak",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocationExpression.printNonNullClassInstanceProperties ("mLocationExpression") ;
    mProperty_mMessageExpression.printNonNullClassInstanceProperties ("mMessageExpression") ;
    mProperty_mFixitListAST.printNonNullClassInstanceProperties ("mFixitListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_warningInstructionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_warningInstructionAST * p = (const cPtr_warningInstructionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_warningInstructionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLocationExpression.objectCompare (p->mProperty_mLocationExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMessageExpression.objectCompare (p->mProperty_mMessageExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFixitListAST.objectCompare (p->mProperty_mFixitListAST) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_warningInstructionAST::objectCompare (const GALGAS_warningInstructionAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (void) :
GALGAS_semanticInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST::GALGAS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GALGAS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_warningInstructionAST GALGAS_warningInstructionAST::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mLocationExpression,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mMessageExpression,
                                                                            const GALGAS_fixitListAST & inAttribute_mFixitListAST
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_warningInstructionAST result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mLocationExpression.isValid () && inAttribute_mMessageExpression.isValid () && inAttribute_mFixitListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (inAttribute_mInstructionLocation, inAttribute_mLocationExpression, inAttribute_mMessageExpression, inAttribute_mFixitListAST COMMA_THERE)) ;
  }
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
mProperty_mLocationExpression (in_mLocationExpression),
mProperty_mMessageExpression (in_mMessageExpression),
mProperty_mFixitListAST (in_mFixitListAST) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

void cPtr_warningInstructionAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("[@warningInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLocationExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMessageExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFixitListAST.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
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

typeComparisonResult GALGAS_warningInstructionAST_2D_weak::objectCompare (const GALGAS_warningInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_warningInstructionAST_2D_weak GALGAS_warningInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionAST_2D_weak ("warningInstructionAST-weak",
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

typeComparisonResult GALGAS_warningInstructionForGeneration_2D_weak::objectCompare (const GALGAS_warningInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_warningInstructionForGeneration_2D_weak GALGAS_warningInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_warningInstructionForGeneration_2D_weak ("warningInstructionForGeneration-weak",
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

typeComparisonResult GALGAS_readAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readAccessWithInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_readAccessWithInstructionAST_2D_weak GALGAS_readAccessWithInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2D_weak ("readAccessWithInstructionAST-weak",
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

typeComparisonResult GALGAS_readWriteAccessWithInstructionAST_2D_weak::objectCompare (const GALGAS_readWriteAccessWithInstructionAST_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_readWriteAccessWithInstructionAST_2D_weak GALGAS_readWriteAccessWithInstructionAST_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2D_weak ("readWriteAccessWithInstructionAST-weak",
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

typeComparisonResult GALGAS_readOnlyWithInstructionForGeneration_2D_weak::objectCompare (const GALGAS_readOnlyWithInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_readOnlyWithInstructionForGeneration_2D_weak GALGAS_readOnlyWithInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2D_weak ("readOnlyWithInstructionForGeneration-weak",
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

typeComparisonResult GALGAS_readWriteWithInstructionForGeneration_2D_weak::objectCompare (const GALGAS_readWriteWithInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_readWriteWithInstructionForGeneration_2D_weak GALGAS_readWriteWithInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2D_weak ("readWriteWithInstructionForGeneration-weak",
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

typeComparisonResult GALGAS_nonterminalCallInstruction_2D_weak::objectCompare (const GALGAS_nonterminalCallInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_nonterminalCallInstruction_2D_weak GALGAS_nonterminalCallInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalCallInstruction_2D_weak ("nonterminalCallInstruction-weak",
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

typeComparisonResult cPtr_nonterminalInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_nonterminalInstructionForGeneration * p = (const cPtr_nonterminalInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNonterminalName.objectCompare (p->mProperty_mNonterminalName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mLabelName.objectCompare (p->mProperty_mLabelName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActualParameterList.objectCompare (p->mProperty_mActualParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.objectCompare (p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_nonterminalInstructionForGeneration::objectCompare (const GALGAS_nonterminalInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration::GALGAS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalInstructionForGeneration GALGAS_nonterminalInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_string & inAttribute_mNonterminalName,
                                                                                                        const GALGAS_string & inAttribute_mLabelName,
                                                                                                        const GALGAS_actualParameterListForGeneration & inAttribute_mActualParameterList,
                                                                                                        const GALGAS_abstractGrammarInstructionSyntaxDirectedTranslationResult & inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_nonterminalInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mNonterminalName.isValid () && inAttribute_mLabelName.isValid () && inAttribute_mActualParameterList.isValid () && inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mNonterminalName, inAttribute_mLabelName, inAttribute_mActualParameterList, inAttribute_mGrammarInstructionSyntaxDirectedTranslationResult COMMA_THERE)) ;
  }
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
mProperty_mNonterminalName (in_mNonterminalName),
mProperty_mLabelName (in_mLabelName),
mProperty_mActualParameterList (in_mActualParameterList),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult (in_mGrammarInstructionSyntaxDirectedTranslationResult) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_nonterminalInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

void cPtr_nonterminalInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@nonterminalInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
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

typeComparisonResult GALGAS_nonterminalInstructionForGeneration_2D_weak::objectCompare (const GALGAS_nonterminalInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_nonterminalInstructionForGeneration_2D_weak GALGAS_nonterminalInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2D_weak ("nonterminalInstructionForGeneration-weak",
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

typeComparisonResult cPtr_repeatInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstruction * p = (const cPtr_repeatInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatedInstructionList.objectCompare (p->mProperty_mRepeatedInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.objectCompare (p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatBranchList.objectCompare (p->mProperty_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_repeat_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_repeat_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstruction::objectCompare (const GALGAS_repeatInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction::GALGAS_repeatInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction::GALGAS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstruction GALGAS_repeatInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_syntaxInstructionList & inAttribute_mRepeatedInstructionList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mRepeatBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_repeat_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mRepeatedInstructionList.isValid () && inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mEndOf_5F_repeat_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (inAttribute_mInstructionLocation, inAttribute_mRepeatedInstructionList, inAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, inAttribute_mRepeatBranchList, inAttribute_mEndOf_5F_repeat_5F_instruction COMMA_THERE)) ;
  }
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
mProperty_mRepeatedInstructionList (in_mRepeatedInstructionList),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (in_mEndOf_5F_repeated_5F_instructions_5F_branch),
mProperty_mRepeatBranchList (in_mRepeatBranchList),
mProperty_mEndOf_5F_repeat_5F_instruction (in_mEndOf_5F_repeat_5F_instruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

void cPtr_repeatInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@repeatInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOf_5F_repeat_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
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

typeComparisonResult GALGAS_repeatInstruction_2D_weak::objectCompare (const GALGAS_repeatInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_repeatInstruction_2D_weak GALGAS_repeatInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstruction_2D_weak ("repeatInstruction-weak",
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

typeComparisonResult cPtr_repeatInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGeneration * p = (const cPtr_repeatInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mChoiceIndex.objectCompare (p->mProperty_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_m_5F_repeated_5F_instructionList.objectCompare (p->mProperty_m_5F_repeated_5F_instructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfRepeatedInstructions.objectCompare (p->mProperty_mEndOfRepeatedInstructions) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstructionForGeneration::objectCompare (const GALGAS_repeatInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration::GALGAS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGeneration GALGAS_repeatInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_semanticInstructionListForGeneration & inAttribute_m_5F_repeated_5F_instructionList,
                                                                                              const GALGAS_location & inAttribute_mEndOfRepeatedInstructions,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_m_5F_repeated_5F_instructionList.isValid () && inAttribute_mEndOfRepeatedInstructions.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_m_5F_repeated_5F_instructionList, inAttribute_mEndOfRepeatedInstructions, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
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
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mChoiceIndex (in_mChoiceIndex),
mProperty_m_5F_repeated_5F_instructionList (in_m_5F_repeated_5F_instructionList),
mProperty_mEndOfRepeatedInstructions (in_mEndOfRepeatedInstructions),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

void cPtr_repeatInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@repeatInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_m_5F_repeated_5F_instructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfRepeatedInstructions.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
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

typeComparisonResult GALGAS_repeatInstructionForGeneration_2D_weak::objectCompare (const GALGAS_repeatInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_repeatInstructionForGeneration_2D_weak GALGAS_repeatInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2D_weak ("repeatInstructionForGeneration-weak",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mEndOf_5F_select_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_select_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstruction * p = (const cPtr_selectInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectBranchList.objectCompare (p->mProperty_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOf_5F_select_5F_instruction.objectCompare (p->mProperty_mEndOf_5F_select_5F_instruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstruction::objectCompare (const GALGAS_selectInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction::GALGAS_selectInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction::GALGAS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstruction GALGAS_selectInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                    const GALGAS_listOfSyntaxInstructionList & inAttribute_mSelectBranchList,
                                                                    const GALGAS_location & inAttribute_mEndOf_5F_select_5F_instruction
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_selectInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mEndOf_5F_select_5F_instruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstruction (inAttribute_mInstructionLocation, inAttribute_mSelectBranchList, inAttribute_mEndOf_5F_select_5F_instruction COMMA_THERE)) ;
  }
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
mProperty_mSelectBranchList (in_mSelectBranchList),
mProperty_mEndOf_5F_select_5F_instruction (in_mEndOf_5F_select_5F_instruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

void cPtr_selectInstruction::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@selectInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOf_5F_select_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
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

typeComparisonResult GALGAS_selectInstruction_2D_weak::objectCompare (const GALGAS_selectInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
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

GALGAS_selectInstruction_2D_weak GALGAS_selectInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstruction_2D_weak ("selectInstruction-weak",
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

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mChoiceIndex.printNonNullClassInstanceProperties ("mChoiceIndex") ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGeneration * p = (const cPtr_selectInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSyntaxComponentName.objectCompare (p->mProperty_mSyntaxComponentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mChoiceIndex.objectCompare (p->mProperty_mChoiceIndex) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstructionForGeneration::objectCompare (const GALGAS_selectInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration::GALGAS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                              const GALGAS_string & inAttribute_mSyntaxComponentName,
                                                                                              const GALGAS_uint & inAttribute_mChoiceIndex,
                                                                                              const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mSyntaxComponentName.isValid () && inAttribute_mChoiceIndex.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mSyntaxComponentName, inAttribute_mChoiceIndex, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
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
mProperty_mSyntaxComponentName (in_mSyntaxComponentName),
mProperty_mChoiceIndex (in_mChoiceIndex),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

void cPtr_selectInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@selectInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mChoiceIndex.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
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

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
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

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectInstructionForGeneration_2D_weak::objectCompare (const GALGAS_selectInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration_2D_weak::GALGAS_selectInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration_2D_weak & GALGAS_selectInstructionForGeneration_2D_weak::operator = (const GALGAS_selectInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration_2D_weak::GALGAS_selectInstructionForGeneration_2D_weak (const GALGAS_selectInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration_2D_weak GALGAS_selectInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration GALGAS_selectInstructionForGeneration_2D_weak::bang_selectInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGeneration) ;
      result = GALGAS_selectInstructionForGeneration ((cPtr_selectInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGeneration_2D_weak ("selectInstructionForGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGeneration_2D_weak GALGAS_selectInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGeneration_2D_weak result ;
  const GALGAS_selectInstructionForGeneration_2D_weak * p = (const GALGAS_selectInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalCheckInstruction_2D_weak::objectCompare (const GALGAS_terminalCheckInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction_2D_weak::GALGAS_terminalCheckInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction_2D_weak & GALGAS_terminalCheckInstruction_2D_weak::operator = (const GALGAS_terminalCheckInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction_2D_weak::GALGAS_terminalCheckInstruction_2D_weak (const GALGAS_terminalCheckInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction_2D_weak GALGAS_terminalCheckInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction GALGAS_terminalCheckInstruction_2D_weak::bang_terminalCheckInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstruction) ;
      result = GALGAS_terminalCheckInstruction ((cPtr_terminalCheckInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstruction_2D_weak ("terminalCheckInstruction-weak",
                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstruction_2D_weak GALGAS_terminalCheckInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstruction_2D_weak result ;
  const GALGAS_terminalCheckInstruction_2D_weak * p = (const GALGAS_terminalCheckInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalCheckInstructionForGeneration_2D_weak::objectCompare (const GALGAS_terminalCheckInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration_2D_weak::GALGAS_terminalCheckInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration_2D_weak & GALGAS_terminalCheckInstructionForGeneration_2D_weak::operator = (const GALGAS_terminalCheckInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration_2D_weak::GALGAS_terminalCheckInstructionForGeneration_2D_weak (const GALGAS_terminalCheckInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration_2D_weak GALGAS_terminalCheckInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration GALGAS_terminalCheckInstructionForGeneration_2D_weak::bang_terminalCheckInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionForGeneration) ;
      result = GALGAS_terminalCheckInstructionForGeneration ((cPtr_terminalCheckInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalCheckInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2D_weak ("terminalCheckInstructionForGeneration-weak",
                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalCheckInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalCheckInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalCheckInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalCheckInstructionForGeneration_2D_weak GALGAS_terminalCheckInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalCheckInstructionForGeneration_2D_weak result ;
  const GALGAS_terminalCheckInstructionForGeneration_2D_weak * p = (const GALGAS_terminalCheckInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalCheckInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseLoopInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseLoopInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mEndOfVariantExpression.printNonNullClassInstanceProperties ("mEndOfVariantExpression") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOfWhileExpression.printNonNullClassInstanceProperties ("mEndOfWhileExpression") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOfInstructionList.printNonNullClassInstanceProperties ("mEndOfInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseLoopInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseLoopInstruction * p = (const cPtr_parseLoopInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mVariantExpression.objectCompare (p->mProperty_mVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfVariantExpression.objectCompare (p->mProperty_mEndOfVariantExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhileExpression.objectCompare (p->mProperty_mWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhileExpression.objectCompare (p->mProperty_mEndOfWhileExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDoInstructionList.objectCompare (p->mProperty_mDoInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfInstructionList.objectCompare (p->mProperty_mEndOfInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseLoopInstruction::objectCompare (const GALGAS_parseLoopInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction::GALGAS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mVariantExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfVariantExpression,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhileExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhileExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mDoInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mVariantExpression.isValid () && inAttribute_mEndOfVariantExpression.isValid () && inAttribute_mWhileExpression.isValid () && inAttribute_mEndOfWhileExpression.isValid () && inAttribute_mDoInstructionList.isValid () && inAttribute_mEndOfInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseLoopInstruction (inAttribute_mInstructionLocation, inAttribute_mVariantExpression, inAttribute_mEndOfVariantExpression, inAttribute_mWhileExpression, inAttribute_mEndOfWhileExpression, inAttribute_mDoInstructionList, inAttribute_mEndOfInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseLoopInstruction::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::readProperty_mEndOfWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseLoopInstruction::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxInstructionList () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseLoopInstruction::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mVariantExpression,
                                                      const GALGAS_location & in_mEndOfVariantExpression,
                                                      const GALGAS_semanticExpressionAST & in_mWhileExpression,
                                                      const GALGAS_location & in_mEndOfWhileExpression,
                                                      const GALGAS_syntaxInstructionList & in_mDoInstructionList,
                                                      const GALGAS_location & in_mEndOfInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mVariantExpression (in_mVariantExpression),
mProperty_mEndOfVariantExpression (in_mEndOfVariantExpression),
mProperty_mWhileExpression (in_mWhileExpression),
mProperty_mEndOfWhileExpression (in_mEndOfWhileExpression),
mProperty_mDoInstructionList (in_mDoInstructionList),
mProperty_mEndOfInstructionList (in_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

void cPtr_parseLoopInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@parseLoopInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfWhileExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseLoopInstruction (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mWhileExpression, mProperty_mEndOfWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOfInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstruction ("parseLoopInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction result ;
  const GALGAS_parseLoopInstruction * p = (const GALGAS_parseLoopInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseLoopInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseLoopInstruction_2D_weak::objectCompare (const GALGAS_parseLoopInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction_2D_weak::GALGAS_parseLoopInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction_2D_weak & GALGAS_parseLoopInstruction_2D_weak::operator = (const GALGAS_parseLoopInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction_2D_weak::GALGAS_parseLoopInstruction_2D_weak (const GALGAS_parseLoopInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction_2D_weak GALGAS_parseLoopInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseLoopInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction GALGAS_parseLoopInstruction_2D_weak::bang_parseLoopInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseLoopInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstruction) ;
      result = GALGAS_parseLoopInstruction ((cPtr_parseLoopInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstruction_2D_weak ("parseLoopInstruction-weak",
                                                     & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstruction_2D_weak GALGAS_parseLoopInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstruction_2D_weak result ;
  const GALGAS_parseLoopInstruction_2D_weak * p = (const GALGAS_parseLoopInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseLoopInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseLoopInstructionForGeneration_2D_weak::objectCompare (const GALGAS_parseLoopInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration_2D_weak::GALGAS_parseLoopInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration_2D_weak & GALGAS_parseLoopInstructionForGeneration_2D_weak::operator = (const GALGAS_parseLoopInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration_2D_weak::GALGAS_parseLoopInstructionForGeneration_2D_weak (const GALGAS_parseLoopInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration_2D_weak GALGAS_parseLoopInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration GALGAS_parseLoopInstructionForGeneration_2D_weak::bang_parseLoopInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseLoopInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstructionForGeneration) ;
      result = GALGAS_parseLoopInstructionForGeneration ((cPtr_parseLoopInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseLoopInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2D_weak ("parseLoopInstructionForGeneration-weak",
                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseLoopInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseLoopInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseLoopInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseLoopInstructionForGeneration_2D_weak GALGAS_parseLoopInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseLoopInstructionForGeneration_2D_weak result ;
  const GALGAS_parseLoopInstructionForGeneration_2D_weak * p = (const GALGAS_parseLoopInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseLoopInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mParseRewindBranchList.printNonNullClassInstanceProperties ("mParseRewindBranchList") ;
    mProperty_mEndOfParseDoInstruction.printNonNullClassInstanceProperties ("mEndOfParseDoInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseRewindInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstruction * p = (const cPtr_parseRewindInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParseRewindBranchList.objectCompare (p->mProperty_mParseRewindBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfParseDoInstruction.objectCompare (p->mProperty_mEndOfParseDoInstruction) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseRewindInstruction::objectCompare (const GALGAS_parseRewindInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction::GALGAS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                              const GALGAS_listOfSyntaxInstructionList & inAttribute_mParseRewindBranchList,
                                                                              const GALGAS_location & inAttribute_mEndOfParseDoInstruction
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mParseRewindBranchList.isValid () && inAttribute_mEndOfParseDoInstruction.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstruction (inAttribute_mInstructionLocation, inAttribute_mParseRewindBranchList, inAttribute_mEndOfParseDoInstruction COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSyntaxInstructionList GALGAS_parseRewindInstruction::readProperty_mParseRewindBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mParseRewindBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseRewindInstruction::readProperty_mEndOfParseDoInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mEndOfParseDoInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GALGAS_location & in_mInstructionLocation,
                                                          const GALGAS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GALGAS_location & in_mEndOfParseDoInstruction
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mParseRewindBranchList (in_mParseRewindBranchList),
mProperty_mEndOfParseDoInstruction (in_mEndOfParseDoInstruction) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.addString ("[@parseRewindInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mProperty_mInstructionLocation, mProperty_mParseRewindBranchList, mProperty_mEndOfParseDoInstruction COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                               & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction result ;
  const GALGAS_parseRewindInstruction * p = (const GALGAS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseRewindInstruction_2D_weak::objectCompare (const GALGAS_parseRewindInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction_2D_weak::GALGAS_parseRewindInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction_2D_weak & GALGAS_parseRewindInstruction_2D_weak::operator = (const GALGAS_parseRewindInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction_2D_weak::GALGAS_parseRewindInstruction_2D_weak (const GALGAS_parseRewindInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction_2D_weak GALGAS_parseRewindInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseRewindInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction GALGAS_parseRewindInstruction_2D_weak::bang_parseRewindInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseRewindInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstruction) ;
      result = GALGAS_parseRewindInstruction ((cPtr_parseRewindInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstruction_2D_weak ("parseRewindInstruction-weak",
                                                       & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstruction_2D_weak GALGAS_parseRewindInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstruction_2D_weak result ;
  const GALGAS_parseRewindInstruction_2D_weak * p = (const GALGAS_parseRewindInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseRewindInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseRewindInstructionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseRewindInstructionForGeneration * p = (const cPtr_parseRewindInstructionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mListOfSemanticInstructionListForGeneration.objectCompare (p->mProperty_mListOfSemanticInstructionListForGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseRewindInstructionForGeneration::objectCompare (const GALGAS_parseRewindInstructionForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (void) :
GALGAS_syntaxInstructionForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration::GALGAS_parseRewindInstructionForGeneration (const cPtr_parseRewindInstructionForGeneration * inSourcePtr) :
GALGAS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                                                        const GALGAS_listOfSemanticInstructionListForGeneration & inAttribute_mListOfSemanticInstructionListForGeneration
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mListOfSemanticInstructionListForGeneration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseRewindInstructionForGeneration (inAttribute_mInstructionLocation, inAttribute_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_listOfSemanticInstructionListForGeneration GALGAS_parseRewindInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_parseRewindInstructionForGeneration * p = (cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (const GALGAS_location & in_mInstructionLocation,
                                                                                    const GALGAS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration (in_mListOfSemanticInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

void cPtr_parseRewindInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@parseRewindInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstructionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mListOfSemanticInstructionListForGeneration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstructionForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ("parseRewindInstructionForGeneration",
                                                            & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration result ;
  const GALGAS_parseRewindInstructionForGeneration * p = (const GALGAS_parseRewindInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseRewindInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseRewindInstructionForGeneration_2D_weak::objectCompare (const GALGAS_parseRewindInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration_2D_weak::GALGAS_parseRewindInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration_2D_weak & GALGAS_parseRewindInstructionForGeneration_2D_weak::operator = (const GALGAS_parseRewindInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration_2D_weak::GALGAS_parseRewindInstructionForGeneration_2D_weak (const GALGAS_parseRewindInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration_2D_weak GALGAS_parseRewindInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration GALGAS_parseRewindInstructionForGeneration_2D_weak::bang_parseRewindInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseRewindInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstructionForGeneration) ;
      result = GALGAS_parseRewindInstructionForGeneration ((cPtr_parseRewindInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseRewindInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2D_weak ("parseRewindInstructionForGeneration-weak",
                                                                    & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseRewindInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseRewindInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseRewindInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseRewindInstructionForGeneration_2D_weak GALGAS_parseRewindInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_parseRewindInstructionForGeneration_2D_weak result ;
  const GALGAS_parseRewindInstructionForGeneration_2D_weak * p = (const GALGAS_parseRewindInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseRewindInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseWhenInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseWhenInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mWhenExpression.printNonNullClassInstanceProperties ("mWhenExpression") ;
    mProperty_mEndOfWhenExpression.printNonNullClassInstanceProperties ("mEndOfWhenExpression") ;
    mProperty_mWhenInstructionList.printNonNullClassInstanceProperties ("mWhenInstructionList") ;
    mProperty_mEndOfWhenInstructionList.printNonNullClassInstanceProperties ("mEndOfWhenInstructionList") ;
    mProperty_mElseInstructionList.printNonNullClassInstanceProperties ("mElseInstructionList") ;
    mProperty_mEndOfElseInstructionList.printNonNullClassInstanceProperties ("mEndOfElseInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_parseWhenInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_parseWhenInstruction * p = (const cPtr_parseWhenInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenExpression.objectCompare (p->mProperty_mWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhenExpression.objectCompare (p->mProperty_mEndOfWhenExpression) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mWhenInstructionList.objectCompare (p->mProperty_mWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfWhenInstructionList.objectCompare (p->mProperty_mEndOfWhenInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElseInstructionList.objectCompare (p->mProperty_mElseInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEndOfElseInstructionList.objectCompare (p->mProperty_mEndOfElseInstructionList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_parseWhenInstruction::objectCompare (const GALGAS_parseWhenInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction::GALGAS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                          const GALGAS_semanticExpressionAST & inAttribute_mWhenExpression,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenExpression,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mWhenInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfWhenInstructionList,
                                                                          const GALGAS_syntaxInstructionList & inAttribute_mElseInstructionList,
                                                                          const GALGAS_location & inAttribute_mEndOfElseInstructionList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mWhenExpression.isValid () && inAttribute_mEndOfWhenExpression.isValid () && inAttribute_mWhenInstructionList.isValid () && inAttribute_mEndOfWhenInstructionList.isValid () && inAttribute_mElseInstructionList.isValid () && inAttribute_mEndOfElseInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_parseWhenInstruction (inAttribute_mInstructionLocation, inAttribute_mWhenExpression, inAttribute_mEndOfWhenExpression, inAttribute_mWhenInstructionList, inAttribute_mEndOfWhenInstructionList, inAttribute_mElseInstructionList, inAttribute_mEndOfElseInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_parseWhenInstruction::readProperty_mWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::readProperty_mEndOfWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::readProperty_mWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::readProperty_mEndOfWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionList GALGAS_parseWhenInstruction::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_parseWhenInstruction::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GALGAS_location & in_mInstructionLocation,
                                                      const GALGAS_semanticExpressionAST & in_mWhenExpression,
                                                      const GALGAS_location & in_mEndOfWhenExpression,
                                                      const GALGAS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GALGAS_location & in_mEndOfWhenInstructionList,
                                                      const GALGAS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GALGAS_location & in_mEndOfElseInstructionList
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mWhenExpression (in_mWhenExpression),
mProperty_mEndOfWhenExpression (in_mEndOfWhenExpression),
mProperty_mWhenInstructionList (in_mWhenInstructionList),
mProperty_mEndOfWhenInstructionList (in_mEndOfWhenInstructionList),
mProperty_mElseInstructionList (in_mElseInstructionList),
mProperty_mEndOfElseInstructionList (in_mEndOfElseInstructionList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@parseWhenInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mEndOfWhenExpression, mProperty_mWhenInstructionList, mProperty_mEndOfWhenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction result ;
  const GALGAS_parseWhenInstruction * p = (const GALGAS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseWhenInstruction_2D_weak::objectCompare (const GALGAS_parseWhenInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction_2D_weak::GALGAS_parseWhenInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction_2D_weak & GALGAS_parseWhenInstruction_2D_weak::operator = (const GALGAS_parseWhenInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction_2D_weak::GALGAS_parseWhenInstruction_2D_weak (const GALGAS_parseWhenInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction_2D_weak GALGAS_parseWhenInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseWhenInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction GALGAS_parseWhenInstruction_2D_weak::bang_parseWhenInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseWhenInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstruction) ;
      result = GALGAS_parseWhenInstruction ((cPtr_parseWhenInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstruction_2D_weak ("parseWhenInstruction-weak",
                                                     & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstruction_2D_weak GALGAS_parseWhenInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstruction_2D_weak result ;
  const GALGAS_parseWhenInstruction_2D_weak * p = (const GALGAS_parseWhenInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseWhenInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_parseWhenInstructionForGeneration_2D_weak::objectCompare (const GALGAS_parseWhenInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration_2D_weak::GALGAS_parseWhenInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration_2D_weak & GALGAS_parseWhenInstructionForGeneration_2D_weak::operator = (const GALGAS_parseWhenInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration_2D_weak::GALGAS_parseWhenInstructionForGeneration_2D_weak (const GALGAS_parseWhenInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration_2D_weak GALGAS_parseWhenInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration GALGAS_parseWhenInstructionForGeneration_2D_weak::bang_parseWhenInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_parseWhenInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstructionForGeneration) ;
      result = GALGAS_parseWhenInstructionForGeneration ((cPtr_parseWhenInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @parseWhenInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2D_weak ("parseWhenInstructionForGeneration-weak",
                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_parseWhenInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_parseWhenInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_parseWhenInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_parseWhenInstructionForGeneration_2D_weak GALGAS_parseWhenInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_parseWhenInstructionForGeneration_2D_weak result ;
  const GALGAS_parseWhenInstructionForGeneration_2D_weak * p = (const GALGAS_parseWhenInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_parseWhenInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_syntaxSendInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_syntaxSendInstruction * p = (const cPtr_syntaxSendInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mInstructionLocation.objectCompare (p->mProperty_mInstructionLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExpression.objectCompare (p->mProperty_mExpression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_syntaxSendInstruction::objectCompare (const GALGAS_syntaxSendInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (void) :
GALGAS_syntaxInstructionAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction::GALGAS_syntaxSendInstruction (const cPtr_syntaxSendInstruction * inSourcePtr) :
GALGAS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::constructor_new (const GALGAS_location & inAttribute_mInstructionLocation,
                                                                            const GALGAS_semanticExpressionAST & inAttribute_mExpression
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  if (inAttribute_mInstructionLocation.isValid () && inAttribute_mExpression.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstruction (inAttribute_mInstructionLocation, inAttribute_mExpression COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticExpressionAST GALGAS_syntaxSendInstruction::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_semanticExpressionAST () ;
  }else{
    cPtr_syntaxSendInstruction * p = (cPtr_syntaxSendInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstruction) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstruction::cPtr_syntaxSendInstruction (const GALGAS_location & in_mInstructionLocation,
                                                        const GALGAS_semanticExpressionAST & in_mExpression
                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation COMMA_THERE),
mProperty_mExpression (in_mExpression) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

void cPtr_syntaxSendInstruction::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.addString ("[@syntaxSendInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstruction (mProperty_mInstructionLocation, mProperty_mExpression COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstruction ("syntaxSendInstruction",
                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction::extractObject (const GALGAS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction result ;
  const GALGAS_syntaxSendInstruction * p = (const GALGAS_syntaxSendInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxSendInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxSendInstruction_2D_weak::objectCompare (const GALGAS_syntaxSendInstruction_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction_2D_weak::GALGAS_syntaxSendInstruction_2D_weak (void) :
GALGAS_syntaxInstructionAST_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction_2D_weak & GALGAS_syntaxSendInstruction_2D_weak::operator = (const GALGAS_syntaxSendInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction_2D_weak::GALGAS_syntaxSendInstruction_2D_weak (const GALGAS_syntaxSendInstruction & inSource) :
GALGAS_syntaxInstructionAST_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction_2D_weak GALGAS_syntaxSendInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction GALGAS_syntaxSendInstruction_2D_weak::bang_syntaxSendInstruction_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxSendInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstruction) ;
      result = GALGAS_syntaxSendInstruction ((cPtr_syntaxSendInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstruction-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstruction_2D_weak ("syntaxSendInstruction-weak",
                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstruction_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstruction_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstruction_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstruction_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstruction_2D_weak GALGAS_syntaxSendInstruction_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstruction_2D_weak result ;
  const GALGAS_syntaxSendInstruction_2D_weak * p = (const GALGAS_syntaxSendInstruction_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxSendInstruction_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstruction-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_syntaxSendInstructionForGeneration_2D_weak::objectCompare (const GALGAS_syntaxSendInstructionForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration_2D_weak::GALGAS_syntaxSendInstructionForGeneration_2D_weak (void) :
GALGAS_syntaxInstructionForGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration_2D_weak & GALGAS_syntaxSendInstructionForGeneration_2D_weak::operator = (const GALGAS_syntaxSendInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration_2D_weak::GALGAS_syntaxSendInstructionForGeneration_2D_weak (const GALGAS_syntaxSendInstructionForGeneration & inSource) :
GALGAS_syntaxInstructionForGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration_2D_weak GALGAS_syntaxSendInstructionForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration GALGAS_syntaxSendInstructionForGeneration_2D_weak::bang_syntaxSendInstructionForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxSendInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionForGeneration) ;
      result = GALGAS_syntaxSendInstructionForGeneration ((cPtr_syntaxSendInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @syntaxSendInstructionForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2D_weak ("syntaxSendInstructionForGeneration-weak",
                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxSendInstructionForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxSendInstructionForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxSendInstructionForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxSendInstructionForGeneration_2D_weak GALGAS_syntaxSendInstructionForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_syntaxSendInstructionForGeneration_2D_weak result ;
  const GALGAS_syntaxSendInstructionForGeneration_2D_weak * p = (const GALGAS_syntaxSendInstructionForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxSendInstructionForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticInstructionForGeneration appendSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionForGeneration::method_appendSyntaxSignature (const GALGAS_string /* constinArgument_inPosfix */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (cPtr_semanticInstructionForGeneration * inObject,
                                                const GALGAS_string constin_inPosfix,
                                                GALGAS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_appendSyntaxSignature  (constin_inPosfix, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GALGAS_semanticInstructionForGeneration /* constinArgument_inTestedInstruction */,
                                                                                             Compiler */* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                   const GALGAS_semanticInstructionForGeneration in_inTestedInstruction,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_compareInstructionSyntaxSignature (in_inTestedInstruction, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mStartLocation.printNonNullClassInstanceProperties ("mStartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis::GALGAS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_location GALGAS_abstractSyntaxInstructionForGrammarAnalysis::readProperty_mStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_location () ;
  }else{
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    return p->mProperty_mStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mStartLocation (in_mStartLocation) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractSyntaxInstructionForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GALGAS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak & GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      result = GALGAS_abstractSyntaxInstructionForGrammarAnalysis ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @abstractSyntaxInstructionForGrammarAnalysis-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak ("abstractSyntaxInstructionForGrammarAnalysis-weak",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxInstructionListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxInstructionListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxInstructionListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxInstructionListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxInstructionListForGrammarAnalysis (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxInstructionListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syntaxInstructionListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * operand = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis::GALGAS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_listWithValue (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::addAssign_operation (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_append (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
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

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_popFirst (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_popLast (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::method_first (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::method_last (GALGAS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::add_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                                              Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxInstructionListForGrammarAnalysis result = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxInstructionListForGrammarAnalysis::setter_setMInstructionAtIndex (GALGAS_abstractSyntaxInstructionForGrammarAnalysis inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxInstructionListForGrammarAnalysis::cEnumerator_syntaxInstructionListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis_2D_element cEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_abstractSyntaxInstructionForGrammarAnalysis cEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxInstructionListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_syntaxInstructionListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis * p = (const GALGAS_syntaxInstructionListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxInstructionListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@productionRuleListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_productionRuleListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_productionRuleListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                   const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                   const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                   const GALGAS_uint & in_mProductionIndex
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                  const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                  const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                  const GALGAS_uint & in_mProductionIndex
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLeftNonterminalSymbol, inElement.mProperty_mLeftNonterminalSymbolIndex, inElement.mProperty_mInstructionList, inElement.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_productionRuleListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_productionRuleListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_productionRuleListForGrammarAnalysis (mObject.mProperty_mLeftNonterminalSymbol, mObject.mProperty_mLeftNonterminalSymbolIndex, mObject.mProperty_mInstructionList, mObject.mProperty_mProductionIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_productionRuleListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLeftNonterminalSymbol" ":") ;
  mObject.mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mLeftNonterminalSymbolIndex" ":") ;
  mObject.mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mProductionIndex" ":") ;
  mObject.mProperty_mProductionIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_productionRuleListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_productionRuleListForGrammarAnalysis * operand = (cCollectionElement_productionRuleListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis::GALGAS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_uint & inOperand1,
                                                                                                                    const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                                    const GALGAS_uint & inOperand3
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_lstring & in_mLeftNonterminalSymbol,
                                                                             const GALGAS_uint & in_mLeftNonterminalSymbolIndex,
                                                                             const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                             const GALGAS_uint & in_mProductionIndex
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (in_mLeftNonterminalSymbol,
                                                                          in_mLeftNonterminalSymbolIndex,
                                                                          in_mInstructionList,
                                                                          in_mProductionIndex COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                       const GALGAS_uint & inOperand1,
                                                                       const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                       const GALGAS_uint & inOperand3
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_append (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_uint inOperand1,
                                                                 const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                 const GALGAS_uint inOperand3,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                        const GALGAS_uint inOperand1,
                                                                        const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                        const GALGAS_uint inOperand3,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
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

void GALGAS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                        GALGAS_uint & outOperand1,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                        GALGAS_uint & outOperand3,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        outOperand3.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
        outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
        outOperand2 = p->mObject.mProperty_mInstructionList ;
        outOperand3 = p->mObject.mProperty_mProductionIndex ;
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

void GALGAS_productionRuleListForGrammarAnalysis::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                   GALGAS_uint & outOperand1,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                   GALGAS_uint & outOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_popLast (GALGAS_lstring & outOperand0,
                                                                  GALGAS_uint & outOperand1,
                                                                  GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                  GALGAS_uint & outOperand3,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::method_first (GALGAS_lstring & outOperand0,
                                                                GALGAS_uint & outOperand1,
                                                                GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                GALGAS_uint & outOperand3,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::method_last (GALGAS_lstring & outOperand0,
                                                               GALGAS_uint & outOperand1,
                                                               GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                               GALGAS_uint & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
    outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
    outOperand2 = p->mObject.mProperty_mInstructionList ;
    outOperand3 = p->mObject.mProperty_mProductionIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::add_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_productionRuleListForGrammarAnalysis result = GALGAS_productionRuleListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::plusAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolAtIndex (GALGAS_lstring inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbol = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbol ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolIndexAtIndex (GALGAS_uint inOperand,
                                                                                                GALGAS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLeftNonterminalSymbolIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMInstructionListAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_productionRuleListForGrammarAnalysis::setter_setMProductionIndexAtIndex (GALGAS_uint inOperand,
                                                                                     GALGAS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductionIndex = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GALGAS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_productionRuleListForGrammarAnalysis::cEnumerator_productionRuleListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis_2D_element cEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionIndex ;
}




//--------------------------------------------------------------------------------------------------
//
//     @productionRuleListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_productionRuleListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_productionRuleListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_productionRuleListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_productionRuleListForGrammarAnalysis result ;
  const GALGAS_productionRuleListForGrammarAnalysis * p = (const GALGAS_productionRuleListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_productionRuleListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex
                                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mNonTerminalIndex (in_mNonTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (mProperty_lkey, mProperty_mNonTerminalIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mNonTerminalIndex" ":") ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * operand = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mNonTerminalIndex.objectCompare (operand->mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                               const GALGAS_uint & inArgument0,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@unusedNonTerminalSymbolMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::add_operation (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inOperand,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result = *this ;
  cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mNonTerminalIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                            GALGAS_uint inArgument0,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '<%K>' non terminal symbol has already been declared as unused in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                             GALGAS_string inKey,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    p->mProperty_mNonTerminalIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                              GALGAS_uint & outArgument0) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mNonTerminalIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @unusedNonTerminalSymbolMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list
//
//--------------------------------------------------------------------------------------------------

class cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis : public cSortedListElement {
  public: GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element mObject ;

//--- Constructor
  public: cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                            const GALGAS_uint & in_mNonTerminalIndex,
                                                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual typeComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_lstring & in_mNonTerminalSymbol,
                                                                                                                                    const GALGAS_uint & in_mNonTerminalIndex,
                                                                                                                                    const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mNonTerminalSymbol, in_mNonTerminalIndex, in_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

bool cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::isValid (void) const {
  return mObject.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cSortedListElement * cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::copy (void) {
  cSortedListElement * result = nullptr ;
  macroMyNew (result, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (mObject.mProperty_mNonTerminalSymbol, mObject.mProperty_mNonTerminalIndex, mObject.mProperty_mNonterminalSymbolParametersMap COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mNonTerminalSymbol" ":") ;
  mObject.mProperty_mNonTerminalSymbol.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mNonTerminalIndex" ":") ;
  mObject.mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mNonterminalSymbolParametersMap" ":") ;
  mObject.mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compareForSorting (const cSortedListElement * inOperand) const {
  typeComparisonResult result = kOperandEqual ;
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  if (result == kOperandEqual) {
    result = mObject.mProperty_mNonTerminalIndex.objectCompare (operand->mObject.mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_sortedListWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                                            const GALGAS_uint & inOperand1,
                                                                                                                                            const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result = constructor_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_uint & inOperand1,
                                                                                const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_insert (const GALGAS_lstring inOperand0,
                                                                          const GALGAS_uint inOperand1,
                                                                          const GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis inOperand2,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cSortedListElement * p = nullptr ;
    macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capSortedListElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssign_operation (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popSmallest (GALGAS_lstring & outOperand0,
                                                                               GALGAS_uint & outOperand1,
                                                                               GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeSmallestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popGreatest (GALGAS_lstring & outOperand0,
                                                                               GALGAS_uint & outOperand1,
                                                                               GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  capSortedListElement attributes ;
  removeGreatestObject (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::method_smallest (GALGAS_lstring & outOperand0,
                                                                            GALGAS_uint & outOperand1,
                                                                            GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  smallestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::method_greatest (GALGAS_lstring & outOperand0,
                                                                            GALGAS_uint & outOperand1,
                                                                            GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capSortedListElement attributes ;
  greatestObjectAttributeList (attributes, inCompiler COMMA_THERE) ;
  cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mNonTerminalSymbol ;
    outOperand1 = p->mObject.mProperty_mNonTerminalIndex ;
    outOperand2 = p->mObject.mProperty_mNonterminalSymbolParametersMap ;
  }
}

//--------------------------------------------------------------------------------------------------

cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject,
                                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2D_element cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis cEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonterminalSymbolParametersMap ;
}



//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalSymbolSortedListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis_2D_weak & GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_terminalInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (const GALGAS_terminalInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis_2D_weak GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::bang_terminalInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_terminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalInstructionForGrammarAnalysis) ;
      result = GALGAS_terminalInstructionForGrammarAnalysis ((cPtr_terminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalInstructionForGrammarAnalysis-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ("terminalInstructionForGrammarAnalysis-weak",
                                                                      & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalInstructionForGrammarAnalysis_2D_weak GALGAS_terminalInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_terminalInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak & GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (const GALGAS_nonTerminalInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::bang_nonTerminalInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_nonTerminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
      result = GALGAS_nonTerminalInstructionForGrammarAnalysis ((cPtr_nonTerminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @nonTerminalInstructionForGrammarAnalysis-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak ("nonTerminalInstructionForGrammarAnalysis-weak",
                                                                         & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_nonTerminalInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@branchListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_branchListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_branchListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_branchListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_branchListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_branchListForGrammarAnalysis (mObject.mProperty_mSyntaxInstructionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_branchListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSyntaxInstructionList" ":") ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_branchListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_branchListForGrammarAnalysis * operand = (cCollectionElement_branchListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_branchListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis::GALGAS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::addAssign_operation (const GALGAS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::setter_append (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                         Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
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

void GALGAS_branchListForGrammarAnalysis::setter_removeAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
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

void GALGAS_branchListForGrammarAnalysis::setter_popFirst (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::setter_popLast (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::method_first (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::method_last (GALGAS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::add_operation (const GALGAS_branchListForGrammarAnalysis & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_branchListForGrammarAnalysis result = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::plusAssign_operation (const GALGAS_branchListForGrammarAnalysis inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_branchListForGrammarAnalysis::setter_setMSyntaxInstructionListAtIndex (GALGAS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxInstructionList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_syntaxInstructionListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_branchListForGrammarAnalysis::cEnumerator_branchListForGrammarAnalysis (const GALGAS_branchListForGrammarAnalysis & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis_2D_element cEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_syntaxInstructionListForGrammarAnalysis cEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//
//     @branchListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_branchListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_branchListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_branchListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_branchListForGrammarAnalysis result ;
  const GALGAS_branchListForGrammarAnalysis * p = (const GALGAS_branchListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_branchListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("branchListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_selectInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectInstructionForGrammarAnalysis * p = (const cPtr_selectInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSelectBranchList.objectCompare (p->mProperty_mSelectBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddedNonTerminalSymbolIndex.objectCompare (p->mProperty_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_selectInstructionForGrammarAnalysis::objectCompare (const GALGAS_selectInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis::GALGAS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mSelectBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mSelectBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mSelectBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_selectInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mProperty_mSelectBranchList (in_mSelectBranchList),
mProperty_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@selectInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  const GALGAS_selectInstructionForGrammarAnalysis * p = (const GALGAS_selectInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_selectInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak::GALGAS_selectInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak & GALGAS_selectInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_selectInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak::GALGAS_selectInstructionForGrammarAnalysis_2D_weak (const GALGAS_selectInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak GALGAS_selectInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis GALGAS_selectInstructionForGrammarAnalysis_2D_weak::bang_selectInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_selectInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGrammarAnalysis) ;
      result = GALGAS_selectInstructionForGrammarAnalysis ((cPtr_selectInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectInstructionForGrammarAnalysis-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ("selectInstructionForGrammarAnalysis-weak",
                                                                    & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectInstructionForGrammarAnalysis_2D_weak GALGAS_selectInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_selectInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_selectInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_repeatInstructionForGrammarAnalysis::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_repeatInstructionForGrammarAnalysis * p = (const cPtr_repeatInstructionForGrammarAnalysis *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
  if (kOperandEqual == result) {
    result = mProperty_mStartLocation.objectCompare (p->mProperty_mStartLocation) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRepeatBranchList.objectCompare (p->mProperty_mRepeatBranchList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAddedNonTerminalSymbolIndex.objectCompare (p->mProperty_mAddedNonTerminalSymbolIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_repeatInstructionForGrammarAnalysis::objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis::GALGAS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (const GALGAS_location & inAttribute_mStartLocation,
                                                                                                        const GALGAS_branchListForGrammarAnalysis & inAttribute_mRepeatBranchList,
                                                                                                        const GALGAS_uint & inAttribute_mAddedNonTerminalSymbolIndex
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  if (inAttribute_mStartLocation.isValid () && inAttribute_mRepeatBranchList.isValid () && inAttribute_mAddedNonTerminalSymbolIndex.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGrammarAnalysis (inAttribute_mStartLocation, inAttribute_mRepeatBranchList, inAttribute_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_branchListForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_repeatInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_uint () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GALGAS_location & in_mStartLocation,
                                                                                    const GALGAS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                    const GALGAS_uint & in_mAddedNonTerminalSymbolIndex
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation COMMA_THERE),
mProperty_mRepeatBranchList (in_mRepeatBranchList),
mProperty_mAddedNonTerminalSymbolIndex (in_mAddedNonTerminalSymbolIndex) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("[@repeatInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGrammarAnalysis::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                            & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  const GALGAS_repeatInstructionForGrammarAnalysis * p = (const GALGAS_repeatInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::objectCompare (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (void) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak & GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::operator = (const GALGAS_repeatInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (const GALGAS_repeatInstructionForGrammarAnalysis & inSource) :
GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::bang_repeatInstructionForGrammarAnalysis_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_repeatInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGrammarAnalysis) ;
      result = GALGAS_repeatInstructionForGrammarAnalysis ((cPtr_repeatInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @repeatInstructionForGrammarAnalysis-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ("repeatInstructionForGrammarAnalysis-weak",
                                                                    & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_repeatInstructionForGrammarAnalysis_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_repeatInstructionForGrammarAnalysis_2D_weak GALGAS_repeatInstructionForGrammarAnalysis_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_repeatInstructionForGrammarAnalysis_2D_weak result ;
  const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak * p = (const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_repeatInstructionForGrammarAnalysis_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@syntaxComponentListForGrammarAnalysis' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxComponentListForGrammarAnalysis : public cCollectionElement {
  public: GALGAS_syntaxComponentListForGrammarAnalysis_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                    const GALGAS_lstring & in_mSyntaxComponentName
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                    const GALGAS_lstring & in_mSyntaxComponentName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProductionRulesList, inElement.mProperty_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_syntaxComponentListForGrammarAnalysis::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_syntaxComponentListForGrammarAnalysis::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_syntaxComponentListForGrammarAnalysis (mObject.mProperty_mProductionRulesList, mObject.mProperty_mSyntaxComponentName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_syntaxComponentListForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mProductionRulesList" ":") ;
  mObject.mProperty_mProductionRulesList.description (ioString, inIndentation) ;
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_syntaxComponentListForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * operand = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis::GALGAS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::constructor_listWithValue (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                                      const GALGAS_lstring & inOperand1
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                              const GALGAS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                              const GALGAS_lstring & in_mSyntaxComponentName
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (in_mProductionRulesList,
                                                                           in_mSyntaxComponentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::addAssign_operation (const GALGAS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                        const GALGAS_lstring & inOperand1
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_append (const GALGAS_productionRuleListForGrammarAnalysis inOperand0,
                                                                  const GALGAS_lstring inOperand1,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GALGAS_productionRuleListForGrammarAnalysis inOperand0,
                                                                         const GALGAS_lstring inOperand1,
                                                                         const GALGAS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                         GALGAS_lstring & outOperand1,
                                                                         const GALGAS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
        outOperand0 = p->mObject.mProperty_mProductionRulesList ;
        outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
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

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_popFirst (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                    GALGAS_lstring & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_popLast (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::method_first (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                 GALGAS_lstring & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::method_last (GALGAS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    outOperand0 = p->mObject.mProperty_mProductionRulesList ;
    outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::add_operation (const GALGAS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_syntaxComponentListForGrammarAnalysis result = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::plusAssign_operation (const GALGAS_syntaxComponentListForGrammarAnalysis inOperand,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_setMProductionRulesListAtIndex (GALGAS_productionRuleListForGrammarAnalysis inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductionRulesList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_productionRuleListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionRulesList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_syntaxComponentListForGrammarAnalysis::setter_setMSyntaxComponentNameAtIndex (GALGAS_lstring inOperand,
                                                                                          GALGAS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mSyntaxComponentName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_syntaxComponentListForGrammarAnalysis::cEnumerator_syntaxComponentListForGrammarAnalysis (const GALGAS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis_2D_element cEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_productionRuleListForGrammarAnalysis cEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}




//--------------------------------------------------------------------------------------------------
//
//     @syntaxComponentListForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_syntaxComponentListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_syntaxComponentListForGrammarAnalysis GALGAS_syntaxComponentListForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_syntaxComponentListForGrammarAnalysis result ;
  const GALGAS_syntaxComponentListForGrammarAnalysis * p = (const GALGAS_syntaxComponentListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_syntaxComponentListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis::cMapElement_terminalSymbolsMapForGrammarAnalysis (const GALGAS_lstring & inKey,
                                                                                                    const GALGAS_uint & in_mTerminalIndex
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mTerminalIndex (in_mTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_terminalSymbolsMapForGrammarAnalysis::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_terminalSymbolsMapForGrammarAnalysis::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_terminalSymbolsMapForGrammarAnalysis (mProperty_lkey, mProperty_mTerminalIndex COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_terminalSymbolsMapForGrammarAnalysis::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mTerminalIndex" ":") ;
  mProperty_mTerminalIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_terminalSymbolsMapForGrammarAnalysis::compare (const cCollectionElement * inOperand) const {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * operand = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mTerminalIndex.objectCompare (operand->mProperty_mTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis::GALGAS_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis & GALGAS_terminalSymbolsMapForGrammarAnalysis::operator = (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_mapWithMapToOverride (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       const GALGAS_uint & inArgument0,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_terminalSymbolsMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@terminalSymbolsMapForGrammarAnalysis insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::add_operation (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result = *this ;
  cEnumerator_terminalSymbolsMapForGrammarAnalysis enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), enumerator.current_mTerminalIndex (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GALGAS_lstring inKey,
                                                                    GALGAS_uint inArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cMapElement_terminalSymbolsMapForGrammarAnalysis (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the terminal symbol '$%K$' is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey = "the terminal symbol '$%K$' is not declared" ;

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::method_searchKey (GALGAS_lstring inKey,
                                                                    GALGAS_uint & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) performSearch (inKey,
                                                                                                                                         inCompiler,
                                                                                                                                         kSearchErrorMessage_terminalSymbolsMapForGrammarAnalysis_searchKey
                                                                                                                                         COMMA_THERE) ;
  if (nullptr == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mTerminalIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GALGAS_string & inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  GALGAS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    result = p->mProperty_mTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GALGAS_uint inAttributeValue,
                                                                                  GALGAS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    p->mProperty_mTerminalIndex = inAttributeValue ;
  }
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis * GALGAS_terminalSymbolsMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * result = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_terminalSymbolsMapForGrammarAnalysis::cEnumerator_terminalSymbolsMapForGrammarAnalysis (const GALGAS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element cEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return GALGAS_terminalSymbolsMapForGrammarAnalysis_2D_element (p->mProperty_lkey, p->mProperty_mTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_uint cEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return p->mProperty_mTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_terminalSymbolsMapForGrammarAnalysis::optional_searchKey (const GALGAS_string & inKey,
                                                                      GALGAS_uint & outArgument0) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    outArgument0 = p->mProperty_mTerminalIndex ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @terminalSymbolsMapForGrammarAnalysis generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_terminalSymbolsMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_terminalSymbolsMapForGrammarAnalysis GALGAS_terminalSymbolsMapForGrammarAnalysis::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_terminalSymbolsMapForGrammarAnalysis result ;
  const GALGAS_terminalSymbolsMapForGrammarAnalysis * p = (const GALGAS_terminalSymbolsMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_terminalSymbolsMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstruction (cPtr_syntaxInstructionAST * inObject,
                                               GALGAS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                               const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                               GALGAS_uint & io_ioAddedNonTerminalIndex,
                                               GALGAS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_transformInstruction (io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const GALGAS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   GALGAS_rowList & ioArgument_ioRowList,
                                                   const GALGAS_uint constinArgument_inRow,
                                                   GALGAS_uint & ioArgument_ioColumn,
                                                   GALGAS_string & ioArgument_ioCurrentNode,
                                                   GALGAS_string & ioArgument_ioArrowShape,
                                                   GALGAS_string & ioArgument_ioArrows,
                                                   GALGAS_uint & ioArgument_ioMaxUsedRowIndex,
                                                   const GALGAS_bool constinArgument_inDebug,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 232)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_nodeName_9262 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GALGAS_string ("[point] {}"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9262, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 233)) ;
      }
      ioArgument_ioArrows.plusAssign_operation(GALGAS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (var_nodeName_9262, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 239)) ;
      ioArgument_ioCurrentNode = var_nodeName_9262 ;
      ioArgument_ioArrowShape = GALGAS_string ("--") ;
      ioArgument_ioColumn.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 242)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9459 (temp_2, kENUMERATION_UP) ;
    while (enumerator_9459.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9459.current_mInstruction (HERE).ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 245)) ;
      enumerator_9459.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Class for element of '@rowList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_rowList : public cCollectionElement {
  public: GALGAS_rowList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_rowList (const GALGAS__32_stringlist & in_columns
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_rowList (const GALGAS_rowList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_rowList::cCollectionElement_rowList (const GALGAS__32_stringlist & in_columns
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_columns) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_rowList::cCollectionElement_rowList (const GALGAS_rowList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_columns) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_rowList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_rowList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_rowList (mObject.mProperty_columns COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_rowList::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("columns" ":") ;
  mObject.mProperty_columns.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_rowList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_rowList * operand = (cCollectionElement_rowList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_rowList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList::GALGAS_rowList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList::GALGAS_rowList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_rowList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::constructor_listWithValue (const GALGAS__32_stringlist & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_rowList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_rowList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_rowList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                const GALGAS__32_stringlist & in_columns
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_rowList * p = nullptr ;
  macroMyNew (p, cCollectionElement_rowList (in_columns COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::addAssign_operation (const GALGAS__32_stringlist & inOperand0
                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_append (const GALGAS__32_stringlist inOperand0,
                                    Compiler * /* inCompiler */
                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_insertAtIndex (const GALGAS__32_stringlist inOperand0,
                                           const GALGAS_uint inInsertionIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_rowList::setter_removeAtIndex (GALGAS__32_stringlist & outOperand0,
                                           const GALGAS_uint inRemoveIndex,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_rowList) ;
        outOperand0 = p->mObject.mProperty_columns ;
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

void GALGAS_rowList::setter_popFirst (GALGAS__32_stringlist & outOperand0,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_popLast (GALGAS__32_stringlist & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::method_first (GALGAS__32_stringlist & outOperand0,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::method_last (GALGAS__32_stringlist & outOperand0,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    outOperand0 = p->mObject.mProperty_columns ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::add_operation (const GALGAS_rowList & inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_rowList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListWithRange (const GALGAS_range & inRange,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_rowList result = GALGAS_rowList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::plusAssign_operation (const GALGAS_rowList inOperand,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_rowList::setter_setColumnsAtIndex (GALGAS__32_stringlist inOperand,
                                               GALGAS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_columns = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_rowList::getter_columnsAtIndex (const GALGAS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  GALGAS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    result = p->mObject.mProperty_columns ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_rowList::cEnumerator_rowList (const GALGAS_rowList & inEnumeratedObject,
                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList_2D_element cEnumerator_rowList::current (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS__32_stringlist cEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject.mProperty_columns ;
}




//--------------------------------------------------------------------------------------------------
//
//     @rowList generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_rowList ("rowList",
                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_rowList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_rowList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_rowList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_rowList GALGAS_rowList::extractObject (const GALGAS_object & inObject,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  GALGAS_rowList result ;
  const GALGAS_rowList * p = (const GALGAS_rowList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_rowList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("rowList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@rowList appendRow'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_appendRow (GALGAS_rowList & ioObject,
                                const GALGAS_string constinArgument_inNodeDefinition,
                                const GALGAS_uint constinArgument_inRow,
                                const GALGAS_uint constinArgument_inColumn,
                                GALGAS_string & outArgument_outNodeName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNodeName.drop () ; // Release 'out' argument
  const GALGAS_rowList temp_0 = ioObject ;
  GALGAS_uint var_length_10272 = temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 274)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsInfOrEqual, var_length_10272.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_range enumerator_10344 (GALGAS_range (var_length_10272, constinArgument_inRow.substract_operation (var_length_10272, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 276))), kENUMERATION_UP) ;
      while (enumerator_10344.hasCurrentObject ()) {
        ioObject.addAssign_operation (GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("production-rules-in-tex.galgas", 277))  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 277)) ;
        enumerator_10344.gotoNextObject () ;
      }
    }
  }
  const GALGAS_rowList temp_2 = ioObject ;
  GALGAS__32_stringlist var_cols_10404 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 281)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsInfOrEqual, var_cols_10404.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 283)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (kBoolTrue == test_3) {
      cEnumerator_range enumerator_10533 (GALGAS_range (var_cols_10404.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), constinArgument_inColumn.substract_operation (var_cols_10404.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284)).add_operation (GALGAS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284))), kENUMERATION_UP) ;
      while (enumerator_10533.hasCurrentObject ()) {
        var_cols_10404.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 285)) ;
        enumerator_10533.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GALGAS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)).add_operation (var_cols_10404.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 289)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 289)) ;
  var_cols_10404.addAssign_operation (outArgument_outNodeName, constinArgument_inNodeDefinition  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 290)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10404, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 292)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GALGAS_rowList & io_ioRowList,
                                                       const GALGAS_uint constin_inRow,
                                                       GALGAS_uint & io_ioColumn,
                                                       GALGAS_string & io_ioCurrentNode,
                                                       GALGAS_string & io_ioArrowShape,
                                                       GALGAS_string & io_ioArrows,
                                                       GALGAS_uint & io_ioMaxUsedRowIndex,
                                                       const GALGAS_bool constin_inDebug,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    inObject->method_tikzNodeForSyntaxInstruction (io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension Getter '@syntaxInstructionListForGrammarAnalysis displayVertically'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool extensionGetter_displayVertically (const GALGAS_syntaxInstructionListForGrammarAnalysis & inObject,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_syntaxInstructionListForGrammarAnalysis temp_0 = inObject ;
  result_result = GALGAS_bool (kIsStrictSup, temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 564)).objectCompare (GALGAS_uint (uint32_t (4U)))) ;
  const GALGAS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  cEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19881 (temp_1, kENUMERATION_UP) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19881.hasCurrentObject () && bool_2) {
    while (enumerator_19881.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19881.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 566)) ;
      enumerator_19881.gotoNextObject () ;
      if (enumerator_19881.hasCurrentObject ()) {
        bool_2 = result_result.isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractSyntaxInstructionForGrammarAnalysis isLinear'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GALGAS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLinear (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@programListForGeneration' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_programListForGeneration : public cCollectionElement {
  public: GALGAS_programListForGeneration_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programListForGeneration (const GALGAS_programListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GALGAS_programListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_programListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_programListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_programListForGeneration (mObject.mProperty_mDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_programListForGeneration::description (String & ioString, const int32_t inIndentation) const {
  ioString.addNL () ;
  ioString.addStringMultiple ("| ", inIndentation) ;
  ioString.addString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_programListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_programListForGeneration * operand = (cCollectionElement_programListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_programListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration::GALGAS_programListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration::GALGAS_programListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_programListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::constructor_listWithValue (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_programListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_programListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GALGAS_semanticDeclarationForGeneration & in_mDeclaration
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::addAssign_operation (const GALGAS_semanticDeclarationForGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_append (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_insertAtIndex (const GALGAS_semanticDeclarationForGeneration inOperand0,
                                                            const GALGAS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = nullptr ;
      macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
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

void GALGAS_programListForGeneration::setter_removeAtIndex (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                            const GALGAS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
      if (nullptr == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
        outOperand0 = p->mObject.mProperty_mDeclaration ;
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

void GALGAS_programListForGeneration::setter_popFirst (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_popLast (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::method_first (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::method_last (GALGAS_semanticDeclarationForGeneration & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::add_operation (const GALGAS_programListForGeneration & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_programListForGeneration result = GALGAS_programListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::plusAssign_operation (const GALGAS_programListForGeneration inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_programListForGeneration::setter_setMDeclarationAtIndex (GALGAS_semanticDeclarationForGeneration inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDeclaration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration GALGAS_programListForGeneration::getter_mDeclarationAtIndex (const GALGAS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  GALGAS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------

cEnumerator_programListForGeneration::cEnumerator_programListForGeneration (const GALGAS_programListForGeneration & inEnumeratedObject,
                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration_2D_element cEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_semanticDeclarationForGeneration cEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//
//     @programListForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_programListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_programListForGeneration GALGAS_programListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_programListForGeneration result ;
  const GALGAS_programListForGeneration * p = (const GALGAS_programListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_programListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap::GALGAS_genericExtensionMethodListMap (void) :
AC_GALGAS_listmap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap GALGAS_genericExtensionMethodListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap::addAssign_operation (const GALGAS_string & inKey,
                                                                const GALGAS_lstring & inOperand0
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_genericExtensionMethodListMap::setter_insert (const GALGAS_string inKey,
                                                          const GALGAS_lstring inOperand0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_lstringlist::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_genericExtensionMethodListMap::getter_listForKey (const GALGAS_string & inKey
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_lstringlist (listForKey (inKey)) ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_genericExtensionMethodListMap::cEnumerator_genericExtensionMethodListMap (const GALGAS_genericExtensionMethodListMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap_2D_element cEnumerator_genericExtensionMethodListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_genericExtensionMethodListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_genericExtensionMethodListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist cEnumerator_genericExtensionMethodListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_lstringlist (p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------
//
//     @genericExtensionMethodListMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_genericExtensionMethodListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_genericExtensionMethodListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_genericExtensionMethodListMap GALGAS_genericExtensionMethodListMap::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_genericExtensionMethodListMap result ;
  const GALGAS_genericExtensionMethodListMap * p = (const GALGAS_genericExtensionMethodListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_genericExtensionMethodListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_buildExtensionListMaps (GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (cPtr_semanticDeclarationAST * inObject,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 GALGAS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_buildExtensionListMaps  (io_ioAbstractExtensionSetterListMap, io_ioExtensionSetterListMap, io_ioOverridingExtensionSetterListMap, io_ioOverridingAbstractExtensionSetterListMap, io_ioAbstractExtensionMethodListMapAST, io_ioExtensionMethodListMap, io_ioOverridingExtensionMethodListMap, io_ioOverridingAbstractExtensionMethodListMap, io_ioAbstractExtensionGetterListMap, io_ioExtensionGetterListMap, io_ioOverridingExtensionGetterListMap, io_ioOverridingAbstractExtensionGetterListMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap::GALGAS_descendantClassListMap (void) :
AC_GALGAS_listmap () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap GALGAS_descendantClassListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_descendantClassListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap::addAssign_operation (const GALGAS_string & inKey,
                                                         const GALGAS_unifiedTypeMapEntry & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_descendantClassListMap::setter_insert (const GALGAS_string inKey,
                                                   const GALGAS_unifiedTypeMapEntry inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inOperand0.isValid ()) {
    capCollectionElement attributes ;
    GALGAS_unifiedTypeMapEntryList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    addObjectInListMap (inKey.stringValue (), attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList GALGAS_descendantClassListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_unifiedTypeMapEntryList (listForKey (inKey)) ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_descendantClassListMap::cEnumerator_descendantClassListMap (const GALGAS_descendantClassListMap & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap_2D_element cEnumerator_descendantClassListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_descendantClassListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_descendantClassListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_unifiedTypeMapEntryList cEnumerator_descendantClassListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_unifiedTypeMapEntryList (p->mSharedListMapList) ;
}

//--------------------------------------------------------------------------------------------------
//
//     @descendantClassListMap generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_descendantClassListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_descendantClassListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_descendantClassListMap GALGAS_descendantClassListMap::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_descendantClassListMap result ;
  const GALGAS_descendantClassListMap * p = (const GALGAS_descendantClassListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_descendantClassListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings::cMapElement_extensionMethodMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionMethodMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionMethodMapForGlobalCheckings::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionMethodMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionMethodMapForGlobalCheckings::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionMethodMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionMethodMapForGlobalCheckings * operand = (cMapElement_extensionMethodMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings::GALGAS_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings & GALGAS_extensionMethodMapForGlobalCheckings::operator = (const GALGAS_extensionMethodMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionMethodMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionMethodMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::add_operation (const GALGAS_extensionMethodMapForGlobalCheckings & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionMethodMapForGlobalCheckings result = *this ;
  cEnumerator_extensionMethodMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionMethodMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionMethodMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension method is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings * GALGAS_extensionMethodMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * result = (cMapElement_extensionMethodMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionMethodMapForGlobalCheckings::cEnumerator_extensionMethodMapForGlobalCheckings (const GALGAS_extensionMethodMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings_2D_element cEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return GALGAS_extensionMethodMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionMethodMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionMethodMapForGlobalCheckings generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionMethodMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionMethodMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionMethodMapForGlobalCheckings GALGAS_extensionMethodMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionMethodMapForGlobalCheckings result ;
  const GALGAS_extensionMethodMapForGlobalCheckings * p = (const GALGAS_extensionMethodMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionMethodMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings::cMapElement_extensionSetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionSetterMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionSetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionSetterMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionSetterMapForGlobalCheckings::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionSetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionSetterMapForGlobalCheckings * operand = (cMapElement_extensionSetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings::GALGAS_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings & GALGAS_extensionSetterMapForGlobalCheckings::operator = (const GALGAS_extensionSetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionSetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionSetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::add_operation (const GALGAS_extensionSetterMapForGlobalCheckings & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionSetterMapForGlobalCheckings result = *this ;
  cEnumerator_extensionSetterMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionSetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionSetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension setter is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings * GALGAS_extensionSetterMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * result = (cMapElement_extensionSetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionSetterMapForGlobalCheckings::cEnumerator_extensionSetterMapForGlobalCheckings (const GALGAS_extensionSetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings_2D_element cEnumerator_extensionSetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return GALGAS_extensionSetterMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionSetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionSetterMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionSetterMapForGlobalCheckings generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ("extensionSetterMapForGlobalCheckings",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionSetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionSetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionSetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionSetterMapForGlobalCheckings GALGAS_extensionSetterMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionSetterMapForGlobalCheckings result ;
  const GALGAS_extensionSetterMapForGlobalCheckings * p = (const GALGAS_extensionSetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionSetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings::cMapElement_extensionGetterMapForGlobalCheckings (const GALGAS_lstring & inKey
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

bool cMapElement_extensionGetterMapForGlobalCheckings::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

cMapElement * cMapElement_extensionGetterMapForGlobalCheckings::copy (void) {
  cMapElement * result = nullptr ;
  macroMyNew (result, cMapElement_extensionGetterMapForGlobalCheckings (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cMapElement_extensionGetterMapForGlobalCheckings::description (String & /* ioString */, const int32_t /* inIndentation */) const {
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_extensionGetterMapForGlobalCheckings::compare (const cCollectionElement * inOperand) const {
  cMapElement_extensionGetterMapForGlobalCheckings * operand = (cMapElement_extensionGetterMapForGlobalCheckings *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings::GALGAS_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings & GALGAS_extensionGetterMapForGlobalCheckings::operator = (const GALGAS_extensionGetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::constructor_mapWithMapToOverride (const GALGAS_extensionGetterMapForGlobalCheckings & inMapToOverride
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings::addAssign_operation (const GALGAS_lstring & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@extensionGetterMapForGlobalCheckings insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::add_operation (const GALGAS_extensionGetterMapForGlobalCheckings & inOperand,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_extensionGetterMapForGlobalCheckings result = *this ;
  cEnumerator_extensionGetterMapForGlobalCheckings enumerator (inOperand, kENUMERATION_UP) ;
  while (enumerator.hasCurrentObject ()) {
    result.addAssign_operation (enumerator.current_lkey (HERE), inCompiler COMMA_THERE) ;
    enumerator.gotoNextObject () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_extensionGetterMapForGlobalCheckings::setter_insertKey (GALGAS_lstring inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * p = nullptr ;
  macroMyNew (p, cMapElement_extensionGetterMapForGlobalCheckings (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' extension getter is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings * GALGAS_extensionGetterMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                   const GALGAS_string & inKey
                                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * result = (cMapElement_extensionGetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

cEnumerator_extensionGetterMapForGlobalCheckings::cEnumerator_extensionGetterMapForGlobalCheckings (const GALGAS_extensionGetterMapForGlobalCheckings & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings_2D_element cEnumerator_extensionGetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return GALGAS_extensionGetterMapForGlobalCheckings_2D_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_extensionGetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_extensionGetterMapForGlobalCheckings::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) searchForKey (inKey) ;
  const bool result = nullptr != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  }else{
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @extensionGetterMapForGlobalCheckings generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ("extensionGetterMapForGlobalCheckings",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_extensionGetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_extensionGetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_extensionGetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_extensionGetterMapForGlobalCheckings GALGAS_extensionGetterMapForGlobalCheckings::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_extensionGetterMapForGlobalCheckings result ;
  const GALGAS_extensionGetterMapForGlobalCheckings * p = (const GALGAS_extensionGetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_extensionGetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "strings/unicode_character_cpp.h"
#include "galgas2/scanner_actions.h"
#include "galgas2/cLexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_galgasScanner_34_::cTokenFor_galgasScanner_34_ (void) :
mLexicalAttribute_bigintValue (),
mLexicalAttribute_charValue (),
mLexicalAttribute_floatValue (),
mLexicalAttribute_identifierString (),
mLexicalAttribute_sint_33__32_value (),
mLexicalAttribute_sint_36__34_value (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value (),
mLexicalAttribute_uint_36__34_value () {
}

//--------------------------------------------------------------------------------------------------

C_Lexique_galgasScanner_34_::C_Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                          const String & inSourceFileName
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

C_Lexique_galgasScanner_34_::C_Lexique_galgasScanner_34_ (Compiler * inCallerCompiler,
                                                          const String & inSourceString,
                                                          const String & inStringForError
                                                          COMMA_LOCATION_ARGS) :
C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_galgasScanner_34__attributeError = "in an attribute name, a letter or a digit should follow the '%' character" ;

static const char * gLexicalMessage_galgasScanner_34__floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_galgasScanner_34__hexDigitError = "0x should be followed by a hexadecimal digit" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectCharConstant = "incorrect literal character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrectTypeNameError = "in a type name, a letter, a digit or the underscore character should follow the '@' character" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_end = "terminal does not end with '$'" ;

static const char * gLexicalMessage_galgasScanner_34__incorrect_terminal_start = "incorrect terminal start" ;

static const char * gLexicalMessage_galgasScanner_34__internalError = "internal error" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 = "\\u should be followed by exactly four hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 = "\\U should be followed by exactly eight hexadecimal digits" ;

static const char * gLexicalMessage_galgasScanner_34__unassignedUnicodeValue = "this value does not correspond to an assigned Unicode point" ;

static const char * gLexicalMessage_galgasScanner_34__undefinedAttribute = "undefined attribute" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String C_Lexique_galgasScanner_34_::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 188)) {
    static const char * syntaxErrorMessageArray [188] = {kEndOfSourceLexicalErrorMessage,
        "an identifier",
        "a float number",
        "a big integer number",
        "the '.' delimitor",
        "the '...' delimitor",
        "the '..<' delimitor",
        "a type name (@...)",
        "a character constant",
        "a terminal symbol ($...$)",
        "a comment",
        "a comment",
        "the '\?' or '\?selector:' delimitor",
        "the '\?!' or '\?!selector:' delimitor",
        "the '!' or '!selector:' delimitor",
        "the '!\?' or '!\?selector:' delimitor",
        "the '<' delimitor",
        "the '<=' delimitor",
        "the '<<' delimitor",
        "a non terminal symbol <...>",
        "a character string constant \"...\"",
        "the 'abstract' keyword",
        "the 'after' keyword",
        "the 'array' keyword",
        "the 'as' keyword",
        "the 'bang' keyword",
        "the 'before' keyword",
        "the 'between' keyword",
        "the 'block' keyword",
        "the 'boolset' keyword",
        "the 'cast' keyword",
        "the 'case' keyword",
        "the 'class' keyword",
        "the 'constructor' keyword",
        "the 'default' keyword",
        "the 'dict' keyword",
        "the 'do' keyword",
        "the 'drop' keyword",
        "the 'else' keyword",
        "the 'elsif' keyword",
        "the 'end' keyword",
        "the 'enum' keyword",
        "the 'error' keyword",
        "the 'extension' keyword",
        "the 'extern' keyword",
        "the 'false' keyword",
        "the 'fileprivate' keyword",
        "the 'filewrapper' keyword",
        "the 'for' keyword",
        "the 'fixit' keyword",
        "the 'func' keyword",
        "the 'getter' keyword",
        "the 'grammar' keyword",
        "the 'graph' keyword",
        "the 'gui' keyword",
        "the 'if' keyword",
        "the 'in' keyword",
        "the 'indexing' keyword",
        "the 'is' keyword",
        "the 'label' keyword",
        "the 'let' keyword",
        "the 'lexique' keyword",
        "the 'list' keyword",
        "the 'listmap' keyword",
        "the 'log' keyword",
        "the 'loop' keyword",
        "the 'map' keyword",
        "the 'method' keyword",
        "the 'mod' keyword",
        "the 'mutating' keyword",
        "the 'not' keyword",
        "the 'on' keyword",
        "the 'operator' keyword",
        "the 'option' keyword",
        "the 'or' keyword",
        "the 'override' keyword",
        "the 'parse' keyword",
        "the 'public' keyword",
        "the 'protected' keyword",
        "the 'private' keyword",
        "the 'proc' keyword",
        "the 'project' keyword",
        "the 'refclass' keyword",
        "the 'repeat' keyword",
        "the 'rewind' keyword",
        "the 'rule' keyword",
        "the 'search' keyword",
        "the 'select' keyword",
        "the 'self' keyword",
        "the 'send' keyword",
        "the 'setter' keyword",
        "the 'sortedlist' keyword",
        "the 'spoil' keyword",
        "the 'struct' keyword",
        "the 'style' keyword",
        "the 'switch' keyword",
        "the 'syntax' keyword",
        "the 'tag' keyword",
        "the 'template' keyword",
        "the 'then' keyword",
        "the 'true' keyword",
        "the 'typealias' keyword",
        "the 'unused' keyword",
        "the 'var' keyword",
        "the 'warning' keyword",
        "the 'while' keyword",
        "the 'with' keyword",
        "the '%app-link' keyword",
        "the '%app-source' keyword",
        "the '%makefile-macosx' keyword",
        "the '%makefile-unix' keyword",
        "the '%makefile-x86linux32-on-macosx' keyword",
        "the '%makefile-x86linux64-on-macosx' keyword",
        "the '%makefile-win32-on-macosx' keyword",
        "the '%codeblocks-windows' keyword",
        "the '%codeblocks-linux32' keyword",
        "the '%codeblocks-linux64' keyword",
        "the '%applicationBundleBase' keyword",
        "the '%MacOS' keyword",
        "the '%MacOSDeployment' keyword",
        "the '%quietOutputByDefault' keyword",
        "the '%macCodeSign' keyword",
        "the '%libpmAtPath' keyword",
        "the '%tool-source' keyword",
        "the '%translate' keyword",
        "the '%once' keyword",
        "the '%usefull' keyword",
        "the '%generatedInSeparateFile' keyword",
        "the '%nonAtomicSelection' keyword",
        "the '%templateEndMark' keyword",
        "the '%preserved' keyword",
        "the '%selector' keyword",
        "the '%insertSetter' keyword",
        "the '%searchMethod' keyword",
        "the '%removeSetter' keyword",
        "the '%errorMessage' keyword",
        "the '%insertOrReplaceSetter' keyword",
        "the '%remove' keyword",
        "the '%replaceBy' keyword",
        "the '%insertAfter' keyword",
        "the '%insertBefore' keyword",
        "the '%useGrammar' keyword",
        "the '%searchString' keyword",
        "the '%templateReplacement' keyword",
        "the '*' delimitor",
        "the ',' delimitor",
        "the '+' delimitor",
        "the '&+' delimitor",
        "the '&-' delimitor",
        "the '&*' delimitor",
        "the '&/' delimitor",
        "the '>' delimitor",
        "the ';' delimitor",
        "the ':' delimitor",
        "the ':>' delimitor",
        "the '-' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '->' delimitor",
        "the '==' delimitor",
        "the '=' delimitor",
        "the '&&' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '+=' delimitor",
        "the '-=' delimitor",
        "the '*=' delimitor",
        "the '/=' delimitor",
        "the '/' delimitor",
        "the '!=' delimitor",
        "the '>=' delimitor",
        "the '&' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '`' delimitor",
        "the '||' delimitor",
        "the '|' delimitor",
        "the '^' delimitor",
        "the '>>' delimitor",
        "the '~' delimitor",
        "the '--' delimitor",
        "the '++' delimitor",
        "the '&--' delimitor",
        "the '&++' delimitor",
        "the '===' delimitor",
        "the '!==' delimitor",
        "the '\?^' delimitor",
        "the '!^' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$_21__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___21__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__3D__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___21__3D__3D_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_21__5E_$'
static const utf32 kUnicodeString_galgasScanner_34___21__5E_ [] = {
  TO_UNICODE ('!'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26_$'
static const utf32 kUnicodeString_galgasScanner_34___26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__26_$'
static const utf32 kUnicodeString_galgasScanner_34___26__26_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('&'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2A_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2A_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2B__2B_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2B__2B_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2D__2D_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2D__2D_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_26__2F_$'
static const utf32 kUnicodeString_galgasScanner_34___26__2F_ [] = {
  TO_UNICODE ('&'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_28_$'
static const utf32 kUnicodeString_galgasScanner_34___28_ [] = {
  TO_UNICODE ('('),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_29_$'
static const utf32 kUnicodeString_galgasScanner_34___29_ [] = {
  TO_UNICODE (')'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A_$'
static const utf32 kUnicodeString_galgasScanner_34___2A_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2A__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___2A__3D_ [] = {
  TO_UNICODE ('*'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B_$'
static const utf32 kUnicodeString_galgasScanner_34___2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__2B_$'
static const utf32 kUnicodeString_galgasScanner_34___2B__2B_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('+'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2B__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___2B__3D_ [] = {
  TO_UNICODE ('+'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2C_$'
static const utf32 kUnicodeString_galgasScanner_34___2C_ [] = {
  TO_UNICODE (','),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D_$'
static const utf32 kUnicodeString_galgasScanner_34___2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__2D_$'
static const utf32 kUnicodeString_galgasScanner_34___2D__2D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('-'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___2D__3D_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2D__3E_$'
static const utf32 kUnicodeString_galgasScanner_34___2D__3E_ [] = {
  TO_UNICODE ('-'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__2E_$'
static const utf32 kUnicodeString_galgasScanner_34___2E__2E_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('.'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2E__3C_$'
static const utf32 kUnicodeString_galgasScanner_34___2E__3C_ [] = {
  TO_UNICODE ('.'),
  TO_UNICODE ('<'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F_$'
static const utf32 kUnicodeString_galgasScanner_34___2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__2F_$'
static const utf32 kUnicodeString_galgasScanner_34___2F__2F_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('/'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_2F__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___2F__3D_ [] = {
  TO_UNICODE ('/'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_30_x$'
static const utf32 kUnicodeString_galgasScanner_34___30_x [] = {
  TO_UNICODE ('0'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A_$'
static const utf32 kUnicodeString_galgasScanner_34___3A_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3A__3E_$'
static const utf32 kUnicodeString_galgasScanner_34___3A__3E_ [] = {
  TO_UNICODE (':'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3B_$'
static const utf32 kUnicodeString_galgasScanner_34___3B_ [] = {
  TO_UNICODE (';'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D_$'
static const utf32 kUnicodeString_galgasScanner_34___3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3D__3D__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___3D__3D__3D_ [] = {
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E_$'
static const utf32 kUnicodeString_galgasScanner_34___3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3D_$'
static const utf32 kUnicodeString_galgasScanner_34___3E__3D_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('='),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3E__3E_$'
static const utf32 kUnicodeString_galgasScanner_34___3E__3E_ [] = {
  TO_UNICODE ('>'),
  TO_UNICODE ('>'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_3F__5E_$'
static const utf32 kUnicodeString_galgasScanner_34___3F__5E_ [] = {
  TO_UNICODE ('\?'),
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$MacOS$'
static const utf32 kUnicodeString_galgasScanner_34__MacOS [] = {
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('O'),
  TO_UNICODE ('S'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$MacOSDeployment$'
static const utf32 kUnicodeString_galgasScanner_34__MacOSDeployment [] = {
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('O'),
  TO_UNICODE ('S'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('y'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5B_$'
static const utf32 kUnicodeString_galgasScanner_34___5B_ [] = {
  TO_UNICODE ('['),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__24_$'
static const utf32 kUnicodeString_galgasScanner_34___5C__24_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('$'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5C__5C_$'
static const utf32 kUnicodeString_galgasScanner_34___5C__5C_ [] = {
  TO_UNICODE ('\\'),
  TO_UNICODE ('\\'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5D_$'
static const utf32 kUnicodeString_galgasScanner_34___5D_ [] = {
  TO_UNICODE (']'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_5E_$'
static const utf32 kUnicodeString_galgasScanner_34___5E_ [] = {
  TO_UNICODE ('^'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_60_$'
static const utf32 kUnicodeString_galgasScanner_34___60_ [] = {
  TO_UNICODE ('`'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$abstract$'
static const utf32 kUnicodeString_galgasScanner_34__abstract [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$after$'
static const utf32 kUnicodeString_galgasScanner_34__after [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$app_2D_link$'
static const utf32 kUnicodeString_galgasScanner_34__app_2D_link [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$app_2D_source$'
static const utf32 kUnicodeString_galgasScanner_34__app_2D_source [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('-'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$applicationBundleBase$'
static const utf32 kUnicodeString_galgasScanner_34__applicationBundleBase [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('B'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('B'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$array$'
static const utf32 kUnicodeString_galgasScanner_34__array [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$as$'
static const utf32 kUnicodeString_galgasScanner_34__as [] = {
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$bang$'
static const utf32 kUnicodeString_galgasScanner_34__bang [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$before$'
static const utf32 kUnicodeString_galgasScanner_34__before [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$between$'
static const utf32 kUnicodeString_galgasScanner_34__between [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('w'),
  TO_UNICODE ('e'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$block$'
static const utf32 kUnicodeString_galgasScanner_34__block [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$boolset$'
static const utf32 kUnicodeString_galgasScanner_34__boolset [] = {
  TO_UNICODE ('b'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$case$'
static const utf32 kUnicodeString_galgasScanner_34__case [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$cast$'
static const utf32 kUnicodeString_galgasScanner_34__cast [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$class$'
static const utf32 kUnicodeString_galgasScanner_34__class [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$codeblocks_2D_linux_33__32_$'
static const utf32 kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_ [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$codeblocks_2D_linux_36__34_$'
static const utf32 kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_ [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$codeblocks_2D_windows$'
static const utf32 kUnicodeString_galgasScanner_34__codeblocks_2D_windows [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE ('k'),
  TO_UNICODE ('s'),
  TO_UNICODE ('-'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE ('w'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$constructor$'
static const utf32 kUnicodeString_galgasScanner_34__constructor [] = {
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$default$'
static const utf32 kUnicodeString_galgasScanner_34__default [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$dict$'
static const utf32 kUnicodeString_galgasScanner_34__dict [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$do$'
static const utf32 kUnicodeString_galgasScanner_34__do [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('o'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$drop$'
static const utf32 kUnicodeString_galgasScanner_34__drop [] = {
  TO_UNICODE ('d'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$else$'
static const utf32 kUnicodeString_galgasScanner_34__else [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$elsif$'
static const utf32 kUnicodeString_galgasScanner_34__elsif [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$end$'
static const utf32 kUnicodeString_galgasScanner_34__end [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$enum$'
static const utf32 kUnicodeString_galgasScanner_34__enum [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('m'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$error$'
static const utf32 kUnicodeString_galgasScanner_34__error [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$errorMessage$'
static const utf32 kUnicodeString_galgasScanner_34__errorMessage [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('M'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extension$'
static const utf32 kUnicodeString_galgasScanner_34__extension [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$extern$'
static const utf32 kUnicodeString_galgasScanner_34__extern [] = {
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$false$'
static const utf32 kUnicodeString_galgasScanner_34__false [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$fileprivate$'
static const utf32 kUnicodeString_galgasScanner_34__fileprivate [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$filewrapper$'
static const utf32 kUnicodeString_galgasScanner_34__filewrapper [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$fixit$'
static const utf32 kUnicodeString_galgasScanner_34__fixit [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$for$'
static const utf32 kUnicodeString_galgasScanner_34__for [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$func$'
static const utf32 kUnicodeString_galgasScanner_34__func [] = {
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$generatedInSeparateFile$'
static const utf32 kUnicodeString_galgasScanner_34__generatedInSeparateFile [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('I'),
  TO_UNICODE ('n'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('F'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$getter$'
static const utf32 kUnicodeString_galgasScanner_34__getter [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$grammar$'
static const utf32 kUnicodeString_galgasScanner_34__grammar [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$graph$'
static const utf32 kUnicodeString_galgasScanner_34__graph [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$gui$'
static const utf32 kUnicodeString_galgasScanner_34__gui [] = {
  TO_UNICODE ('g'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$if$'
static const utf32 kUnicodeString_galgasScanner_34__if [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$in$'
static const utf32 kUnicodeString_galgasScanner_34__in [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$indexing$'
static const utf32 kUnicodeString_galgasScanner_34__indexing [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insertAfter$'
static const utf32 kUnicodeString_galgasScanner_34__insertAfter [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('A'),
  TO_UNICODE ('f'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insertBefore$'
static const utf32 kUnicodeString_galgasScanner_34__insertBefore [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('B'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insertOrReplaceSetter$'
static const utf32 kUnicodeString_galgasScanner_34__insertOrReplaceSetter [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('O'),
  TO_UNICODE ('r'),
  TO_UNICODE ('R'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$insertSetter$'
static const utf32 kUnicodeString_galgasScanner_34__insertSetter [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$is$'
static const utf32 kUnicodeString_galgasScanner_34__is [] = {
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$label$'
static const utf32 kUnicodeString_galgasScanner_34__label [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('b'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$let$'
static const utf32 kUnicodeString_galgasScanner_34__let [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$lexique$'
static const utf32 kUnicodeString_galgasScanner_34__lexique [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('x'),
  TO_UNICODE ('i'),
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$libpmAtPath$'
static const utf32 kUnicodeString_galgasScanner_34__libpmAtPath [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('b'),
  TO_UNICODE ('p'),
  TO_UNICODE ('m'),
  TO_UNICODE ('A'),
  TO_UNICODE ('t'),
  TO_UNICODE ('P'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$list$'
static const utf32 kUnicodeString_galgasScanner_34__list [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$listmap$'
static const utf32 kUnicodeString_galgasScanner_34__listmap [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$log$'
static const utf32 kUnicodeString_galgasScanner_34__log [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$loop$'
static const utf32 kUnicodeString_galgasScanner_34__loop [] = {
  TO_UNICODE ('l'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$macCodeSign$'
static const utf32 kUnicodeString_galgasScanner_34__macCodeSign [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('C'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('i'),
  TO_UNICODE ('g'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$makefile_2D_macosx$'
static const utf32 kUnicodeString_galgasScanner_34__makefile_2D_macosx [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$makefile_2D_unix$'
static const utf32 kUnicodeString_galgasScanner_34__makefile_2D_unix [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$makefile_2D_win_33__32__2D_on_2D_macosx$'
static const utf32 kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx$'
static const utf32 kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('x'),
  TO_UNICODE ('8'),
  TO_UNICODE ('6'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('3'),
  TO_UNICODE ('2'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx$'
static const utf32 kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('k'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('-'),
  TO_UNICODE ('x'),
  TO_UNICODE ('8'),
  TO_UNICODE ('6'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('x'),
  TO_UNICODE ('6'),
  TO_UNICODE ('4'),
  TO_UNICODE ('-'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('-'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('o'),
  TO_UNICODE ('s'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$map$'
static const utf32 kUnicodeString_galgasScanner_34__map [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('p'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$method$'
static const utf32 kUnicodeString_galgasScanner_34__method [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mod$'
static const utf32 kUnicodeString_galgasScanner_34__mod [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$mutating$'
static const utf32 kUnicodeString_galgasScanner_34__mutating [] = {
  TO_UNICODE ('m'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$nonAtomicSelection$'
static const utf32 kUnicodeString_galgasScanner_34__nonAtomicSelection [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('A'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('m'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$not$'
static const utf32 kUnicodeString_galgasScanner_34__not [] = {
  TO_UNICODE ('n'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$on$'
static const utf32 kUnicodeString_galgasScanner_34__on [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$once$'
static const utf32 kUnicodeString_galgasScanner_34__once [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$operator$'
static const utf32 kUnicodeString_galgasScanner_34__operator [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$option$'
static const utf32 kUnicodeString_galgasScanner_34__option [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('p'),
  TO_UNICODE ('t'),
  TO_UNICODE ('i'),
  TO_UNICODE ('o'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$or$'
static const utf32 kUnicodeString_galgasScanner_34__or [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$override$'
static const utf32 kUnicodeString_galgasScanner_34__override [] = {
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('d'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$parse$'
static const utf32 kUnicodeString_galgasScanner_34__parse [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$preserved$'
static const utf32 kUnicodeString_galgasScanner_34__preserved [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$private$'
static const utf32 kUnicodeString_galgasScanner_34__private [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$proc$'
static const utf32 kUnicodeString_galgasScanner_34__proc [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$project$'
static const utf32 kUnicodeString_galgasScanner_34__project [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('j'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$protected$'
static const utf32 kUnicodeString_galgasScanner_34__protected [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('r'),
  TO_UNICODE ('o'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$public$'
static const utf32 kUnicodeString_galgasScanner_34__public [] = {
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('b'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('c'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$quietOutputByDefault$'
static const utf32 kUnicodeString_galgasScanner_34__quietOutputByDefault [] = {
  TO_UNICODE ('q'),
  TO_UNICODE ('u'),
  TO_UNICODE ('i'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('O'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('p'),
  TO_UNICODE ('u'),
  TO_UNICODE ('t'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
  TO_UNICODE ('D'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('a'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$refclass$'
static const utf32 kUnicodeString_galgasScanner_34__refclass [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('c'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$remove$'
static const utf32 kUnicodeString_galgasScanner_34__remove [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$removeSetter$'
static const utf32 kUnicodeString_galgasScanner_34__removeSetter [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('o'),
  TO_UNICODE ('v'),
  TO_UNICODE ('e'),
  TO_UNICODE ('S'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$repeat$'
static const utf32 kUnicodeString_galgasScanner_34__repeat [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$replaceBy$'
static const utf32 kUnicodeString_galgasScanner_34__replaceBy [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('B'),
  TO_UNICODE ('y'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rewind$'
static const utf32 kUnicodeString_galgasScanner_34__rewind [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('e'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$rule$'
static const utf32 kUnicodeString_galgasScanner_34__rule [] = {
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$search$'
static const utf32 kUnicodeString_galgasScanner_34__search [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$searchMethod$'
static const utf32 kUnicodeString_galgasScanner_34__searchMethod [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('M'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('o'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$searchString$'
static const utf32 kUnicodeString_galgasScanner_34__searchString [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE ('S'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$select$'
static const utf32 kUnicodeString_galgasScanner_34__select [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$selector$'
static const utf32 kUnicodeString_galgasScanner_34__selector [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$self$'
static const utf32 kUnicodeString_galgasScanner_34__self [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('l'),
  TO_UNICODE ('f'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$send$'
static const utf32 kUnicodeString_galgasScanner_34__send [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$setter$'
static const utf32 kUnicodeString_galgasScanner_34__setter [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('t'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$sortedlist$'
static const utf32 kUnicodeString_galgasScanner_34__sortedlist [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('r'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$spoil$'
static const utf32 kUnicodeString_galgasScanner_34__spoil [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('p'),
  TO_UNICODE ('o'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$struct$'
static const utf32 kUnicodeString_galgasScanner_34__struct [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('c'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$style$'
static const utf32 kUnicodeString_galgasScanner_34__style [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$switch$'
static const utf32 kUnicodeString_galgasScanner_34__switch [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('c'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$syntax$'
static const utf32 kUnicodeString_galgasScanner_34__syntax [] = {
  TO_UNICODE ('s'),
  TO_UNICODE ('y'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('x'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tag$'
static const utf32 kUnicodeString_galgasScanner_34__tag [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('a'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$template$'
static const utf32 kUnicodeString_galgasScanner_34__template [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$templateEndMark$'
static const utf32 kUnicodeString_galgasScanner_34__templateEndMark [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('E'),
  TO_UNICODE ('n'),
  TO_UNICODE ('d'),
  TO_UNICODE ('M'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('k'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$templateReplacement$'
static const utf32 kUnicodeString_galgasScanner_34__templateReplacement [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE ('R'),
  TO_UNICODE ('e'),
  TO_UNICODE ('p'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE ('m'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE ('t'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$then$'
static const utf32 kUnicodeString_galgasScanner_34__then [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE ('e'),
  TO_UNICODE ('n'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$tool_2D_source$'
static const utf32 kUnicodeString_galgasScanner_34__tool_2D_source [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('o'),
  TO_UNICODE ('o'),
  TO_UNICODE ('l'),
  TO_UNICODE ('-'),
  TO_UNICODE ('s'),
  TO_UNICODE ('o'),
  TO_UNICODE ('u'),
  TO_UNICODE ('r'),
  TO_UNICODE ('c'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$translate$'
static const utf32 kUnicodeString_galgasScanner_34__translate [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('n'),
  TO_UNICODE ('s'),
  TO_UNICODE ('l'),
  TO_UNICODE ('a'),
  TO_UNICODE ('t'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$true$'
static const utf32 kUnicodeString_galgasScanner_34__true [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('r'),
  TO_UNICODE ('u'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$typealias$'
static const utf32 kUnicodeString_galgasScanner_34__typealias [] = {
  TO_UNICODE ('t'),
  TO_UNICODE ('y'),
  TO_UNICODE ('p'),
  TO_UNICODE ('e'),
  TO_UNICODE ('a'),
  TO_UNICODE ('l'),
  TO_UNICODE ('i'),
  TO_UNICODE ('a'),
  TO_UNICODE ('s'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$unused$'
static const utf32 kUnicodeString_galgasScanner_34__unused [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('n'),
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('d'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$useGrammar$'
static const utf32 kUnicodeString_galgasScanner_34__useGrammar [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('G'),
  TO_UNICODE ('r'),
  TO_UNICODE ('a'),
  TO_UNICODE ('m'),
  TO_UNICODE ('m'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$usefull$'
static const utf32 kUnicodeString_galgasScanner_34__usefull [] = {
  TO_UNICODE ('u'),
  TO_UNICODE ('s'),
  TO_UNICODE ('e'),
  TO_UNICODE ('f'),
  TO_UNICODE ('u'),
  TO_UNICODE ('l'),
  TO_UNICODE ('l'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$var$'
static const utf32 kUnicodeString_galgasScanner_34__var [] = {
  TO_UNICODE ('v'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$warning$'
static const utf32 kUnicodeString_galgasScanner_34__warning [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('a'),
  TO_UNICODE ('r'),
  TO_UNICODE ('n'),
  TO_UNICODE ('i'),
  TO_UNICODE ('n'),
  TO_UNICODE ('g'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$while$'
static const utf32 kUnicodeString_galgasScanner_34__while [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('h'),
  TO_UNICODE ('i'),
  TO_UNICODE ('l'),
  TO_UNICODE ('e'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$with$'
static const utf32 kUnicodeString_galgasScanner_34__with [] = {
  TO_UNICODE ('w'),
  TO_UNICODE ('i'),
  TO_UNICODE ('t'),
  TO_UNICODE ('h'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7B_$'
static const utf32 kUnicodeString_galgasScanner_34___7B_ [] = {
  TO_UNICODE ('{'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C_$'
static const utf32 kUnicodeString_galgasScanner_34___7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7C__7C_$'
static const utf32 kUnicodeString_galgasScanner_34___7C__7C_ [] = {
  TO_UNICODE ('|'),
  TO_UNICODE ('|'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7D_$'
static const utf32 kUnicodeString_galgasScanner_34___7D_ [] = {
  TO_UNICODE ('}'),
  TO_UNICODE (0)
} ;

//--- Unicode string for '$_7E_$'
static const utf32 kUnicodeString_galgasScanner_34___7E_ [] = {
  TO_UNICODE ('~'),
  TO_UNICODE (0)
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__attributeKeyWordList = 37 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__attributeKeyWordList [ktable_size_galgasScanner_34__attributeKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__once, 4, C_Lexique_galgasScanner_34_::kToken__25_once),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacOS, 5, C_Lexique_galgasScanner_34_::kToken__25_MacOS),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__remove, 6, C_Lexique_galgasScanner_34_::kToken__25_remove),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__usefull, 7, C_Lexique_galgasScanner_34_::kToken__25_usefull),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__app_2D_link, 8, C_Lexique_galgasScanner_34_::kToken__25_app_2D_link),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__selector, 8, C_Lexique_galgasScanner_34_::kToken__25_selector),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__preserved, 9, C_Lexique_galgasScanner_34_::kToken__25_preserved),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__replaceBy, 9, C_Lexique_galgasScanner_34_::kToken__25_replaceBy),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__translate, 9, C_Lexique_galgasScanner_34_::kToken__25_translate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__app_2D_source, 10, C_Lexique_galgasScanner_34_::kToken__25_app_2D_source),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__useGrammar, 10, C_Lexique_galgasScanner_34_::kToken__25_useGrammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertAfter, 11, C_Lexique_galgasScanner_34_::kToken__25_insertAfter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__libpmAtPath, 11, C_Lexique_galgasScanner_34_::kToken__25_libpmAtPath),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__macCodeSign, 11, C_Lexique_galgasScanner_34_::kToken__25_macCodeSign),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tool_2D_source, 11, C_Lexique_galgasScanner_34_::kToken__25_tool_2D_source),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__errorMessage, 12, C_Lexique_galgasScanner_34_::kToken__25_errorMessage),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertBefore, 12, C_Lexique_galgasScanner_34_::kToken__25_insertBefore),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertSetter, 12, C_Lexique_galgasScanner_34_::kToken__25_insertSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__removeSetter, 12, C_Lexique_galgasScanner_34_::kToken__25_removeSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchMethod, 12, C_Lexique_galgasScanner_34_::kToken__25_searchMethod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__searchString, 12, C_Lexique_galgasScanner_34_::kToken__25_searchString),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_unix, 13, C_Lexique_galgasScanner_34_::kToken__25_makefile_2D_unix),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__MacOSDeployment, 15, C_Lexique_galgasScanner_34_::kToken__25_MacOSDeployment),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_macosx, 15, C_Lexique_galgasScanner_34_::kToken__25_makefile_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateEndMark, 15, C_Lexique_galgasScanner_34_::kToken__25_templateEndMark),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_33__32_, 18, C_Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_33__32_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_linux_36__34_, 18, C_Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_linux_36__34_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__codeblocks_2D_windows, 18, C_Lexique_galgasScanner_34_::kToken__25_codeblocks_2D_windows),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__nonAtomicSelection, 18, C_Lexique_galgasScanner_34_::kToken__25_nonAtomicSelection),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__templateReplacement, 19, C_Lexique_galgasScanner_34_::kToken__25_templateReplacement),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__quietOutputByDefault, 20, C_Lexique_galgasScanner_34_::kToken__25_quietOutputByDefault),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__applicationBundleBase, 21, C_Lexique_galgasScanner_34_::kToken__25_applicationBundleBase),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__insertOrReplaceSetter, 21, C_Lexique_galgasScanner_34_::kToken__25_insertOrReplaceSetter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__generatedInSeparateFile, 23, C_Lexique_galgasScanner_34_::kToken__25_generatedInSeparateFile),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_win_33__32__2D_on_2D_macosx, 24, C_Lexique_galgasScanner_34_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, 29, C_Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, 29, C_Lexique_galgasScanner_34_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx)
} ;

int32_t C_Lexique_galgasScanner_34_::search_into_attributeKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__attributeKeyWordList, ktable_size_galgasScanner_34__attributeKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasDelimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasDelimitorsList = 44 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasDelimitorsList [ktable_size_galgasScanner_34__galgasDelimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26_, 1, C_Lexique_galgasScanner_34_::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___28_, 1, C_Lexique_galgasScanner_34_::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___29_, 1, C_Lexique_galgasScanner_34_::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A_, 1, C_Lexique_galgasScanner_34_::kToken__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B_, 1, C_Lexique_galgasScanner_34_::kToken__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2C_, 1, C_Lexique_galgasScanner_34_::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D_, 1, C_Lexique_galgasScanner_34_::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F_, 1, C_Lexique_galgasScanner_34_::kToken__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A_, 1, C_Lexique_galgasScanner_34_::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3B_, 1, C_Lexique_galgasScanner_34_::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D_, 1, C_Lexique_galgasScanner_34_::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E_, 1, C_Lexique_galgasScanner_34_::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5B_, 1, C_Lexique_galgasScanner_34_::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5D_, 1, C_Lexique_galgasScanner_34_::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___5E_, 1, C_Lexique_galgasScanner_34_::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___60_, 1, C_Lexique_galgasScanner_34_::kToken__60_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7B_, 1, C_Lexique_galgasScanner_34_::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C_, 1, C_Lexique_galgasScanner_34_::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7D_, 1, C_Lexique_galgasScanner_34_::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7E_, 1, C_Lexique_galgasScanner_34_::kToken__7E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D_, 2, C_Lexique_galgasScanner_34_::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__5E_, 2, C_Lexique_galgasScanner_34_::kToken__21__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__26_, 2, C_Lexique_galgasScanner_34_::kToken__26__26_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2A_, 2, C_Lexique_galgasScanner_34_::kToken__26__2A_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B_, 2, C_Lexique_galgasScanner_34_::kToken__26__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D_, 2, C_Lexique_galgasScanner_34_::kToken__26__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2F_, 2, C_Lexique_galgasScanner_34_::kToken__26__2F_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2A__3D_, 2, C_Lexique_galgasScanner_34_::kToken__2A__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__2B_, 2, C_Lexique_galgasScanner_34_::kToken__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2B__3D_, 2, C_Lexique_galgasScanner_34_::kToken__2B__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__2D_, 2, C_Lexique_galgasScanner_34_::kToken__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3D_, 2, C_Lexique_galgasScanner_34_::kToken__2D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2D__3E_, 2, C_Lexique_galgasScanner_34_::kToken__2D__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___2F__3D_, 2, C_Lexique_galgasScanner_34_::kToken__2F__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3A__3E_, 2, C_Lexique_galgasScanner_34_::kToken__3A__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D_, 2, C_Lexique_galgasScanner_34_::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3D_, 2, C_Lexique_galgasScanner_34_::kToken__3E__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3E__3E_, 2, C_Lexique_galgasScanner_34_::kToken__3E__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3F__5E_, 2, C_Lexique_galgasScanner_34_::kToken__3F__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___7C__7C_, 2, C_Lexique_galgasScanner_34_::kToken__7C__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___21__3D__3D_, 3, C_Lexique_galgasScanner_34_::kToken__21__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2B__2B_, 3, C_Lexique_galgasScanner_34_::kToken__26__2B__2B_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___26__2D__2D_, 3, C_Lexique_galgasScanner_34_::kToken__26__2D__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34___3D__3D__3D_, 3, C_Lexique_galgasScanner_34_::kToken__3D__3D__3D_)
} ;

int32_t C_Lexique_galgasScanner_34_::search_into_galgasDelimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasDelimitorsList, ktable_size_galgasScanner_34__galgasDelimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_galgasScanner_34__galgasKeyWordList = 86 ;

static const C_unicode_lexique_table_entry ktable_for_galgasScanner_34__galgasKeyWordList [ktable_size_galgasScanner_34__galgasKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__as, 2, C_Lexique_galgasScanner_34_::kToken_as),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__do, 2, C_Lexique_galgasScanner_34_::kToken_do),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__if, 2, C_Lexique_galgasScanner_34_::kToken_if),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__in, 2, C_Lexique_galgasScanner_34_::kToken_in),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__is, 2, C_Lexique_galgasScanner_34_::kToken_is),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__on, 2, C_Lexique_galgasScanner_34_::kToken_on),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__or, 2, C_Lexique_galgasScanner_34_::kToken_or),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__end, 3, C_Lexique_galgasScanner_34_::kToken_end),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__for, 3, C_Lexique_galgasScanner_34_::kToken_for),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__gui, 3, C_Lexique_galgasScanner_34_::kToken_gui),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__let, 3, C_Lexique_galgasScanner_34_::kToken_let),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__log, 3, C_Lexique_galgasScanner_34_::kToken_log),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__map, 3, C_Lexique_galgasScanner_34_::kToken_map),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mod, 3, C_Lexique_galgasScanner_34_::kToken_mod),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__not, 3, C_Lexique_galgasScanner_34_::kToken_not),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__tag, 3, C_Lexique_galgasScanner_34_::kToken_tag),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__var, 3, C_Lexique_galgasScanner_34_::kToken_var),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__bang, 4, C_Lexique_galgasScanner_34_::kToken_bang),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__case, 4, C_Lexique_galgasScanner_34_::kToken_case),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__cast, 4, C_Lexique_galgasScanner_34_::kToken_cast),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__dict, 4, C_Lexique_galgasScanner_34_::kToken_dict),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__drop, 4, C_Lexique_galgasScanner_34_::kToken_drop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__else, 4, C_Lexique_galgasScanner_34_::kToken_else),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__enum, 4, C_Lexique_galgasScanner_34_::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__func, 4, C_Lexique_galgasScanner_34_::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__list, 4, C_Lexique_galgasScanner_34_::kToken_list),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__loop, 4, C_Lexique_galgasScanner_34_::kToken_loop),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__proc, 4, C_Lexique_galgasScanner_34_::kToken_proc),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rule, 4, C_Lexique_galgasScanner_34_::kToken_rule),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__self, 4, C_Lexique_galgasScanner_34_::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__send, 4, C_Lexique_galgasScanner_34_::kToken_send),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__then, 4, C_Lexique_galgasScanner_34_::kToken_then),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__true, 4, C_Lexique_galgasScanner_34_::kToken_true),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__with, 4, C_Lexique_galgasScanner_34_::kToken_with),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__after, 5, C_Lexique_galgasScanner_34_::kToken_after),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__array, 5, C_Lexique_galgasScanner_34_::kToken_array),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__block, 5, C_Lexique_galgasScanner_34_::kToken_block),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__class, 5, C_Lexique_galgasScanner_34_::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__elsif, 5, C_Lexique_galgasScanner_34_::kToken_elsif),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__error, 5, C_Lexique_galgasScanner_34_::kToken_error),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__false, 5, C_Lexique_galgasScanner_34_::kToken_false),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fixit, 5, C_Lexique_galgasScanner_34_::kToken_fixit),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__graph, 5, C_Lexique_galgasScanner_34_::kToken_graph),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__label, 5, C_Lexique_galgasScanner_34_::kToken_label),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__parse, 5, C_Lexique_galgasScanner_34_::kToken_parse),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__spoil, 5, C_Lexique_galgasScanner_34_::kToken_spoil),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__style, 5, C_Lexique_galgasScanner_34_::kToken_style),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__while, 5, C_Lexique_galgasScanner_34_::kToken_while),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__before, 6, C_Lexique_galgasScanner_34_::kToken_before),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extern, 6, C_Lexique_galgasScanner_34_::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__getter, 6, C_Lexique_galgasScanner_34_::kToken_getter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__method, 6, C_Lexique_galgasScanner_34_::kToken_method),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__option, 6, C_Lexique_galgasScanner_34_::kToken_option),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__public, 6, C_Lexique_galgasScanner_34_::kToken_public),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__repeat, 6, C_Lexique_galgasScanner_34_::kToken_repeat),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__rewind, 6, C_Lexique_galgasScanner_34_::kToken_rewind),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__search, 6, C_Lexique_galgasScanner_34_::kToken_search),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__select, 6, C_Lexique_galgasScanner_34_::kToken_select),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__setter, 6, C_Lexique_galgasScanner_34_::kToken_setter),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__struct, 6, C_Lexique_galgasScanner_34_::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__switch, 6, C_Lexique_galgasScanner_34_::kToken_switch),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__syntax, 6, C_Lexique_galgasScanner_34_::kToken_syntax),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__unused, 6, C_Lexique_galgasScanner_34_::kToken_unused),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__between, 7, C_Lexique_galgasScanner_34_::kToken_between),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__boolset, 7, C_Lexique_galgasScanner_34_::kToken_boolset),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__default, 7, C_Lexique_galgasScanner_34_::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__grammar, 7, C_Lexique_galgasScanner_34_::kToken_grammar),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__lexique, 7, C_Lexique_galgasScanner_34_::kToken_lexique),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__listmap, 7, C_Lexique_galgasScanner_34_::kToken_listmap),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__private, 7, C_Lexique_galgasScanner_34_::kToken_private),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__project, 7, C_Lexique_galgasScanner_34_::kToken_project),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__warning, 7, C_Lexique_galgasScanner_34_::kToken_warning),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__abstract, 8, C_Lexique_galgasScanner_34_::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__indexing, 8, C_Lexique_galgasScanner_34_::kToken_indexing),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__mutating, 8, C_Lexique_galgasScanner_34_::kToken_mutating),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__operator, 8, C_Lexique_galgasScanner_34_::kToken_operator),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__override, 8, C_Lexique_galgasScanner_34_::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__refclass, 8, C_Lexique_galgasScanner_34_::kToken_refclass),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__template, 8, C_Lexique_galgasScanner_34_::kToken_template),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__extension, 9, C_Lexique_galgasScanner_34_::kToken_extension),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__protected, 9, C_Lexique_galgasScanner_34_::kToken_protected),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__typealias, 9, C_Lexique_galgasScanner_34_::kToken_typealias),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__sortedlist, 10, C_Lexique_galgasScanner_34_::kToken_sortedlist),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__constructor, 11, C_Lexique_galgasScanner_34_::kToken_constructor),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__fileprivate, 11, C_Lexique_galgasScanner_34_::kToken_fileprivate),
  C_unicode_lexique_table_entry (kUnicodeString_galgasScanner_34__filewrapper, 11, C_Lexique_galgasScanner_34_::kToken_filewrapper)
} ;

int32_t C_Lexique_galgasScanner_34_::search_into_galgasKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_galgasScanner_34__galgasKeyWordList, ktable_size_galgasScanner_34__galgasKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String C_Lexique_galgasScanner_34_::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_galgasScanner_34_ * ptr = (const cTokenFor_galgasScanner_34_ *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.addString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.addString ("$$") ;
      break ;
    case kToken_identifier:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("identifier") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_double_2E_xxx:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("double.xxx") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addDouble (ptr->mLexicalAttribute_floatValue) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literalInt:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("literalInt") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_bigintValue.decimalString ()) ;
      break ;
    case kToken__2E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (".") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__2E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("...") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2E__2E__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("..<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__40_type:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("@type") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__27_char_27_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("'char'") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addUnicodeChar (ptr->mLexicalAttribute_charValue COMMA_HERE) ;
      break ;
    case kToken__24_terminal_24_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("$terminal$") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("comment") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_commentMark:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("commentMark") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("\?") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3F__21_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("\?!") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__21__3F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!\?") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C__3C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<<") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3C_non_5F_terminal_3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("<non_terminal>") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__22_string_22_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("\"string\"") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addUnicodeChar (TO_UNICODE (' ') COMMA_HERE) ;
      s.addStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_abstract:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("abstract") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_after:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("after") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_array:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("array") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_as:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("as") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_bang:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("bang") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_before:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("before") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_between:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("between") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_block:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("block") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_boolset:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("boolset") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_cast:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("cast") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_case:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("case") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_class:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("class") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_constructor:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("constructor") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_default:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("default") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_dict:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("dict") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_do:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("do") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_drop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("drop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_else:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("else") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_elsif:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("elsif") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_end:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("end") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_enum:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("enum") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_error:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("error") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extension:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("extension") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_extern:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("extern") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_false:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("false") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fileprivate:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("fileprivate") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_filewrapper:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("filewrapper") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_for:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("for") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_fixit:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("fixit") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_func:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("func") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_getter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("getter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_grammar:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("grammar") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_graph:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("graph") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_gui:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("gui") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_if:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("if") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_in:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("in") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_indexing:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("indexing") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_is:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("is") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_label:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("label") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_let:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("let") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_lexique:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("lexique") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_list:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("list") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_listmap:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("listmap") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_log:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("log") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_loop:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("loop") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_map:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("map") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_method:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("method") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mod:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mod") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_mutating:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("mutating") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_not:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("not") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_on:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("on") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_operator:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("operator") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_option:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("option") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_or:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("or") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_override:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("override") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_parse:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("parse") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_public:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("public") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_protected:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("protected") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_private:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("private") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_proc:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("proc") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_project:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("project") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_refclass:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("refclass") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_repeat:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("repeat") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rewind:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rewind") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_rule:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("rule") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_search:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("search") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_select:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("select") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_self:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("self") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_send:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("send") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_setter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("setter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_sortedlist:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("sortedlist") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_spoil:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("spoil") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_struct:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("struct") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_style:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("style") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_switch:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("switch") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_syntax:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("syntax") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_tag:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("tag") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_template:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("template") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_then:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("then") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_true:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("true") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_typealias:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("typealias") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_unused:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("unused") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_var:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("var") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_warning:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("warning") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_while:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("while") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken_with:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("with") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_app_2D_link:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%app-link") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_app_2D_source:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%app-source") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_makefile_2D_macosx:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%makefile-macosx") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_makefile_2D_unix:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%makefile-unix") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%makefile-x86linux32-on-macosx") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%makefile-x86linux64-on-macosx") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%makefile-win32-on-macosx") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_codeblocks_2D_windows:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%codeblocks-windows") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_codeblocks_2D_linux_33__32_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%codeblocks-linux32") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_codeblocks_2D_linux_36__34_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%codeblocks-linux64") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_applicationBundleBase:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%applicationBundleBase") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_MacOS:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%MacOS") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_MacOSDeployment:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%MacOSDeployment") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_quietOutputByDefault:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%quietOutputByDefault") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_macCodeSign:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%macCodeSign") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_libpmAtPath:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%libpmAtPath") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_tool_2D_source:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%tool-source") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_translate:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%translate") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_once:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%once") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_usefull:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%usefull") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_generatedInSeparateFile:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%generatedInSeparateFile") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_nonAtomicSelection:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%nonAtomicSelection") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_templateEndMark:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%templateEndMark") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_preserved:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%preserved") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_selector:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%selector") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_insertSetter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%insertSetter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_searchMethod:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%searchMethod") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_removeSetter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%removeSetter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_errorMessage:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%errorMessage") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_insertOrReplaceSetter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%insertOrReplaceSetter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_remove:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%remove") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_replaceBy:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%replaceBy") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_insertAfter:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%insertAfter") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_insertBefore:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%insertBefore") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_useGrammar:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%useGrammar") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_searchString:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%searchString") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__25_templateReplacement:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("%templateReplacement") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("*") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (",") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("+") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&+") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&-") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&*") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&/") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (";") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (":") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3A__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (":>") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("-") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__28_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("(") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__29_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (")") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("->") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("==") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__26_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&&") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("[") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("]") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("+=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("-=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2A__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("*=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("/=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2F_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("/") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">=") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("{") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("}") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__60_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("`") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C__7C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("||") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7C_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("|") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__5E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("^") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3E__3E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString (">>") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__7E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("~") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2D__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("--") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__2B__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("++") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2D__2D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&--") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__26__2B__2B_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("&++") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3D__3D__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("===") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__3D__3D_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!==") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__3F__5E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("\?^") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    case kToken__21__5E_:
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      s.addString ("!^") ;
      s.addUnicodeChar (TO_UNICODE ('$') COMMA_HERE) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void C_Lexique_galgasScanner_34_::internalParseLexicalToken (cTokenFor_galgasScanner_34_ & token) {
  bool loop = true ;
  token.mLexicalAttribute_bigintValue = BigSigned () ;
  token.mLexicalAttribute_charValue = TO_UNICODE (0) ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_identifierString.setLengthToZero () ;
  token.mLexicalAttribute_sint_33__32_value = 0 ;
  token.mLexicalAttribute_sint_36__34_value = 0 ;
  token.mLexicalAttribute_tokenString.setLengthToZero () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  token.mLexicalAttribute_uint_36__34_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForCharWithFunction (isUnicodeLetter)) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_identifierString, ::scanner_function_toLower (*this, previousChar ())) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_galgasKeyWordList (token.mLexicalAttribute_identifierString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___30_x, 2, true)) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertHexStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__hexDigitError COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoBigInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_bigintValue, gLexicalMessage_galgasScanner_34__internalError) ;
        token.mTokenCode = kToken_literalInt ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('.'))) {
      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('0')) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('.')) ;
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_galgasScanner_34__floatNumberConversionError) ;
        token.mTokenCode = kToken_double_2E_xxx ;
        enterToken (token) ;
      }else{
        if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__2E_, 2, true)) {
          token.mTokenCode = kToken__2E__2E__2E_ ;
          enterToken (token) ;
        }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2E__3C_, 2, true)) {
          token.mTokenCode = kToken__2E__2E__3C_ ;
          enterToken (token) ;
        }else{
          token.mTokenCode = kToken__2E_ ;
          enterToken (token) ;
        }
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('@'))) {
      if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('-'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
        }
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectTypeNameError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_type ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('%'))) {
      if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32Char (TO_UNICODE ('-')) || testForInputUTF32Char (TO_UNICODE ('_')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_attributeKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        lexicalError (gLexicalMessage_galgasScanner_34__undefinedAttribute COMMA_LINE_AND_SOURCE_FILE) ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
      if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
        if (testForInputUTF32Char (TO_UNICODE ('f'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\f')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\n')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\r')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\t')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\v')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\\')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('0'))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\0')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
          ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, TO_UNICODE ('\'')) ;
        }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else{
          lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE (' '), TO_UNICODE (65533))) {
        ::scanner_routine_enterCharacterIntoCharacter (*this, token.mLexicalAttribute_charValue, previousChar ()) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('\''))) {
        token.mTokenCode = kToken__27_char_27_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, 2, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, 2, true)) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        do {
          if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__5C_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5C__24_, 2, true)) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('$')) ;
          }else if (testForInputUTF32CharRange (TO_UNICODE ('!'), TO_UNICODE ('#')) || testForInputUTF32CharRange (TO_UNICODE ('%'), TO_UNICODE (65533))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_start COMMA_LINE_AND_SOURCE_FILE) ;
      }
      if (testForInputUTF32Char (TO_UNICODE ('$'))) {
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrect_terminal_end COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__24_terminal_24_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('#'))) {
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__2F_, 2, true)) {
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (65533))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_commentMark) ;
      }else{
        do {
          if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE ('\t')) || testForInputUTF32Char (TO_UNICODE ('\v')) || testForInputUTF32Char (TO_UNICODE ('\f')) || testForInputUTF32CharRange (TO_UNICODE (14), TO_UNICODE (1114111))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        enterDroppedTerminal (kToken_comment) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D__3D_, 3, true)) {
      token.mTokenCode = kToken__3D__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D__2D_, 3, true)) {
      token.mTokenCode = kToken__26__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B__2B_, 3, true)) {
      token.mTokenCode = kToken__26__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D__3D_, 3, true)) {
      token.mTokenCode = kToken__21__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C__7C_, 2, true)) {
      token.mTokenCode = kToken__7C__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3F__5E_, 2, true)) {
      token.mTokenCode = kToken__3F__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3E_, 2, true)) {
      token.mTokenCode = kToken__3E__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E__3D_, 2, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D__3D_, 2, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A__3E_, 2, true)) {
      token.mTokenCode = kToken__3A__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F__3D_, 2, true)) {
      token.mTokenCode = kToken__2F__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3E_, 2, true)) {
      token.mTokenCode = kToken__2D__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__3D_, 2, true)) {
      token.mTokenCode = kToken__2D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D__2D_, 2, true)) {
      token.mTokenCode = kToken__2D__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__3D_, 2, true)) {
      token.mTokenCode = kToken__2B__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B__2B_, 2, true)) {
      token.mTokenCode = kToken__2B__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A__3D_, 2, true)) {
      token.mTokenCode = kToken__2A__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2F_, 2, true)) {
      token.mTokenCode = kToken__26__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2D_, 2, true)) {
      token.mTokenCode = kToken__26__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2B_, 2, true)) {
      token.mTokenCode = kToken__26__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__2A_, 2, true)) {
      token.mTokenCode = kToken__26__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26__26_, 2, true)) {
      token.mTokenCode = kToken__26__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__5E_, 2, true)) {
      token.mTokenCode = kToken__21__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___21__3D_, 2, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7E_, 1, true)) {
      token.mTokenCode = kToken__7E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7D_, 1, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7C_, 1, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___7B_, 1, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___60_, 1, true)) {
      token.mTokenCode = kToken__60_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5E_, 1, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5D_, 1, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___5B_, 1, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3E_, 1, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3D_, 1, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3B_, 1, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___3A_, 1, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2F_, 1, true)) {
      token.mTokenCode = kToken__2F_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2D_, 1, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2C_, 1, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2B_, 1, true)) {
      token.mTokenCode = kToken__2B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___2A_, 1, true)) {
      token.mTokenCode = kToken__2A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___29_, 1, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___28_, 1, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_galgasScanner_34___26_, 1, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
      const LocationInSource currentLocationForTag_onlyInterrogationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInterrogationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInterrogationMark = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('!'))) {
        const LocationInSource currentLocationForTag_onlyExclamationInterrogationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyExclamationInterrogationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyExclamationInterrogationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__3F__21_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyExclamationInterrogationMark ;
            mTokenEndLocation = endLocationForTag_onlyExclamationInterrogationMark ;
            mCurrentChar = currentCharForTag_onlyExclamationInterrogationMark ;
            token.mTokenCode = kToken__3F__21_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__3F__21_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE (':'))) {
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyInterrogationMark ;
          mTokenEndLocation = endLocationForTag_onlyInterrogationMark ;
          mCurrentChar = currentCharForTag_onlyInterrogationMark ;
          token.mTokenCode = kToken__3F_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3F_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('!'))) {
      const LocationInSource currentLocationForTag_onlyExclamationMark = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyExclamationMark = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyExclamationMark = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
        const LocationInSource currentLocationForTag_onlyInterrogationExclamationMark = mCurrentLocation ;
        const LocationInSource endLocationForTag_onlyInterrogationExclamationMark = mTokenEndLocation ;
        const utf32 currentCharForTag_onlyInterrogationExclamationMark = mCurrentChar ;
        if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
          do {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
            if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
            }else{
              loop = false ;
            }
          }while (loop) ;
          loop = true ;
          if (testForInputUTF32Char (TO_UNICODE (':'))) {
            token.mTokenCode = kToken__21__3F_ ;
            enterToken (token) ;
          }else{
            ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
            mCurrentLocation = currentLocationForTag_onlyInterrogationExclamationMark ;
            mTokenEndLocation = endLocationForTag_onlyInterrogationExclamationMark ;
            mCurrentChar = currentCharForTag_onlyInterrogationExclamationMark ;
            token.mTokenCode = kToken__21__3F_ ;
            enterToken (token) ;
          }
        }else{
          token.mTokenCode = kToken__21__3F_ ;
          enterToken (token) ;
        }
      }else if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('z')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('Z')) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE (':'))) {
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }else{
          ::scanner_routine_resetString (*this, token.mLexicalAttribute_tokenString) ;
          mCurrentLocation = currentLocationForTag_onlyExclamationMark ;
          mTokenEndLocation = endLocationForTag_onlyExclamationMark ;
          mCurrentChar = currentCharForTag_onlyExclamationMark ;
          token.mTokenCode = kToken__21_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__21_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
      const LocationInSource currentLocationForTag_onlyInfDelimiter = mCurrentLocation ;
      const LocationInSource endLocationForTag_onlyInfDelimiter = mTokenEndLocation ;
      const utf32 currentCharForTag_onlyInfDelimiter = mCurrentChar ;
      if (testForInputUTF32Char (TO_UNICODE ('='))) {
        token.mTokenCode = kToken__3C__3D_ ;
        enterToken (token) ;
      }else if (testForInputUTF32Char (TO_UNICODE ('<'))) {
        token.mTokenCode = kToken__3C__3C_ ;
        enterToken (token) ;
      }else if (testForCharWithFunction (isUnicodeLetter)) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForCharWithFunction (isUnicodeLetter) || testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32Char (TO_UNICODE ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        if (testForInputUTF32Char (TO_UNICODE ('>'))) {
          token.mTokenCode = kToken__3C_non_5F_terminal_3E_ ;
          enterToken (token) ;
        }else{
          mCurrentLocation = currentLocationForTag_onlyInfDelimiter ;
          mTokenEndLocation = endLocationForTag_onlyInfDelimiter ;
          mCurrentChar = currentCharForTag_onlyInfDelimiter ;
          token.mTokenCode = kToken__3C_ ;
          enterToken (token) ;
        }
      }else{
        token.mTokenCode = kToken__3C_ ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
      do {
        if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
          if (testForInputUTF32Char (TO_UNICODE ('f'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\f')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('n'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\n')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('r'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\r')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('t'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\t')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('v'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\v')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\\'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\\')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\"')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\''))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\'')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('\?'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, TO_UNICODE ('\?')) ;
          }else if (testForInputUTF32Char (TO_UNICODE ('u'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                    ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition4 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else if (testForInputUTF32Char (TO_UNICODE ('U'))) {
            if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
              ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
              if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                  ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                  if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                    ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                    if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                      ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                      if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                        ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                        if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                          ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                          if (testForInputUTF32CharRange (TO_UNICODE ('0'), TO_UNICODE ('9')) || testForInputUTF32CharRange (TO_UNICODE ('a'), TO_UNICODE ('f')) || testForInputUTF32CharRange (TO_UNICODE ('A'), TO_UNICODE ('F'))) {
                            ::scanner_routine_enterHexDigitIntoUInt (*this, previousChar (), token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_galgasScanner_34__internalError, gLexicalMessage_galgasScanner_34__internalError) ;
                            ::scanner_routine_convertUnsignedNumberToUnicodeChar (*this, token.mLexicalAttribute_uint_33__32_value, token.mLexicalAttribute_charValue, gLexicalMessage_galgasScanner_34__unassignedUnicodeValue) ;
                            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_charValue) ;
                          }else{
                            lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                          }
                        }else{
                          lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                        }
                      }else{
                        lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                      }
                    }else{
                      lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                    }
                  }else{
                    lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                  }
                }else{
                  lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
                }
              }else{
                lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
              }
            }else{
              lexicalError (gLexicalMessage_galgasScanner_34__invalideUnicodeDefinition8 COMMA_LINE_AND_SOURCE_FILE) ;
            }
          }else{
            lexicalError (gLexicalMessage_galgasScanner_34__incorrectCharConstant COMMA_LINE_AND_SOURCE_FILE) ;
          }
        }else if (testForInputUTF32Char (TO_UNICODE (' ')) || testForInputUTF32Char (TO_UNICODE ('!')) || testForInputUTF32CharRange (TO_UNICODE ('#'), TO_UNICODE (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (TO_UNICODE ('\"'))) {
        token.mTokenCode = kToken__22_string_22_ ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_galgasScanner_34__incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32CharRange (TO_UNICODE (1), TO_UNICODE (' '))) {
    }else if (testForInputUTF32Char (TO_UNICODE ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool C_Lexique_galgasScanner_34_::parseLexicalToken (void) {
  cTokenFor_galgasScanner_34_ token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (UNICODE_VALUE (mCurrentChar) == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void C_Lexique_galgasScanner_34_::enterToken (cTokenFor_galgasScanner_34_ & ioToken) {
  cTokenFor_galgasScanner_34_ * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_galgasScanner_34_ ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  // ptr->mIsOptional = ioToken.mIsOptional ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_bigintValue = ioToken.mLexicalAttribute_bigintValue ;
  ptr->mLexicalAttribute_charValue = ioToken.mLexicalAttribute_charValue ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_identifierString = ioToken.mLexicalAttribute_identifierString ;
  ptr->mLexicalAttribute_sint_33__32_value = ioToken.mLexicalAttribute_sint_33__32_value ;
  ptr->mLexicalAttribute_sint_36__34_value = ioToken.mLexicalAttribute_sint_36__34_value ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  ptr->mLexicalAttribute_uint_36__34_value = ioToken.mLexicalAttribute_uint_36__34_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

BigSigned C_Lexique_galgasScanner_34_::attributeValue_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_bigintValue ;
}

//--------------------------------------------------------------------------------------------------

utf32 C_Lexique_galgasScanner_34_::attributeValue_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_charValue ;
}

//--------------------------------------------------------------------------------------------------

double C_Lexique_galgasScanner_34_::attributeValue_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique_galgasScanner_34_::attributeValue_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_identifierString ;
}

//--------------------------------------------------------------------------------------------------

int32_t C_Lexique_galgasScanner_34_::attributeValue_sint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------

int64_t C_Lexique_galgasScanner_34_::attributeValue_sint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_sint_36__34_value ;
}

//--------------------------------------------------------------------------------------------------

String C_Lexique_galgasScanner_34_::attributeValue_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasScanner_34_::attributeValue_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------

uint64_t C_Lexique_galgasScanner_34_::attributeValue_uint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_36__34_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GALGAS_lbigint C_Lexique_galgasScanner_34_::synthetizedAttribute_bigintValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_bigint value (ptr->mLexicalAttribute_bigintValue) ;
  GALGAS_lbigint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lchar C_Lexique_galgasScanner_34_::synthetizedAttribute_charValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_char value (ptr->mLexicalAttribute_charValue) ;
  GALGAS_lchar result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_ldouble C_Lexique_galgasScanner_34_::synthetizedAttribute_floatValue (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_double value (ptr->mLexicalAttribute_floatValue) ;
  GALGAS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasScanner_34_::synthetizedAttribute_identifierString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_identifierString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lsint C_Lexique_galgasScanner_34_::synthetizedAttribute_sint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint value (ptr->mLexicalAttribute_sint_33__32_value) ;
  GALGAS_lsint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lsint_36__34_ C_Lexique_galgasScanner_34_::synthetizedAttribute_sint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_sint_36__34_ value (ptr->mLexicalAttribute_sint_36__34_value) ;
  GALGAS_lsint_36__34_ result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring C_Lexique_galgasScanner_34_::synthetizedAttribute_tokenString (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_string value (ptr->mLexicalAttribute_tokenString) ;
  GALGAS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint C_Lexique_galgasScanner_34_::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GALGAS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_luint_36__34_ C_Lexique_galgasScanner_34_::synthetizedAttribute_uint_36__34_value (void) const {
  cTokenFor_galgasScanner_34_ * ptr = (cTokenFor_galgasScanner_34_ *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_galgasScanner_34_) ;
  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GALGAS_uint_36__34_ value (ptr->mLexicalAttribute_uint_36__34_value) ;
  GALGAS_luint_36__34_ result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist C_Lexique_galgasScanner_34_::symbols (LOCATION_ARGS) {
  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;
  result.addAssign_operation (GALGAS_string ("identifier") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("double.xxx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("literalInt") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (".") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("...") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("..<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("@type") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("'char'") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("$terminal$") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("comment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("commentMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!\?") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<<") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("<non_terminal>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\"string\"") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("abstract") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("after") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("array") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("as") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("bang") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("before") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("between") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("block") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("boolset") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("cast") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("case") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("class") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("constructor") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("default") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("dict") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("do") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("drop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("else") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("elsif") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("end") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("enum") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("error") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extension") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("extern") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("false") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fileprivate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("filewrapper") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("for") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("fixit") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("func") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("getter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("grammar") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("graph") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("gui") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("if") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("in") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("indexing") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("is") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("label") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("let") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("lexique") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("list") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("listmap") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("log") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("loop") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("map") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("method") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mod") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("mutating") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("not") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("on") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("operator") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("option") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("or") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("override") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("parse") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("public") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("protected") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("private") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("proc") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("project") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("refclass") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("repeat") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rewind") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("rule") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("search") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("select") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("self") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("send") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("setter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("sortedlist") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("spoil") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("struct") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("style") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("switch") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("syntax") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("tag") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("template") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("then") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("true") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("typealias") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("unused") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("var") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("warning") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("while") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("with") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-link") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%app-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-unix") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-x86linux64-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%makefile-win32-on-macosx") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-windows") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux32") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%codeblocks-linux64") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%applicationBundleBase") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOS") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%MacOSDeployment") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%quietOutputByDefault") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%macCodeSign") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%libpmAtPath") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%tool-source") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%translate") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%once") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%usefull") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%generatedInSeparateFile") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%nonAtomicSelection") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%templateEndMark") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%preserved") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%selector") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%searchMethod") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%removeSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%errorMessage") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertOrReplaceSetter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%remove") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%replaceBy") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertAfter") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%insertBefore") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%useGrammar") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%searchString") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("%templateReplacement") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (",") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&+") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&*") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (";") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (":>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("(") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (")") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("->") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("[") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("]") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("+=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("-=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("*=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("/") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">=") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("{") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("}") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("`") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("||") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("|") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string (">>") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("~") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&--") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("&++") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("===") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!==") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("\?^") COMMA_HERE) ;
  result.addAssign_operation (GALGAS_string ("!^") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_galgasScanner_34_ (TC_UniqueArray <String> & ioList) {
  ioList.appendObject ("galgasScanner4:attributeKeyWordList") ;
  ioList.appendObject ("galgasScanner4:galgasDelimitorsList") ;
  ioList.appendObject ("galgasScanner4:galgasKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_galgasScanner_34_ (const String & inIdentifier,
                                                        bool & ioFound,
                                                        TC_UniqueArray <String> & ioList) {
  if (inIdentifier == "galgasScanner4:attributeKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("once") ;
    ioList.appendObject ("MacOS") ;
    ioList.appendObject ("remove") ;
    ioList.appendObject ("usefull") ;
    ioList.appendObject ("app-link") ;
    ioList.appendObject ("selector") ;
    ioList.appendObject ("preserved") ;
    ioList.appendObject ("replaceBy") ;
    ioList.appendObject ("translate") ;
    ioList.appendObject ("app-source") ;
    ioList.appendObject ("useGrammar") ;
    ioList.appendObject ("insertAfter") ;
    ioList.appendObject ("libpmAtPath") ;
    ioList.appendObject ("macCodeSign") ;
    ioList.appendObject ("tool-source") ;
    ioList.appendObject ("errorMessage") ;
    ioList.appendObject ("insertBefore") ;
    ioList.appendObject ("insertSetter") ;
    ioList.appendObject ("removeSetter") ;
    ioList.appendObject ("searchMethod") ;
    ioList.appendObject ("searchString") ;
    ioList.appendObject ("makefile-unix") ;
    ioList.appendObject ("MacOSDeployment") ;
    ioList.appendObject ("makefile-macosx") ;
    ioList.appendObject ("templateEndMark") ;
    ioList.appendObject ("codeblocks-linux32") ;
    ioList.appendObject ("codeblocks-linux64") ;
    ioList.appendObject ("codeblocks-windows") ;
    ioList.appendObject ("nonAtomicSelection") ;
    ioList.appendObject ("templateReplacement") ;
    ioList.appendObject ("quietOutputByDefault") ;
    ioList.appendObject ("applicationBundleBase") ;
    ioList.appendObject ("insertOrReplaceSetter") ;
    ioList.appendObject ("generatedInSeparateFile") ;
    ioList.appendObject ("makefile-win32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux32-on-macosx") ;
    ioList.appendObject ("makefile-x86linux64-on-macosx") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasDelimitorsList") {
    ioFound = true ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject ("*") ;
    ioList.appendObject ("+") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject ("/") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("`") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("~") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("!^") ;
    ioList.appendObject ("&&") ;
    ioList.appendObject ("&*") ;
    ioList.appendObject ("&+") ;
    ioList.appendObject ("&-") ;
    ioList.appendObject ("&/") ;
    ioList.appendObject ("*=") ;
    ioList.appendObject ("++") ;
    ioList.appendObject ("+=") ;
    ioList.appendObject ("--") ;
    ioList.appendObject ("-=") ;
    ioList.appendObject ("->") ;
    ioList.appendObject ("/=") ;
    ioList.appendObject (":>") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.appendObject (">>") ;
    ioList.appendObject ("\?^") ;
    ioList.appendObject ("||") ;
    ioList.appendObject ("!==") ;
    ioList.appendObject ("&++") ;
    ioList.appendObject ("&--") ;
    ioList.appendObject ("===") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "galgasScanner4:galgasKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("as") ;
    ioList.appendObject ("do") ;
    ioList.appendObject ("if") ;
    ioList.appendObject ("in") ;
    ioList.appendObject ("is") ;
    ioList.appendObject ("on") ;
    ioList.appendObject ("or") ;
    ioList.appendObject ("end") ;
    ioList.appendObject ("for") ;
    ioList.appendObject ("gui") ;
    ioList.appendObject ("let") ;
    ioList.appendObject ("log") ;
    ioList.appendObject ("map") ;
    ioList.appendObject ("mod") ;
    ioList.appendObject ("not") ;
    ioList.appendObject ("tag") ;
    ioList.appendObject ("var") ;
    ioList.appendObject ("bang") ;
    ioList.appendObject ("case") ;
    ioList.appendObject ("cast") ;
    ioList.appendObject ("dict") ;
    ioList.appendObject ("drop") ;
    ioList.appendObject ("else") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("list") ;
    ioList.appendObject ("loop") ;
    ioList.appendObject ("proc") ;
    ioList.appendObject ("rule") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("send") ;
    ioList.appendObject ("then") ;
    ioList.appendObject ("true") ;
    ioList.appendObject ("with") ;
    ioList.appendObject ("after") ;
    ioList.appendObject ("array") ;
    ioList.appendObject ("block") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("elsif") ;
    ioList.appendObject ("error") ;
    ioList.appendObject ("false") ;
    ioList.appendObject ("fixit") ;
    ioList.appendObject ("graph") ;
    ioList.appendObject ("label") ;
    ioList.appendObject ("parse") ;
    ioList.appendObject ("spoil") ;
    ioList.appendObject ("style") ;
    ioList.appendObject ("while") ;
    ioList.appendObject ("before") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("getter") ;
    ioList.appendObject ("method") ;
    ioList.appendObject ("option") ;
    ioList.appendObject ("public") ;
    ioList.appendObject ("repeat") ;
    ioList.appendObject ("rewind") ;
    ioList.appendObject ("search") ;
    ioList.appendObject ("select") ;
    ioList.appendObject ("setter") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("switch") ;
    ioList.appendObject ("syntax") ;
    ioList.appendObject ("unused") ;
    ioList.appendObject ("between") ;
    ioList.appendObject ("boolset") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("grammar") ;
    ioList.appendObject ("lexique") ;
    ioList.appendObject ("listmap") ;
    ioList.appendObject ("private") ;
    ioList.appendObject ("project") ;
    ioList.appendObject ("warning") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("indexing") ;
    ioList.appendObject ("mutating") ;
    ioList.appendObject ("operator") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("refclass") ;
    ioList.appendObject ("template") ;
    ioList.appendObject ("extension") ;
    ioList.appendObject ("protected") ;
    ioList.appendObject ("typealias") ;
    ioList.appendObject ("sortedlist") ;
    ioList.appendObject ("constructor") ;
    ioList.appendObject ("fileprivate") ;
    ioList.appendObject ("filewrapper") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static cLexiqueIntrospection lexiqueIntrospection_galgasScanner_34_
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_galgasScanner_34_, getKeywordsForIdentifier_galgasScanner_34_) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t C_Lexique_galgasScanner_34_::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [188] = {0,
    0 /* galgasScanner4_1_identifier */,
    8 /* galgasScanner4_1_double_2E_xxx */,
    7 /* galgasScanner4_1_literalInt */,
    2 /* galgasScanner4_1__2E_ */,
    2 /* galgasScanner4_1__2E__2E__2E_ */,
    2 /* galgasScanner4_1__2E__2E__3C_ */,
    11 /* galgasScanner4_1__40_type */,
    9 /* galgasScanner4_1__27_char_27_ */,
    4 /* galgasScanner4_1__24_terminal_24_ */,
    13 /* galgasScanner4_1_comment */,
    13 /* galgasScanner4_1_commentMark */,
    3 /* galgasScanner4_1__3F_ */,
    3 /* galgasScanner4_1__3F__21_ */,
    3 /* galgasScanner4_1__21_ */,
    3 /* galgasScanner4_1__21__3F_ */,
    2 /* galgasScanner4_1__3C_ */,
    2 /* galgasScanner4_1__3C__3D_ */,
    2 /* galgasScanner4_1__3C__3C_ */,
    5 /* galgasScanner4_1__3C_non_5F_terminal_3E_ */,
    10 /* galgasScanner4_1__22_string_22_ */,
    1 /* galgasScanner4_1_abstract */,
    1 /* galgasScanner4_1_after */,
    1 /* galgasScanner4_1_array */,
    1 /* galgasScanner4_1_as */,
    1 /* galgasScanner4_1_bang */,
    1 /* galgasScanner4_1_before */,
    1 /* galgasScanner4_1_between */,
    1 /* galgasScanner4_1_block */,
    1 /* galgasScanner4_1_boolset */,
    1 /* galgasScanner4_1_cast */,
    1 /* galgasScanner4_1_case */,
    1 /* galgasScanner4_1_class */,
    1 /* galgasScanner4_1_constructor */,
    1 /* galgasScanner4_1_default */,
    1 /* galgasScanner4_1_dict */,
    1 /* galgasScanner4_1_do */,
    1 /* galgasScanner4_1_drop */,
    1 /* galgasScanner4_1_else */,
    1 /* galgasScanner4_1_elsif */,
    1 /* galgasScanner4_1_end */,
    1 /* galgasScanner4_1_enum */,
    1 /* galgasScanner4_1_error */,
    1 /* galgasScanner4_1_extension */,
    1 /* galgasScanner4_1_extern */,
    1 /* galgasScanner4_1_false */,
    1 /* galgasScanner4_1_fileprivate */,
    1 /* galgasScanner4_1_filewrapper */,
    1 /* galgasScanner4_1_for */,
    1 /* galgasScanner4_1_fixit */,
    1 /* galgasScanner4_1_func */,
    1 /* galgasScanner4_1_getter */,
    1 /* galgasScanner4_1_grammar */,
    1 /* galgasScanner4_1_graph */,
    1 /* galgasScanner4_1_gui */,
    1 /* galgasScanner4_1_if */,
    1 /* galgasScanner4_1_in */,
    1 /* galgasScanner4_1_indexing */,
    1 /* galgasScanner4_1_is */,
    1 /* galgasScanner4_1_label */,
    1 /* galgasScanner4_1_let */,
    1 /* galgasScanner4_1_lexique */,
    1 /* galgasScanner4_1_list */,
    1 /* galgasScanner4_1_listmap */,
    1 /* galgasScanner4_1_log */,
    1 /* galgasScanner4_1_loop */,
    1 /* galgasScanner4_1_map */,
    1 /* galgasScanner4_1_method */,
    1 /* galgasScanner4_1_mod */,
    1 /* galgasScanner4_1_mutating */,
    1 /* galgasScanner4_1_not */,
    1 /* galgasScanner4_1_on */,
    1 /* galgasScanner4_1_operator */,
    1 /* galgasScanner4_1_option */,
    1 /* galgasScanner4_1_or */,
    1 /* galgasScanner4_1_override */,
    1 /* galgasScanner4_1_parse */,
    1 /* galgasScanner4_1_public */,
    1 /* galgasScanner4_1_protected */,
    1 /* galgasScanner4_1_private */,
    1 /* galgasScanner4_1_proc */,
    1 /* galgasScanner4_1_project */,
    1 /* galgasScanner4_1_refclass */,
    1 /* galgasScanner4_1_repeat */,
    1 /* galgasScanner4_1_rewind */,
    1 /* galgasScanner4_1_rule */,
    1 /* galgasScanner4_1_search */,
    1 /* galgasScanner4_1_select */,
    1 /* galgasScanner4_1_self */,
    1 /* galgasScanner4_1_send */,
    1 /* galgasScanner4_1_setter */,
    1 /* galgasScanner4_1_sortedlist */,
    1 /* galgasScanner4_1_spoil */,
    1 /* galgasScanner4_1_struct */,
    1 /* galgasScanner4_1_style */,
    1 /* galgasScanner4_1_switch */,
    1 /* galgasScanner4_1_syntax */,
    1 /* galgasScanner4_1_tag */,
    1 /* galgasScanner4_1_template */,
    1 /* galgasScanner4_1_then */,
    1 /* galgasScanner4_1_true */,
    1 /* galgasScanner4_1_typealias */,
    1 /* galgasScanner4_1_unused */,
    1 /* galgasScanner4_1_var */,
    1 /* galgasScanner4_1_warning */,
    1 /* galgasScanner4_1_while */,
    1 /* galgasScanner4_1_with */,
    12 /* galgasScanner4_1__25_app_2D_link */,
    12 /* galgasScanner4_1__25_app_2D_source */,
    12 /* galgasScanner4_1__25_makefile_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_unix */,
    12 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_makefile_2D_win_33__32__2D_on_2D_macosx */,
    12 /* galgasScanner4_1__25_codeblocks_2D_windows */,
    12 /* galgasScanner4_1__25_codeblocks_2D_linux_33__32_ */,
    12 /* galgasScanner4_1__25_codeblocks_2D_linux_36__34_ */,
    12 /* galgasScanner4_1__25_applicationBundleBase */,
    12 /* galgasScanner4_1__25_MacOS */,
    12 /* galgasScanner4_1__25_MacOSDeployment */,
    12 /* galgasScanner4_1__25_quietOutputByDefault */,
    12 /* galgasScanner4_1__25_macCodeSign */,
    12 /* galgasScanner4_1__25_libpmAtPath */,
    12 /* galgasScanner4_1__25_tool_2D_source */,
    12 /* galgasScanner4_1__25_translate */,
    12 /* galgasScanner4_1__25_once */,
    12 /* galgasScanner4_1__25_usefull */,
    12 /* galgasScanner4_1__25_generatedInSeparateFile */,
    12 /* galgasScanner4_1__25_nonAtomicSelection */,
    12 /* galgasScanner4_1__25_templateEndMark */,
    12 /* galgasScanner4_1__25_preserved */,
    12 /* galgasScanner4_1__25_selector */,
    12 /* galgasScanner4_1__25_insertSetter */,
    12 /* galgasScanner4_1__25_searchMethod */,
    12 /* galgasScanner4_1__25_removeSetter */,
    12 /* galgasScanner4_1__25_errorMessage */,
    12 /* galgasScanner4_1__25_insertOrReplaceSetter */,
    12 /* galgasScanner4_1__25_remove */,
    12 /* galgasScanner4_1__25_replaceBy */,
    12 /* galgasScanner4_1__25_insertAfter */,
    12 /* galgasScanner4_1__25_insertBefore */,
    12 /* galgasScanner4_1__25_useGrammar */,
    12 /* galgasScanner4_1__25_searchString */,
    12 /* galgasScanner4_1__25_templateReplacement */,
    2 /* galgasScanner4_1__2A_ */,
    2 /* galgasScanner4_1__2C_ */,
    2 /* galgasScanner4_1__2B_ */,
    2 /* galgasScanner4_1__26__2B_ */,
    2 /* galgasScanner4_1__26__2D_ */,
    2 /* galgasScanner4_1__26__2A_ */,
    2 /* galgasScanner4_1__26__2F_ */,
    2 /* galgasScanner4_1__3E_ */,
    2 /* galgasScanner4_1__3B_ */,
    2 /* galgasScanner4_1__3A_ */,
    2 /* galgasScanner4_1__3A__3E_ */,
    2 /* galgasScanner4_1__2D_ */,
    2 /* galgasScanner4_1__28_ */,
    2 /* galgasScanner4_1__29_ */,
    2 /* galgasScanner4_1__2D__3E_ */,
    2 /* galgasScanner4_1__3D__3D_ */,
    2 /* galgasScanner4_1__3D_ */,
    2 /* galgasScanner4_1__26__26_ */,
    2 /* galgasScanner4_1__5B_ */,
    2 /* galgasScanner4_1__5D_ */,
    2 /* galgasScanner4_1__2B__3D_ */,
    2 /* galgasScanner4_1__2D__3D_ */,
    2 /* galgasScanner4_1__2A__3D_ */,
    2 /* galgasScanner4_1__2F__3D_ */,
    2 /* galgasScanner4_1__2F_ */,
    2 /* galgasScanner4_1__21__3D_ */,
    2 /* galgasScanner4_1__3E__3D_ */,
    2 /* galgasScanner4_1__26_ */,
    2 /* galgasScanner4_1__7B_ */,
    2 /* galgasScanner4_1__7D_ */,
    2 /* galgasScanner4_1__60_ */,
    2 /* galgasScanner4_1__7C__7C_ */,
    2 /* galgasScanner4_1__7C_ */,
    2 /* galgasScanner4_1__5E_ */,
    2 /* galgasScanner4_1__3E__3E_ */,
    2 /* galgasScanner4_1__7E_ */,
    2 /* galgasScanner4_1__2D__2D_ */,
    2 /* galgasScanner4_1__2B__2B_ */,
    2 /* galgasScanner4_1__26__2D__2D_ */,
    2 /* galgasScanner4_1__26__2B__2B_ */,
    2 /* galgasScanner4_1__3D__3D__3D_ */,
    2 /* galgasScanner4_1__21__3D__3D_ */,
    2 /* galgasScanner4_1__3F__5E_ */,
    2 /* galgasScanner4_1__21__5E_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String C_Lexique_galgasScanner_34_::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "delimitersStyle",
      "selectorStyle",
      "terminalStyle",
      "nonTerminalStyle",
      "integerStyle",
      "bigintStyle",
      "floatStyle",
      "characterStyle",
      "stringStyle",
      "typeNameStyle",
      "attributeStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

