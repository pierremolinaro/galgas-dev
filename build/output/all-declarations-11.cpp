#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionForGeneration_2E_weak::objectCompare (const GGS_typeMethodCallInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak & GGS_typeMethodCallInstructionForGeneration_2E_weak::operator = (const GGS_typeMethodCallInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak::GGS_typeMethodCallInstructionForGeneration_2E_weak (const GGS_typeMethodCallInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration GGS_typeMethodCallInstructionForGeneration_2E_weak::bang_typeMethodCallInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionForGeneration) ;
      result = GGS_typeMethodCallInstructionForGeneration ((cPtr_typeMethodCallInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeMethodCallInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ("typeMethodCallInstructionForGeneration.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeMethodCallInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeMethodCallInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeMethodCallInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionForGeneration_2E_weak GGS_typeMethodCallInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeMethodCallInstructionForGeneration_2E_weak result ;
  const GGS_typeMethodCallInstructionForGeneration_2E_weak * p = (const GGS_typeMethodCallInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeMethodCallInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeMethodCallInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak & GGS_localVariableDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationWithAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
      result = GGS_localVariableDeclarationWithAssignmentAST ((cPtr_localVariableDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ("localVariableDeclarationWithAssignmentAST.weak",
                                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationWithAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak GGS_localVariableDeclarationWithAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationWithAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationWithAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationWithAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationWithAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationNoAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak & GGS_localVariableDeclarationNoAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationNoAssignmentAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (const GGS_localVariableDeclarationNoAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
      result = GGS_localVariableDeclarationNoAssignmentAST ((cPtr_localVariableDeclarationNoAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationNoAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ("localVariableDeclarationNoAssignmentAST.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationNoAssignmentAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak GGS_localVariableDeclarationNoAssignmentAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationNoAssignmentAST_2E_weak result ;
  const GGS_localVariableDeclarationNoAssignmentAST_2E_weak * p = (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationNoAssignmentAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationNoAssignmentAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration::objectCompare (const GGS_localVariableDeclarationForGeneration & inOperand) const {
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

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::
init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
              const GGS_string & in_mCppVariableName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationForGeneration_init_21__21_ (in_mVariableType, in_mCppVariableName, inCompiler) ;
  const GGS_localVariableDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationForGeneration::
localVariableDeclarationForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                    const GGS_string & in_mCppVariableName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mVariableType = in_mVariableType ;
  mProperty_mCppVariableName = in_mCppVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration::GGS_localVariableDeclarationForGeneration (const cPtr_localVariableDeclarationForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::class_func_new (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                                     const GGS_string & in_mCppVariableName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_localVariableDeclarationForGeneration (in_mVariableType, in_mCppVariableName,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localVariableDeclarationForGeneration::readProperty_mVariableType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mVariableType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localVariableDeclarationForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_localVariableDeclarationForGeneration * p = (cPtr_localVariableDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mVariableType (),
mProperty_mCppVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationForGeneration::cPtr_localVariableDeclarationForGeneration (const GGS_unifiedTypeMapEntry & in_mVariableType,
                                                                                        const GGS_string & in_mCppVariableName,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
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

acPtr_class * cPtr_localVariableDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationForGeneration (mProperty_mVariableType, mProperty_mCppVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @localVariableDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ("localVariableDeclarationForGeneration",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration result ;
  const GGS_localVariableDeclarationForGeneration * p = (const GGS_localVariableDeclarationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationForGeneration_2E_weak::objectCompare (const GGS_localVariableDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak & GGS_localVariableDeclarationForGeneration_2E_weak::operator = (const GGS_localVariableDeclarationForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak::GGS_localVariableDeclarationForGeneration_2E_weak (const GGS_localVariableDeclarationForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration GGS_localVariableDeclarationForGeneration_2E_weak::bang_localVariableDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableDeclarationForGeneration) ;
      result = GGS_localVariableDeclarationForGeneration ((cPtr_localVariableDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ("localVariableDeclarationForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_localVariableDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_localVariableDeclarationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_localVariableDeclarationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationForGeneration_2E_weak GGS_localVariableDeclarationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_localVariableDeclarationForGeneration_2E_weak result ;
  const GGS_localVariableDeclarationForGeneration_2E_weak * p = (const GGS_localVariableDeclarationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_localVariableDeclarationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("localVariableDeclarationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST::objectCompare (const GGS_warningInstructionAST & inOperand) const {
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

GGS_warningInstructionAST::GGS_warningInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionAST & in_mLocationExpression,
                      const GGS_semanticExpressionAST & in_mMessageExpression,
                      const GGS_fixitListAST & in_mFixitListAST,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionAST (inCompiler COMMA_THERE)) ;
  object->warningInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST, inCompiler) ;
  const GGS_warningInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionAST::
warningInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_semanticExpressionAST & in_mLocationExpression,
                                            const GGS_semanticExpressionAST & in_mMessageExpression,
                                            const GGS_fixitListAST & in_mFixitListAST,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mLocationExpression = in_mLocationExpression ;
  mProperty_mMessageExpression = in_mMessageExpression ;
  mProperty_mFixitListAST = in_mFixitListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST::GGS_warningInstructionAST (const cPtr_warningInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_semanticExpressionAST & in_mLocationExpression,
                                                                     const GGS_semanticExpressionAST & in_mMessageExpression,
                                                                     const GGS_fixitListAST & in_mFixitListAST,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_warningInstructionAST (in_mInstructionLocation, in_mLocationExpression, in_mMessageExpression, in_mFixitListAST,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mLocationExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mLocationExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_warningInstructionAST::readProperty_mMessageExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mMessageExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fixitListAST GGS_warningInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_fixitListAST () ;
  }else{
    cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionAST) ;
    return p->mProperty_mFixitListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mLocationExpression (),
mProperty_mMessageExpression (),
mProperty_mFixitListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionAST::cPtr_warningInstructionAST (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionAST & in_mLocationExpression,
                                                        const GGS_semanticExpressionAST & in_mMessageExpression,
                                                        const GGS_fixitListAST & in_mFixitListAST,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_warningInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionAST (mProperty_mInstructionLocation, mProperty_mLocationExpression, mProperty_mMessageExpression, mProperty_mFixitListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @warningInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST result ;
  const GGS_warningInstructionAST * p = (const GGS_warningInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST_2E_weak::objectCompare (const GGS_warningInstructionAST_2E_weak & inOperand) const {
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

GGS_warningInstructionAST_2E_weak::GGS_warningInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak & GGS_warningInstructionAST_2E_weak::operator = (const GGS_warningInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak::GGS_warningInstructionAST_2E_weak (const GGS_warningInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak GGS_warningInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_warningInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST_2E_weak::bang_warningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionAST) ;
      result = GGS_warningInstructionAST ((cPtr_warningInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @warningInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ("warningInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak GGS_warningInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_warningInstructionAST_2E_weak result ;
  const GGS_warningInstructionAST_2E_weak * p = (const GGS_warningInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionForGeneration_2E_weak::objectCompare (const GGS_warningInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak & GGS_warningInstructionForGeneration_2E_weak::operator = (const GGS_warningInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak::GGS_warningInstructionForGeneration_2E_weak (const GGS_warningInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration_2E_weak::bang_warningInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_warningInstructionForGeneration) ;
      result = GGS_warningInstructionForGeneration ((cPtr_warningInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @warningInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ("warningInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_warningInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_warningInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_warningInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration_2E_weak GGS_warningInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_warningInstructionForGeneration_2E_weak result ;
  const GGS_warningInstructionForGeneration_2E_weak * p = (const GGS_warningInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_warningInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("warningInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readAccessWithInstructionAST_2E_weak::objectCompare (const GGS_readAccessWithInstructionAST_2E_weak & inOperand) const {
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

GGS_readAccessWithInstructionAST_2E_weak::GGS_readAccessWithInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak & GGS_readAccessWithInstructionAST_2E_weak::operator = (const GGS_readAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak::GGS_readAccessWithInstructionAST_2E_weak (const GGS_readAccessWithInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak GGS_readAccessWithInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readAccessWithInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST GGS_readAccessWithInstructionAST_2E_weak::bang_readAccessWithInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readAccessWithInstructionAST) ;
      result = GGS_readAccessWithInstructionAST ((cPtr_readAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @readAccessWithInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2E_weak ("readAccessWithInstructionAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readAccessWithInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readAccessWithInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readAccessWithInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readAccessWithInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readAccessWithInstructionAST_2E_weak GGS_readAccessWithInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_readAccessWithInstructionAST_2E_weak result ;
  const GGS_readAccessWithInstructionAST_2E_weak * p = (const GGS_readAccessWithInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readAccessWithInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readAccessWithInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readWriteAccessWithInstructionAST_2E_weak::objectCompare (const GGS_readWriteAccessWithInstructionAST_2E_weak & inOperand) const {
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

GGS_readWriteAccessWithInstructionAST_2E_weak::GGS_readWriteAccessWithInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak & GGS_readWriteAccessWithInstructionAST_2E_weak::operator = (const GGS_readWriteAccessWithInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak::GGS_readWriteAccessWithInstructionAST_2E_weak (const GGS_readWriteAccessWithInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak GGS_readWriteAccessWithInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readWriteAccessWithInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST GGS_readWriteAccessWithInstructionAST_2E_weak::bang_readWriteAccessWithInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readWriteAccessWithInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteAccessWithInstructionAST) ;
      result = GGS_readWriteAccessWithInstructionAST ((cPtr_readWriteAccessWithInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @readWriteAccessWithInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2E_weak ("readWriteAccessWithInstructionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readWriteAccessWithInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteAccessWithInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readWriteAccessWithInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readWriteAccessWithInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteAccessWithInstructionAST_2E_weak GGS_readWriteAccessWithInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_readWriteAccessWithInstructionAST_2E_weak result ;
  const GGS_readWriteAccessWithInstructionAST_2E_weak * p = (const GGS_readWriteAccessWithInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readWriteAccessWithInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteAccessWithInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readOnlyWithInstructionForGeneration_2E_weak::objectCompare (const GGS_readOnlyWithInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_readOnlyWithInstructionForGeneration_2E_weak::GGS_readOnlyWithInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak & GGS_readOnlyWithInstructionForGeneration_2E_weak::operator = (const GGS_readOnlyWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak::GGS_readOnlyWithInstructionForGeneration_2E_weak (const GGS_readOnlyWithInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak GGS_readOnlyWithInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readOnlyWithInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration GGS_readOnlyWithInstructionForGeneration_2E_weak::bang_readOnlyWithInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readOnlyWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readOnlyWithInstructionForGeneration) ;
      result = GGS_readOnlyWithInstructionForGeneration ((cPtr_readOnlyWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @readOnlyWithInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2E_weak ("readOnlyWithInstructionForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readOnlyWithInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readOnlyWithInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readOnlyWithInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readOnlyWithInstructionForGeneration_2E_weak GGS_readOnlyWithInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_readOnlyWithInstructionForGeneration_2E_weak result ;
  const GGS_readOnlyWithInstructionForGeneration_2E_weak * p = (const GGS_readOnlyWithInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readOnlyWithInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readOnlyWithInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_readWriteWithInstructionForGeneration_2E_weak::objectCompare (const GGS_readWriteWithInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_readWriteWithInstructionForGeneration_2E_weak::GGS_readWriteWithInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak & GGS_readWriteWithInstructionForGeneration_2E_weak::operator = (const GGS_readWriteWithInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak::GGS_readWriteWithInstructionForGeneration_2E_weak (const GGS_readWriteWithInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak GGS_readWriteWithInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_readWriteWithInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration GGS_readWriteWithInstructionForGeneration_2E_weak::bang_readWriteWithInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_readWriteWithInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_readWriteWithInstructionForGeneration) ;
      result = GGS_readWriteWithInstructionForGeneration ((cPtr_readWriteWithInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @readWriteWithInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2E_weak ("readWriteWithInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_readWriteWithInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_readWriteWithInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_readWriteWithInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_readWriteWithInstructionForGeneration_2E_weak GGS_readWriteWithInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_readWriteWithInstructionForGeneration_2E_weak result ;
  const GGS_readWriteWithInstructionForGeneration_2E_weak * p = (const GGS_readWriteWithInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_readWriteWithInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("readWriteWithInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalCallInstruction_2E_weak::objectCompare (const GGS_nonterminalCallInstruction_2E_weak & inOperand) const {
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

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak & GGS_nonterminalCallInstruction_2E_weak::operator = (const GGS_nonterminalCallInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak::GGS_nonterminalCallInstruction_2E_weak (const GGS_nonterminalCallInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction GGS_nonterminalCallInstruction_2E_weak::bang_nonterminalCallInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalCallInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalCallInstruction) ;
      result = GGS_nonterminalCallInstruction ((cPtr_nonterminalCallInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalCallInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ("nonterminalCallInstruction.weak",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalCallInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalCallInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalCallInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalCallInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalCallInstruction_2E_weak GGS_nonterminalCallInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_nonterminalCallInstruction_2E_weak result ;
  const GGS_nonterminalCallInstruction_2E_weak * p = (const GGS_nonterminalCallInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalCallInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalCallInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonterminalInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration::objectCompare (const GGS_nonterminalInstructionForGeneration & inOperand) const {
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

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mNonterminalName,
                          const GGS_string & in_mLabelName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_nonterminalInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_nonterminalInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->nonterminalInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_nonterminalInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonterminalInstructionForGeneration::
nonterminalInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_string & in_mNonterminalName,
                                                              const GGS_string & in_mLabelName,
                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mNonterminalName = in_mNonterminalName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationResult = in_mGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration::GGS_nonterminalInstructionForGeneration (const cPtr_nonterminalInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonterminalInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_string & in_mNonterminalName,
                                                                                                 const GGS_string & in_mLabelName,
                                                                                                 const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                 const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_nonterminalInstructionForGeneration (in_mInstructionLocation, in_mNonterminalName, in_mLabelName, in_mActualParameterList, in_mGrammarInstructionSyntaxDirectedTranslationResult,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mNonterminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mNonterminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_nonterminalInstructionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_nonterminalInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_nonterminalInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_nonterminalInstructionForGeneration * p = (cPtr_nonterminalInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonterminalInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonterminalInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mNonterminalName (),
mProperty_mLabelName (),
mProperty_mActualParameterList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonterminalInstructionForGeneration::cPtr_nonterminalInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mNonterminalName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationResult,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_nonterminalInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonterminalInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mNonterminalName, mProperty_mLabelName, mProperty_mActualParameterList, mProperty_mGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @nonterminalInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ("nonterminalInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration result ;
  const GGS_nonterminalInstructionForGeneration * p = (const GGS_nonterminalInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonterminalInstructionForGeneration_2E_weak::objectCompare (const GGS_nonterminalInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak & GGS_nonterminalInstructionForGeneration_2E_weak::operator = (const GGS_nonterminalInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak::GGS_nonterminalInstructionForGeneration_2E_weak (const GGS_nonterminalInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration GGS_nonterminalInstructionForGeneration_2E_weak::bang_nonterminalInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonterminalInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonterminalInstructionForGeneration) ;
      result = GGS_nonterminalInstructionForGeneration ((cPtr_nonterminalInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ("nonterminalInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonterminalInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonterminalInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonterminalInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalInstructionForGeneration_2E_weak GGS_nonterminalInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_nonterminalInstructionForGeneration_2E_weak result ;
  const GGS_nonterminalInstructionForGeneration_2E_weak * p = (const GGS_nonterminalInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonterminalInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonterminalInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction::objectCompare (const GGS_repeatInstruction & inOperand) const {
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

GGS_repeatInstruction::GGS_repeatInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                          const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                          const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                          const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_repeatInstruction * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstruction (inCompiler COMMA_THERE)) ;
  object->repeatInstruction_init_21__21__21__21__21_ (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction, inCompiler) ;
  const GGS_repeatInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstruction::
repeatInstruction_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                            const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                            const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                            const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                            const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch = in_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mEndOf_5F_repeat_5F_instruction = in_mEndOf_5F_repeat_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction::GGS_repeatInstruction (const cPtr_repeatInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                             const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                             const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                             const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstruction (in_mInstructionLocation, in_mRepeatedInstructionList, in_mEndOf_5F_repeated_5F_instructions_5F_branch, in_mRepeatBranchList, in_mEndOf_5F_repeat_5F_instruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_repeatInstruction::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstruction::readProperty_mEndOf_5F_repeat_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstruction) ;
    return p->mProperty_mEndOf_5F_repeat_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch (),
mProperty_mRepeatBranchList (),
mProperty_mEndOf_5F_repeat_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstruction::cPtr_repeatInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_syntaxInstructionList & in_mRepeatedInstructionList,
                                                const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GGS_listOfSyntaxInstructionList & in_mRepeatBranchList,
                                                const GGS_location & in_mEndOf_5F_repeat_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_repeatInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstruction (mProperty_mInstructionLocation, mProperty_mRepeatedInstructionList, mProperty_mEndOf_5F_repeated_5F_instructions_5F_branch, mProperty_mRepeatBranchList, mProperty_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @repeatInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction result ;
  const GGS_repeatInstruction * p = (const GGS_repeatInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction_2E_weak::objectCompare (const GGS_repeatInstruction_2E_weak & inOperand) const {
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

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak & GGS_repeatInstruction_2E_weak::operator = (const GGS_repeatInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (const GGS_repeatInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::bang_repeatInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstruction) ;
      result = GGS_repeatInstruction ((cPtr_repeatInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ("repeatInstruction.weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak GGS_repeatInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_repeatInstruction_2E_weak result ;
  const GGS_repeatInstruction_2E_weak * p = (const GGS_repeatInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration::objectCompare (const GGS_repeatInstructionForGeneration & inOperand) const {
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

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_string & in_mSyntaxComponentName,
                              const GGS_uint & in_mChoiceIndex,
                              const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                              const GGS_location & in_mEndOfRepeatedInstructions,
                              const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGeneration_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_repeatInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGeneration::
repeatInstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_string & in_mSyntaxComponentName,
                                                             const GGS_uint & in_mChoiceIndex,
                                                             const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructions,
                                                             const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_m_5F_repeated_5F_instructionList = in_m_5F_repeated_5F_instructionList ;
  mProperty_mEndOfRepeatedInstructions = in_mEndOfRepeatedInstructions ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration::GGS_repeatInstructionForGeneration (const cPtr_repeatInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mChoiceIndex,
                                                                                       const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                                       const GGS_location & in_mEndOfRepeatedInstructions,
                                                                                       const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_m_5F_repeated_5F_instructionList, in_mEndOfRepeatedInstructions, in_mListOfSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_repeatInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_m_5F_repeated_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_m_5F_repeated_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_repeatInstructionForGeneration::readProperty_mEndOfRepeatedInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mEndOfRepeatedInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_repeatInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGeneration class
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

cPtr_repeatInstructionForGeneration::cPtr_repeatInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_semanticInstructionListForGeneration & in_m_5F_repeated_5F_instructionList,
                                                                          const GGS_location & in_mEndOfRepeatedInstructions,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_repeatInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_m_5F_repeated_5F_instructionList, mProperty_mEndOfRepeatedInstructions, mProperty_mListOfSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @repeatInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration result ;
  const GGS_repeatInstructionForGeneration * p = (const GGS_repeatInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration_2E_weak::objectCompare (const GGS_repeatInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak & GGS_repeatInstructionForGeneration_2E_weak::operator = (const GGS_repeatInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (const GGS_repeatInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::bang_repeatInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGeneration) ;
      result = GGS_repeatInstructionForGeneration ((cPtr_repeatInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ("repeatInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak GGS_repeatInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGeneration_2E_weak result ;
  const GGS_repeatInstructionForGeneration_2E_weak * p = (const GGS_repeatInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction::objectCompare (const GGS_selectInstruction & inOperand) const {
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

GGS_selectInstruction::GGS_selectInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                  const GGS_location & in_mEndOf_5F_select_5F_instruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstruction * object = nullptr ;
  macroMyNew (object, cPtr_selectInstruction (inCompiler COMMA_THERE)) ;
  object->selectInstruction_init_21__21__21_ (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction, inCompiler) ;
  const GGS_selectInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstruction::
selectInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                    const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                    const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mEndOf_5F_select_5F_instruction = in_mEndOf_5F_select_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction::GGS_selectInstruction (const cPtr_selectInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                             const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                             const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_selectInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstruction (in_mInstructionLocation, in_mSelectBranchList, in_mEndOf_5F_select_5F_instruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_selectInstruction::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_selectInstruction::readProperty_mEndOf_5F_select_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_selectInstruction * p = (cPtr_selectInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstruction) ;
    return p->mProperty_mEndOf_5F_select_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mEndOf_5F_select_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstruction::cPtr_selectInstruction (const GGS_location & in_mInstructionLocation,
                                                const GGS_listOfSyntaxInstructionList & in_mSelectBranchList,
                                                const GGS_location & in_mEndOf_5F_select_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_selectInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstruction (mProperty_mInstructionLocation, mProperty_mSelectBranchList, mProperty_mEndOf_5F_select_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @selectInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                                                         & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction result ;
  const GGS_selectInstruction * p = (const GGS_selectInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction_2E_weak::objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const {
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

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak & GGS_selectInstruction_2E_weak::operator = (const GGS_selectInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (const GGS_selectInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstruction) ;
      result = GGS_selectInstruction ((cPtr_selectInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ("selectInstruction.weak",
                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak GGS_selectInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_selectInstruction_2E_weak result ;
  const GGS_selectInstruction_2E_weak * p = (const GGS_selectInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @selectInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration::objectCompare (const GGS_selectInstructionForGeneration & inOperand) const {
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

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSyntaxComponentName,
                      const GGS_uint & in_mChoiceIndex,
                      const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_selectInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGeneration::
selectInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_string & in_mSyntaxComponentName,
                                                     const GGS_uint & in_mChoiceIndex,
                                                     const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mChoiceIndex = in_mChoiceIndex ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration::GGS_selectInstructionForGeneration (const cPtr_selectInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                       const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mChoiceIndex,
                                                                                       const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGeneration (in_mInstructionLocation, in_mSyntaxComponentName, in_mChoiceIndex, in_mListOfSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_selectInstructionForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGeneration::readProperty_mChoiceIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mChoiceIndex ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_selectInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mChoiceIndex (),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGeneration::cPtr_selectInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_uint & in_mChoiceIndex,
                                                                          const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
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

acPtr_class * cPtr_selectInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSyntaxComponentName, mProperty_mChoiceIndex, mProperty_mListOfSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @selectInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration result ;
  const GGS_selectInstructionForGeneration * p = (const GGS_selectInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration_2E_weak::objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak & GGS_selectInstructionForGeneration_2E_weak::operator = (const GGS_selectInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (const GGS_selectInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGeneration) ;
      result = GGS_selectInstructionForGeneration ((cPtr_selectInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ("selectInstructionForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak GGS_selectInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGeneration_2E_weak result ;
  const GGS_selectInstructionForGeneration_2E_weak * p = (const GGS_selectInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak & GGS_terminalCheckInstructionAST_2E_weak::operator = (const GGS_terminalCheckInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (const GGS_terminalCheckInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionAST) ;
      result = GGS_terminalCheckInstructionAST ((cPtr_terminalCheckInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak GGS_terminalCheckInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionAST_2E_weak result ;
  const GGS_terminalCheckInstructionAST_2E_weak * p = (const GGS_terminalCheckInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractSyntaxInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractSyntaxInstructionForGrammarAnalysis::
abstractSyntaxInstructionForGrammarAnalysis_init_21_ (const GGS_location & in_mStartLocation,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis::GGS_abstractSyntaxInstructionForGrammarAnalysis (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_abstractSyntaxInstructionForGrammarAnalysis::readProperty_mStartLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    return p->mProperty_mStartLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractSyntaxInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_abstractSyntaxInstructionForGrammarAnalysis::cPtr_abstractSyntaxInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE),
mProperty_mStartLocation () {
  mProperty_mStartLocation = in_mStartLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mStartLocation.printNonNullClassInstanceProperties ("mStartLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ("abstractSyntaxInstructionForGrammarAnalysis",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractSyntaxInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak * p = (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractSyntaxInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak & GGS_terminalCheckInstructionForGeneration_2E_weak::operator = (const GGS_terminalCheckInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (const GGS_terminalCheckInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_terminalCheckInstructionForGeneration) ;
      result = GGS_terminalCheckInstructionForGeneration ((cPtr_terminalCheckInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalCheckInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalCheckInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak GGS_terminalCheckInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalCheckInstructionForGeneration_2E_weak result ;
  const GGS_terminalCheckInstructionForGeneration_2E_weak * p = (const GGS_terminalCheckInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalCheckInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalCheckInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseLoopInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstruction::objectCompare (const GGS_parseLoopInstruction & inOperand) const {
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

GGS_parseLoopInstruction::GGS_parseLoopInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_semanticExpressionAST & in_mVariantExpression,
                                  const GGS_location & in_mEndOfVariantExpression,
                                  const GGS_semanticExpressionAST & in_mWhileExpression,
                                  const GGS_location & in_mEndOfWhileExpression,
                                  const GGS_syntaxInstructionList & in_mDoInstructionList,
                                  const GGS_location & in_mEndOfInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_parseLoopInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseLoopInstruction (inCompiler COMMA_THERE)) ;
  object->parseLoopInstruction_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mWhileExpression, in_mEndOfWhileExpression, in_mDoInstructionList, in_mEndOfInstructionList, inCompiler) ;
  const GGS_parseLoopInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseLoopInstruction::
parseLoopInstruction_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mVariantExpression,
                                                       const GGS_location & in_mEndOfVariantExpression,
                                                       const GGS_semanticExpressionAST & in_mWhileExpression,
                                                       const GGS_location & in_mEndOfWhileExpression,
                                                       const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                       const GGS_location & in_mEndOfInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOfWhileExpression = in_mEndOfWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction::GGS_parseLoopInstruction (const cPtr_parseLoopInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseLoopInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                   const GGS_location & in_mEndOfVariantExpression,
                                                                   const GGS_semanticExpressionAST & in_mWhileExpression,
                                                                   const GGS_location & in_mEndOfWhileExpression,
                                                                   const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                                   const GGS_location & in_mEndOfInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseLoopInstruction (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mWhileExpression, in_mEndOfWhileExpression, in_mDoInstructionList, in_mEndOfInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseLoopInstruction::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseLoopInstruction::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseLoopInstruction::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseLoopInstruction::readProperty_mEndOfInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseLoopInstruction * p = (cPtr_parseLoopInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseLoopInstruction) ;
    return p->mProperty_mEndOfInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseLoopInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mWhileExpression (),
mProperty_mEndOfWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseLoopInstruction::cPtr_parseLoopInstruction (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mVariantExpression,
                                                      const GGS_location & in_mEndOfVariantExpression,
                                                      const GGS_semanticExpressionAST & in_mWhileExpression,
                                                      const GGS_location & in_mEndOfWhileExpression,
                                                      const GGS_syntaxInstructionList & in_mDoInstructionList,
                                                      const GGS_location & in_mEndOfInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVariantExpression (),
mProperty_mEndOfVariantExpression (),
mProperty_mWhileExpression (),
mProperty_mEndOfWhileExpression (),
mProperty_mDoInstructionList (),
mProperty_mEndOfInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mEndOfVariantExpression = in_mEndOfVariantExpression ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOfWhileExpression = in_mEndOfWhileExpression ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseLoopInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

void cPtr_parseLoopInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@parseLoopInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseLoopInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseLoopInstruction (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mWhileExpression, mProperty_mEndOfWhileExpression, mProperty_mDoInstructionList, mProperty_mEndOfInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @parseLoopInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction ("parseLoopInstruction",
                                                                            & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction result ;
  const GGS_parseLoopInstruction * p = (const GGS_parseLoopInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstruction_2E_weak::objectCompare (const GGS_parseLoopInstruction_2E_weak & inOperand) const {
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

GGS_parseLoopInstruction_2E_weak::GGS_parseLoopInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak & GGS_parseLoopInstruction_2E_weak::operator = (const GGS_parseLoopInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak::GGS_parseLoopInstruction_2E_weak (const GGS_parseLoopInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak GGS_parseLoopInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseLoopInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction GGS_parseLoopInstruction_2E_weak::bang_parseLoopInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseLoopInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstruction) ;
      result = GGS_parseLoopInstruction ((cPtr_parseLoopInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseLoopInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstruction_2E_weak ("parseLoopInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstruction_2E_weak GGS_parseLoopInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstruction_2E_weak result ;
  const GGS_parseLoopInstruction_2E_weak * p = (const GGS_parseLoopInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseLoopInstructionForGeneration_2E_weak::objectCompare (const GGS_parseLoopInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseLoopInstructionForGeneration_2E_weak::GGS_parseLoopInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak & GGS_parseLoopInstructionForGeneration_2E_weak::operator = (const GGS_parseLoopInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak::GGS_parseLoopInstructionForGeneration_2E_weak (const GGS_parseLoopInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak GGS_parseLoopInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseLoopInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration GGS_parseLoopInstructionForGeneration_2E_weak::bang_parseLoopInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseLoopInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseLoopInstructionForGeneration) ;
      result = GGS_parseLoopInstructionForGeneration ((cPtr_parseLoopInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseLoopInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2E_weak ("parseLoopInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseLoopInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseLoopInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseLoopInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseLoopInstructionForGeneration_2E_weak GGS_parseLoopInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_parseLoopInstructionForGeneration_2E_weak result ;
  const GGS_parseLoopInstructionForGeneration_2E_weak * p = (const GGS_parseLoopInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseLoopInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseLoopInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstruction::objectCompare (const GGS_parseRewindInstruction & inOperand) const {
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

GGS_parseRewindInstruction::GGS_parseRewindInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                  const GGS_location & in_mEndOfParseDoInstruction,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_parseRewindInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseRewindInstruction (inCompiler COMMA_THERE)) ;
  object->parseRewindInstruction_init_21__21__21_ (in_mInstructionLocation, in_mParseRewindBranchList, in_mEndOfParseDoInstruction, inCompiler) ;
  const GGS_parseRewindInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstruction::
parseRewindInstruction_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                         const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                         const GGS_location & in_mEndOfParseDoInstruction,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction::GGS_parseRewindInstruction (const cPtr_parseRewindInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                       const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                                       const GGS_location & in_mEndOfParseDoInstruction,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseRewindInstruction (in_mInstructionLocation, in_mParseRewindBranchList, in_mEndOfParseDoInstruction,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSyntaxInstructionList GGS_parseRewindInstruction::readProperty_mParseRewindBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSyntaxInstructionList () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mParseRewindBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseRewindInstruction::readProperty_mEndOfParseDoInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseRewindInstruction * p = (cPtr_parseRewindInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstruction) ;
    return p->mProperty_mEndOfParseDoInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstruction::cPtr_parseRewindInstruction (const GGS_location & in_mInstructionLocation,
                                                          const GGS_listOfSyntaxInstructionList & in_mParseRewindBranchList,
                                                          const GGS_location & in_mEndOfParseDoInstruction,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mParseRewindBranchList (),
mProperty_mEndOfParseDoInstruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mParseRewindBranchList = in_mParseRewindBranchList ;
  mProperty_mEndOfParseDoInstruction = in_mEndOfParseDoInstruction ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

void cPtr_parseRewindInstruction::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@parseRewindInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParseRewindBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfParseDoInstruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstruction (mProperty_mInstructionLocation, mProperty_mParseRewindBranchList, mProperty_mEndOfParseDoInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mParseRewindBranchList.printNonNullClassInstanceProperties ("mParseRewindBranchList") ;
    mProperty_mEndOfParseDoInstruction.printNonNullClassInstanceProperties ("mEndOfParseDoInstruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @parseRewindInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction ("parseRewindInstruction",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction result ;
  const GGS_parseRewindInstruction * p = (const GGS_parseRewindInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstruction_2E_weak::objectCompare (const GGS_parseRewindInstruction_2E_weak & inOperand) const {
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

GGS_parseRewindInstruction_2E_weak::GGS_parseRewindInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak & GGS_parseRewindInstruction_2E_weak::operator = (const GGS_parseRewindInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak::GGS_parseRewindInstruction_2E_weak (const GGS_parseRewindInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak GGS_parseRewindInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseRewindInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction GGS_parseRewindInstruction_2E_weak::bang_parseRewindInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseRewindInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstruction) ;
      result = GGS_parseRewindInstruction ((cPtr_parseRewindInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseRewindInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstruction_2E_weak ("parseRewindInstruction.weak",
                                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstruction_2E_weak GGS_parseRewindInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstruction_2E_weak result ;
  const GGS_parseRewindInstruction_2E_weak * p = (const GGS_parseRewindInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseRewindInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstructionForGeneration::objectCompare (const GGS_parseRewindInstructionForGeneration & inOperand) const {
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

GGS_parseRewindInstructionForGeneration::GGS_parseRewindInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_parseRewindInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_parseRewindInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->parseRewindInstructionForGeneration_init_21__21_ (in_mInstructionLocation, in_mListOfSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_parseRewindInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseRewindInstructionForGeneration::
parseRewindInstructionForGeneration_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                  const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration::GGS_parseRewindInstructionForGeneration (const cPtr_parseRewindInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseRewindInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                                                 const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_parseRewindInstructionForGeneration (in_mInstructionLocation, in_mListOfSemanticInstructionListForGeneration,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration GGS_parseRewindInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_listOfSemanticInstructionListForGeneration () ;
  }else{
    cPtr_parseRewindInstructionForGeneration * p = (cPtr_parseRewindInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseRewindInstructionForGeneration) ;
    return p->mProperty_mListOfSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseRewindInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseRewindInstructionForGeneration::cPtr_parseRewindInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_listOfSemanticInstructionListForGeneration & in_mListOfSemanticInstructionListForGeneration,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mListOfSemanticInstructionListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mListOfSemanticInstructionListForGeneration = in_mListOfSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseRewindInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

void cPtr_parseRewindInstructionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@parseRewindInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mListOfSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseRewindInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseRewindInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mListOfSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_parseRewindInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mListOfSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mListOfSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @parseRewindInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ("parseRewindInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration result ;
  const GGS_parseRewindInstructionForGeneration * p = (const GGS_parseRewindInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseRewindInstructionForGeneration_2E_weak::objectCompare (const GGS_parseRewindInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseRewindInstructionForGeneration_2E_weak::GGS_parseRewindInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak & GGS_parseRewindInstructionForGeneration_2E_weak::operator = (const GGS_parseRewindInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak::GGS_parseRewindInstructionForGeneration_2E_weak (const GGS_parseRewindInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak GGS_parseRewindInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration GGS_parseRewindInstructionForGeneration_2E_weak::bang_parseRewindInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseRewindInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseRewindInstructionForGeneration) ;
      result = GGS_parseRewindInstructionForGeneration ((cPtr_parseRewindInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseRewindInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2E_weak ("parseRewindInstructionForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseRewindInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseRewindInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseRewindInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseRewindInstructionForGeneration_2E_weak GGS_parseRewindInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_parseRewindInstructionForGeneration_2E_weak result ;
  const GGS_parseRewindInstructionForGeneration_2E_weak * p = (const GGS_parseRewindInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseRewindInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseRewindInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @parseWhenInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstruction::objectCompare (const GGS_parseWhenInstruction & inOperand) const {
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

GGS_parseWhenInstruction::GGS_parseWhenInstruction (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_semanticExpressionAST & in_mWhenExpression,
                                  const GGS_location & in_mEndOfWhenExpression,
                                  const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                  const GGS_location & in_mEndOfWhenInstructionList,
                                  const GGS_syntaxInstructionList & in_mElseInstructionList,
                                  const GGS_location & in_mEndOfElseInstructionList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_parseWhenInstruction * object = nullptr ;
  macroMyNew (object, cPtr_parseWhenInstruction (inCompiler COMMA_THERE)) ;
  object->parseWhenInstruction_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mWhenExpression, in_mEndOfWhenExpression, in_mWhenInstructionList, in_mEndOfWhenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList, inCompiler) ;
  const GGS_parseWhenInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_parseWhenInstruction::
parseWhenInstruction_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_semanticExpressionAST & in_mWhenExpression,
                                                       const GGS_location & in_mEndOfWhenExpression,
                                                       const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                       const GGS_location & in_mEndOfWhenInstructionList,
                                                       const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                       const GGS_location & in_mEndOfElseInstructionList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction::GGS_parseWhenInstruction (const cPtr_parseWhenInstruction * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_parseWhenInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_semanticExpressionAST & in_mWhenExpression,
                                                                   const GGS_location & in_mEndOfWhenExpression,
                                                                   const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                                   const GGS_location & in_mEndOfWhenInstructionList,
                                                                   const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                                   const GGS_location & in_mEndOfElseInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_parseWhenInstruction (in_mInstructionLocation, in_mWhenExpression, in_mEndOfWhenExpression, in_mWhenInstructionList, in_mEndOfWhenInstructionList, in_mElseInstructionList, in_mEndOfElseInstructionList,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_parseWhenInstruction::readProperty_mWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfWhenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfWhenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionList GGS_parseWhenInstruction::readProperty_mElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_syntaxInstructionList () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_parseWhenInstruction::readProperty_mEndOfElseInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_parseWhenInstruction * p = (cPtr_parseWhenInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_parseWhenInstruction) ;
    return p->mProperty_mEndOfElseInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @parseWhenInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_parseWhenInstruction::cPtr_parseWhenInstruction (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mWhenExpression,
                                                      const GGS_location & in_mEndOfWhenExpression,
                                                      const GGS_syntaxInstructionList & in_mWhenInstructionList,
                                                      const GGS_location & in_mEndOfWhenInstructionList,
                                                      const GGS_syntaxInstructionList & in_mElseInstructionList,
                                                      const GGS_location & in_mEndOfElseInstructionList,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mWhenExpression (),
mProperty_mEndOfWhenExpression (),
mProperty_mWhenInstructionList (),
mProperty_mEndOfWhenInstructionList (),
mProperty_mElseInstructionList (),
mProperty_mEndOfElseInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mWhenExpression = in_mWhenExpression ;
  mProperty_mEndOfWhenExpression = in_mEndOfWhenExpression ;
  mProperty_mWhenInstructionList = in_mWhenInstructionList ;
  mProperty_mEndOfWhenInstructionList = in_mEndOfWhenInstructionList ;
  mProperty_mElseInstructionList = in_mElseInstructionList ;
  mProperty_mEndOfElseInstructionList = in_mEndOfElseInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_parseWhenInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

void cPtr_parseWhenInstruction::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@parseWhenInstruction:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfWhenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfElseInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_parseWhenInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_parseWhenInstruction (mProperty_mInstructionLocation, mProperty_mWhenExpression, mProperty_mEndOfWhenExpression, mProperty_mWhenInstructionList, mProperty_mEndOfWhenInstructionList, mProperty_mElseInstructionList, mProperty_mEndOfElseInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @parseWhenInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction ("parseWhenInstruction",
                                                                            & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction result ;
  const GGS_parseWhenInstruction * p = (const GGS_parseWhenInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstruction_2E_weak::objectCompare (const GGS_parseWhenInstruction_2E_weak & inOperand) const {
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

GGS_parseWhenInstruction_2E_weak::GGS_parseWhenInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak & GGS_parseWhenInstruction_2E_weak::operator = (const GGS_parseWhenInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak::GGS_parseWhenInstruction_2E_weak (const GGS_parseWhenInstruction & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak GGS_parseWhenInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseWhenInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction GGS_parseWhenInstruction_2E_weak::bang_parseWhenInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseWhenInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstruction) ;
      result = GGS_parseWhenInstruction ((cPtr_parseWhenInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseWhenInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstruction_2E_weak ("parseWhenInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstruction_2E_weak GGS_parseWhenInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstruction_2E_weak result ;
  const GGS_parseWhenInstruction_2E_weak * p = (const GGS_parseWhenInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_parseWhenInstructionForGeneration_2E_weak::objectCompare (const GGS_parseWhenInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_parseWhenInstructionForGeneration_2E_weak::GGS_parseWhenInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak & GGS_parseWhenInstructionForGeneration_2E_weak::operator = (const GGS_parseWhenInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak::GGS_parseWhenInstructionForGeneration_2E_weak (const GGS_parseWhenInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak GGS_parseWhenInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_parseWhenInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration GGS_parseWhenInstructionForGeneration_2E_weak::bang_parseWhenInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_parseWhenInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_parseWhenInstructionForGeneration) ;
      result = GGS_parseWhenInstructionForGeneration ((cPtr_parseWhenInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @parseWhenInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2E_weak ("parseWhenInstructionForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_parseWhenInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_parseWhenInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_parseWhenInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_parseWhenInstructionForGeneration_2E_weak GGS_parseWhenInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_parseWhenInstructionForGeneration_2E_weak result ;
  const GGS_parseWhenInstructionForGeneration_2E_weak * p = (const GGS_parseWhenInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_parseWhenInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("parseWhenInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST::objectCompare (const GGS_syntaxSendInstructionAST & inOperand) const {
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

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syntaxSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_syntaxSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->syntaxSendInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_syntaxSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionAST::
syntaxSendInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                       const GGS_semanticExpressionAST & in_mExpression,
                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST::GGS_syntaxSendInstructionAST (const cPtr_syntaxSendInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::class_func_new (const GGS_location & in_mInstructionLocation,
                                                                           const GGS_semanticExpressionAST & in_mExpression,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  macroMyNew (result.mObjectPtr, cPtr_syntaxSendInstructionAST (in_mInstructionLocation, in_mExpression,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_syntaxSendInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_syntaxSendInstructionAST * p = (cPtr_syntaxSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionAST::cPtr_syntaxSendInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_semanticExpressionAST & in_mExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_syntaxSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

void cPtr_syntaxSendInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxSendInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_syntaxSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ("syntaxSendInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST result ;
  const GGS_syntaxSendInstructionAST * p = (const GGS_syntaxSendInstructionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST_2E_weak::objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak & GGS_syntaxSendInstructionAST_2E_weak::operator = (const GGS_syntaxSendInstructionAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (const GGS_syntaxSendInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionAST) ;
      result = GGS_syntaxSendInstructionAST ((cPtr_syntaxSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ("syntaxSendInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak GGS_syntaxSendInstructionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionAST_2E_weak result ;
  const GGS_syntaxSendInstructionAST_2E_weak * p = (const GGS_syntaxSendInstructionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak & GGS_syntaxSendInstructionForGeneration_2E_weak::operator = (const GGS_syntaxSendInstructionForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (const GGS_syntaxSendInstructionForGeneration & inSource) :
GGS_syntaxInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxSendInstructionForGeneration) ;
      result = GGS_syntaxSendInstructionForGeneration ((cPtr_syntaxSendInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ("syntaxSendInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxSendInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxSendInstructionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxSendInstructionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak GGS_syntaxSendInstructionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_syntaxSendInstructionForGeneration_2E_weak result ;
  const GGS_syntaxSendInstructionForGeneration_2E_weak * p = (const GGS_syntaxSendInstructionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxSendInstructionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxSendInstructionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension method '@semanticInstructionForGeneration appendSyntaxSignature'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionForGeneration::method_appendSyntaxSignature (const GGS_string /* constinArgument_inPosfix */,
                                                                          GGS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_appendSyntaxSignature (cPtr_semanticInstructionForGeneration * inObject,
                                                const GGS_string constin_inPosfix,
                                                GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionForGeneration) ;
    inObject->method_appendSyntaxSignature (constin_inPosfix, io_ioInstructionListForGeneration, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@semanticInstructionForGeneration compareInstructionSyntaxSignature'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticInstructionForGeneration::getter_compareInstructionSyntaxSignature (const GGS_semanticInstructionForGeneration /* constinArgument_inTestedInstruction */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (true) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_compareInstructionSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                const GGS_semanticInstructionForGeneration in_inTestedInstruction,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_compareInstructionSyntaxSignature (in_inTestedInstruction, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxInstructionListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxInstructionListForGrammarAnalysis : public cCollectionElement {
  public: GGS_syntaxInstructionListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxInstructionListForGrammarAnalysis::cCollectionElement_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstruction" ":") ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis::GGS_syntaxInstructionListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::plusPlusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inValue
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::class_func_listWithValue (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GGS_syntaxInstructionListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::addAssignOperation (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_append (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_insertAtIndex (const GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_removeAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popFirst (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::setter_popLast (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::method_first (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

void GGS_syntaxInstructionListForGrammarAnalysis::method_last (GGS_abstractSyntaxInstructionForGrammarAnalysis & outOperand0,
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::add_operation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_syntaxInstructionListForGrammarAnalysis result = GGS_syntaxInstructionListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::plusAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis::setter_setMInstructionAtIndex (GGS_abstractSyntaxInstructionForGrammarAnalysis inOperand,
                                                                                 GGS_uint inIndex,
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

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (cCollectionElement_syntaxInstructionListForGrammarAnalysis *) attributes.ptr () ;
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxInstructionListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxInstructionListForGrammarAnalysis::DownEnumerator_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element DownEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis DownEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxInstructionListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxInstructionListForGrammarAnalysis::UpEnumerator_syntaxInstructionListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element UpEnumerator_syntaxInstructionListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis UpEnumerator_syntaxInstructionListForGrammarAnalysis::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_syntaxInstructionListForGrammarAnalysis * p = (const cCollectionElement_syntaxInstructionListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxInstructionListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ("syntaxInstructionListForGrammarAnalysis",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxInstructionListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxInstructionListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxInstructionListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis GGS_syntaxInstructionListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  const GGS_syntaxInstructionListForGrammarAnalysis * p = (const GGS_syntaxInstructionListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxInstructionListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxInstructionListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@productionRuleListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_productionRuleListForGrammarAnalysis : public cCollectionElement {
  public: GGS_productionRuleListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                   const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                   const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                   const GGS_uint & in_mProductionIndex
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                  const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                  const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                  const GGS_uint & in_mProductionIndex
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLeftNonterminalSymbol, in_mLeftNonterminalSymbolIndex, in_mInstructionList, in_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_productionRuleListForGrammarAnalysis::cCollectionElement_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeftNonterminalSymbol" ":") ;
  mObject.mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mLeftNonterminalSymbolIndex" ":") ;
  mObject.mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInstructionList" ":") ;
  mObject.mProperty_mInstructionList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductionIndex" ":") ;
  mObject.mProperty_mProductionIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis::GGS_productionRuleListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::plusPlusAssignOperation (const GGS_productionRuleListForGrammarAnalysis_2E_element & inValue
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                             const GGS_uint & inOperand1,
                                                                                                             const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                             const GGS_uint & inOperand3
                                                                                                             COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_productionRuleListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                          const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                          const GGS_uint & in_mProductionIndex
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

void GGS_productionRuleListForGrammarAnalysis::addAssignOperation (const GGS_lstring & inOperand0,
                                                                   const GGS_uint & inOperand1,
                                                                   const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                   const GGS_uint & inOperand3
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

void GGS_productionRuleListForGrammarAnalysis::setter_append (const GGS_lstring inOperand0,
                                                              const GGS_uint inOperand1,
                                                              const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                              const GGS_uint inOperand3,
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

void GGS_productionRuleListForGrammarAnalysis::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                     const GGS_uint inOperand1,
                                                                     const GGS_syntaxInstructionListForGrammarAnalysis inOperand2,
                                                                     const GGS_uint inOperand3,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_productionRuleListForGrammarAnalysis (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                     GGS_uint & outOperand1,
                                                                     GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                     GGS_uint & outOperand3,
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
    cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mLeftNonterminalSymbol ;
      outOperand1 = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
      outOperand2 = p->mObject.mProperty_mInstructionList ;
      outOperand3 = p->mObject.mProperty_mProductionIndex ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_popFirst (GGS_lstring & outOperand0,
                                                                GGS_uint & outOperand1,
                                                                GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                                GGS_uint & outOperand3,
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

void GGS_productionRuleListForGrammarAnalysis::setter_popLast (GGS_lstring & outOperand0,
                                                               GGS_uint & outOperand1,
                                                               GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                               GGS_uint & outOperand3,
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

void GGS_productionRuleListForGrammarAnalysis::method_first (GGS_lstring & outOperand0,
                                                             GGS_uint & outOperand1,
                                                             GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                             GGS_uint & outOperand3,
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

void GGS_productionRuleListForGrammarAnalysis::method_last (GGS_lstring & outOperand0,
                                                            GGS_uint & outOperand1,
                                                            GGS_syntaxInstructionListForGrammarAnalysis & outOperand2,
                                                            GGS_uint & outOperand3,
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

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::add_operation (const GGS_productionRuleListForGrammarAnalysis & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_productionRuleListForGrammarAnalysis result = GGS_productionRuleListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::plusAssignOperation (const GGS_productionRuleListForGrammarAnalysis inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
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

GGS_lstring GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbol ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMLeftNonterminalSymbolIndexAtIndex (GGS_uint inOperand,
                                                                                             GGS_uint inIndex,
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

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mLeftNonterminalSymbolIndexAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                  GGS_uint inIndex,
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::getter_mInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mInstructionList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis::setter_setMProductionIndexAtIndex (GGS_uint inOperand,
                                                                                  GGS_uint inIndex,
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

GGS_uint GGS_productionRuleListForGrammarAnalysis::getter_mProductionIndexAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_productionRuleListForGrammarAnalysis * p = (cCollectionElement_productionRuleListForGrammarAnalysis *) attributes.ptr () ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionIndex ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @productionRuleListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_productionRuleListForGrammarAnalysis::DownEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element DownEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis DownEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionIndex ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @productionRuleListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_productionRuleListForGrammarAnalysis::UpEnumerator_productionRuleListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element UpEnumerator_productionRuleListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbol (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_productionRuleListForGrammarAnalysis::current_mLeftNonterminalSymbolIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mLeftNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis UpEnumerator_productionRuleListForGrammarAnalysis::current_mInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_productionRuleListForGrammarAnalysis::current_mProductionIndex (LOCATION_ARGS) const {
  const cCollectionElement_productionRuleListForGrammarAnalysis * p = (const cCollectionElement_productionRuleListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_productionRuleListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionIndex ;
}




//--------------------------------------------------------------------------------------------------
//     @productionRuleListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ("productionRuleListForGrammarAnalysis",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_productionRuleListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_productionRuleListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_productionRuleListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis GGS_productionRuleListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis result ;
  const GGS_productionRuleListForGrammarAnalysis * p = (const GGS_productionRuleListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_productionRuleListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("productionRuleListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inValue
                                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mNonTerminalIndex (inValue.mProperty_mNonTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis::cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                                    const GGS_uint & in_mNonTerminalIndex
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalIndex" ":") ;
  mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mNonTerminalIndex = p->mProperty_mNonTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inMapToOverride
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                         GGS_uint inArgument0,
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

GGS_uint GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::getter_mNonTerminalIndexForKey (const GGS_string & inKey,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
    result = p->mProperty_mNonTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::setter_setMNonTerminalIndexForKey (GGS_uint inAttributeValue,
                                                                                          GGS_string inKey,
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

cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                                const GGS_string & inKey
                                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * result = (cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @unusedNonTerminalSymbolMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mNonTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_unusedNonTerminalSymbolMapForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_unusedNonTerminalSymbolMapForGrammarAnalysis) ;
  return p->mProperty_mNonTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @unusedNonTerminalSymbolMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ("unusedNonTerminalSymbolMapForGrammarAnalysis",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unusedNonTerminalSymbolMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis result ;
  const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis * p = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unusedNonTerminalSymbolMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@nonTerminalSymbolSortedListForGrammarAnalysis' sorted list
//--------------------------------------------------------------------------------------------------

class cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis : public cSortedListElement {
  public: GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element mObject ;

//--- Constructors
  public: cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_lstring & in_mNonTerminalSymbol,
                                                                            const GGS_uint & in_mNonTerminalIndex,
                                                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                            COMMA_LOCATION_ARGS) ;

  public: cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inObject
                                                                            COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cSortedListElement * copy (void) ;

//--- Virtual method for comparing elements

//--- Description
 public: virtual void description (String & ioString, const int32_t inIndentation) const ;

//--- Virtual method that comparing element for sorting
  public: virtual ComparisonResult compareForSorting (const cSortedListElement * inOperand) const ;
} ;

//--------------------------------------------------------------------------------------------------

cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_lstring & in_mNonTerminalSymbol,
                                                                                                                                    const GGS_uint & in_mNonTerminalIndex,
                                                                                                                                    const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap
                                                                                                                                    COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (in_mNonTerminalSymbol, in_mNonTerminalIndex, in_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::
cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inObject
                                                                  COMMA_LOCATION_ARGS) :
cSortedListElement (THERE),
mObject (inObject) {
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalSymbol" ":") ;
  mObject.mProperty_mNonTerminalSymbol.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonTerminalIndex" ":") ;
  mObject.mProperty_mNonTerminalIndex.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mNonterminalSymbolParametersMap" ":") ;
  mObject.mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis::GGS_nonTerminalSymbolSortedListForGrammarAnalysis (void) :
AC_GALGAS_sortedlist () {
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusPlusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inValue
                                                                                 COMMA_LOCATION_ARGS) {
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis::compareForSorting (const cSortedListElement * inOperand) const {
  ComparisonResult result = ComparisonResult::operandEqual ;
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * operand = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) inOperand ;
  macroValidSharedObject (operand, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  if (result == ComparisonResult::operandEqual) {
    result = mObject.mProperty_mNonTerminalIndex.objectCompare (operand->mObject.mProperty_mNonTerminalIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_emptySortedList (LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  result.createNewEmptySortedList (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::class_func_sortedListWithValue (const GGS_lstring & inOperand0,
                                                                                                                                     const GGS_uint & inOperand1,
                                                                                                                                     const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
                                                                                                                                     COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result = class_func_emptySortedList (THERE) ;
  cSortedListElement * p = nullptr ;
  macroMyNew (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
  capSortedListElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  result.appendObject (attributes) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::addAssignOperation (const GGS_lstring & inOperand0,
                                                                            const GGS_uint & inOperand1,
                                                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2
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

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_insert (const GGS_lstring inOperand0,
                                                                       const GGS_uint inOperand1,
                                                                       const GGS_nonterminalSymbolLabelMapForGrammarAnalysis inOperand2,
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

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::plusAssignOperation (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis inOperand,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    appendSortedList (inOperand) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popSmallest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
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

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::setter_popGreatest (GGS_lstring & outOperand0,
                                                                            GGS_uint & outOperand1,
                                                                            GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
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

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_smallest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
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

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis::method_greatest (GGS_lstring & outOperand0,
                                                                         GGS_uint & outOperand1,
                                                                         GGS_nonterminalSymbolLabelMapForGrammarAnalysis & outOperand2,
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
// Down Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis DownEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonterminalSymbolParametersMap ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @nonTerminalSymbolSortedListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalSymbol (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalSymbol ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonTerminalIndex (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis UpEnumerator_nonTerminalSymbolSortedListForGrammarAnalysis::current_mNonterminalSymbolParametersMap (LOCATION_ARGS) const {
  const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cSortedListElement_nonTerminalSymbolSortedListForGrammarAnalysis) ;
  return p->mObject.mProperty_mNonterminalSymbolParametersMap ;
}



//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolSortedListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ("nonTerminalSymbolSortedListForGrammarAnalysis",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalSymbolSortedListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalSymbolSortedListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalSymbolSortedListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis GGS_nonTerminalSymbolSortedListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis result ;
  const GGS_nonTerminalSymbolSortedListForGrammarAnalysis * p = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalSymbolSortedListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalSymbolSortedListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak & GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (const GGS_nonTerminalInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::bang_nonTerminalInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
      result = GGS_nonTerminalInstructionForGrammarAnalysis ((cPtr_nonTerminalInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ("nonTerminalInstructionForGrammarAnalysis.weak",
                                                                                                        & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak * p = (const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@branchListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_branchListForGrammarAnalysis : public cCollectionElement {
  public: GGS_branchListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_branchListForGrammarAnalysis::cCollectionElement_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxInstructionList" ":") ;
  mObject.mProperty_mSyntaxInstructionList.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis::GGS_branchListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusPlusAssignOperation (const GGS_branchListForGrammarAnalysis_2E_element & inValue
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::class_func_listWithValue (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis result ;
  if (inOperand0.isValid ()) {
    result = GGS_branchListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_branchListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_branchListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (in_mSyntaxInstructionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::addAssignOperation (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0
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

void GGS_branchListForGrammarAnalysis::setter_append (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
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

void GGS_branchListForGrammarAnalysis::setter_insertAtIndex (const GGS_syntaxInstructionListForGrammarAnalysis inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_branchListForGrammarAnalysis (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_removeAtIndex (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mSyntaxInstructionList ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_popFirst (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
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

void GGS_branchListForGrammarAnalysis::setter_popLast (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
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

void GGS_branchListForGrammarAnalysis::method_first (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
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

void GGS_branchListForGrammarAnalysis::method_last (GGS_syntaxInstructionListForGrammarAnalysis & outOperand0,
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

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::add_operation (const GGS_branchListForGrammarAnalysis & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result = GGS_branchListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result = GGS_branchListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_branchListForGrammarAnalysis result = GGS_branchListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::plusAssignOperation (const GGS_branchListForGrammarAnalysis inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis::setter_setMSyntaxInstructionListAtIndex (GGS_syntaxInstructionListForGrammarAnalysis inOperand,
                                                                                GGS_uint inIndex,
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

GGS_syntaxInstructionListForGrammarAnalysis GGS_branchListForGrammarAnalysis::getter_mSyntaxInstructionListAtIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_branchListForGrammarAnalysis * p = (cCollectionElement_branchListForGrammarAnalysis *) attributes.ptr () ;
  GGS_syntaxInstructionListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxInstructionList ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_branchListForGrammarAnalysis::DownEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element DownEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis DownEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @branchListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_branchListForGrammarAnalysis::UpEnumerator_branchListForGrammarAnalysis (const GGS_branchListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element UpEnumerator_branchListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis UpEnumerator_branchListForGrammarAnalysis::current_mSyntaxInstructionList (LOCATION_ARGS) const {
  const cCollectionElement_branchListForGrammarAnalysis * p = (const cCollectionElement_branchListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_branchListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxInstructionList ;
}




//--------------------------------------------------------------------------------------------------
//     @branchListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ("branchListForGrammarAnalysis",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_branchListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_branchListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_branchListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_branchListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis result ;
  const GGS_branchListForGrammarAnalysis * p = (const GGS_branchListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_branchListForGrammarAnalysis *> (p)) {
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

ComparisonResult GGS_selectInstructionForGrammarAnalysis::objectCompare (const GGS_selectInstructionForGrammarAnalysis & inOperand) const {
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

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selectInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_selectInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->selectInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mSelectBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_selectInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selectInstructionForGrammarAnalysis::
selectInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis::GGS_selectInstructionForGrammarAnalysis (const cPtr_selectInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::class_func_new (const GGS_location & in_mStartLocation,
                                                                                                 const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                                 const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis result ;
  macroMyNew (result.mObjectPtr, cPtr_selectInstructionForGrammarAnalysis (in_mStartLocation, in_mSelectBranchList, in_mAddedNonTerminalSymbolIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_selectInstructionForGrammarAnalysis * p = (cPtr_selectInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selectInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selectInstructionForGrammarAnalysis::cPtr_selectInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS_branchListForGrammarAnalysis & in_mSelectBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mSelectBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mSelectBranchList = in_mSelectBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_selectInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

void cPtr_selectInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@selectInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_selectInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selectInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mSelectBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selectInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mSelectBranchList.printNonNullClassInstanceProperties ("mSelectBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ("selectInstructionForGrammarAnalysis",
                                                                                           & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis result ;
  const GGS_selectInstructionForGrammarAnalysis * p = (const GGS_selectInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_selectInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak & GGS_selectInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_selectInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak::GGS_selectInstructionForGrammarAnalysis_2E_weak (const GGS_selectInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak GGS_selectInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis GGS_selectInstructionForGrammarAnalysis_2E_weak::bang_selectInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selectInstructionForGrammarAnalysis) ;
      result = GGS_selectInstructionForGrammarAnalysis ((cPtr_selectInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selectInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ("selectInstructionForGrammarAnalysis.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGrammarAnalysis_2E_weak GGS_selectInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_selectInstructionForGrammarAnalysis_2E_weak * p = (const GGS_selectInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @repeatInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis::objectCompare (const GGS_repeatInstructionForGrammarAnalysis & inOperand) const {
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

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                  const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_repeatInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_repeatInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->repeatInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mRepeatBranchList, in_mAddedNonTerminalSymbolIndex, inCompiler) ;
  const GGS_repeatInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_repeatInstructionForGrammarAnalysis::
repeatInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                      const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                      const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                      Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis::GGS_repeatInstructionForGrammarAnalysis (const cPtr_repeatInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_repeatInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::class_func_new (const GGS_location & in_mStartLocation,
                                                                                                 const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                                 const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis result ;
  macroMyNew (result.mObjectPtr, cPtr_repeatInstructionForGrammarAnalysis (in_mStartLocation, in_mRepeatBranchList, in_mAddedNonTerminalSymbolIndex,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_branchListForGrammarAnalysis () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mRepeatBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_repeatInstructionForGrammarAnalysis::readProperty_mAddedNonTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_repeatInstructionForGrammarAnalysis * p = (cPtr_repeatInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_repeatInstructionForGrammarAnalysis) ;
    return p->mProperty_mAddedNonTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @repeatInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_repeatInstructionForGrammarAnalysis::cPtr_repeatInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                    const GGS_branchListForGrammarAnalysis & in_mRepeatBranchList,
                                                                                    const GGS_uint & in_mAddedNonTerminalSymbolIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mRepeatBranchList (),
mProperty_mAddedNonTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mRepeatBranchList = in_mRepeatBranchList ;
  mProperty_mAddedNonTerminalSymbolIndex = in_mAddedNonTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_repeatInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

void cPtr_repeatInstructionForGrammarAnalysis::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@repeatInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRepeatBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAddedNonTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_repeatInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_repeatInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mRepeatBranchList, mProperty_mAddedNonTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_repeatInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatBranchList.printNonNullClassInstanceProperties ("mRepeatBranchList") ;
    mProperty_mAddedNonTerminalSymbolIndex.printNonNullClassInstanceProperties ("mAddedNonTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ("repeatInstructionForGrammarAnalysis",
                                                                                           & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis result ;
  const GGS_repeatInstructionForGrammarAnalysis * p = (const GGS_repeatInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_repeatInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak & GGS_repeatInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_repeatInstructionForGrammarAnalysis & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak::GGS_repeatInstructionForGrammarAnalysis_2E_weak (const GGS_repeatInstructionForGrammarAnalysis & inSource) :
GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak GGS_repeatInstructionForGrammarAnalysis_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis GGS_repeatInstructionForGrammarAnalysis_2E_weak::bang_repeatInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_repeatInstructionForGrammarAnalysis) ;
      result = GGS_repeatInstructionForGrammarAnalysis ((cPtr_repeatInstructionForGrammarAnalysis *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @repeatInstructionForGrammarAnalysis.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ("repeatInstructionForGrammarAnalysis.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_repeatInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_repeatInstructionForGrammarAnalysis_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_repeatInstructionForGrammarAnalysis_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGrammarAnalysis_2E_weak GGS_repeatInstructionForGrammarAnalysis_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_repeatInstructionForGrammarAnalysis_2E_weak result ;
  const GGS_repeatInstructionForGrammarAnalysis_2E_weak * p = (const GGS_repeatInstructionForGrammarAnalysis_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_repeatInstructionForGrammarAnalysis_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("repeatInstructionForGrammarAnalysis.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@syntaxComponentListForGrammarAnalysis' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_syntaxComponentListForGrammarAnalysis : public cCollectionElement {
  public: GGS_syntaxComponentListForGrammarAnalysis_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                    const GGS_lstring & in_mSyntaxComponentName
                                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                    const GGS_lstring & in_mSyntaxComponentName
                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProductionRulesList, in_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_syntaxComponentListForGrammarAnalysis::cCollectionElement_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductionRulesList" ":") ;
  mObject.mProperty_mProductionRulesList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mSyntaxComponentName" ":") ;
  mObject.mProperty_mSyntaxComponentName.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis::GGS_syntaxComponentListForGrammarAnalysis (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusPlusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inValue
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::class_func_listWithValue (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                               const GGS_lstring & inOperand1
                                                                                                               COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_syntaxComponentListForGrammarAnalysis (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                           const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                           const GGS_lstring & in_mSyntaxComponentName
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = nullptr ;
  macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (in_mProductionRulesList,
                                                                           in_mSyntaxComponentName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::addAssignOperation (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                    const GGS_lstring & inOperand1
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_append (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                               const GGS_lstring inOperand1,
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_insertAtIndex (const GGS_productionRuleListForGrammarAnalysis inOperand0,
                                                                      const GGS_lstring inOperand1,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_syntaxComponentListForGrammarAnalysis (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_removeAtIndex (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                      GGS_lstring & outOperand1,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
      outOperand0 = p->mObject.mProperty_mProductionRulesList ;
      outOperand1 = p->mObject.mProperty_mSyntaxComponentName ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_popFirst (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                 GGS_lstring & outOperand1,
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

void GGS_syntaxComponentListForGrammarAnalysis::setter_popLast (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                                GGS_lstring & outOperand1,
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

void GGS_syntaxComponentListForGrammarAnalysis::method_first (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                              GGS_lstring & outOperand1,
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

void GGS_syntaxComponentListForGrammarAnalysis::method_last (GGS_productionRuleListForGrammarAnalysis & outOperand0,
                                                             GGS_lstring & outOperand1,
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

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::add_operation (const GGS_syntaxComponentListForGrammarAnalysis & inOperand,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListWithRange (const GGS_range & inRange,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result = GGS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result = GGS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_syntaxComponentListForGrammarAnalysis result = GGS_syntaxComponentListForGrammarAnalysis::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::plusAssignOperation (const GGS_syntaxComponentListForGrammarAnalysis inOperand,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMProductionRulesListAtIndex (GGS_productionRuleListForGrammarAnalysis inOperand,
                                                                                       GGS_uint inIndex,
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

GGS_productionRuleListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::getter_mProductionRulesListAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GGS_productionRuleListForGrammarAnalysis result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mProductionRulesList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis::setter_setMSyntaxComponentNameAtIndex (GGS_lstring inOperand,
                                                                                       GGS_uint inIndex,
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

GGS_lstring GGS_syntaxComponentListForGrammarAnalysis::getter_mSyntaxComponentNameAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (cCollectionElement_syntaxComponentListForGrammarAnalysis *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
    result = p->mObject.mProperty_mSyntaxComponentName ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_syntaxComponentListForGrammarAnalysis::DownEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element DownEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @syntaxComponentListForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_syntaxComponentListForGrammarAnalysis::UpEnumerator_syntaxComponentListForGrammarAnalysis (const GGS_syntaxComponentListForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element UpEnumerator_syntaxComponentListForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mProductionRulesList (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mProductionRulesList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_syntaxComponentListForGrammarAnalysis::current_mSyntaxComponentName (LOCATION_ARGS) const {
  const cCollectionElement_syntaxComponentListForGrammarAnalysis * p = (const cCollectionElement_syntaxComponentListForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_syntaxComponentListForGrammarAnalysis) ;
  return p->mObject.mProperty_mSyntaxComponentName ;
}




//--------------------------------------------------------------------------------------------------
//     @syntaxComponentListForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ("syntaxComponentListForGrammarAnalysis",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_syntaxComponentListForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_syntaxComponentListForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_syntaxComponentListForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis GGS_syntaxComponentListForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis result ;
  const GGS_syntaxComponentListForGrammarAnalysis * p = (const GGS_syntaxComponentListForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_syntaxComponentListForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("syntaxComponentListForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis::cMapElement_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE),
mProperty_mTerminalIndex (inValue.mProperty_mTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_terminalSymbolsMapForGrammarAnalysis::cMapElement_terminalSymbolsMapForGrammarAnalysis (const GGS_lstring & inKey,
                                                                                                    const GGS_uint & in_mTerminalIndex
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTerminalIndex" ":") ;
  mProperty_mTerminalIndex.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis::GGS_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis & GGS_terminalSymbolsMapForGrammarAnalysis::operator = (const GGS_terminalSymbolsMapForGrammarAnalysis & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::class_func_emptyMap (LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ GGS_terminalSymbolsMapForGrammarAnalysis
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::init_nil () ;
    }else{
      GGS_terminalSymbolsMapForGrammarAnalysis_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      element.mProperty_mTerminalIndex = p->mProperty_mTerminalIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::class_func_mapWithMapToOverride (const GGS_terminalSymbolsMapForGrammarAnalysis & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_insertKey (GGS_lstring inKey,
                                                                 GGS_uint inArgument0,
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

void GGS_terminalSymbolsMapForGrammarAnalysis::method_searchKey (GGS_lstring inKey,
                                                                 GGS_uint & outArgument0,
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

GGS_uint GGS_terminalSymbolsMapForGrammarAnalysis::getter_mTerminalIndexForKey (const GGS_string & inKey,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) attributes ;
  GGS_uint result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    result = p->mProperty_mTerminalIndex ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis::setter_setMTerminalIndexForKey (GGS_uint inAttributeValue,
                                                                               GGS_string inKey,
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

cMapElement_terminalSymbolsMapForGrammarAnalysis * GGS_terminalSymbolsMapForGrammarAnalysis::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_terminalSymbolsMapForGrammarAnalysis * result = (cMapElement_terminalSymbolsMapForGrammarAnalysis *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

DownEnumerator_terminalSymbolsMapForGrammarAnalysis::DownEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return p->mProperty_mTerminalIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @terminalSymbolsMapForGrammarAnalysis
//--------------------------------------------------------------------------------------------------

UpEnumerator_terminalSymbolsMapForGrammarAnalysis::UpEnumerator_terminalSymbolsMapForGrammarAnalysis (const GGS_terminalSymbolsMapForGrammarAnalysis & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (p->mProperty_lkey, p->mProperty_mTerminalIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_terminalSymbolsMapForGrammarAnalysis::current_mTerminalIndex (LOCATION_ARGS) const {
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * p = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
  return p->mProperty_mTerminalIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @terminalSymbolsMapForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ("terminalSymbolsMapForGrammarAnalysis",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_terminalSymbolsMapForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_terminalSymbolsMapForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_terminalSymbolsMapForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis GGS_terminalSymbolsMapForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis result ;
  const GGS_terminalSymbolsMapForGrammarAnalysis * p = (const GGS_terminalSymbolsMapForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_terminalSymbolsMapForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("terminalSymbolsMapForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@syntaxInstructionAST transformInstructionForGrammarAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_transformInstructionForGrammarAnalysis (cPtr_syntaxInstructionAST * inObject,
                                                                 GGS_terminalSymbolsMapForGrammarAnalysis & io_ioActuallyUsedTerminalSymbolMap,
                                                                 const GGS_nonTerminalSymbolMapForGrammarAnalysis constin_inNonTerminalSymbolMap,
                                                                 GGS_uint & io_ioAddedNonTerminalIndex,
                                                                 GGS_syntaxInstructionListForGrammarAnalysis & io_ioSyntaxInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_syntaxInstructionAST) ;
    inObject->method_transformInstructionForGrammarAnalysis (io_ioActuallyUsedTerminalSymbolMap, constin_inNonTerminalSymbolMap, io_ioAddedNonTerminalIndex, io_ioSyntaxInstructionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_tikzNodeForSyntaxInstruction (const GGS_syntaxInstructionListForGrammarAnalysis inObject,
                                                   GGS_rowList & ioArgument_ioRowList,
                                                   const GGS_uint constinArgument_inRow,
                                                   GGS_uint & ioArgument_ioColumn,
                                                   GGS_string & ioArgument_ioCurrentNode,
                                                   GGS_string & ioArgument_ioArrowShape,
                                                   GGS_string & ioArgument_ioArrows,
                                                   GGS_uint & ioArgument_ioMaxUsedRowIndex,
                                                   const GGS_bool constinArgument_inDebug,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 239)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_nodeName_9333 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 240)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)).add_operation (var_nodeName_9333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 246)) ;
      ioArgument_ioCurrentNode = var_nodeName_9333 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 249)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9530 (temp_2) ;
    while (enumerator_9530.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9530.current_mInstruction (HERE).ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 252)) ;
      enumerator_9530.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@rowList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_rowList : public cCollectionElement {
  public: GGS_rowList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_rowList (const GGS__32_stringlist & in_columns
                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_rowList (const GGS_rowList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_rowList::cCollectionElement_rowList (const GGS__32_stringlist & in_columns
                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_columns) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_rowList::cCollectionElement_rowList (const GGS_rowList_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("columns" ":") ;
  mObject.mProperty_columns.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList::GGS_rowList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList::GGS_rowList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_rowList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_rowList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::plusPlusAssignOperation (const GGS_rowList_2E_element & inValue
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_rowList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::class_func_listWithValue (const GGS__32_stringlist & inOperand0
                                                   COMMA_LOCATION_ARGS) {
  GGS_rowList result ;
  if (inOperand0.isValid ()) {
    result = GGS_rowList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_rowList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                             const GGS__32_stringlist & in_columns
                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_rowList * p = nullptr ;
  macroMyNew (p, cCollectionElement_rowList (in_columns COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::addAssignOperation (const GGS__32_stringlist & inOperand0
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

void GGS_rowList::setter_append (const GGS__32_stringlist inOperand0,
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

void GGS_rowList::setter_insertAtIndex (const GGS__32_stringlist inOperand0,
                                        const GGS_uint inInsertionIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_rowList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::setter_removeAtIndex (GGS__32_stringlist & outOperand0,
                                        const GGS_uint inRemoveIndex,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_rowList) ;
      outOperand0 = p->mObject.mProperty_columns ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::setter_popFirst (GGS__32_stringlist & outOperand0,
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

void GGS_rowList::setter_popLast (GGS__32_stringlist & outOperand0,
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

void GGS_rowList::method_first (GGS__32_stringlist & outOperand0,
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

void GGS_rowList::method_last (GGS__32_stringlist & outOperand0,
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

GGS_rowList GGS_rowList::add_operation (const GGS_rowList & inOperand,
                                            Compiler * /* inCompiler */
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_rowList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::getter_subListWithRange (const GGS_range & inRange,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_rowList result = GGS_rowList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_rowList result = GGS_rowList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::getter_subListToIndex (const GGS_uint & inIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_rowList result = GGS_rowList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::plusAssignOperation (const GGS_rowList inOperand,
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_rowList::setter_setColumnsAtIndex (GGS__32_stringlist inOperand,
                                              GGS_uint inIndex,
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

GGS__32_stringlist GGS_rowList::getter_columnsAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_rowList * p = (cCollectionElement_rowList *) attributes.ptr () ;
  GGS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_rowList) ;
    result = p->mObject.mProperty_columns ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @rowList
//--------------------------------------------------------------------------------------------------

DownEnumerator_rowList::DownEnumerator_rowList (const GGS_rowList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element DownEnumerator_rowList::current (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject.mProperty_columns ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @rowList
//--------------------------------------------------------------------------------------------------

UpEnumerator_rowList::UpEnumerator_rowList (const GGS_rowList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList_2E_element UpEnumerator_rowList::current (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_rowList::current_columns (LOCATION_ARGS) const {
  const cCollectionElement_rowList * p = (const cCollectionElement_rowList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_rowList) ;
  return p->mObject.mProperty_columns ;
}




//--------------------------------------------------------------------------------------------------
//     @rowList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_rowList ("rowList",
                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_rowList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_rowList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_rowList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_rowList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_rowList GGS_rowList::extractObject (const GGS_object & inObject,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  GGS_rowList result ;
  const GGS_rowList * p = (const GGS_rowList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_rowList *> (p)) {
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

void extensionSetter_appendRow (GGS_rowList & ioObject,
                                const GGS_string constinArgument_inNodeDefinition,
                                const GGS_uint constinArgument_inRow,
                                const GGS_uint constinArgument_inColumn,
                                GGS_string & outArgument_outNodeName,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNodeName.drop () ; // Release 'out' argument
  const GGS_rowList temp_0 = ioObject ;
  GGS_uint var_length_10305 = temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 281)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, var_length_10305.objectCompare (constinArgument_inRow)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator_range enumerator_10377 (GGS_range (var_length_10305, constinArgument_inRow.substract_operation (var_length_10305, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 283)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 283)))) ;
      while (enumerator_10377.hasCurrentObject ()) {
        ioObject.addAssignOperation (GGS__32_stringlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 284)) ;
        enumerator_10377.gotoNextObject () ;
      }
    }
  }
  const GGS_rowList temp_2 = ioObject ;
  GGS__32_stringlist var_cols_10439 = temp_2.getter_columnsAtIndex (constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 288)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::lowerOrEqual, var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 290)).objectCompare (constinArgument_inColumn)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator_range enumerator_10569 (GGS_range (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 291)), constinArgument_inColumn.substract_operation (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 291)).add_operation (GGS_uint (1), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 291)))) ;
      while (enumerator_10569.hasCurrentObject ()) {
        var_cols_10439.addAssignOperation (GGS_string::makeEmptyString (), GGS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 292)) ;
        enumerator_10569.gotoNextObject () ;
      }
    }
  }
  outArgument_outNodeName = GGS_string ("p").add_operation (constinArgument_inRow.getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)).add_operation (var_cols_10439.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 296)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 296)) ;
  var_cols_10439.addAssignOperation (outArgument_outNodeName, constinArgument_inNodeDefinition  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 297)) ;
  {
  ioObject.setter_setColumnsAtIndex (var_cols_10439, constinArgument_inRow, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 299)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_tikzNodeForSyntaxInstruction (cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                                       GGS_rowList & io_ioRowList,
                                                       const GGS_uint constin_inRow,
                                                       GGS_uint & io_ioColumn,
                                                       GGS_string & io_ioCurrentNode,
                                                       GGS_string & io_ioArrowShape,
                                                       GGS_string & io_ioArrows,
                                                       GGS_uint & io_ioMaxUsedRowIndex,
                                                       const GGS_bool constin_inDebug,
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
//  Extension Getter '@syntaxInstructionListForGrammarAnalysis displayVertically'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_displayVertically (const GGS_syntaxInstructionListForGrammarAnalysis & inObject,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  const GGS_syntaxInstructionListForGrammarAnalysis temp_0 = inObject ;
  result_result = GGS_bool (ComparisonKind::greaterThan, temp_0.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas", 547)).objectCompare (GGS_uint (uint32_t (4U)))) ;
  const GGS_syntaxInstructionListForGrammarAnalysis temp_1 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_19028 (temp_1) ;
  bool bool_2 = result_result.isValidAndTrue () ;
  if (enumerator_19028.hasCurrentObject () && bool_2) {
    while (enumerator_19028.hasCurrentObject () && bool_2) {
      result_result = callExtensionGetter_isLinear ((const cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_19028.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas", 549)) ;
      enumerator_19028.gotoNextObject () ;
      if (enumerator_19028.hasCurrentObject ()) {
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

GGS_bool callExtensionGetter_isLinear (const cPtr_abstractSyntaxInstructionForGrammarAnalysis * inObject,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_isLinear (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@programListForGeneration' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_programListForGeneration : public cCollectionElement {
  public: GGS_programListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_programListForGeneration::cCollectionElement_programListForGeneration (const GGS_programListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
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
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDeclaration" ":") ;
  mObject.mProperty_mDeclaration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration::GGS_programListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_programListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_programListForGeneration (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusPlusAssignOperation (const GGS_programListForGeneration_2E_element & inValue
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_programListForGeneration (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::class_func_listWithValue (const GGS_semanticDeclarationForGeneration & inOperand0
                                                                                     COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  if (inOperand0.isValid ()) {
    result = GGS_programListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_programListForGeneration::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_semanticDeclarationForGeneration & in_mDeclaration
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_programListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_programListForGeneration (in_mDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::addAssignOperation (const GGS_semanticDeclarationForGeneration & inOperand0
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

void GGS_programListForGeneration::setter_append (const GGS_semanticDeclarationForGeneration inOperand0,
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

void GGS_programListForGeneration::setter_insertAtIndex (const GGS_semanticDeclarationForGeneration inOperand0,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_programListForGeneration (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_removeAtIndex (GGS_semanticDeclarationForGeneration & outOperand0,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mDeclaration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_popFirst (GGS_semanticDeclarationForGeneration & outOperand0,
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

void GGS_programListForGeneration::setter_popLast (GGS_semanticDeclarationForGeneration & outOperand0,
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

void GGS_programListForGeneration::method_first (GGS_semanticDeclarationForGeneration & outOperand0,
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

void GGS_programListForGeneration::method_last (GGS_semanticDeclarationForGeneration & outOperand0,
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

GGS_programListForGeneration GGS_programListForGeneration::add_operation (const GGS_programListForGeneration & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_programListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result = GGS_programListForGeneration::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result = GGS_programListForGeneration::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_programListForGeneration result = GGS_programListForGeneration::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::plusAssignOperation (const GGS_programListForGeneration inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_programListForGeneration::setter_setMDeclarationAtIndex (GGS_semanticDeclarationForGeneration inOperand,
                                                                  GGS_uint inIndex,
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

GGS_semanticDeclarationForGeneration GGS_programListForGeneration::getter_mDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_programListForGeneration * p = (cCollectionElement_programListForGeneration *) attributes.ptr () ;
  GGS_semanticDeclarationForGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
    result = p->mObject.mProperty_mDeclaration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_programListForGeneration::DownEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element DownEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration DownEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @programListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_programListForGeneration::UpEnumerator_programListForGeneration (const GGS_programListForGeneration & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration_2E_element UpEnumerator_programListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationForGeneration UpEnumerator_programListForGeneration::current_mDeclaration (LOCATION_ARGS) const {
  const cCollectionElement_programListForGeneration * p = (const cCollectionElement_programListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_programListForGeneration) ;
  return p->mObject.mProperty_mDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @programListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_programListForGeneration ("programListForGeneration",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_programListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_programListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_programListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_programListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_programListForGeneration GGS_programListForGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_programListForGeneration result ;
  const GGS_programListForGeneration * p = (const GGS_programListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_programListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("programListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary::GGS_genericExtensionMethodListMapDictionary (void) :
AC_GALGAS_root (),
mDictionary (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary::GGS_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inSource) :
AC_GALGAS_root (),
mDictionary (inSource.mDictionary),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary & GGS_genericExtensionMethodListMapDictionary::operator = (const GGS_genericExtensionMethodListMapDictionary & inSource) {
  mDictionary = inSource.mDictionary ;
  mIsValid = inSource.mIsValid ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::drop (void) {
  mDictionary.clear () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary GGS_genericExtensionMethodListMapDictionary::class_func_emptyDict (UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary GGS_genericExtensionMethodListMapDictionary::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendUnsigned (mDictionary.size ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_genericExtensionMethodListMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mDictionary.size ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator != mDictionary.end ()) { // Key exists
      result = iterator->second ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::plusPlusAssignOperation (const GGS_genericExtensionMethodListMapDictionary_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    mDictionary [inValue.mProperty_key] = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                                      const GGS_lstringlist & inArgument0,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_insert (const GGS_string inKey,
                                                                 const GGS_lstringlist inArgument0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_genericExtensionMethodListMapDictionary::getter_hasKey (const GGS_string & inKey
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    result = GGS_bool (iterator != mDictionary.end ()) ; // Key exists
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::method_searchKey (GGS_string inKey,
                                                                    GGS_lstringlist & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = iterator->second.mProperty_mList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_removeKey (GGS_string inKey,
                                                                    GGS_lstringlist & outArgument0,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = iterator->second.mProperty_mList ;
    //--- Remove entry
      mDictionary.erase (iterator) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_genericExtensionMethodListMapDictionary::getter_mListForKey (const GGS_string & inKey,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      const String message = "cannot get mList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = iterator->second.mProperty_mList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary::setter_setMListForKey (GGS_lstringlist inPropertyValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
     const String message = "cannot setMListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      iterator->second.mProperty_mList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @genericExtensionMethodListMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_genericExtensionMethodListMapDictionary::UpEnumerator_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_genericExtensionMethodListMapDictionary ()),
mIterator () {
  mIterator = mDictionary.begin () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @genericExtensionMethodListMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_genericExtensionMethodListMapDictionary::DownEnumerator_genericExtensionMethodListMapDictionary (const GGS_genericExtensionMethodListMapDictionary & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_genericExtensionMethodListMapDictionary ()),
mIterator () {
  mIterator = mDictionary.rbegin () ;
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ("genericExtensionMethodListMapDictionary",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_genericExtensionMethodListMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMapDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMapDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary GGS_genericExtensionMethodListMapDictionary::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary result ;
  const GGS_genericExtensionMethodListMapDictionary * p = (const GGS_genericExtensionMethodListMapDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMapDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMapDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap & GGS_genericExtensionMethodListMap::operator = (const GGS_genericExtensionMethodListMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericExtensionMethodListMap GGS_genericExtensionMethodListMap::init (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_genericExtensionMethodListMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap::GGS_genericExtensionMethodListMap (const GGS_genericExtensionMethodListMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap GGS_genericExtensionMethodListMap::class_func_new (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMap::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMap ("genericExtensionMethodListMap",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_genericExtensionMethodListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_genericExtensionMethodListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_genericExtensionMethodListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMap GGS_genericExtensionMethodListMap::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMap result ;
  const GGS_genericExtensionMethodListMap * p = (const GGS_genericExtensionMethodListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_genericExtensionMethodListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("genericExtensionMethodListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@genericExtensionMethodListMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS_lstringlist extensionGetter_listForKey (const GGS_genericExtensionMethodListMap & inObject,
                                            const GGS_string & constinArgument_inKey,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_genericExtensionMethodListMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 58)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_genericExtensionMethodListMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 59)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Extension method '@semanticDeclarationAST buildExtensionListMaps'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticDeclarationAST::method_buildExtensionListMaps (GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                 GGS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_buildExtensionListMaps (cPtr_semanticDeclarationAST * inObject,
                                                 GGS_genericExtensionMethodListMap & io_ioAbstractExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionSetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioAbstractExtensionMethodListMapAST,
                                                 GGS_genericExtensionMethodListMap & io_ioExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionMethodListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioAbstractExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingExtensionGetterListMap,
                                                 GGS_genericExtensionMethodListMap & io_ioOverridingAbstractExtensionGetterListMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_buildExtensionListMaps (io_ioAbstractExtensionSetterListMap, io_ioExtensionSetterListMap, io_ioOverridingExtensionSetterListMap, io_ioOverridingAbstractExtensionSetterListMap, io_ioAbstractExtensionMethodListMapAST, io_ioExtensionMethodListMap, io_ioOverridingExtensionMethodListMap, io_ioOverridingAbstractExtensionMethodListMap, io_ioAbstractExtensionGetterListMap, io_ioExtensionGetterListMap, io_ioOverridingExtensionGetterListMap, io_ioOverridingAbstractExtensionGetterListMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary::GGS_descendantClassListMapDictionary (void) :
AC_GALGAS_root (),
mDictionary (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary::GGS_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inSource) :
AC_GALGAS_root (),
mDictionary (inSource.mDictionary),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary & GGS_descendantClassListMapDictionary::operator = (const GGS_descendantClassListMapDictionary & inSource) {
  mDictionary = inSource.mDictionary ;
  mIsValid = inSource.mIsValid ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::drop (void) {
  mDictionary.clear () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary GGS_descendantClassListMapDictionary::class_func_emptyDict (UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary GGS_descendantClassListMapDictionary::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString ("<dict @") ;
  ioString.appendCString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  if (isValid ()) {
    ioString.appendUnsigned (mDictionary.size ()) ;
    ioString.appendCString (" node(s)") ;
  }else{
    ioString.appendCString ("not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_descendantClassListMapDictionary::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mDictionary.size ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary::
readSubscript__3F_ (const class GGS_string & inKey,
                    Compiler * /* inCompiler */
                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator != mDictionary.end ()) { // Key exists
      result = iterator->second ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::plusPlusAssignOperation (const GGS_descendantClassListMapDictionary_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.mProperty_key.isValid ()) {
    mDictionary [inValue.mProperty_key] = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::addAssignOperation (const GGS_string & inKey,
                                                               const GGS_unifiedTypeMapEntryList & inArgument0,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_insert (const GGS_string inKey,
                                                          const GGS_unifiedTypeMapEntryList inArgument0,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element newElement (inKey, inArgument0) ;
  if (isValid () && inKey.isValid ()) {
    mDictionary [inKey] = newElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_descendantClassListMapDictionary::getter_hasKey (const GGS_string & inKey
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    result = GGS_bool (iterator != mDictionary.end ()) ; // Key exists
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::method_searchKey (GGS_string inKey,
                                                             GGS_unifiedTypeMapEntryList & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot search in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop out arguments
      outArgument0.drop () ;
    }else{
      outArgument0 = iterator->second.mProperty_typeList ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_removeKey (GGS_string inKey,
                                                             GGS_unifiedTypeMapEntryList & outArgument0,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      String message = "cannot remove in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    //--- Drop output arguments
      outArgument0.drop () ;
    }else{
    //--- Assign output arguments
      outArgument0 = iterator->second.mProperty_typeList ;
    //--- Remove entry
      mDictionary.erase (iterator) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList GGS_descendantClassListMapDictionary::getter_typeListForKey (const GGS_string & inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_unifiedTypeMapEntryList result ;
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
      const String message = "cannot get typeList ForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = iterator->second.mProperty_typeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary::setter_setTypeListForKey (GGS_unifiedTypeMapEntryList inPropertyValue,
                                                                     GGS_string inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    auto iterator = mDictionary.find (inKey) ;
    if (iterator == mDictionary.end ()) { // Not found
    //--- Build error message
     const String message = "cannot setTypeListForKey in dict: the key does not exist" ;
    //--- Emit error message
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      iterator->second.mProperty_typeList = inPropertyValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @descendantClassListMapDictionary
//--------------------------------------------------------------------------------------------------

UpEnumerator_descendantClassListMapDictionary::UpEnumerator_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_descendantClassListMapDictionary ()),
mIterator () {
  mIterator = mDictionary.begin () ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @descendantClassListMapDictionary
//--------------------------------------------------------------------------------------------------

DownEnumerator_descendantClassListMapDictionary::DownEnumerator_descendantClassListMapDictionary (const GGS_descendantClassListMapDictionary & inOperand) :
mDictionary (inOperand.mIsValid ? inOperand.mDictionary : MapFor_descendantClassListMapDictionary ()),
mIterator () {
  mIterator = mDictionary.rbegin () ;
}

//--------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------
//     @descendantClassListMapDictionary generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary ("descendantClassListMapDictionary",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_descendantClassListMapDictionary::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMapDictionary::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMapDictionary (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary GGS_descendantClassListMapDictionary::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary result ;
  const GGS_descendantClassListMapDictionary * p = (const GGS_descendantClassListMapDictionary *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMapDictionary *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMapDictionary", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (void) :
mProperty_dictionary () {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (const GGS_descendantClassListMap & inSource) :
mProperty_dictionary (inSource.mProperty_dictionary) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap & GGS_descendantClassListMap::operator = (const GGS_descendantClassListMap & inSource) {
  mProperty_dictionary = inSource.mProperty_dictionary ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_descendantClassListMap GGS_descendantClassListMap::init (Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::setInitializedProperties (Compiler * inCompiler) {
  mProperty_dictionary = GGS_descendantClassListMapDictionary::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap::GGS_descendantClassListMap (const GGS_descendantClassListMapDictionary & inOperand0) :
mProperty_dictionary (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap GGS_descendantClassListMap::class_func_new (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMap result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMap::isValid (void) const {
  return mProperty_dictionary.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::drop (void) {
  mProperty_dictionary.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMap::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMap:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_dictionary.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @descendantClassListMap generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_descendantClassListMap ("descendantClassListMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_descendantClassListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_descendantClassListMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_descendantClassListMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMap GGS_descendantClassListMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_descendantClassListMap result ;
  const GGS_descendantClassListMap * p = (const GGS_descendantClassListMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_descendantClassListMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("descendantClassListMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@descendantClassListMap listForKey'
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList extensionGetter_listForKey (const GGS_descendantClassListMap & inObject,
                                                        const GGS_string & constinArgument_inKey,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_descendantClassListMap temp_1 = inObject ;
    test_0 = temp_1.readProperty_dictionary ().getter_hasKey (constinArgument_inKey COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 127)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_descendantClassListMap temp_2 = inObject ;
      temp_2.readProperty_dictionary ().method_searchKey (constinArgument_inKey, result_result, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 128)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_unifiedTypeMapEntryList::init (inCompiler COMMA_HERE) ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings::cMapElement_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionMethodMapForGlobalCheckings::cMapElement_extensionMethodMapForGlobalCheckings (const GGS_lstring & inKey
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

GGS_extensionMethodMapForGlobalCheckings::GGS_extensionMethodMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings::GGS_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings & GGS_extensionMethodMapForGlobalCheckings::operator = (const GGS_extensionMethodMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ GGS_extensionMethodMapForGlobalCheckings
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionMethodMapForGlobalCheckings * p = (cMapElement_extensionMethodMapForGlobalCheckings *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionMethodMapForGlobalCheckings_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::class_func_mapWithMapToOverride (const GGS_extensionMethodMapForGlobalCheckings & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings::setter_insertKey (GGS_lstring inKey,
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

cMapElement_extensionMethodMapForGlobalCheckings * GGS_extensionMethodMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionMethodMapForGlobalCheckings * result = (cMapElement_extensionMethodMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionMethodMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionMethodMapForGlobalCheckings::DownEnumerator_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element DownEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return GGS_extensionMethodMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionMethodMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionMethodMapForGlobalCheckings::UpEnumerator_extensionMethodMapForGlobalCheckings (const GGS_extensionMethodMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element UpEnumerator_extensionMethodMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionMethodMapForGlobalCheckings * p = (const cMapElement_extensionMethodMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionMethodMapForGlobalCheckings) ;
  return GGS_extensionMethodMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionMethodMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForGlobalCheckings generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ("extensionMethodMapForGlobalCheckings",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionMethodMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionMethodMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionMethodMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings GGS_extensionMethodMapForGlobalCheckings::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings result ;
  const GGS_extensionMethodMapForGlobalCheckings * p = (const GGS_extensionMethodMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionMethodMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionMethodMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings::cMapElement_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionSetterMapForGlobalCheckings::cMapElement_extensionSetterMapForGlobalCheckings (const GGS_lstring & inKey
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

GGS_extensionSetterMapForGlobalCheckings::GGS_extensionSetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings::GGS_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings & GGS_extensionSetterMapForGlobalCheckings::operator = (const GGS_extensionSetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings GGS_extensionSetterMapForGlobalCheckings::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings GGS_extensionSetterMapForGlobalCheckings::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionSetterMapForGlobalCheckings
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionSetterMapForGlobalCheckings * p = (cMapElement_extensionSetterMapForGlobalCheckings *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionSetterMapForGlobalCheckings_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings GGS_extensionSetterMapForGlobalCheckings::class_func_mapWithMapToOverride (const GGS_extensionSetterMapForGlobalCheckings & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings GGS_extensionSetterMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings::setter_insertKey (GGS_lstring inKey,
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

cMapElement_extensionSetterMapForGlobalCheckings * GGS_extensionSetterMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionSetterMapForGlobalCheckings * result = (cMapElement_extensionSetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionSetterMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionSetterMapForGlobalCheckings::DownEnumerator_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element DownEnumerator_extensionSetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return GGS_extensionSetterMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionSetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionSetterMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionSetterMapForGlobalCheckings::UpEnumerator_extensionSetterMapForGlobalCheckings (const GGS_extensionSetterMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element UpEnumerator_extensionSetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionSetterMapForGlobalCheckings * p = (const cMapElement_extensionSetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionSetterMapForGlobalCheckings) ;
  return GGS_extensionSetterMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionSetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionSetterMapForGlobalCheckings generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ("extensionSetterMapForGlobalCheckings",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionSetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionSetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionSetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings GGS_extensionSetterMapForGlobalCheckings::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings result ;
  const GGS_extensionSetterMapForGlobalCheckings * p = (const GGS_extensionSetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionSetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionSetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings::cMapElement_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inValue
                                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inValue.mProperty_lkey COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cMapElement_extensionGetterMapForGlobalCheckings::cMapElement_extensionGetterMapForGlobalCheckings (const GGS_lstring & inKey
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

GGS_extensionGetterMapForGlobalCheckings::GGS_extensionGetterMapForGlobalCheckings (void) :
AC_GALGAS_map () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings::GGS_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inSource) :
AC_GALGAS_map (inSource) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings & GGS_extensionGetterMapForGlobalCheckings::operator = (const GGS_extensionGetterMapForGlobalCheckings & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings GGS_extensionGetterMapForGlobalCheckings::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings GGS_extensionGetterMapForGlobalCheckings::class_func_emptyMap (LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionGetterMapForGlobalCheckings
::readSubscript__3F_ (const class GGS_string & inKey,
                            Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    cMapElement_extensionGetterMapForGlobalCheckings * p = (cMapElement_extensionGetterMapForGlobalCheckings *) searchForKey (inKey) ;
    if (nullptr == p) {
      result = GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::init_nil () ;
    }else{
      GGS_extensionGetterMapForGlobalCheckings_2E_element element ;
      element.mProperty_lkey = p->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings GGS_extensionGetterMapForGlobalCheckings::class_func_mapWithMapToOverride (const GGS_extensionGetterMapForGlobalCheckings & inMapToOverride
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings GGS_extensionGetterMapForGlobalCheckings::getter_overriddenMap (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterMapForGlobalCheckings result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings::setter_insertKey (GGS_lstring inKey,
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

cMapElement_extensionGetterMapForGlobalCheckings * GGS_extensionGetterMapForGlobalCheckings::readWriteAccessForWithInstruction (Compiler * inCompiler,
                                                                                                                                const GGS_string & inKey
                                                                                                                                COMMA_LOCATION_ARGS) {
  cMapElement_extensionGetterMapForGlobalCheckings * result = (cMapElement_extensionGetterMapForGlobalCheckings *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @extensionGetterMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

DownEnumerator_extensionGetterMapForGlobalCheckings::DownEnumerator_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element DownEnumerator_extensionGetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return GGS_extensionGetterMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_extensionGetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @extensionGetterMapForGlobalCheckings
//--------------------------------------------------------------------------------------------------

UpEnumerator_extensionGetterMapForGlobalCheckings::UpEnumerator_extensionGetterMapForGlobalCheckings (const GGS_extensionGetterMapForGlobalCheckings & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element UpEnumerator_extensionGetterMapForGlobalCheckings::current (LOCATION_ARGS) const {
  const cMapElement_extensionGetterMapForGlobalCheckings * p = (const cMapElement_extensionGetterMapForGlobalCheckings *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_extensionGetterMapForGlobalCheckings) ;
  return GGS_extensionGetterMapForGlobalCheckings_2E_element (p->mProperty_lkey) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_extensionGetterMapForGlobalCheckings::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForGlobalCheckings generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ("extensionGetterMapForGlobalCheckings",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_extensionGetterMapForGlobalCheckings::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_extensionGetterMapForGlobalCheckings::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_extensionGetterMapForGlobalCheckings (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings GGS_extensionGetterMapForGlobalCheckings::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings result ;
  const GGS_extensionGetterMapForGlobalCheckings * p = (const GGS_extensionGetterMapForGlobalCheckings *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_extensionGetterMapForGlobalCheckings *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("extensionGetterMapForGlobalCheckings", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@galgas_33_QualifiedFeatureList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_galgas_33_QualifiedFeatureList : public cCollectionElement {
  public: GGS_galgas_33_QualifiedFeatureList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_lstring & in_mFeatureName,
                                                             const GGS_lstring & in_mFeatureValue
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_lstring & in_mFeatureName,
                                                                                                      const GGS_lstring & in_mFeatureValue
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFeatureName, in_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_galgas_33_QualifiedFeatureList::cCollectionElement_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFeatureName, inElement.mProperty_mFeatureValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_galgas_33_QualifiedFeatureList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_galgas_33_QualifiedFeatureList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_galgas_33_QualifiedFeatureList (mObject.mProperty_mFeatureName, mObject.mProperty_mFeatureValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_galgas_33_QualifiedFeatureList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFeatureName" ":") ;
  mObject.mProperty_mFeatureName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFeatureValue" ":") ;
  mObject.mProperty_mFeatureValue.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList::GGS_galgas_33_QualifiedFeatureList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList::GGS_galgas_33_QualifiedFeatureList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::plusPlusAssignOperation (const GGS_galgas_33_QualifiedFeatureList_2E_element & inValue
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                 const GGS_lstring & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_galgas_33_QualifiedFeatureList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mFeatureName,
                                                                    const GGS_lstring & in_mFeatureValue
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = nullptr ;
  macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (in_mFeatureName,
                                                                    in_mFeatureValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::addAssignOperation (const GGS_lstring & inOperand0,
                                                             const GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_append (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_galgas_33_QualifiedFeatureList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
      outOperand0 = p->mObject.mProperty_mFeatureName ;
      outOperand1 = p->mObject.mProperty_mFeatureValue ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_popFirst (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_popLast (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::method_first (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::method_last (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    outOperand0 = p->mObject.mProperty_mFeatureName ;
    outOperand1 = p->mObject.mProperty_mFeatureValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::add_operation (const GGS_galgas_33_QualifiedFeatureList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result = GGS_galgas_33_QualifiedFeatureList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result = GGS_galgas_33_QualifiedFeatureList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_galgas_33_QualifiedFeatureList result = GGS_galgas_33_QualifiedFeatureList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::plusAssignOperation (const GGS_galgas_33_QualifiedFeatureList inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_setMFeatureNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_QualifiedFeatureList::getter_mFeatureNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_galgas_33_QualifiedFeatureList::setter_setMFeatureValueAtIndex (GGS_lstring inOperand,
                                                                         GGS_uint inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFeatureValue = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_QualifiedFeatureList::getter_mFeatureValueAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_galgas_33_QualifiedFeatureList * p = (cCollectionElement_galgas_33_QualifiedFeatureList *) attributes.ptr () ;
  GGS_lstring result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
    result = p->mObject.mProperty_mFeatureValue ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @galgas_33_QualifiedFeatureList
//--------------------------------------------------------------------------------------------------

DownEnumerator_galgas_33_QualifiedFeatureList::DownEnumerator_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element DownEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @galgas_33_QualifiedFeatureList
//--------------------------------------------------------------------------------------------------

UpEnumerator_galgas_33_QualifiedFeatureList::UpEnumerator_galgas_33_QualifiedFeatureList (const GGS_galgas_33_QualifiedFeatureList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList_2E_element UpEnumerator_galgas_33_QualifiedFeatureList::current (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureName (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_galgas_33_QualifiedFeatureList::current_mFeatureValue (LOCATION_ARGS) const {
  const cCollectionElement_galgas_33_QualifiedFeatureList * p = (const cCollectionElement_galgas_33_QualifiedFeatureList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_galgas_33_QualifiedFeatureList) ;
  return p->mObject.mProperty_mFeatureValue ;
}




//--------------------------------------------------------------------------------------------------
//     @galgas3QualifiedFeatureList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ("galgas3QualifiedFeatureList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_galgas_33_QualifiedFeatureList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_QualifiedFeatureList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_QualifiedFeatureList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_QualifiedFeatureList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_QualifiedFeatureList GGS_galgas_33_QualifiedFeatureList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_galgas_33_QualifiedFeatureList result ;
  const GGS_galgas_33_QualifiedFeatureList * p = (const GGS_galgas_33_QualifiedFeatureList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_QualifiedFeatureList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3QualifiedFeatureList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_ (GGS_lbigint & outArgument_majorVersion,
                                                                                          GGS_lbigint & outArgument_minorVersion,
                                                                                          GGS_lbigint & outArgument_revisionVersion,
                                                                                          GGS_lstring & outArgument_targetName,
                                                                                          Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_majorVersion.drop () ; // Release 'out' argument
  outArgument_minorVersion.drop () ; // Release 'out' argument
  outArgument_revisionVersion.drop () ; // Release 'out' argument
  outArgument_targetName.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  outArgument_majorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  outArgument_minorVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  outArgument_revisionVersion = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  outArgument_targetName = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_header_i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_project COMMA_SOURCE_FILE ("galgasProject.galgas", 63)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasProject.galgas", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 65)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 66)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 67)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 68)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("galgasProject.galgas", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasProject.galgas", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasProject.galgas", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_ (GGS_galgas_33_ProjectComponentAST & outArgument_outProjectComponentAST,
                                                                                                                Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outProjectComponentAST.drop () ; // Release 'out' argument
  GGS_lbigint var_majorVersion_3093 ;
  GGS_lbigint var_minorVersion_3126 ;
  GGS_lbigint var_revisionVersion_3159 ;
  GGS_lstring var_targetName_3195 ;
  nt_project_5F_header_ (var_majorVersion_3093, var_minorVersion_3126, var_revisionVersion_3159, var_targetName_3195, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 83)) ;
  GGS_lstringlist var_projectSourceList_3235 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_lstringlist var_generateFeatureList_3280 = GGS_lstringlist::init (inCompiler COMMA_HERE) ;
  GGS_galgas_33_QualifiedFeatureList var_qualifiedFeatureList_3343 = GGS_galgas_33_QualifiedFeatureList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 89)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("quietOutputByDefault").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 90))  COMMA_SOURCE_FILE ("galgasProject.galgas", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 92)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("MacOS").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 93))  COMMA_SOURCE_FILE ("galgasProject.galgas", 93)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 95)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("MacSwiftApp").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 96))  COMMA_SOURCE_FILE ("galgasProject.galgas", 96)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 98)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("makefile-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 99))  COMMA_SOURCE_FILE ("galgasProject.galgas", 99)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 101)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("makefile-unix").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 102))  COMMA_SOURCE_FILE ("galgasProject.galgas", 102)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 104)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("makefile-x86linux32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 105))  COMMA_SOURCE_FILE ("galgasProject.galgas", 105)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("makefile-x86linux64-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 108))  COMMA_SOURCE_FILE ("galgasProject.galgas", 108)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 110)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("makefile-win32-on-macosx").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 111))  COMMA_SOURCE_FILE ("galgasProject.galgas", 111)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("codeblocks-windows").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 114))  COMMA_SOURCE_FILE ("galgasProject.galgas", 114)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("codeblocks-linux32").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 117))  COMMA_SOURCE_FILE ("galgasProject.galgas", 117)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 119)) ;
      var_generateFeatureList_3280.addAssignOperation (GGS_string ("codeblocks-linux64").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 120))  COMMA_SOURCE_FILE ("galgasProject.galgas", 120)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      GGS_lstring var_featureValue_4523 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("applicationBundleBase").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 125)), var_featureValue_4523  COMMA_SOURCE_FILE ("galgasProject.galgas", 125)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      GGS_lstring var_featureValue_4684 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("libpmAtPath").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 130)), var_featureValue_4684  COMMA_SOURCE_FILE ("galgasProject.galgas", 130)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      GGS_lstring var_featureValue_4835 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("tool-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 135)), var_featureValue_4835  COMMA_SOURCE_FILE ("galgasProject.galgas", 135)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
      GGS_lstring var_featureValue_4990 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 139)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("MacOSDeployment").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 140)), var_featureValue_4990  COMMA_SOURCE_FILE ("galgasProject.galgas", 140)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 143)) ;
      GGS_lstring var_featureValue_5145 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("macCodeSign").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 145)), var_featureValue_5145  COMMA_SOURCE_FILE ("galgasProject.galgas", 145)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 148)) ;
      GGS_lstring var_featureValue_5295 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 149)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("app-source").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 150)), var_featureValue_5295  COMMA_SOURCE_FILE ("galgasProject.galgas", 150)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 153)) ;
      GGS_lstring var_featureValue_5442 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 154)) ;
      var_qualifiedFeatureList_3343.addAssignOperation (GGS_string ("app-link").getter_here (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 155)), var_featureValue_5442  COMMA_SOURCE_FILE ("galgasProject.galgas", 155)) ;
    } break ;
    case 20: {
      GGS_lstring var_filePath_5559 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 157)) ;
      var_projectSourceList_3235.addAssignOperation (var_filePath_5559  COMMA_SOURCE_FILE ("galgasProject.galgas", 158)) ;
    } break ;
    case 21: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 160)) ;
      nt_folderDirectory_ (GGS_string::makeEmptyString (), var_projectSourceList_3235, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 163)) ;
  outArgument_outProjectComponentAST = GGS_galgas_33_ProjectComponentAST::init_21__21__21__21__21__21__21__21_ (var_projectSourceList_3235, var_majorVersion_3093, var_minorVersion_3126, var_revisionVersion_3159, var_generateFeatureList_3280, var_qualifiedFeatureList_3343, var_targetName_3195, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 172)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 92)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 95)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 98)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 101)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 104)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 110)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 119)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 139)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 149)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 153)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 154)) ;
    } break ;
    case 20: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 157)) ;
    } break ;
    case 21: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 160)) ;
      nt_folderDirectory_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 163)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_project_5F_component_5F_start_5F_symbol_i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_project_5F_header_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 83)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_quietOutputByDefault COMMA_SOURCE_FILE ("galgasProject.galgas", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOS COMMA_SOURCE_FILE ("galgasProject.galgas", 92)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacSwiftApp COMMA_SOURCE_FILE ("galgasProject.galgas", 95)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 98)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_unix COMMA_SOURCE_FILE ("galgasProject.galgas", 101)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 104)) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 107)) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_makefile_2D_win_33__32__2D_on_2D_macosx COMMA_SOURCE_FILE ("galgasProject.galgas", 110)) ;
    } break ;
    case 10: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_windows COMMA_SOURCE_FILE ("galgasProject.galgas", 113)) ;
    } break ;
    case 11: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_33__32_ COMMA_SOURCE_FILE ("galgasProject.galgas", 116)) ;
    } break ;
    case 12: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_codeblocks_2D_linux_36__34_ COMMA_SOURCE_FILE ("galgasProject.galgas", 119)) ;
    } break ;
    case 13: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_applicationBundleBase COMMA_SOURCE_FILE ("galgasProject.galgas", 122)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 123)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 124)) ;
    } break ;
    case 14: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_libpmAtPath COMMA_SOURCE_FILE ("galgasProject.galgas", 127)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 128)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 129)) ;
    } break ;
    case 15: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_tool_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 133)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 134)) ;
    } break ;
    case 16: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_MacOSDeployment COMMA_SOURCE_FILE ("galgasProject.galgas", 137)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 139)) ;
    } break ;
    case 17: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_macCodeSign COMMA_SOURCE_FILE ("galgasProject.galgas", 142)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 143)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 144)) ;
    } break ;
    case 18: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_source COMMA_SOURCE_FILE ("galgasProject.galgas", 147)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 148)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 149)) ;
    } break ;
    case 19: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__25_app_2D_link COMMA_SOURCE_FILE ("galgasProject.galgas", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("galgasProject.galgas", 153)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 154)) ;
    } break ;
    case 20: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 157)) ;
    } break ;
    case 21: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 160)) ;
      nt_folderDirectory_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 163)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_folderDirectory_i2_ (const GGS_string constinArgument_inCurrentRelativePath,
                                                                                        GGS_lstringlist & ioArgument_ioProjectSourceList,
                                                                                        Lexique_galgasScanner_33_ * inCompiler) {
  GGS_lstring var_relativeDirectory_6156 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 179)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, var_relativeDirectory_6156.readProperty_string ().getter_count (SOURCE_FILE ("galgasProject.galgas", 180)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_relativeDirectory_6156.readProperty_string ().getter_lastCharacter (inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 180)).objectCompare (GGS_char (TO_UNICODE (47)))) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_relativeDirectory_6156.mProperty_string.plusAssignOperation(GGS_string ("/"), inCompiler  COMMA_SOURCE_FILE ("galgasProject.galgas", 181)) ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 183)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 186)) ;
      nt_folderDirectory_ (constinArgument_inCurrentRelativePath.add_operation (var_relativeDirectory_6156.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 187)), ioArgument_ioProjectSourceList, inCompiler) ;
    } break ;
    case 3: {
      GGS_lstring var_relativePath_6489 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 189)) ;
      ioArgument_ioProjectSourceList.addAssignOperation (GGS_lstring::init_21__21_ (constinArgument_inCurrentRelativePath.add_operation (var_relativeDirectory_6156.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 191)).add_operation (var_relativePath_6489.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("galgasProject.galgas", 191)), var_relativePath_6489.readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasProject.galgas", 190)) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 195)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_folderDirectory_i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 183)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 186)) ;
      nt_folderDirectory_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 189)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 195)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ProjectSyntax::rule_galgas_33_ProjectSyntax_folderDirectory_i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 179)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("galgasProject.galgas", 183)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ProjectSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_in COMMA_SOURCE_FILE ("galgasProject.galgas", 186)) ;
      nt_folderDirectory_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("galgasProject.galgas", 189)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("galgasProject.galgas", 195)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControlAST checkCompatibilityWithLet'
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
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'protected(set)' and 'let' are incompatible"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 155)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray2  COMMA_SOURCE_FILE ("accessControl.galgas", 158)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_5217__0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_5217__0) ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inLocation, GGS_string ("'private(set)' and 'let' are incompatible"), fixItArray3  COMMA_SOURCE_FILE ("accessControl.galgas", 161)) ;
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//  Extension Getter '@AccessControlAST accessControl'
//--------------------------------------------------------------------------------------------------

GGS_AccessControl extensionGetter_accessControl (const GGS_AccessControlAST & inObject,
                                                 const GGS_unifiedTypeMapEntry & constinArgument_inDeclaringType,
                                                 Compiler *
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result_result ; // Returned variable
  const GGS_AccessControlAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControlAST::Enumeration::invalid:
    break ;
  case GGS_AccessControlAST::Enumeration::enum_publicAccess:
    {
      result_result = GGS_AccessControl::class_func_publicAccess (SOURCE_FILE ("accessControl.galgas", 170)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 172)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_protectedSetAccess:
    {
      result_result = GGS_AccessControl::class_func_protectedSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 174)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateAccess:
    {
      result_result = GGS_AccessControl::class_func_privateAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 176)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_privateSetAccess:
    {
      result_result = GGS_AccessControl::class_func_privateSetAccess (constinArgument_inDeclaringType  COMMA_SOURCE_FILE ("accessControl.galgas", 178)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_5982_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_5982_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateAccess (extractedValue_5982_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas", 180)) ;
    }
    break ;
  case GGS_AccessControlAST::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_6114_declarationLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_6114_declarationLocation_0) ;
      result_result = GGS_AccessControl::class_func_fileprivateSetAccess (extractedValue_6114_declarationLocation_0  COMMA_SOURCE_FILE ("accessControl.galgas", 182)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkSetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkSetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_7134_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_7134_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 210)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7313_t_0 ;
          GGS_selfMutability extractedValue_7315__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7313_t_0, extractedValue_7315__1) ;
          GGS_unifiedTypeMapEntry var_currentType_7332 = extractedValue_7313_t_0 ;
          GGS_bool var_ok_7360 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7134_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 213)).objectCompare (extensionGetter_typeName (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 213)))) ;
          bool loop_7424 = true ;
          while (loop_7424) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_7360.operator_not (SOURCE_FILE ("accessControl.galgas", 214)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 214)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 214)).operator_not (SOURCE_FILE ("accessControl.galgas", 214)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_7424 = test_2 == GalgasBool::boolTrue ;
              if (loop_7424) {
                var_currentType_7332 = extensionGetter_definition (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 215)).readProperty_superType () ;
                var_ok_7360 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7134_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 216)).objectCompare (extensionGetter_typeName (var_currentType_7332, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 216)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_7360.operator_not (SOURCE_FILE ("accessControl.galgas", 218)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 219)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_7800_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedSetAccess (extractedValue_7800_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas", 225)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_7987_t_0 ;
          GGS_selfMutability extractedValue_7989__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_7987_t_0, extractedValue_7989__1) ;
          GGS_unifiedTypeMapEntry var_currentType_8006 = extractedValue_7987_t_0 ;
          GGS_bool var_ok_8034 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7800_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 228)).objectCompare (extensionGetter_typeName (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 228)))) ;
          bool loop_8098 = true ;
          while (loop_8098) {
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              GGS_bool test_8 = var_ok_8034.operator_not (SOURCE_FILE ("accessControl.galgas", 229)) ;
              if (GalgasBool::boolTrue == test_8.boolEnum ()) {
                test_8 = extensionGetter_definition (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 229)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 229)).operator_not (SOURCE_FILE ("accessControl.galgas", 229)) ;
              }
              test_7 = test_8.boolEnum () ;
              loop_8098 = test_7 == GalgasBool::boolTrue ;
              if (loop_8098) {
                var_currentType_8006 = extensionGetter_definition (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 230)).readProperty_superType () ;
                var_ok_8034 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_7800_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 231)).objectCompare (extensionGetter_typeName (var_currentType_8006, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 231)))) ;
              }
            }
          }
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_ok_8034.operator_not (SOURCE_FILE ("accessControl.galgas", 233)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected(set)' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas", 234)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_8476_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_8476_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray11  COMMA_SOURCE_FILE ("accessControl.galgas", 240)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_8653_currentType_0 ;
          GGS_selfMutability extractedValue_8665__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_8653_currentType_0, extractedValue_8665__1) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_8476_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 242)).objectCompare (extensionGetter_typeName (extractedValue_8653_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 242)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              TC_Array <FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray13  COMMA_SOURCE_FILE ("accessControl.galgas", 243)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_8873_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateSetAccess (extractedValue_8873_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticWarning (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray14  COMMA_SOURCE_FILE ("accessControl.galgas", 249)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_9058_currentType_0 ;
          GGS_selfMutability extractedValue_9070__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_9058_currentType_0, extractedValue_9070__1) ;
          GalgasBool test_15 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_15) {
            test_15 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_8873_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 251)).objectCompare (extensionGetter_typeName (extractedValue_9058_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 251)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_15) {
              TC_Array <FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private(set)' qualifier)"), fixItArray16  COMMA_SOURCE_FILE ("accessControl.galgas", 252)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_9284_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_9284_declaringLocation_0) ;
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_9284_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 256)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 256)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray18  COMMA_SOURCE_FILE ("accessControl.galgas", 257)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    {
      GGS_location extractedValue_9512_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateSetAccess (extractedValue_9512_declaringLocation_0) ;
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_9512_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 260)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 260)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate(set)' qualifier)"), fixItArray20  COMMA_SOURCE_FILE ("accessControl.galgas", 261)) ;
        }
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension method '@AccessControl checkGetAccess'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkGetAccess (const GGS_AccessControl inObject,
                                     const GGS_selfAvailability constinArgument_inOptionalCurrentType,
                                     const GGS_location constinArgument_inErrorLocation,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_AccessControl temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_AccessControl::Enumeration::invalid:
    break ;
  case GGS_AccessControl::Enumeration::enum_publicAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_privateSetAccess:
    break ;
  case GGS_AccessControl::Enumeration::enum_protectedAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_10087_declaringType_0 ;
      temp_0.getAssociatedValuesFor_protectedAccess (extractedValue_10087_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray1  COMMA_SOURCE_FILE ("accessControl.galgas", 277)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_10264_t_0 ;
          GGS_selfMutability extractedValue_10266__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_10264_t_0, extractedValue_10266__1) ;
          GGS_unifiedTypeMapEntry var_currentType_10283 = extractedValue_10264_t_0 ;
          GGS_bool var_ok_10311 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_10087_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 280)).objectCompare (extensionGetter_typeName (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 280)))) ;
          bool loop_10375 = true ;
          while (loop_10375) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_bool test_3 = var_ok_10311.operator_not (SOURCE_FILE ("accessControl.galgas", 281)) ;
              if (GalgasBool::boolTrue == test_3.boolEnum ()) {
                test_3 = extensionGetter_definition (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 281)).readProperty_superType ().getter_isNull (SOURCE_FILE ("accessControl.galgas", 281)).operator_not (SOURCE_FILE ("accessControl.galgas", 281)) ;
              }
              test_2 = test_3.boolEnum () ;
              loop_10375 = test_2 == GalgasBool::boolTrue ;
              if (loop_10375) {
                var_currentType_10283 = extensionGetter_definition (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 282)).readProperty_superType () ;
                var_ok_10311 = GGS_bool (ComparisonKind::equal, extensionGetter_typeName (extractedValue_10087_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 283)).objectCompare (extensionGetter_typeName (var_currentType_10283, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 283)))) ;
              }
            }
          }
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            test_4 = var_ok_10311.operator_not (SOURCE_FILE ("accessControl.galgas", 285)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              TC_Array <FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'protected' qualifier)"), fixItArray5  COMMA_SOURCE_FILE ("accessControl.galgas", 286)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_privateAccess:
    {
      GGS_unifiedTypeMapEntry extractedValue_10746_declaringType_0 ;
      temp_0.getAssociatedValuesFor_privateAccess (extractedValue_10746_declaringType_0) ;
      switch (constinArgument_inOptionalCurrentType.enumValue ()) {
      case GGS_selfAvailability::Enumeration::invalid:
        break ;
      case GGS_selfAvailability::Enumeration::enum_none:
        {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray6  COMMA_SOURCE_FILE ("accessControl.galgas", 292)) ;
        }
        break ;
      case GGS_selfAvailability::Enumeration::enum_available:
        {
          GGS_unifiedTypeMapEntry extractedValue_10923_currentType_0 ;
          GGS_selfMutability extractedValue_10935__1 ;
          constinArgument_inOptionalCurrentType.getAssociatedValuesFor_available (extractedValue_10923_currentType_0, extractedValue_10935__1) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, extensionGetter_typeName (extractedValue_10746_declaringType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 294)).objectCompare (extensionGetter_typeName (extractedValue_10923_currentType_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 294)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'private' qualifier)"), fixItArray8  COMMA_SOURCE_FILE ("accessControl.galgas", 295)) ;
            }
          }
        }
        break ;
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateAccess:
    {
      GGS_location extractedValue_11144_declaringLocation_0 ;
      temp_0.getAssociatedValuesFor_fileprivateAccess (extractedValue_11144_declaringLocation_0) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, extensionGetter_sourceFile (extractedValue_11144_declaringLocation_0, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 299)).objectCompare (extensionGetter_sourceFile (constinArgument_inErrorLocation, inCompiler COMMA_SOURCE_FILE ("accessControl.galgas", 299)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("inaccessible property (due to 'fileprivate' qualifier)"), fixItArray10  COMMA_SOURCE_FILE ("accessControl.galgas", 300)) ;
        }
      }
    }
    break ;
  case GGS_AccessControl::Enumeration::enum_fileprivateSetAccess:
    break ;
  }
}




//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 36)) ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 36)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 38)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i0_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 36)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas", 38)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                              GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                              Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3632 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 81)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      GGS_semanticExpressionAST var_leftOperand_3687 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3755 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3755, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3632, var_leftOperand_3687, var_rightOperand_3755, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3881 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 87)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      GGS_semanticExpressionAST var_leftOperand_3936 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4004 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4004, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3881, var_leftOperand_3936, var_rightOperand_4004, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_4131 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      GGS_semanticExpressionAST var_leftOperand_4185 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4253 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4253, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_4131, var_leftOperand_4185, var_rightOperand_4253, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4373 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 99)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 100)) ;
      GGS_semanticExpressionAST var_leftOperand_4428 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4496 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4496, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4373, var_leftOperand_4428, var_rightOperand_4496, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4626 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 106)) ;
      GGS_semanticExpressionAST var_leftOperand_4680 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4748 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4748, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_4626, var_leftOperand_4680, var_rightOperand_4748, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_4868 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 112)) ;
      GGS_semanticExpressionAST var_leftOperand_4923 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4991 ;
      nt_term_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4991, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4868, var_leftOperand_4923, var_rightOperand_4991, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_term_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 100)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 106)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 112)) ;
      nt_term_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_simple_5F_expression_5F_ggs_33__i1_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_term_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas", 82)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas", 88)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 94)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas", 100)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 106)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas", 112)) ;
      nt_term_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_2391 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 49)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 50)) ;
      GGS_semanticExpressionAST var_leftOperand_2445 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2547 ;
      nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2547, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_2391, var_leftOperand_2445, var_rightOperand_2547, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2667 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 56)) ;
      GGS_semanticExpressionAST var_leftOperand_2722 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2824 ;
      nt_relation_5F_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2824, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_2667, var_leftOperand_2722, var_rightOperand_2824, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 50)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 56)) ;
      nt_relation_5F_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_and_5F_ggs_33__i2_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_1 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 50)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas", 56)) ;
      nt_relation_5F_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_2649 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 59)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 60)) ;
    GGS_dynamicTypeComparisonKind var_kind_2738 ;
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 63)) ;
      var_kind_2738 = GGS_dynamicTypeComparisonKind::class_func_equal (SOURCE_FILE ("expression-is-as.galgas", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
      var_kind_2738 = GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas", 67)) ;
    } break ;
    case 3: {
      var_kind_2738 = GGS_dynamicTypeComparisonKind::class_func_inherited (SOURCE_FILE ("expression-is-as.galgas", 69)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 71)) ;
      var_kind_2738 = GGS_dynamicTypeComparisonKind::class_func_strictlyInherited (SOURCE_FILE ("expression-is-as.galgas", 72)) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_typeName_2958 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 74)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_2649, var_kind_2738, var_typeName_2958, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_3199 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas", 83)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 84)) ;
    GGS_lstring var_typeName_3332 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 86)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3199, var_typeName_3332, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__parse (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 60)) ;
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 84)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 86)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_ggs_33__i3_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_or_5F_ggs_33__indexing (inCompiler) ;
  switch (select_galgas_33_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas", 60)) ;
    switch (select_galgas_33_ExpressionSyntax_3 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 63)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 66)) ;
    } break ;
    case 3: {
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-is-as.galgas", 71)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 74)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas", 84)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas", 86)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                            GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                            Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_2437 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 55)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      GGS_semanticExpressionAST var_leftOperand_2492 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2573 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2573, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2437, var_leftOperand_2492, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas", 59)), var_rightOperand_2573, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_2708 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 61)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      GGS_semanticExpressionAST var_leftOperand_2763 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_2844 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_2844, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2708, var_leftOperand_2763, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas", 65)), var_rightOperand_2844, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_2982 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 67)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      GGS_semanticExpressionAST var_leftOperand_3037 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3118 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3118, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_2982, var_leftOperand_3037, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas", 71)), var_rightOperand_3118, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_3260 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3315 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3396 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3396, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3260, var_leftOperand_3315, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas", 77)), var_rightOperand_3396, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_3540 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3594 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3675 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3675, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3540, var_leftOperand_3594, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas", 83)), var_rightOperand_3675, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_3816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3870 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3951 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3951, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_3816, var_leftOperand_3870, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas", 89)), var_rightOperand_3951, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_4090 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4146 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4227 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4227, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_4090, var_leftOperand_4146, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas", 95)), var_rightOperand_4227, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_4369 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4425 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4506 ;
      nt_simple_5F_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4506, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_4369, var_leftOperand_4425, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas", 101)), var_rightOperand_4506, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 86)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 92)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 98)) ;
      nt_simple_5F_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_relation_5F_factor_5F_ggs_33__i4_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_4 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 56)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 62)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 68)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 74)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 80)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 86)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 92)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas", 98)) ;
      nt_simple_5F_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_1599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 29)) ;
  GGS_actualOutputArgumentList var_expressionList_1676 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
    GGS_lstring var_selector_1718 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 32)) ;
    GGS_semanticExpressionAST var_expression_1808 ;
    nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1808, inCompiler) ;
    var_expressionList_1676.addAssignOperation (var_selector_1718, var_expression_1808, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 34))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 34)) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
      case 2: {
        GGS_lstring var_selector_1930 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 38)) ;
        GGS_semanticExpressionAST var_expression_2010 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2010, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_1930, var_expression_2010, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 40))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 40)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 42)) ;
        GGS_lstring var_selector_2112 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 43)) ;
        GGS_semanticExpressionAST var_expression_2204 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2204, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2112, var_expression_2204, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 45))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 45)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_ExpressionSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 50)) ;
      switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_2358 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 52)) ;
        GGS_semanticExpressionAST var_expression_2438 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2438, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2358, var_expression_2438, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 54))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 56)) ;
        GGS_lstring var_selector_2537 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 57)) ;
        GGS_semanticExpressionAST var_expression_2629 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2629, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2537, var_expression_2629, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 59))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 59)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_2716 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-function-call.galgas", 61)) ;
        GGS_semanticExpressionAST var_expression_2808 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2808, inCompiler) ;
        var_expressionList_1676.addAssignOperation (var_selector_2716, var_expression_2808, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-function-call.galgas", 63))  COMMA_SOURCE_FILE ("expression-function-call.galgas", 63)) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_1599, var_expressionList_1676, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 29)) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
    nt_expression_5F_ggs_33__parse (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 38)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 42)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_ExpressionSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 50)) ;
      switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 52)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 56)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 67)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i5_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 29)) ;
  switch (select_galgas_33_ExpressionSyntax_5 (inCompiler)) {
  case 1: {
    nt_expression_5F_ggs_33__indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_6 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 38)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 42)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_galgas_33_ExpressionSyntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 50)) ;
      switch (select_galgas_33_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 52)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 56)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 28)) ;
  GGS_location var_startLocation_1628 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 30)) ;
  GGS_semanticExpressionAST var_receiverExpression_1726 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_receiverExpression_1726, inCompiler) ;
  GGS_lstring var_getterName_1800 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 33)) ;
  GGS_actualOutputArgumentList var_expressionList_1919 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1919, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 36)) ;
  GGS_location var_endLocation_1950 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas", 37)) ;
  outArgument_outExpression = GGS_getterCallExpressionAST::init_21_errorOnGetterCallInsteadOfPropertyRead_21__21__21__21_ (GGS_bool (gOption_galgas_5F_cli_5F_options_errorPropertyGetterCall.readProperty_value ()), var_receiverExpression_1726, var_getterName_1800, var_expressionList_1919, var_startLocation_1628.getter_union (var_endLocation_1950, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas", 43)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 28)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 33)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i6_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 28)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-getter-call.galgas", 33)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-getter-call.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 30)) ;
  GGS_actualOutputArgumentList var_expressionList_1738 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_1738, inCompiler) ;
  GGS_location var_endOfExpression_1761 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 33)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 35)), var_expressionList_1738, var_endOfExpression_1761, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 30)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 33)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i7_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 30)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 33)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 45)) ;
  GGS_actualOutputArgumentList var_expressionList_2204 ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_expressionList_2204, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 47)) ;
  GGS_location var_endOfExpression_2234 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 48)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas", 50)), var_expressionList_2204, var_endOfExpression_2234, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 45)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 47)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i8_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 45)) ;
  nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_2622 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 60)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 62)) ;
    GGS_actualOutputArgumentList var_expressionList_2746 ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_2746, inCompiler) ;
    GGS_location var_endOfExpression_2771 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 64)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 65)) ;
    outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (var_typeName_2622, var_expressionList_2746, var_endOfExpression_2771, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 68)) ;
    GGS_actualOutputArgumentList var_expressionList_2976 ;
    nt_output_5F_expression_5F_list_5F_ggs_33__34__ (ioArgument_ioDeclarations, var_expressionList_2976, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 70)) ;
    GGS_location var_endOfExpression_3011 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas", 71)) ;
    outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (var_typeName_2622, var_expressionList_2976, var_endOfExpression_3011, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 60)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 62)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 68)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__34__parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i9_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-initializer.galgas", 60)) ;
  switch (select_galgas_33_ExpressionSyntax_9 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 62)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 68)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__34__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas", 70)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
    case 2: {
      GGS_actualOutputArgumentList var_expressionList_1649 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 32)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
        case 1: {
          GGS_lstring var_selector_1762 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 35)) ;
          GGS_semanticExpressionAST var_expression_1821 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1821, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_1762, var_expression_1821, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 37))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 37)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 39)) ;
          GGS_lstring var_selector_1928 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 40)) ;
          GGS_semanticExpressionAST var_expression_1999 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1999, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_1928, var_expression_1999, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 42))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 42)) ;
        } break ;
        case 3: {
          GGS_lstring var_selector_2092 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 44)) ;
          GGS_semanticExpressionAST var_expression_2163 ;
          nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_2163, inCompiler) ;
          var_expressionList_1649.addAssignOperation (var_selector_2092, var_expression_2163, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 46))  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 46)) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_ExpressionSyntax_11 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 49)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_1649, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 54)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 58)) ;
      GGS_lstring var_structFieldName_2459 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 59)) ;
      outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_2459.readProperty_location (), outArgument_outExpression, var_structFieldName_2459, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 32)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 35)) ;
          nt_expression_5F_ggs_33__parse (inCompiler) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 39)) ;
          nt_expression_5F_ggs_33__parse (inCompiler) ;
        } break ;
        case 3: {
          nt_expression_5F_ggs_33__parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_ExpressionSyntax_11 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 49)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i10_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_10 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 32)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        switch (select_galgas_33_ExpressionSyntax_12 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 35)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 39)) ;
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        case 3: {
          nt_expression_5F_ggs_33__indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        if (select_galgas_33_ExpressionSyntax_11 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 49)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 56)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 58)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_ (GGS_lstring & outArgument_outTypeName,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outTypeName.drop () ; // Release 'out' argument
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
    outArgument_outTypeName = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 29)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    outArgument_outTypeName = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-class-func.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-class-func.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_optional_5F_type_5F_ggs_33__i11_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_typeReferenceInConstructor, "") ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-class-func.galgas", 31)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_2008 ;
  nt_optional_5F_type_5F_ggs_33__ (var_typeName_2008, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 41)) ;
  GGS_location var_startOfExpression_2033 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 42)) ;
  GGS_lstring var_classFuncName_2115 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 44)) ;
  GGS_actualOutputArgumentList var_expressionList_2188 ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    var_expressionList_2188 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 50)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_2188, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_2353 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas", 54)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (var_typeName_2008, var_classFuncName_2115, var_expressionList_2188, var_startOfExpression_2033.getter_union (var_endOfExpression_2353, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas", 59)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 44)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 50)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i12_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas", 44)) ;
  switch (select_galgas_33_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7B_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 50)) ;
    nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7D_ COMMA_SOURCE_FILE ("expression-class-func.galgas", 52)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1933 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 37)) ;
  nt_primary_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 40)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_1933, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 40)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i13_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_primary_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_bang COMMA_SOURCE_FILE ("expression-primary-bang.galgas", 40)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_1495 ;
  nt_optional_5F_type_5F_ggs_33__ (var_typeName_1495, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 27)) ;
  GGS_collectionValueElementList var_expressionList_1549 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_1672 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_1672, inCompiler) ;
      var_expressionList_1549.addAssignOperation (var_expression_1672, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 33))  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 33)) ;
      if (select_galgas_33_ExpressionSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (var_typeName_1495, var_expressionList_1549, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 38)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 27)) ;
  switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_5F_ggs_33__parse (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 39)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i14_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_optional_5F_type_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 27)) ;
  switch (select_galgas_33_ExpressionSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
      if (select_galgas_33_ExpressionSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 52)) ;
  GGS_lstring var_filewrapperName_2507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 53)) ;
  switch (select_galgas_33_ExpressionSyntax_17 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_2507, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 59)) ;
    switch (select_galgas_33_ExpressionSyntax_18 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_2731 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 61)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_2507, var_filePath_2731, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_2895 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 67)) ;
      GGS_actualOutputArgumentList var_expressionList_3005 ;
      nt_output_5F_expression_5F_list_5F_ggs_33__ (ioArgument_ioDeclarations, var_expressionList_3005, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_2507, var_filewrapperTemplateName_2895, var_expressionList_3005, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 52)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 53)) ;
  switch (select_galgas_33_ExpressionSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 59)) ;
    switch (select_galgas_33_ExpressionSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 61)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 67)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 76)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i15_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 52)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 53)) ;
  switch (select_galgas_33_ExpressionSyntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 59)) ;
    switch (select_galgas_33_ExpressionSyntax_18 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 61)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 67)) ;
      nt_output_5F_expression_5F_list_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas", 76)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 39)) ;
  GGS_semanticExpressionAST var_ifExpression_2082 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_ifExpression_2082, inCompiler) ;
  GGS_location var_operatorLocation_2103 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 42)) ;
  GGS_semanticExpressionAST var_thenExpression_2192 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_thenExpression_2192, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 44)) ;
  GGS_semanticExpressionAST var_elseExpression_2262 ;
  nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_elseExpression_2262, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 46)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_2103, var_ifExpression_2082, var_thenExpression_2192, var_elseExpression_2262, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 39)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 42)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 44)) ;
  nt_expression_5F_ggs_33__parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i16_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas", 39)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas", 42)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas", 44)) ;
  nt_expression_5F_ggs_33__indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 38)) ;
  GGS_lstring var_lexiqueName_1990 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 40)) ;
  GGS_lstring var_getterName_2032 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 41)) ;
  outArgument_outExpression = GGS_lexiqueIntrospectionExpressionAST::init_21__21_ (var_lexiqueName_1990, var_getterName_2032, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 43)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i17_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_lexique COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-lexique.galgas", 43)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_1907 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 36)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_1907, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i18_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_1916 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 37)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_1916, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i19_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_2705 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 60)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_2705, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 60)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i20_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas", 60)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_stringlist var_literalStringList_1948 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_2005 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 39)) ;
    var_literalStringList_1948.addAssignOperation (var_literalString_2005.readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 40)) ;
    if (select_galgas_33_ExpressionSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 43)), var_literalStringList_1948, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_parse (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 39)) ;
    if (select_galgas_33_ExpressionSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i21_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas", 39)) ;
    if (select_galgas_33_ExpressionSyntax_19 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 36)) ;
  GGS_lstring var_typeName_1926 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 37)) ;
  outArgument_outExpression = GGS_literalTypeInExpressionAST::init_21_ (var_typeName_1926, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 37)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i22_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__60_ COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 36)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__40_type COMMA_SOURCE_FILE ("expression-primary-literal-type.galgas", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 36)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas", 37)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 36)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i23_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas", 36)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 28)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 29)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 28)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i24_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas", 28)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 40)) ;
  GGS_lstring var_optionComponentName_2016 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 42)) ;
  GGS_lstring var_optionName_2100 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 43)) ;
  GGS_lstring var_getterName_2133 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 44)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_2016, var_optionName_2100, var_getterName_2133, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 46)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i25_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 40)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_33_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 55)) ;
  GGS_lstring var_optionName_2528 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 56)) ;
  GGS_lstring var_getterName_2561 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 57)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas", 58)), inCompiler COMMA_HERE), var_optionName_2528, var_getterName_2561, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 59)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i26_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 42)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 43)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 42)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i27_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 50)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 51)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 50)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i28_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas", 50)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_ (GGS_galgasDeclarationAST & /* ioArgument_ioDeclarations */,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_1485 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 26)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_1485, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 26)) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_primary_5F_ggs_33__i29_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                               Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3365 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3458 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3458, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_3311, var_leftOperand_3365, var_rightOperand_3458, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3589 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3644 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3737 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3737, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_3589, var_leftOperand_3644, var_rightOperand_3737, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_3878 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3932 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4002 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4002, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_3878, var_leftOperand_3932, var_rightOperand_4002, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4127 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4182 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4252 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4252, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4127, var_leftOperand_4182, var_rightOperand_4252, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4387 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4443 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4513 ;
      nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4513, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_4387, var_leftOperand_4443, var_rightOperand_4513, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 86)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 92)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 98)) ;
      nt_factor_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_term_5F_ggs_33__i30_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 74)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 80)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 86)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 92)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas", 98)) ;
      nt_factor_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1932 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_1932, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 38)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i31_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3317 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3371 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3449 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3449, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_3317, var_leftOperand_3371, var_rightOperand_3449, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3568 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3623 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3701 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3701, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_3568, var_leftOperand_3623, var_rightOperand_3701, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_3825 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3879 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3957 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_3957, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_3825, var_leftOperand_3879, var_rightOperand_3957, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4077 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4133 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4211 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4211, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4077, var_leftOperand_4133, var_rightOperand_4211, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4339 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4395 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4473 ;
      nt_expression_5F_and_5F_ggs_33__ (ioArgument_ioDeclarations, var_rightOperand_4473, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4339, var_leftOperand_4395, var_rightOperand_4473, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_parse (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 86)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 92)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 98)) ;
      nt_expression_5F_and_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_expression_5F_or_5F_ggs_33__i32_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 74)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas", 80)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas", 86)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas", 92)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas", 98)) ;
      nt_expression_5F_and_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                       Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      GGS_lstring var_selector_2987 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 70)) ;
      GGS_semanticExpressionAST var_expression_3065 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3065, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_2987, var_expression_3065, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 72))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 72)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 74)) ;
      GGS_lstring var_selector_3162 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 75)) ;
      GGS_semanticExpressionAST var_expression_3252 ;
      nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3252, inCompiler) ;
      outArgument_outExpressionList.addAssignOperation (var_selector_3162, var_expression_3252, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 77))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 77)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_parse (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 70)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 74)) ;
      nt_expression_5F_ggs_33__parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__i33_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_33_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 70)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 74)) ;
      nt_expression_5F_ggs_33__indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_33_ExpressionSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_25 (inCompiler)) {
      case 1: {
        GGS_lstring var_selector_3698 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 90)) ;
        GGS_semanticExpressionAST var_expression_3780 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3780, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_3698, var_expression_3780, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 92))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 92)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 94)) ;
        GGS_lstring var_selector_3890 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 95)) ;
        GGS_semanticExpressionAST var_expression_3984 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_3984, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_3890, var_expression_3984, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 97))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 97)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_4080 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 99)) ;
        GGS_semanticExpressionAST var_expression_4174 ;
        nt_expression_5F_ggs_33__ (ioArgument_ioDeclarations, var_expression_4174, inCompiler) ;
        outArgument_outExpressionList.addAssignOperation (var_selector_4080, var_expression_4174, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 101))  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 101)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_ExpressionSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_parse (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_25 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 90)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 94)) ;
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_ExpressionSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_output_5F_expression_5F_list_5F_ggs_33__34__i34_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  switch (select_galgas_33_ExpressionSyntax_23 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_33_ExpressionSyntax_25 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 90)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__21_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 94)) ;
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      case 3: {
        nt_expression_5F_ggs_33__indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_33_ExpressionSyntax_24 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas", 104)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1462 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 27)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_1462, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 27)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i35_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas", 27)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_1939, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i36_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1938 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_1938, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 38)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i37_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_33_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1947 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_1947, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_parse (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_33_ExpressionSyntax::rule_galgas_33_ExpressionSyntax_factor_5F_ggs_33__i38_indexing (Lexique_galgasScanner_33_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_33_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas", 38)) ;
  nt_factor_5F_ggs_33__indexing (inCompiler) ;
}

