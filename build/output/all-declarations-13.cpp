#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
// @ifInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST::objectCompare (const GGS_ifInstructionAST & inOperand) const {
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

GGS_ifInstructionAST::GGS_ifInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mExpressions,
                              const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_then_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                              const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_else_5F_instructionList,
                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_ifInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_ifInstructionAST (inCompiler COMMA_THERE)) ;
  object->ifInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mExpressions, in_m_5F_then_5F_instructionList, in_mEndOf_5F_then_5F_branch, in_m_5F_else_5F_instructionList, in_mEndOf_5F_if_5F_instruction, inCompiler) ;
  const GGS_ifInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_ifInstructionAST::
ifInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mExpressions,
                                               const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_then_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_then_5F_branch,
                                               const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_else_5F_instructionList,
                                               const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpressions = in_mExpressions ;
  mProperty_m_5F_then_5F_instructionList = in_m_5F_then_5F_instructionList ;
  mProperty_mEndOf_5F_then_5F_branch = in_mEndOf_5F_then_5F_branch ;
  mProperty_m_5F_else_5F_instructionList = in_m_5F_else_5F_instructionList ;
  mProperty_mEndOf_5F_if_5F_instruction = in_mEndOf_5F_if_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST::GGS_ifInstructionAST (const cPtr_ifInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ifInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_CommaSeparatedExpressionElement_5D_ GGS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_CommaSeparatedExpressionElement_5D_ () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_ifInstructionAST::readProperty_m_5F_then_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_then_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_then_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_then_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_ifInstructionAST::readProperty_m_5F_else_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_m_5F_else_5F_instructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_ifInstructionAST::readProperty_mEndOf_5F_if_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ifInstructionAST) ;
    return p->mProperty_mEndOf_5F_if_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @ifInstructionAST class
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

cPtr_ifInstructionAST::cPtr_ifInstructionAST (const GGS_location & in_mInstructionLocation,
                                              const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mExpressions,
                                              const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_then_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_then_5F_branch,
                                              const GGS__5B_semanticInstructionAST_5D_ & in_m_5F_else_5F_instructionList,
                                              const GGS_location & in_mEndOf_5F_if_5F_instruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_ifInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_ifInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_ifInstructionAST (mProperty_mInstructionLocation, mProperty_mExpressions, mProperty_m_5F_then_5F_instructionList, mProperty_mEndOf_5F_then_5F_branch, mProperty_m_5F_else_5F_instructionList, mProperty_mEndOf_5F_if_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @ifInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST ("ifInstructionAST",
                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_ifInstructionAST_2E_weak::objectCompare (const GGS_ifInstructionAST_2E_weak & inOperand) const {
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

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak & GGS_ifInstructionAST_2E_weak::operator = (const GGS_ifInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak::GGS_ifInstructionAST_2E_weak (const GGS_ifInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST_2E_weak GGS_ifInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_ifInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_ifInstructionAST result ;
  if (isValid ()) {
    const cPtr_ifInstructionAST * p = (cPtr_ifInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_ifInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ifInstructionAST GGS_ifInstructionAST_2E_weak::bang_ifInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_ifInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_ifInstructionAST) ;
      result = GGS_ifInstructionAST ((cPtr_ifInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @ifInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ("ifInstructionAST.weak",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ifInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ifInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractEnumeratedCollectionAST enterInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInSemanticContext (cPtr_abstractEnumeratedCollectionAST * inObject,
                                                 GGS_unifiedTypeMap & io_ioTypeMap,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractEnumeratedCollectionAST) ;
    inObject->method_enterInSemanticContext (io_ioTypeMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @forInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST::objectCompare (const GGS_forInstructionAST & inOperand) const {
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

GGS_forInstructionAST::GGS_forInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionAST GGS_forInstructionAST::
init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & in_mEnumeratedObjectList,
                                                              const GGS_lstring & in_mIndexVariableName,
                                                              const GGS_semanticExpressionAST & in_mWhileExpression,
                                                              const GGS_location & in_mEndOf_5F_while_5F_expression,
                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mBeforeInstructionList,
                                                              const GGS_location & in_mEndOf_5F_before_5F_branch,
                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mBetweenInstructionList,
                                                              const GGS_location & in_mEndOf_5F_between_5F_branch,
                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mDoInstructionList,
                                                              const GGS_location & in_mEndOf_5F_do_5F_branch,
                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mAfterInstructionList,
                                                              const GGS_location & in_mEndOf_5F_after_5F_branch,
                                                              const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cPtr_forInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionAST (inCompiler COMMA_THERE)) ;
  object->forInstructionAST_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mEnumeratedObjectList, in_mIndexVariableName, in_mWhileExpression, in_mEndOf_5F_while_5F_expression, in_mBeforeInstructionList, in_mEndOf_5F_before_5F_branch, in_mBetweenInstructionList, in_mEndOf_5F_between_5F_branch, in_mDoInstructionList, in_mEndOf_5F_do_5F_branch, in_mAfterInstructionList, in_mEndOf_5F_after_5F_branch, in_mEndOf_5F_foreach_5F_instruction, inCompiler) ;
  const GGS_forInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionAST::
forInstructionAST_init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & in_mEnumeratedObjectList,
                                                                                const GGS_lstring & in_mIndexVariableName,
                                                                                const GGS_semanticExpressionAST & in_mWhileExpression,
                                                                                const GGS_location & in_mEndOf_5F_while_5F_expression,
                                                                                const GGS__5B_semanticInstructionAST_5D_ & in_mBeforeInstructionList,
                                                                                const GGS_location & in_mEndOf_5F_before_5F_branch,
                                                                                const GGS__5B_semanticInstructionAST_5D_ & in_mBetweenInstructionList,
                                                                                const GGS_location & in_mEndOf_5F_between_5F_branch,
                                                                                const GGS__5B_semanticInstructionAST_5D_ & in_mDoInstructionList,
                                                                                const GGS_location & in_mEndOf_5F_do_5F_branch,
                                                                                const GGS__5B_semanticInstructionAST_5D_ & in_mAfterInstructionList,
                                                                                const GGS_location & in_mEndOf_5F_after_5F_branch,
                                                                                const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
                                                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEnumeratedObjectList = in_mEnumeratedObjectList ;
  mProperty_mIndexVariableName = in_mIndexVariableName ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_while_5F_expression = in_mEndOf_5F_while_5F_expression ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mEndOf_5F_before_5F_branch = in_mEndOf_5F_before_5F_branch ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mEndOf_5F_between_5F_branch = in_mEndOf_5F_between_5F_branch ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_branch = in_mEndOf_5F_do_5F_branch ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
  mProperty_mEndOf_5F_after_5F_branch = in_mEndOf_5F_after_5F_branch ;
  mProperty_mEndOf_5F_foreach_5F_instruction = in_mEndOf_5F_foreach_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST::GGS_forInstructionAST (const cPtr_forInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectAST_5D_ GGS_forInstructionAST::readProperty_mEnumeratedObjectList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_forInstructionEnumeratedObjectAST_5D_ () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_forInstructionAST::readProperty_mIndexVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mIndexVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_forInstructionAST::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_while_5F_expression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_while_5F_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_forInstructionAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_before_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_before_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_forInstructionAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_between_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_between_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_forInstructionAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_do_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_do_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_forInstructionAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_after_5F_branch (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_after_5F_branch ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionAST::readProperty_mEndOf_5F_foreach_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionAST * p = (cPtr_forInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionAST) ;
    return p->mProperty_mEndOf_5F_foreach_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mEnumeratedObjectList (),
mProperty_mIndexVariableName (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_while_5F_expression (),
mProperty_mBeforeInstructionList (),
mProperty_mEndOf_5F_before_5F_branch (),
mProperty_mBetweenInstructionList (),
mProperty_mEndOf_5F_between_5F_branch (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_branch (),
mProperty_mAfterInstructionList (),
mProperty_mEndOf_5F_after_5F_branch (),
mProperty_mEndOf_5F_foreach_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forInstructionAST::cPtr_forInstructionAST (const GGS_location & in_mInstructionLocation,
                                                const GGS__5B_forInstructionEnumeratedObjectAST_5D_ & in_mEnumeratedObjectList,
                                                const GGS_lstring & in_mIndexVariableName,
                                                const GGS_semanticExpressionAST & in_mWhileExpression,
                                                const GGS_location & in_mEndOf_5F_while_5F_expression,
                                                const GGS__5B_semanticInstructionAST_5D_ & in_mBeforeInstructionList,
                                                const GGS_location & in_mEndOf_5F_before_5F_branch,
                                                const GGS__5B_semanticInstructionAST_5D_ & in_mBetweenInstructionList,
                                                const GGS_location & in_mEndOf_5F_between_5F_branch,
                                                const GGS__5B_semanticInstructionAST_5D_ & in_mDoInstructionList,
                                                const GGS_location & in_mEndOf_5F_do_5F_branch,
                                                const GGS__5B_semanticInstructionAST_5D_ & in_mAfterInstructionList,
                                                const GGS_location & in_mEndOf_5F_after_5F_branch,
                                                const GGS_location & in_mEndOf_5F_foreach_5F_instruction,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mEnumeratedObjectList (),
mProperty_mIndexVariableName (),
mProperty_mWhileExpression (),
mProperty_mEndOf_5F_while_5F_expression (),
mProperty_mBeforeInstructionList (),
mProperty_mEndOf_5F_before_5F_branch (),
mProperty_mBetweenInstructionList (),
mProperty_mEndOf_5F_between_5F_branch (),
mProperty_mDoInstructionList (),
mProperty_mEndOf_5F_do_5F_branch (),
mProperty_mAfterInstructionList (),
mProperty_mEndOf_5F_after_5F_branch (),
mProperty_mEndOf_5F_foreach_5F_instruction () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEnumeratedObjectList = in_mEnumeratedObjectList ;
  mProperty_mIndexVariableName = in_mIndexVariableName ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mEndOf_5F_while_5F_expression = in_mEndOf_5F_while_5F_expression ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mEndOf_5F_before_5F_branch = in_mEndOf_5F_before_5F_branch ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mEndOf_5F_between_5F_branch = in_mEndOf_5F_between_5F_branch ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mEndOf_5F_do_5F_branch = in_mEndOf_5F_do_5F_branch ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
  mProperty_mEndOf_5F_after_5F_branch = in_mEndOf_5F_after_5F_branch ;
  mProperty_mEndOf_5F_foreach_5F_instruction = in_mEndOf_5F_foreach_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

void cPtr_forInstructionAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_while_5F_expression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_before_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_between_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_do_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_after_5F_branch.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOf_5F_foreach_5F_instruction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_forInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionAST (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableName, mProperty_mWhileExpression, mProperty_mEndOf_5F_while_5F_expression, mProperty_mBeforeInstructionList, mProperty_mEndOf_5F_before_5F_branch, mProperty_mBetweenInstructionList, mProperty_mEndOf_5F_between_5F_branch, mProperty_mDoInstructionList, mProperty_mEndOf_5F_do_5F_branch, mProperty_mAfterInstructionList, mProperty_mEndOf_5F_after_5F_branch, mProperty_mEndOf_5F_foreach_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumeratedObjectList.printNonNullClassInstanceProperties ("mEnumeratedObjectList") ;
    mProperty_mIndexVariableName.printNonNullClassInstanceProperties ("mIndexVariableName") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mEndOf_5F_while_5F_expression.printNonNullClassInstanceProperties ("mEndOf_while_expression") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mEndOf_5F_before_5F_branch.printNonNullClassInstanceProperties ("mEndOf_before_branch") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mEndOf_5F_between_5F_branch.printNonNullClassInstanceProperties ("mEndOf_between_branch") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mEndOf_5F_do_5F_branch.printNonNullClassInstanceProperties ("mEndOf_do_branch") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
    mProperty_mEndOf_5F_after_5F_branch.printNonNullClassInstanceProperties ("mEndOf_after_branch") ;
    mProperty_mEndOf_5F_foreach_5F_instruction.printNonNullClassInstanceProperties ("mEndOf_foreach_instruction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @forInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST ("forInstructionAST",
                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionAST_2E_weak::objectCompare (const GGS_forInstructionAST_2E_weak & inOperand) const {
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

GGS_forInstructionAST_2E_weak::GGS_forInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionAST_2E_weak & GGS_forInstructionAST_2E_weak::operator = (const GGS_forInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ("forInstructionAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST::GGS_switchBranchAST (void) :
mProperty_mSwitchConstantList (),
mProperty_mAssociatedValuesExtraction (),
mProperty_mInstructions (),
mProperty_mEndOfBranch () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST::GGS_switchBranchAST (const GGS_switchBranchAST & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mAssociatedValuesExtraction (inSource.mProperty_mAssociatedValuesExtraction),
mProperty_mInstructions (inSource.mProperty_mInstructions),
mProperty_mEndOfBranch (inSource.mProperty_mEndOfBranch) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST & GGS_switchBranchAST::operator = (const GGS_switchBranchAST & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mAssociatedValuesExtraction = inSource.mProperty_mAssociatedValuesExtraction ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  mProperty_mEndOfBranch = inSource.mProperty_mEndOfBranch ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchAST GGS_switchBranchAST::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                               const GGS__5B_switchExtractedValuesAST_5D_ & in_mAssociatedValuesExtraction,
                                                               const GGS__5B_semanticInstructionAST_5D_ & in_mInstructions,
                                                               const GGS_location & in_mEndOfBranch,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mAssociatedValuesExtraction = in_mAssociatedValuesExtraction ;
  result.mProperty_mInstructions = in_mInstructions ;
  result.mProperty_mEndOfBranch = in_mEndOfBranch ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchAST::GGS_switchBranchAST (const GGS__5B_lstring_5D_ & inOperand0,
                                          const GGS__5B_switchExtractedValuesAST_5D_ & inOperand1,
                                          const GGS__5B_semanticInstructionAST_5D_ & inOperand2,
                                          const GGS_location & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mAssociatedValuesExtraction (inOperand1),
mProperty_mInstructions (inOperand2),
mProperty_mEndOfBranch (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchAST::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mAssociatedValuesExtraction.isValid () && mProperty_mInstructions.isValid () && mProperty_mEndOfBranch.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchAST::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mAssociatedValuesExtraction.drop () ;
  mProperty_mInstructions.drop () ;
  mProperty_mEndOfBranch.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchAST::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociatedValuesExtraction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranch.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchAST ("switchBranchAST",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration::GGS_switchBranchForGeneration (void) :
mProperty_mSwitchConstantList (),
mProperty_mExtractedAssociatedValuesForGeneration (),
mProperty_mEndOfBranchLocationIndex (),
mProperty_mInstructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration::GGS_switchBranchForGeneration (const GGS_switchBranchForGeneration & inSource) :
mProperty_mSwitchConstantList (inSource.mProperty_mSwitchConstantList),
mProperty_mExtractedAssociatedValuesForGeneration (inSource.mProperty_mExtractedAssociatedValuesForGeneration),
mProperty_mEndOfBranchLocationIndex (inSource.mProperty_mEndOfBranchLocationIndex),
mProperty_mInstructions (inSource.mProperty_mInstructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration & GGS_switchBranchForGeneration::operator = (const GGS_switchBranchForGeneration & inSource) {
  mProperty_mSwitchConstantList = inSource.mProperty_mSwitchConstantList ;
  mProperty_mExtractedAssociatedValuesForGeneration = inSource.mProperty_mExtractedAssociatedValuesForGeneration ;
  mProperty_mEndOfBranchLocationIndex = inSource.mProperty_mEndOfBranchLocationIndex ;
  mProperty_mInstructions = inSource.mProperty_mInstructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_switchBranchForGeneration GGS_switchBranchForGeneration::init_21__21__21__21_ (const GGS__5B_lstring_5D_ & in_mSwitchConstantList,
                                                                                   const GGS__5B_extractedAssociatedValueForGeneration_5D_ & in_mExtractedAssociatedValuesForGeneration,
                                                                                   const GGS_uint & in_mEndOfBranchLocationIndex,
                                                                                   const GGS__5B_semanticInstructionForGeneration_5D_ & in_mInstructions,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_switchBranchForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSwitchConstantList = in_mSwitchConstantList ;
  result.mProperty_mExtractedAssociatedValuesForGeneration = in_mExtractedAssociatedValuesForGeneration ;
  result.mProperty_mEndOfBranchLocationIndex = in_mEndOfBranchLocationIndex ;
  result.mProperty_mInstructions = in_mInstructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_switchBranchForGeneration::GGS_switchBranchForGeneration (const GGS__5B_lstring_5D_ & inOperand0,
                                                              const GGS__5B_extractedAssociatedValueForGeneration_5D_ & inOperand1,
                                                              const GGS_uint & inOperand2,
                                                              const GGS__5B_semanticInstructionForGeneration_5D_ & inOperand3) :
mProperty_mSwitchConstantList (inOperand0),
mProperty_mExtractedAssociatedValuesForGeneration (inOperand1),
mProperty_mEndOfBranchLocationIndex (inOperand2),
mProperty_mInstructions (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_switchBranchForGeneration::isValid (void) const {
  return mProperty_mSwitchConstantList.isValid () && mProperty_mExtractedAssociatedValuesForGeneration.isValid () && mProperty_mEndOfBranchLocationIndex.isValid () && mProperty_mInstructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchForGeneration::drop (void) {
  mProperty_mSwitchConstantList.drop () ;
  mProperty_mExtractedAssociatedValuesForGeneration.drop () ;
  mProperty_mEndOfBranchLocationIndex.drop () ;
  mProperty_mInstructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_switchBranchForGeneration::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @switchBranchForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSwitchConstantList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExtractedAssociatedValuesForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfBranchLocationIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @switchBranchForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchBranchForGeneration ("switchBranchForGeneration",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchBranchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchBranchForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @switchInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST::objectCompare (const GGS_switchInstructionAST & inOperand) const {
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

GGS_switchInstructionAST::GGS_switchInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionAST & in_mSwitchExpression,
                          const GGS_location & in_mEndOfSwitchExpression,
                          const GGS__5B_switchBranchAST_5D_ & in_mBranches,
                          const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionAST (inCompiler COMMA_THERE)) ;
  object->switchInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mSwitchExpression, in_mEndOfSwitchExpression, in_mBranches, in_mEndOf_5F_switch_5F_instruction, inCompiler) ;
  const GGS_switchInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionAST::
switchInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_semanticExpressionAST & in_mSwitchExpression,
                                               const GGS_location & in_mEndOfSwitchExpression,
                                               const GGS__5B_switchBranchAST_5D_ & in_mBranches,
                                               const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mEndOfSwitchExpression = in_mEndOfSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
  mProperty_mEndOf_5F_switch_5F_instruction = in_mEndOf_5F_switch_5F_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST::GGS_switchInstructionAST (const cPtr_switchInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_switchInstructionAST::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOfSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOfSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchAST_5D_ GGS_switchInstructionAST::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_switchBranchAST_5D_ () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_switchInstructionAST::readProperty_mEndOf_5F_switch_5F_instruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionAST) ;
    return p->mProperty_mEndOf_5F_switch_5F_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSwitchExpression (),
mProperty_mEndOfSwitchExpression (),
mProperty_mBranches (),
mProperty_mEndOf_5F_switch_5F_instruction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionAST::cPtr_switchInstructionAST (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionAST & in_mSwitchExpression,
                                                      const GGS_location & in_mEndOfSwitchExpression,
                                                      const GGS__5B_switchBranchAST_5D_ & in_mBranches,
                                                      const GGS_location & in_mEndOf_5F_switch_5F_instruction,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_switchInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_switchInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionAST (mProperty_mInstructionLocation, mProperty_mSwitchExpression, mProperty_mEndOfSwitchExpression, mProperty_mBranches, mProperty_mEndOf_5F_switch_5F_instruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @switchInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST ("switchInstructionAST",
                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionAST_2E_weak::objectCompare (const GGS_switchInstructionAST_2E_weak & inOperand) const {
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

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak & GGS_switchInstructionAST_2E_weak::operator = (const GGS_switchInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak::GGS_switchInstructionAST_2E_weak (const GGS_switchInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST_2E_weak GGS_switchInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_switchInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_switchInstructionAST result ;
  if (isValid ()) {
    const cPtr_switchInstructionAST * p = (cPtr_switchInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_switchInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionAST GGS_switchInstructionAST_2E_weak::bang_switchInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_switchInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_switchInstructionAST) ;
      result = GGS_switchInstructionAST ((cPtr_switchInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @switchInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ("switchInstructionAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @setterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionAST::objectCompare (const GGS_setterCallInstructionAST & inOperand) const {
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

GGS_setterCallInstructionAST::GGS_setterCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_setterCallInstructionAST GGS_setterCallInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_bool & in_mPrefixedBySelf,
                              const GGS_lstring & in_mReceiverName,
                              const GGS__5B_lstring_5D_ & in_mReceiverStructProperties,
                              const GGS_lstring & in_mSetterName,
                              const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_setterCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_setterCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->setterCallInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mPrefixedBySelf, in_mReceiverName, in_mReceiverStructProperties, in_mSetterName, in_mActualParameterList, inCompiler) ;
  const GGS_setterCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_setterCallInstructionAST::
setterCallInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_bool & in_mPrefixedBySelf,
                                                       const GGS_lstring & in_mReceiverName,
                                                       const GGS__5B_lstring_5D_ & in_mReceiverStructProperties,
                                                       const GGS_lstring & in_mSetterName,
                                                       const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverStructProperties = in_mReceiverStructProperties ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST::GGS_setterCallInstructionAST (const cPtr_setterCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_setterCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_setterCallInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_setterCallInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_setterCallInstructionAST::readProperty_mReceiverStructProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mReceiverStructProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_setterCallInstructionAST::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualParameterAST_5D_ GGS_setterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualParameterAST_5D_ () ;
  }else{
    cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_setterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @setterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mReceiverStructProperties (),
mProperty_mSetterName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_setterCallInstructionAST::cPtr_setterCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_bool & in_mPrefixedBySelf,
                                                              const GGS_lstring & in_mReceiverName,
                                                              const GGS__5B_lstring_5D_ & in_mReceiverStructProperties,
                                                              const GGS_lstring & in_mSetterName,
                                                              const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mReceiverStructProperties (),
mProperty_mSetterName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mReceiverStructProperties = in_mReceiverStructProperties ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_setterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

void cPtr_setterCallInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@setterCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverStructProperties.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_setterCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_setterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mReceiverStructProperties, mProperty_mSetterName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_setterCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mReceiverStructProperties.printNonNullClassInstanceProperties ("mReceiverStructProperties") ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @setterCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionAST ("setterCallInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_setterCallInstructionAST_2E_weak::objectCompare (const GGS_setterCallInstructionAST_2E_weak & inOperand) const {
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

GGS_setterCallInstructionAST_2E_weak::GGS_setterCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak & GGS_setterCallInstructionAST_2E_weak::operator = (const GGS_setterCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak::GGS_setterCallInstructionAST_2E_weak (const GGS_setterCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST_2E_weak GGS_setterCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_setterCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST GGS_setterCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_setterCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_setterCallInstructionAST * p = (cPtr_setterCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_setterCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_setterCallInstructionAST GGS_setterCallInstructionAST_2E_weak::bang_setterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_setterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_setterCallInstructionAST) ;
      result = GGS_setterCallInstructionAST ((cPtr_setterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @setterCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_setterCallInstructionAST_2E_weak ("setterCallInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_setterCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_setterCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfSetterCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionAST::objectCompare (const GGS_selfSetterCallInstructionAST & inOperand) const {
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

GGS_selfSetterCallInstructionAST::GGS_selfSetterCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfSetterCallInstructionAST GGS_selfSetterCallInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mSetterName,
                  const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selfSetterCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfSetterCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfSetterCallInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mSetterName, in_mActualParameterList, inCompiler) ;
  const GGS_selfSetterCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfSetterCallInstructionAST::
selfSetterCallInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mSetterName,
                                               const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST::GGS_selfSetterCallInstructionAST (const cPtr_selfSetterCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfSetterCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selfSetterCallInstructionAST::readProperty_mSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualParameterAST_5D_ GGS_selfSetterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualParameterAST_5D_ () ;
  }else{
    cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfSetterCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfSetterCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSetterName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfSetterCallInstructionAST::cPtr_selfSetterCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mSetterName,
                                                                      const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSetterName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSetterName = in_mSetterName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfSetterCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

void cPtr_selfSetterCallInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfSetterCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfSetterCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfSetterCallInstructionAST (mProperty_mInstructionLocation, mProperty_mSetterName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfSetterCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSetterName.printNonNullClassInstanceProperties ("mSetterName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfSetterCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ("selfSetterCallInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfSetterCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfSetterCallInstructionAST_2E_weak::objectCompare (const GGS_selfSetterCallInstructionAST_2E_weak & inOperand) const {
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

GGS_selfSetterCallInstructionAST_2E_weak::GGS_selfSetterCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak & GGS_selfSetterCallInstructionAST_2E_weak::operator = (const GGS_selfSetterCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak::GGS_selfSetterCallInstructionAST_2E_weak (const GGS_selfSetterCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST_2E_weak GGS_selfSetterCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfSetterCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST GGS_selfSetterCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfSetterCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfSetterCallInstructionAST * p = (cPtr_selfSetterCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfSetterCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfSetterCallInstructionAST GGS_selfSetterCallInstructionAST_2E_weak::bang_selfSetterCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfSetterCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfSetterCallInstructionAST) ;
      result = GGS_selfSetterCallInstructionAST ((cPtr_selfSetterCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfSetterCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2E_weak ("selfSetterCallInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfSetterCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfSetterCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithoutVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST::objectCompare (const GGS_loopInstructionWithoutVariantAST & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                      const GGS_location & in_mEndOfFirstInstructions,
                                      const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mLoopExpression,
                                      const GGS_location & in_mEndOfLoopExpression,
                                      const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                      const GGS_location & in_mEndOfSecondInstructions,
                                      const GGS_location & in_mEndOfLoopInstruction,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithoutVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithoutVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithoutVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithoutVariantAST::
loopInstructionWithoutVariantAST_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                       const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                                                       const GGS_location & in_mEndOfFirstInstructions,
                                                                       const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mLoopExpression,
                                                                       const GGS_location & in_mEndOfLoopExpression,
                                                                       const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                                                       const GGS_location & in_mEndOfSecondInstructions,
                                                                       const GGS_location & in_mEndOfLoopInstruction,
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

GGS_loopInstructionWithoutVariantAST::GGS_loopInstructionWithoutVariantAST (const cPtr_loopInstructionWithoutVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithoutVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_loopInstructionWithoutVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_CommaSeparatedExpressionElement_5D_ GGS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_CommaSeparatedExpressionElement_5D_ () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_loopInstructionWithoutVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithoutVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithoutVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithoutVariantAST class
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

cPtr_loopInstructionWithoutVariantAST::cPtr_loopInstructionWithoutVariantAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                                                              const GGS_location & in_mEndOfFirstInstructions,
                                                                              const GGS__5B_CommaSeparatedExpressionElement_5D_ & in_mLoopExpression,
                                                                              const GGS_location & in_mEndOfLoopExpression,
                                                                              const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                                                              const GGS_location & in_mEndOfSecondInstructions,
                                                                              const GGS_location & in_mEndOfLoopInstruction,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithoutVariantAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_loopInstructionWithoutVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithoutVariantAST (mProperty_mInstructionLocation, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @loopInstructionWithoutVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ("loopInstructionWithoutVariantAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithoutVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithoutVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak & GGS_loopInstructionWithoutVariantAST_2E_weak::operator = (const GGS_loopInstructionWithoutVariantAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak::GGS_loopInstructionWithoutVariantAST_2E_weak (const GGS_loopInstructionWithoutVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST_2E_weak GGS_loopInstructionWithoutVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithoutVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithoutVariantAST * p = (cPtr_loopInstructionWithoutVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithoutVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithoutVariantAST GGS_loopInstructionWithoutVariantAST_2E_weak::bang_loopInstructionWithoutVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithoutVariantAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithoutVariantAST) ;
      result = GGS_loopInstructionWithoutVariantAST ((cPtr_loopInstructionWithoutVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithoutVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ("loopInstructionWithoutVariantAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithoutVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithoutVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableOrConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithAssignmentAST::objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithAssignmentAST::GGS_localVariableOrConstantDeclarationWithAssignmentAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_bool & in_mIsConstant,
                          const GGS_lstring & in_mOptionalTypeName,
                          const GGS_lstring & in_mVariableName,
                          const GGS_semanticExpressionAST & in_mSourceExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_localVariableOrConstantDeclarationWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->localVariableOrConstantDeclarationWithAssignmentAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mIsConstant, in_mOptionalTypeName, in_mVariableName, in_mSourceExpression, inCompiler) ;
  const GGS_localVariableOrConstantDeclarationWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::
localVariableOrConstantDeclarationWithAssignmentAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_bool & in_mIsConstant,
                                                                              const GGS_lstring & in_mOptionalTypeName,
                                                                              const GGS_lstring & in_mVariableName,
                                                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST::GGS_localVariableOrConstantDeclarationWithAssignmentAST (const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mIsConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mOptionalTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mOptionalTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_localVariableOrConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsConstant (),
mProperty_mOptionalTypeName (),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithAssignmentAST::cPtr_localVariableOrConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_bool & in_mIsConstant,
                                                                                                                    const GGS_lstring & in_mOptionalTypeName,
                                                                                                                    const GGS_lstring & in_mVariableName,
                                                                                                                    const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mIsConstant (),
mProperty_mOptionalTypeName (),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mOptionalTypeName = in_mOptionalTypeName ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableOrConstantDeclarationWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_localVariableOrConstantDeclarationWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mIsConstant, mProperty_mOptionalTypeName, mProperty_mVariableName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableOrConstantDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsConstant.printNonNullClassInstanceProperties ("mIsConstant") ;
    mProperty_mOptionalTypeName.printNonNullClassInstanceProperties ("mOptionalTypeName") ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ("localVariableOrConstantDeclarationWithAssignmentAST",
                                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak & GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localVariableOrConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableOrConstantDeclarationWithAssignmentAST * p = (cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithAssignmentAST GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::bang_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableOrConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localVariableOrConstantDeclarationWithAssignmentAST) ;
      result = GGS_localVariableOrConstantDeclarationWithAssignmentAST ((cPtr_localVariableOrConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ("localVariableOrConstantDeclarationWithAssignmentAST.weak",
                                                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @undefinedLocalConstantDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationAST::objectCompare (const GGS_undefinedLocalConstantDeclarationAST & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationAST::GGS_undefinedLocalConstantDeclarationAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mConstantTypeName,
                  const GGS_lstring & in_mConstantName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_undefinedLocalConstantDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_undefinedLocalConstantDeclarationAST (inCompiler COMMA_THERE)) ;
  object->undefinedLocalConstantDeclarationAST_init_21__21__21_ (in_mInstructionLocation, in_mConstantTypeName, in_mConstantName, inCompiler) ;
  const GGS_undefinedLocalConstantDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_undefinedLocalConstantDeclarationAST::
undefinedLocalConstantDeclarationAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                       const GGS_lstring & in_mConstantTypeName,
                                                       const GGS_lstring & in_mConstantName,
                                                       Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mConstantName = in_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST::GGS_undefinedLocalConstantDeclarationAST (const cPtr_undefinedLocalConstantDeclarationAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_undefinedLocalConstantDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_undefinedLocalConstantDeclarationAST::readProperty_mConstantTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_undefinedLocalConstantDeclarationAST::readProperty_mConstantName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_undefinedLocalConstantDeclarationAST) ;
    return p->mProperty_mConstantName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @undefinedLocalConstantDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mConstantTypeName (),
mProperty_mConstantName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_undefinedLocalConstantDeclarationAST::cPtr_undefinedLocalConstantDeclarationAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_lstring & in_mConstantTypeName,
                                                                                      const GGS_lstring & in_mConstantName,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mConstantTypeName (),
mProperty_mConstantName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mConstantTypeName = in_mConstantTypeName ;
  mProperty_mConstantName = in_mConstantName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_undefinedLocalConstantDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

void cPtr_undefinedLocalConstantDeclarationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@undefinedLocalConstantDeclarationAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mConstantName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_undefinedLocalConstantDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_undefinedLocalConstantDeclarationAST (mProperty_mInstructionLocation, mProperty_mConstantTypeName, mProperty_mConstantName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_undefinedLocalConstantDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mConstantTypeName.printNonNullClassInstanceProperties ("mConstantTypeName") ;
    mProperty_mConstantName.printNonNullClassInstanceProperties ("mConstantName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ("undefinedLocalConstantDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_undefinedLocalConstantDeclarationAST_2E_weak::objectCompare (const GGS_undefinedLocalConstantDeclarationAST_2E_weak & inOperand) const {
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

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak & GGS_undefinedLocalConstantDeclarationAST_2E_weak::operator = (const GGS_undefinedLocalConstantDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak::GGS_undefinedLocalConstantDeclarationAST_2E_weak (const GGS_undefinedLocalConstantDeclarationAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST_2E_weak GGS_undefinedLocalConstantDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_undefinedLocalConstantDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (isValid ()) {
    const cPtr_undefinedLocalConstantDeclarationAST * p = (cPtr_undefinedLocalConstantDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_undefinedLocalConstantDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_undefinedLocalConstantDeclarationAST GGS_undefinedLocalConstantDeclarationAST_2E_weak::bang_undefinedLocalConstantDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_undefinedLocalConstantDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_undefinedLocalConstantDeclarationAST) ;
      result = GGS_undefinedLocalConstantDeclarationAST ((cPtr_undefinedLocalConstantDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @undefinedLocalConstantDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ("undefinedLocalConstantDeclarationAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_undefinedLocalConstantDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_undefinedLocalConstantDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @localConstantDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localConstantDeclarationWithAssignmentAST::objectCompare (const GGS_localConstantDeclarationWithAssignmentAST & inOperand) const {
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

GGS_localConstantDeclarationWithAssignmentAST::GGS_localConstantDeclarationWithAssignmentAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mVariableName,
                  const GGS_semanticExpressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_localConstantDeclarationWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_localConstantDeclarationWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->localConstantDeclarationWithAssignmentAST_init_21__21__21_ (in_mInstructionLocation, in_mVariableName, in_mSourceExpression, inCompiler) ;
  const GGS_localConstantDeclarationWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localConstantDeclarationWithAssignmentAST::
localConstantDeclarationWithAssignmentAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mVariableName,
                                                            const GGS_semanticExpressionAST & in_mSourceExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST::GGS_localConstantDeclarationWithAssignmentAST (const cPtr_localConstantDeclarationWithAssignmentAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localConstantDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_localConstantDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localConstantDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localConstantDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localConstantDeclarationWithAssignmentAST::cPtr_localConstantDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_lstring & in_mVariableName,
                                                                                                const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localConstantDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

void cPtr_localConstantDeclarationWithAssignmentAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@localConstantDeclarationWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_localConstantDeclarationWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localConstantDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localConstantDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localConstantDeclarationWithAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ("localConstantDeclarationWithAssignmentAST",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localConstantDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localConstantDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak & GGS_localConstantDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localConstantDeclarationWithAssignmentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak::GGS_localConstantDeclarationWithAssignmentAST_2E_weak (const GGS_localConstantDeclarationWithAssignmentAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST_2E_weak GGS_localConstantDeclarationWithAssignmentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_localConstantDeclarationWithAssignmentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localConstantDeclarationWithAssignmentAST * p = (cPtr_localConstantDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localConstantDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localConstantDeclarationWithAssignmentAST GGS_localConstantDeclarationWithAssignmentAST_2E_weak::bang_localConstantDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localConstantDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_localConstantDeclarationWithAssignmentAST) ;
      result = GGS_localConstantDeclarationWithAssignmentAST ((cPtr_localConstantDeclarationWithAssignmentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @localConstantDeclarationWithAssignmentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ("localConstantDeclarationWithAssignmentAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localConstantDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localConstantDeclarationWithAssignmentAST_2E_weak ;
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
              const GGS__5B_lstring_5D_ & in_mDropList,
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
                                 const GGS__5B_lstring_5D_ & in_mDropList,
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

GGS__5B_lstring_5D_ GGS_dropInstructionAST::readProperty_mDropList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
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
                                                  const GGS__5B_lstring_5D_ & in_mDropList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mDropList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mDropList = in_mDropList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dropInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_dropInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dropInstructionAST ("dropInstructionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dropInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dropInstructionAST_2E_weak::objectCompare (const GGS_dropInstructionAST_2E_weak & inOperand) const {
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

GGS_dropInstructionAST_2E_weak::GGS_dropInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dropInstructionAST_2E_weak & GGS_dropInstructionAST_2E_weak::operator = (const GGS_dropInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ("dropInstructionAST.weak",
                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dropInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dropInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationWithAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationWithAssignmentAST::objectCompare (const GGS_localVariableDeclarationWithAssignmentAST & inOperand) const {
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

GGS_localVariableDeclarationWithAssignmentAST::GGS_localVariableDeclarationWithAssignmentAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mVariableName,
                  const GGS_semanticExpressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationWithAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationWithAssignmentAST (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationWithAssignmentAST_init_21__21__21_ (in_mInstructionLocation, in_mVariableName, in_mSourceExpression, inCompiler) ;
  const GGS_localVariableDeclarationWithAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationWithAssignmentAST::
localVariableDeclarationWithAssignmentAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                            const GGS_lstring & in_mVariableName,
                                                            const GGS_semanticExpressionAST & in_mSourceExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST::GGS_localVariableDeclarationWithAssignmentAST (const cPtr_localVariableDeclarationWithAssignmentAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationWithAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localVariableDeclarationWithAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_localVariableDeclarationWithAssignmentAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationWithAssignmentAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationWithAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationWithAssignmentAST::cPtr_localVariableDeclarationWithAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationWithAssignmentAST::cPtr_localVariableDeclarationWithAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                                                const GGS_lstring & in_mVariableName,
                                                                                                const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mVariableName (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariableName = in_mVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableDeclarationWithAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

void cPtr_localVariableDeclarationWithAssignmentAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableDeclarationWithAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_localVariableDeclarationWithAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationWithAssignmentAST (mProperty_mInstructionLocation, mProperty_mVariableName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationWithAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationWithAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ("localVariableDeclarationWithAssignmentAST",
                                                                                              & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationWithAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationWithAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationWithAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationWithAssignmentAST_2E_weak::GGS_localVariableDeclarationWithAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST_2E_weak & GGS_localVariableDeclarationWithAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationWithAssignmentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableDeclarationWithAssignmentAST * p = (cPtr_localVariableDeclarationWithAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableDeclarationWithAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationWithAssignmentAST GGS_localVariableDeclarationWithAssignmentAST_2E_weak::bang_localVariableDeclarationWithAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationWithAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ("localVariableDeclarationWithAssignmentAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationWithAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationWithAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @localVariableDeclarationNoAssignmentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationNoAssignmentAST::objectCompare (const GGS_localVariableDeclarationNoAssignmentAST & inOperand) const {
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

GGS_localVariableDeclarationNoAssignmentAST::GGS_localVariableDeclarationNoAssignmentAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mTypeName,
                  const GGS_lstring & in_mVariableName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_localVariableDeclarationNoAssignmentAST * object = nullptr ;
  macroMyNew (object, cPtr_localVariableDeclarationNoAssignmentAST (inCompiler COMMA_THERE)) ;
  object->localVariableDeclarationNoAssignmentAST_init_21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mVariableName, inCompiler) ;
  const GGS_localVariableDeclarationNoAssignmentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableDeclarationNoAssignmentAST::
localVariableDeclarationNoAssignmentAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mTypeName,
                                                          const GGS_lstring & in_mVariableName,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST::GGS_localVariableDeclarationNoAssignmentAST (const cPtr_localVariableDeclarationNoAssignmentAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableDeclarationNoAssignmentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localVariableDeclarationNoAssignmentAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationNoAssignmentAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_localVariableDeclarationNoAssignmentAST::readProperty_mVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableDeclarationNoAssignmentAST) ;
    return p->mProperty_mVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableDeclarationNoAssignmentAST class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationNoAssignmentAST::cPtr_localVariableDeclarationNoAssignmentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mVariableName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableDeclarationNoAssignmentAST::cPtr_localVariableDeclarationNoAssignmentAST (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_lstring & in_mTypeName,
                                                                                            const GGS_lstring & in_mVariableName,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mVariableName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mVariableName = in_mVariableName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableDeclarationNoAssignmentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ;
}

void cPtr_localVariableDeclarationNoAssignmentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableDeclarationNoAssignmentAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_localVariableDeclarationNoAssignmentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableDeclarationNoAssignmentAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mVariableName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableDeclarationNoAssignmentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mVariableName.printNonNullClassInstanceProperties ("mVariableName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableDeclarationNoAssignmentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ("localVariableDeclarationNoAssignmentAST",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationNoAssignmentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableDeclarationNoAssignmentAST_2E_weak::objectCompare (const GGS_localVariableDeclarationNoAssignmentAST_2E_weak & inOperand) const {
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

GGS_localVariableDeclarationNoAssignmentAST_2E_weak::GGS_localVariableDeclarationNoAssignmentAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST_2E_weak & GGS_localVariableDeclarationNoAssignmentAST_2E_weak::operator = (const GGS_localVariableDeclarationNoAssignmentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::unwrappedValue (void) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (isValid ()) {
    const cPtr_localVariableDeclarationNoAssignmentAST * p = (cPtr_localVariableDeclarationNoAssignmentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_localVariableDeclarationNoAssignmentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableDeclarationNoAssignmentAST GGS_localVariableDeclarationNoAssignmentAST_2E_weak::bang_localVariableDeclarationNoAssignmentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_localVariableDeclarationNoAssignmentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ("localVariableDeclarationNoAssignmentAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableDeclarationNoAssignmentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableDeclarationNoAssignmentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST::objectCompare (const GGS_selfAssignmentInstructionAST & inOperand) const {
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

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_assignmentSupplementAST & in_mSupplement,
                  const GGS_semanticExpressionAST & in_mSourceExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mSupplement, in_mSourceExpression, inCompiler) ;
  const GGS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_assignmentSupplementAST & in_mSupplement,
                                               const GGS_semanticExpressionAST & in_mSourceExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_assignmentSupplementAST GGS_selfAssignmentInstructionAST::readProperty_mSupplement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_assignmentSupplementAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSupplement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_assignmentSupplementAST & in_mSupplement,
                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

void cPtr_selfAssignmentInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@selfAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSupplement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSupplement, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mSupplement.printNonNullClassInstanceProperties ("mSupplement") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ("selfAssignmentInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfAssignmentInstructionAST_2E_weak::objectCompare (const GGS_selfAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak & GGS_selfAssignmentInstructionAST_2E_weak::operator = (const GGS_selfAssignmentInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak::GGS_selfAssignmentInstructionAST_2E_weak (const GGS_selfAssignmentInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST_2E_weak GGS_selfAssignmentInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfAssignmentInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfAssignmentInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfAssignmentInstructionAST * p = (cPtr_selfAssignmentInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfAssignmentInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST GGS_selfAssignmentInstructionAST_2E_weak::bang_selfAssignmentInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfAssignmentInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfAssignmentInstructionAST) ;
      result = GGS_selfAssignmentInstructionAST ((cPtr_selfAssignmentInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfAssignmentInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ("selfAssignmentInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @superInitInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST::objectCompare (const GGS_superInitInstructionAST & inOperand) const {
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

GGS_superInitInstructionAST::GGS_superInitInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualParameterList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionAST (inCompiler COMMA_THERE)) ;
  object->superInitInstructionAST_init_21__21_ (in_mInstructionLocation, in_mActualParameterList, inCompiler) ;
  const GGS_superInitInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionAST::
superInitInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualParameterList,
                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST::GGS_superInitInstructionAST (const cPtr_superInitInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_actualOutputArgumentAST_5D_ GGS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualOutputArgumentAST_5D_ () ;
  }else{
    cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionAST::cPtr_superInitInstructionAST (const GGS_location & in_mInstructionLocation,
                                                            const GGS__5B_actualOutputArgumentAST_5D_ & in_mActualParameterList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_superInitInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_superInitInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionAST (mProperty_mInstructionLocation, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superInitInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST ("superInitInstructionAST",
                                                                            & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superInitInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionAST_2E_weak::objectCompare (const GGS_superInitInstructionAST_2E_weak & inOperand) const {
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

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak & GGS_superInitInstructionAST_2E_weak::operator = (const GGS_superInitInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak::GGS_superInitInstructionAST_2E_weak (const GGS_superInitInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST_2E_weak GGS_superInitInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superInitInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_superInitInstructionAST result ;
  if (isValid ()) {
    const cPtr_superInitInstructionAST * p = (cPtr_superInitInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_superInitInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionAST GGS_superInitInstructionAST_2E_weak::bang_superInitInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superInitInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superInitInstructionAST) ;
      result = GGS_superInitInstructionAST ((cPtr_superInitInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superInitInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ("superInitInstructionAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superInitInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @typeMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionAST::objectCompare (const GGS_typeMethodCallInstructionAST & inOperand) const {
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

GGS_typeMethodCallInstructionAST::GGS_typeMethodCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTypeName,
                      const GGS_lstring & in_mMethodName,
                      const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_typeMethodCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_typeMethodCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->typeMethodCallInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTypeName, in_mMethodName, in_mActualParameterList, inCompiler) ;
  const GGS_typeMethodCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_typeMethodCallInstructionAST::
typeMethodCallInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_lstring & in_mTypeName,
                                                   const GGS_lstring & in_mMethodName,
                                                   const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST::GGS_typeMethodCallInstructionAST (const cPtr_typeMethodCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_typeMethodCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeMethodCallInstructionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_typeMethodCallInstructionAST::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualParameterAST_5D_ GGS_typeMethodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualParameterAST_5D_ () ;
  }else{
    cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_typeMethodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @typeMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_typeMethodCallInstructionAST::cPtr_typeMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      const GGS_lstring & in_mMethodName,
                                                                      const GGS__5B_actualParameterAST_5D_ & in_mActualParameterList,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_typeMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

void cPtr_typeMethodCallInstructionAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@typeMethodCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_typeMethodCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_typeMethodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mTypeName, mProperty_mMethodName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_typeMethodCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @typeMethodCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ("typeMethodCallInstructionAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeMethodCallInstructionAST_2E_weak::objectCompare (const GGS_typeMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak & GGS_typeMethodCallInstructionAST_2E_weak::operator = (const GGS_typeMethodCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak::GGS_typeMethodCallInstructionAST_2E_weak (const GGS_typeMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST_2E_weak GGS_typeMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_typeMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_typeMethodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_typeMethodCallInstructionAST * p = (cPtr_typeMethodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_typeMethodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeMethodCallInstructionAST GGS_typeMethodCallInstructionAST_2E_weak::bang_typeMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_typeMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_typeMethodCallInstructionAST) ;
      result = GGS_typeMethodCallInstructionAST ((cPtr_typeMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @typeMethodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ("typeMethodCallInstructionAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @assignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST::objectCompare (const GGS_assignmentInstructionAST & inOperand) const {
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

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentInstructionAST GGS_assignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetVariableName,
                      const GGS_assignmentSupplementAST & in_mSupplement,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetVariableName, in_mSupplement, in_mSourceExpression, inCompiler) ;
  const GGS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetVariableName,
                                               const GGS_assignmentSupplementAST & in_mSupplement,
                                               const GGS_semanticExpressionAST & in_mSourceExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST::GGS_assignmentInstructionAST (const cPtr_assignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_assignmentInstructionAST::readProperty_mTargetVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mTargetVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentSupplementAST GGS_assignmentInstructionAST::readProperty_mSupplement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_assignmentSupplementAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSupplement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_assignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTargetVariableName (),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_lstring & in_mTargetVariableName,
                                                              const GGS_assignmentSupplementAST & in_mSupplement,
                                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetVariableName (),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

void cPtr_assignmentInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSupplement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_assignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mSupplement, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mSupplement.printNonNullClassInstanceProperties ("mSupplement") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST ("assignmentInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionAST_2E_weak::objectCompare (const GGS_assignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_assignmentInstructionAST_2E_weak::GGS_assignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionAST_2E_weak & GGS_assignmentInstructionAST_2E_weak::operator = (const GGS_assignmentInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ("assignmentInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfPropertyAssignmentInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPropertyAssignmentInstructionAST::objectCompare (const GGS_selfPropertyAssignmentInstructionAST & inOperand) const {
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

GGS_selfPropertyAssignmentInstructionAST::GGS_selfPropertyAssignmentInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST GGS_selfPropertyAssignmentInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_lstring & in_mTargetSelfPropertyName,
                      const GGS_assignmentSupplementAST & in_mSupplement,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selfPropertyAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPropertyAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetSelfPropertyName, in_mSupplement, in_mSourceExpression, inCompiler) ;
  const GGS_selfPropertyAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::
selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_lstring & in_mTargetSelfPropertyName,
                                                           const GGS_assignmentSupplementAST & in_mSupplement,
                                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST::GGS_selfPropertyAssignmentInstructionAST (const cPtr_selfPropertyAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPropertyAssignmentInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_selfPropertyAssignmentInstructionAST::readProperty_mTargetSelfPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mTargetSelfPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentSupplementAST GGS_selfPropertyAssignmentInstructionAST::readProperty_mSupplement (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_assignmentSupplementAST () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mSupplement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfPropertyAssignmentInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPropertyAssignmentInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mTargetSelfPropertyName (),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_lstring & in_mTargetSelfPropertyName,
                                                                                      const GGS_assignmentSupplementAST & in_mSupplement,
                                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetSelfPropertyName (),
mProperty_mSupplement (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mSupplement = in_mSupplement ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfPropertyAssignmentInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

void cPtr_selfPropertyAssignmentInstructionAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@selfPropertyAssignmentInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetSelfPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSupplement.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfPropertyAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPropertyAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetSelfPropertyName, mProperty_mSupplement, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPropertyAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetSelfPropertyName.printNonNullClassInstanceProperties ("mTargetSelfPropertyName") ;
    mProperty_mSupplement.printNonNullClassInstanceProperties ("mSupplement") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfPropertyAssignmentInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ("selfPropertyAssignmentInstructionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfPropertyAssignmentInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPropertyAssignmentInstructionAST_2E_weak::objectCompare (const GGS_selfPropertyAssignmentInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPropertyAssignmentInstructionAST_2E_weak::GGS_selfPropertyAssignmentInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPropertyAssignmentInstructionAST_2E_weak & GGS_selfPropertyAssignmentInstructionAST_2E_weak::operator = (const GGS_selfPropertyAssignmentInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ("selfPropertyAssignmentInstructionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfPropertyAssignmentInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPropertyAssignmentInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationAST::GGS_terminalDeclarationAST (void) :
mProperty_mName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_mStyle (),
mProperty_nonAtomicSelection (),
mProperty_isEndOfTemplateMark () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationAST::GGS_terminalDeclarationAST (const GGS_terminalDeclarationAST & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_mStyle (inSource.mProperty_mStyle),
mProperty_nonAtomicSelection (inSource.mProperty_nonAtomicSelection),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationAST & GGS_terminalDeclarationAST::operator = (const GGS_terminalDeclarationAST & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_mStyle = inSource.mProperty_mStyle ;
  mProperty_nonAtomicSelection = inSource.mProperty_nonAtomicSelection ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalDeclarationAST GGS_terminalDeclarationAST::init_21__21__21__21__21_nonAtomicSelection_21_isEndOfTemplateMark (const GGS_lstring & in_mName,
                                                                                                                          const GGS__5B_sentLexicalAttributeAST_5D_ & in_mSentAttributeList,
                                                                                                                          const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                                                          const GGS_lstring & in_mStyle,
                                                                                                                          const GGS_bool & in_nonAtomicSelection,
                                                                                                                          const GGS_bool & in_isEndOfTemplateMark,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_mStyle = in_mStyle ;
  result.mProperty_nonAtomicSelection = in_nonAtomicSelection ;
  result.mProperty_isEndOfTemplateMark = in_isEndOfTemplateMark ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationAST::GGS_terminalDeclarationAST (const GGS_lstring & inOperand0,
                                                        const GGS__5B_sentLexicalAttributeAST_5D_ & inOperand1,
                                                        const GGS_lstring & inOperand2,
                                                        const GGS_lstring & inOperand3,
                                                        const GGS_bool & inOperand4,
                                                        const GGS_bool & inOperand5) :
mProperty_mName (inOperand0),
mProperty_mSentAttributeList (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mStyle (inOperand3),
mProperty_nonAtomicSelection (inOperand4),
mProperty_isEndOfTemplateMark (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalDeclarationAST::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mStyle.isValid () && mProperty_nonAtomicSelection.isValid () && mProperty_isEndOfTemplateMark.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationAST::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_nonAtomicSelection.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalDeclarationAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_nonAtomicSelection.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isEndOfTemplateMark.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalDeclarationAST ("terminalDeclarationAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationAST::GGS_lexicalListDeclarationAST (void) :
mProperty_mName (),
mProperty_mStyle (),
mProperty_mSyntaxErrorMessage (),
mProperty_mSentAttributeList (),
mProperty_mEntryList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationAST::GGS_lexicalListDeclarationAST (const GGS_lexicalListDeclarationAST & inSource) :
mProperty_mName (inSource.mProperty_mName),
mProperty_mStyle (inSource.mProperty_mStyle),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mEntryList (inSource.mProperty_mEntryList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationAST & GGS_lexicalListDeclarationAST::operator = (const GGS_lexicalListDeclarationAST & inSource) {
  mProperty_mName = inSource.mProperty_mName ;
  mProperty_mStyle = inSource.mProperty_mStyle ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mEntryList = inSource.mProperty_mEntryList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalListDeclarationAST GGS_lexicalListDeclarationAST::init_21__21__21__21__21_ (const GGS_lstring & in_mName,
                                                                                       const GGS_lstring & in_mStyle,
                                                                                       const GGS_lstring & in_mSyntaxErrorMessage,
                                                                                       const GGS__5B_sentLexicalAttributeAST_5D_ & in_mSentAttributeList,
                                                                                       const GGS__5B_lexicalListEntryAST_5D_ & in_mEntryList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalListDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mName = in_mName ;
  result.mProperty_mStyle = in_mStyle ;
  result.mProperty_mSyntaxErrorMessage = in_mSyntaxErrorMessage ;
  result.mProperty_mSentAttributeList = in_mSentAttributeList ;
  result.mProperty_mEntryList = in_mEntryList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationAST::GGS_lexicalListDeclarationAST (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_lstring & inOperand2,
                                                              const GGS__5B_sentLexicalAttributeAST_5D_ & inOperand3,
                                                              const GGS__5B_lexicalListEntryAST_5D_ & inOperand4) :
mProperty_mName (inOperand0),
mProperty_mStyle (inOperand1),
mProperty_mSyntaxErrorMessage (inOperand2),
mProperty_mSentAttributeList (inOperand3),
mProperty_mEntryList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalListDeclarationAST::isValid (void) const {
  return mProperty_mName.isValid () && mProperty_mStyle.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mEntryList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationAST::drop (void) {
  mProperty_mName.drop () ;
  mProperty_mStyle.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mEntryList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalListDeclarationAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalListDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStyle.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxErrorMessage.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSentAttributeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEntryList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalListDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalListDeclarationAST ("lexicalListDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalListDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalListDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchAST::GGS_lexicalWhileBranchAST (void) :
mProperty_mWhileExpression (),
mProperty_mWhileInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchAST::GGS_lexicalWhileBranchAST (const GGS_lexicalWhileBranchAST & inSource) :
mProperty_mWhileExpression (inSource.mProperty_mWhileExpression),
mProperty_mWhileInstructionList (inSource.mProperty_mWhileInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchAST & GGS_lexicalWhileBranchAST::operator = (const GGS_lexicalWhileBranchAST & inSource) {
  mProperty_mWhileExpression = inSource.mProperty_mWhileExpression ;
  mProperty_mWhileInstructionList = inSource.mProperty_mWhileInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalWhileBranchAST GGS_lexicalWhileBranchAST::init_21__21_ (const GGS_lexicalExpressionAST & in_mWhileExpression,
                                                                   const GGS__5B_lexicalInstructionAST_5D_ & in_mWhileInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalWhileBranchAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mWhileExpression = in_mWhileExpression ;
  result.mProperty_mWhileInstructionList = in_mWhileInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchAST::GGS_lexicalWhileBranchAST (const GGS_lexicalExpressionAST & inOperand0,
                                                      const GGS__5B_lexicalInstructionAST_5D_ & inOperand1) :
mProperty_mWhileExpression (inOperand0),
mProperty_mWhileInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalWhileBranchAST::isValid (void) const {
  return mProperty_mWhileExpression.isValid () && mProperty_mWhileInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchAST::drop (void) {
  mProperty_mWhileExpression.drop () ;
  mProperty_mWhileInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalWhileBranchAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalWhileBranchAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mWhileInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalWhileBranchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalWhileBranchAST ("lexicalWhileBranchAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalWhileBranchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalWhileBranchAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValue::GGS_lexicalSentValue (void) :
mProperty_mLexicalFormalSelector (),
mProperty_mLexicalAttributeName (),
mProperty_mLexicalType () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValue::GGS_lexicalSentValue (const GGS_lexicalSentValue & inSource) :
mProperty_mLexicalFormalSelector (inSource.mProperty_mLexicalFormalSelector),
mProperty_mLexicalAttributeName (inSource.mProperty_mLexicalAttributeName),
mProperty_mLexicalType (inSource.mProperty_mLexicalType) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValue & GGS_lexicalSentValue::operator = (const GGS_lexicalSentValue & inSource) {
  mProperty_mLexicalFormalSelector = inSource.mProperty_mLexicalFormalSelector ;
  mProperty_mLexicalAttributeName = inSource.mProperty_mLexicalAttributeName ;
  mProperty_mLexicalType = inSource.mProperty_mLexicalType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSentValue GGS_lexicalSentValue::init_21__21__21_ (const GGS_lstring & in_mLexicalFormalSelector,
                                                             const GGS_string & in_mLexicalAttributeName,
                                                             const GGS_lexicalTypeEnum & in_mLexicalType,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSentValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLexicalFormalSelector = in_mLexicalFormalSelector ;
  result.mProperty_mLexicalAttributeName = in_mLexicalAttributeName ;
  result.mProperty_mLexicalType = in_mLexicalType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSentValue::GGS_lexicalSentValue (const GGS_lstring & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_lexicalTypeEnum & inOperand2) :
mProperty_mLexicalFormalSelector (inOperand0),
mProperty_mLexicalAttributeName (inOperand1),
mProperty_mLexicalType (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSentValue::isValid (void) const {
  return mProperty_mLexicalFormalSelector.isValid () && mProperty_mLexicalAttributeName.isValid () && mProperty_mLexicalType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValue::drop (void) {
  mProperty_mLexicalFormalSelector.drop () ;
  mProperty_mLexicalAttributeName.drop () ;
  mProperty_mLexicalType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSentValue::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSentValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLexicalFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLexicalType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSentValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSentValue ("lexicalSentValue",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSentValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSentValue ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueComponentAST_2E_weak::objectCompare (const GGS_lexiqueComponentAST_2E_weak & inOperand) const {
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

GGS_lexiqueComponentAST_2E_weak::GGS_lexiqueComponentAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak & GGS_lexiqueComponentAST_2E_weak::operator = (const GGS_lexiqueComponentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak::GGS_lexiqueComponentAST_2E_weak (const GGS_lexiqueComponentAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST_2E_weak GGS_lexiqueComponentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueComponentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueComponentAST result ;
  if (isValid ()) {
    const cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueComponentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST_2E_weak::bang_lexiqueComponentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueComponentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueComponentAST) ;
      result = GGS_lexiqueComponentAST ((cPtr_lexiqueComponentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueComponentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ("lexiqueComponentAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueComponentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

#include "MF_MemoryControl.h"
#include "execution-mode.h"

#include "FileManager.h"

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//                                     LL(1) PRODUCTION RULES                                       
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductions_projectComponentGrammar [] = {
// At index 0 : <project_component_start_symbol>, in file 'projectComponentSyntax.galgas', line 39
  TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
//---- Added productions from 'select' and 'repeat' instructions
// At index 2 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_END_PRODUCTION ()
// At index 3 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_u_33__32__2D_build_2D_option) // $#u32-build-option$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (2) // <select_projectComponentSyntax_1>
, TOP_DOWN_NONTERMINAL (3) // <select_projectComponentSyntax_2>
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 12 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_string_2D_build_2D_option) // $#string-build-option$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (4) // <select_projectComponentSyntax_3>
, TOP_DOWN_NONTERMINAL (5) // <select_projectComponentSyntax_4>
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 21 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_bool_2D_build_2D_option) // $#bool-build-option$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_NONTERMINAL (6) // <select_projectComponentSyntax_5>
, TOP_DOWN_NONTERMINAL (7) // <select_projectComponentSyntax_6>
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__2D__3E_) // $->$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 30 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_lexical_2D_style) // $#lexical-style$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_identifier) // $identifier$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 36 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_productName) // $#productName$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 41 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_version) // $#version$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__2E_) // $.$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_literalInt) // $literalInt$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__2E_) // $.$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken_literalInt) // $literalInt$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 50 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_macSwiftApp) // $#macSwiftApp$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 53 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_macosx) // $#makefile-macosx$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 56 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_unix) // $#makefile-unix$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 59 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx) // $#makefile-x86linux32-on-macosx$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 62 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx) // $#makefile-x86linux64-on-macosx$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 65 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx) // $#makefile-arm64-linux-on-macosx$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 68 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx) // $#makefile-win32-on-macosx$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 71 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_windows) // $#codeblocks-windows$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 74 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_33__32_) // $#codeblocks-linux32$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 77 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_36__34_) // $#codeblocks-linux64$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 80 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_macAppBundleBaseName) // $#macAppBundleBaseName$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 85 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_libpmCustomPath) // $#libpmCustomPath$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 90 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__23_macCodeSign) // $#macCodeSign$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__3A_) // $:$
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_NONTERMINAL (1) // <select_projectComponentSyntax_0>
, TOP_DOWN_END_PRODUCTION ()
// At index 95 : <select_projectComponentSyntax_1>, in file 'projectComponentSyntax.galgas', line 170
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__27_char_27_) // $'char'$
, TOP_DOWN_END_PRODUCTION ()
// At index 97 : <select_projectComponentSyntax_1>, in file 'projectComponentSyntax.galgas', line 170
, TOP_DOWN_END_PRODUCTION ()
// At index 98 : <select_projectComponentSyntax_2>, in file 'projectComponentSyntax.galgas', line 176
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 100 : <select_projectComponentSyntax_2>, in file 'projectComponentSyntax.galgas', line 176
, TOP_DOWN_END_PRODUCTION ()
// At index 101 : <select_projectComponentSyntax_3>, in file 'projectComponentSyntax.galgas', line 208
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__27_char_27_) // $'char'$
, TOP_DOWN_END_PRODUCTION ()
// At index 103 : <select_projectComponentSyntax_3>, in file 'projectComponentSyntax.galgas', line 208
, TOP_DOWN_END_PRODUCTION ()
// At index 104 : <select_projectComponentSyntax_4>, in file 'projectComponentSyntax.galgas', line 214
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 106 : <select_projectComponentSyntax_4>, in file 'projectComponentSyntax.galgas', line 214
, TOP_DOWN_END_PRODUCTION ()
// At index 107 : <select_projectComponentSyntax_5>, in file 'projectComponentSyntax.galgas', line 246
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__27_char_27_) // $'char'$
, TOP_DOWN_END_PRODUCTION ()
// At index 109 : <select_projectComponentSyntax_5>, in file 'projectComponentSyntax.galgas', line 246
, TOP_DOWN_END_PRODUCTION ()
// At index 110 : <select_projectComponentSyntax_6>, in file 'projectComponentSyntax.galgas', line 252
, TOP_DOWN_TERMINAL (Lexique_projectComponentScanner::kToken__22_string_22_) // $"string"$
, TOP_DOWN_END_PRODUCTION ()
// At index 112 : <select_projectComponentSyntax_6>, in file 'projectComponentSyntax.galgas', line 252
, TOP_DOWN_END_PRODUCTION ()
// At index 113 : <>, in file '.galgas', line 0
, TOP_DOWN_NONTERMINAL (0) // <project_component_start_symbol>
, TOP_DOWN_END_PRODUCTION ()
} ;

//--------------------------------------------------------------------------------------------------
//
//                                P R O D U C T I O N    N A M E S                                  
//
//--------------------------------------------------------------------------------------------------

static const ProductionNameDescriptor gProductionNames_projectComponentGrammar [34] = {
 {"<project_component_start_symbol>", "projectComponentSyntax", 0}, // at index 0
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 2}, // at index 1
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 3}, // at index 2
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 12}, // at index 3
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 21}, // at index 4
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 30}, // at index 5
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 36}, // at index 6
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 41}, // at index 7
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 50}, // at index 8
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 53}, // at index 9
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 56}, // at index 10
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 59}, // at index 11
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 62}, // at index 12
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 65}, // at index 13
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 68}, // at index 14
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 71}, // at index 15
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 74}, // at index 16
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 77}, // at index 17
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 80}, // at index 18
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 85}, // at index 19
 {"<select_projectComponentSyntax_0>", "projectComponentSyntax", 90}, // at index 20
 {"<select_projectComponentSyntax_1>", "projectComponentSyntax", 95}, // at index 21
 {"<select_projectComponentSyntax_1>", "projectComponentSyntax", 97}, // at index 22
 {"<select_projectComponentSyntax_2>", "projectComponentSyntax", 98}, // at index 23
 {"<select_projectComponentSyntax_2>", "projectComponentSyntax", 100}, // at index 24
 {"<select_projectComponentSyntax_3>", "projectComponentSyntax", 101}, // at index 25
 {"<select_projectComponentSyntax_3>", "projectComponentSyntax", 103}, // at index 26
 {"<select_projectComponentSyntax_4>", "projectComponentSyntax", 104}, // at index 27
 {"<select_projectComponentSyntax_4>", "projectComponentSyntax", 106}, // at index 28
 {"<select_projectComponentSyntax_5>", "projectComponentSyntax", 107}, // at index 29
 {"<select_projectComponentSyntax_5>", "projectComponentSyntax", 109}, // at index 30
 {"<select_projectComponentSyntax_6>", "projectComponentSyntax", 110}, // at index 31
 {"<select_projectComponentSyntax_6>", "projectComponentSyntax", 112}, // at index 32
 {"<>", "", 113} // at index 33
} ;

//--------------------------------------------------------------------------------------------------
//
//                       L L ( 1 )    P R O D U C T I O N    I N D E X E S                          
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionIndexes_projectComponentGrammar [34] = {
0, // index 0 : <project_component_start_symbol>, in file 'projectComponentSyntax.galgas', line 39
2, // index 1 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
3, // index 2 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
12, // index 3 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
21, // index 4 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
30, // index 5 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
36, // index 6 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
41, // index 7 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
50, // index 8 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
53, // index 9 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
56, // index 10 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
59, // index 11 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
62, // index 12 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
65, // index 13 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
68, // index 14 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
71, // index 15 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
74, // index 16 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
77, // index 17 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
80, // index 18 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
85, // index 19 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
90, // index 20 : <select_projectComponentSyntax_0>, in file 'projectComponentSyntax.galgas', line 157
95, // index 21 : <select_projectComponentSyntax_1>, in file 'projectComponentSyntax.galgas', line 170
97, // index 22 : <select_projectComponentSyntax_1>, in file 'projectComponentSyntax.galgas', line 170
98, // index 23 : <select_projectComponentSyntax_2>, in file 'projectComponentSyntax.galgas', line 176
100, // index 24 : <select_projectComponentSyntax_2>, in file 'projectComponentSyntax.galgas', line 176
101, // index 25 : <select_projectComponentSyntax_3>, in file 'projectComponentSyntax.galgas', line 208
103, // index 26 : <select_projectComponentSyntax_3>, in file 'projectComponentSyntax.galgas', line 208
104, // index 27 : <select_projectComponentSyntax_4>, in file 'projectComponentSyntax.galgas', line 214
106, // index 28 : <select_projectComponentSyntax_4>, in file 'projectComponentSyntax.galgas', line 214
107, // index 29 : <select_projectComponentSyntax_5>, in file 'projectComponentSyntax.galgas', line 246
109, // index 30 : <select_projectComponentSyntax_5>, in file 'projectComponentSyntax.galgas', line 246
110, // index 31 : <select_projectComponentSyntax_6>, in file 'projectComponentSyntax.galgas', line 252
112, // index 32 : <select_projectComponentSyntax_6>, in file 'projectComponentSyntax.galgas', line 252
113 // index 33 : <>, in file '.galgas', line 0
} ;

//--------------------------------------------------------------------------------------------------
//
//                 L L ( 1 )    F I R S T    P R O D U C T I O N    I N D E X E S                   
//
//--------------------------------------------------------------------------------------------------

static const int32_t gFirstProductionIndexes_projectComponentGrammar [10] = {
0, // at 0 : <project_component_start_symbol>
1, // at 1 : <select_projectComponentSyntax_0>
21, // at 2 : <select_projectComponentSyntax_1>
23, // at 3 : <select_projectComponentSyntax_2>
25, // at 4 : <select_projectComponentSyntax_3>
27, // at 5 : <select_projectComponentSyntax_4>
29, // at 6 : <select_projectComponentSyntax_5>
31, // at 7 : <select_projectComponentSyntax_6>
33, // at 8 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                          L L ( 1 )    D E C I S I O N    T A B L E S                             
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecision_projectComponentGrammar [] = {
// At index 0 : <project_component_start_symbol> only one production, no choice
  -1,
//---- Added non terminal symbols from 'select' and 'repeat' instructions
// At index 1 : <select_projectComponentSyntax_0>
Lexique_projectComponentScanner::kToken_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__23_u_33__32__2D_build_2D_option, -1, // Choice 2
Lexique_projectComponentScanner::kToken__23_string_2D_build_2D_option, -1, // Choice 3
Lexique_projectComponentScanner::kToken__23_bool_2D_build_2D_option, -1, // Choice 4
Lexique_projectComponentScanner::kToken__23_lexical_2D_style, -1, // Choice 5
Lexique_projectComponentScanner::kToken__23_productName, -1, // Choice 6
Lexique_projectComponentScanner::kToken__23_version, -1, // Choice 7
Lexique_projectComponentScanner::kToken__23_macSwiftApp, -1, // Choice 8
Lexique_projectComponentScanner::kToken__23_makefile_2D_macosx, -1, // Choice 9
Lexique_projectComponentScanner::kToken__23_makefile_2D_unix, -1, // Choice 10
Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_33__32__2D_on_2D_macosx, -1, // Choice 11
Lexique_projectComponentScanner::kToken__23_makefile_2D_x_38__36_linux_36__34__2D_on_2D_macosx, -1, // Choice 12
Lexique_projectComponentScanner::kToken__23_makefile_2D_arm_36__34__2D_linux_2D_on_2D_macosx, -1, // Choice 13
Lexique_projectComponentScanner::kToken__23_makefile_2D_win_33__32__2D_on_2D_macosx, -1, // Choice 14
Lexique_projectComponentScanner::kToken__23_codeblocks_2D_windows, -1, // Choice 15
Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_33__32_, -1, // Choice 16
Lexique_projectComponentScanner::kToken__23_codeblocks_2D_linux_36__34_, -1, // Choice 17
Lexique_projectComponentScanner::kToken__23_macAppBundleBaseName, -1, // Choice 18
Lexique_projectComponentScanner::kToken__23_libpmCustomPath, -1, // Choice 19
Lexique_projectComponentScanner::kToken__23_macCodeSign, -1, // Choice 20
  -1,
// At index 42 : <select_projectComponentSyntax_1>
Lexique_projectComponentScanner::kToken__27_char_27_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__22_string_22_, Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 48 : <select_projectComponentSyntax_2>
Lexique_projectComponentScanner::kToken__22_string_22_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 53 : <select_projectComponentSyntax_3>
Lexique_projectComponentScanner::kToken__27_char_27_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__22_string_22_, Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 59 : <select_projectComponentSyntax_4>
Lexique_projectComponentScanner::kToken__22_string_22_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 64 : <select_projectComponentSyntax_5>
Lexique_projectComponentScanner::kToken__27_char_27_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__22_string_22_, Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 70 : <select_projectComponentSyntax_6>
Lexique_projectComponentScanner::kToken__22_string_22_, -1, // Choice 1
Lexique_projectComponentScanner::kToken__2D__3E_, -1, // Choice 2
  -1,
// At index 75 : <> only one production, no choice
  -1,
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  L L ( 1 )    D E C I S I O N    T A B L E S    I N D E X E S                    
//
//--------------------------------------------------------------------------------------------------

static const int32_t gDecisionIndexes_projectComponentGrammar [10] = {
0, // at 0 : <project_component_start_symbol>
1, // at 1 : <select_projectComponentSyntax_0>
42, // at 2 : <select_projectComponentSyntax_1>
48, // at 3 : <select_projectComponentSyntax_2>
53, // at 4 : <select_projectComponentSyntax_3>
59, // at 5 : <select_projectComponentSyntax_4>
64, // at 6 : <select_projectComponentSyntax_5>
70, // at 7 : <select_projectComponentSyntax_6>
75, // at 8 : <>
0} ;

//--------------------------------------------------------------------------------------------------
//
//                  'project_component_start_symbol' non terminal implementation                    
//
//--------------------------------------------------------------------------------------------------

void cGrammar_projectComponentGrammar::nt_project_5F_component_5F_start_5F_symbol_indexing (Lexique_projectComponentScanner * inLexique) {
  rule_projectComponentSyntax_project_5F_component_5F_start_5F_symbol_i0_indexing(inLexique) ;
}

void cGrammar_projectComponentGrammar::nt_project_5F_component_5F_start_5F_symbol_ (GGS_projectSettings & parameter_1,
                                Lexique_projectComponentScanner * inLexique) {
  rule_projectComponentSyntax_project_5F_component_5F_start_5F_symbol_i0_(parameter_1, inLexique) ;
}

void cGrammar_projectComponentGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_projectComponentScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_projectComponentScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performTopDownParsing (gProductions_projectComponentGrammar, gProductionNames_projectComponentGrammar, gProductionIndexes_projectComponentGrammar,
                                                    gFirstProductionIndexes_projectComponentGrammar, gDecision_projectComponentGrammar, gDecisionIndexes_projectComponentGrammar, 113) ;
    if (ok) {
      cGrammar_projectComponentGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_projectComponentScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_projectComponentScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_projectComponentGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_projectComponentScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_projectComponentScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performTopDownParsing (gProductions_projectComponentGrammar, gProductionNames_projectComponentGrammar, gProductionIndexes_projectComponentGrammar,
                                    gFirstProductionIndexes_projectComponentGrammar, gDecision_projectComponentGrammar, gDecisionIndexes_projectComponentGrammar, 113) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_projectComponentGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_projectSettings &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
    Lexique_projectComponentScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_projectComponentScanner (inCompiler, filePath COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performTopDownParsing (gProductions_projectComponentGrammar, gProductionNames_projectComponentGrammar, gProductionIndexes_projectComponentGrammar,
                                                      gFirstProductionIndexes_projectComponentGrammar, gDecision_projectComponentGrammar, gDecisionIndexes_projectComponentGrammar, 113) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_projectComponentGrammar grammar ;
        grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, scanner) ;
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

void cGrammar_projectComponentGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_projectSettings &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_projectComponentScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_projectComponentScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    const bool ok = scanner->performTopDownParsing (gProductions_projectComponentGrammar, gProductionNames_projectComponentGrammar, gProductionIndexes_projectComponentGrammar,
                                                    gFirstProductionIndexes_projectComponentGrammar, gDecision_projectComponentGrammar, gDecisionIndexes_projectComponentGrammar, 113) ;
    if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
      cGrammar_projectComponentGrammar grammar ;
      grammar.nt_project_5F_component_5F_start_5F_symbol_ (parameter_1, scanner) ;
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_0' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_0 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_1' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_1 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_2' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_2 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_3' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_3 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_4' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_4 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_5' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_5 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------
//
//              'select_projectComponentSyntax_6' added non terminal implementation                 
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_projectComponentGrammar::select_projectComponentSyntax_6 (Lexique_projectComponentScanner * inLexique) {
  return inLexique->nextProductionIndex () ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cppTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppTypeName (const GGS_lexicalTypeEnum & inObject,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result = GGS_string ("utf32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result = GGS_string ("uint32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result = GGS_string ("uint64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result = GGS_string ("int32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result = GGS_string ("int64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result = GGS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST::GGS_formalParameterAST (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentTypeName (),
mProperty_mFormalArgumentName (),
mProperty_mIsUnused () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST::GGS_formalParameterAST (const GGS_formalParameterAST & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentTypeName (inSource.mProperty_mFormalArgumentTypeName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsUnused (inSource.mProperty_mIsUnused) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST & GGS_formalParameterAST::operator = (const GGS_formalParameterAST & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentTypeName = inSource.mProperty_mFormalArgumentTypeName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsUnused = inSource.mProperty_mIsUnused ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterAST GGS_formalParameterAST::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                         const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                         const GGS_lstring & in_mFormalArgumentTypeName,
                                                                         const GGS_lstring & in_mFormalArgumentName,
                                                                         const GGS_bool & in_mIsUnused,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentTypeName = in_mFormalArgumentTypeName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsUnused = in_mIsUnused ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterAST::GGS_formalParameterAST (const GGS_lstring & inOperand0,
                                                const GGS_formalArgumentPassingModeAST & inOperand1,
                                                const GGS_lstring & inOperand2,
                                                const GGS_lstring & inOperand3,
                                                const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentTypeName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsUnused (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterAST::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentTypeName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsUnused.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterAST::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentTypeName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsUnused.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsUnused.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterAST ("formalParameterAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateAST::GGS_filewrapperTemplateAST (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplatePath (),
mProperty_mFilewrapperTemplateFormalInputParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateAST::GGS_filewrapperTemplateAST (const GGS_filewrapperTemplateAST & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplatePath (inSource.mProperty_mFilewrapperTemplatePath),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateAST & GGS_filewrapperTemplateAST::operator = (const GGS_filewrapperTemplateAST & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplatePath = inSource.mProperty_mFilewrapperTemplatePath ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateAST GGS_filewrapperTemplateAST::init_21__21__21_ (const GGS_lstring & in_mFilewrapperTemplateName,
                                                                         const GGS_lstring & in_mFilewrapperTemplatePath,
                                                                         const GGS__5B_formalTemplateInputParameterAST_5D_ & in_mFilewrapperTemplateFormalInputParameters,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplatePath = in_mFilewrapperTemplatePath ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateAST::GGS_filewrapperTemplateAST (const GGS_lstring & inOperand0,
                                                        const GGS_lstring & inOperand1,
                                                        const GGS__5B_formalTemplateInputParameterAST_5D_ & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplatePath (inOperand1),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateAST::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplatePath.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateAST::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplatePath.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplatePath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateAST ("filewrapperTemplateAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty::GGS_typedProperty (void) :
mProperty_typeEntry (),
mProperty_name (),
mProperty_initialization (),
mProperty_hasSetter (),
mProperty_hasSelector () {
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty::GGS_typedProperty (const GGS_typedProperty & inSource) :
mProperty_typeEntry (inSource.mProperty_typeEntry),
mProperty_name (inSource.mProperty_name),
mProperty_initialization (inSource.mProperty_initialization),
mProperty_hasSetter (inSource.mProperty_hasSetter),
mProperty_hasSelector (inSource.mProperty_hasSelector) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty & GGS_typedProperty::operator = (const GGS_typedProperty & inSource) {
  mProperty_typeEntry = inSource.mProperty_typeEntry ;
  mProperty_name = inSource.mProperty_name ;
  mProperty_initialization = inSource.mProperty_initialization ;
  mProperty_hasSetter = inSource.mProperty_hasSetter ;
  mProperty_hasSelector = inSource.mProperty_hasSelector ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typedProperty GGS_typedProperty::init_21__21__21__21_hasSetter_21_hasSelector (const GGS_unifiedTypeMapEntry & in_typeEntry,
                                                                                   const GGS_lstring & in_name,
                                                                                   const GGS_propertyInCollectionInitializationAST & in_initialization,
                                                                                   const GGS_bool & in_hasSetter,
                                                                                   const GGS_bool & in_hasSelector,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typedProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeEntry = in_typeEntry ;
  result.mProperty_name = in_name ;
  result.mProperty_initialization = in_initialization ;
  result.mProperty_hasSetter = in_hasSetter ;
  result.mProperty_hasSelector = in_hasSelector ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typedProperty::GGS_typedProperty (const GGS_unifiedTypeMapEntry & inOperand0,
                                      const GGS_lstring & inOperand1,
                                      const GGS_propertyInCollectionInitializationAST & inOperand2,
                                      const GGS_bool & inOperand3,
                                      const GGS_bool & inOperand4) :
mProperty_typeEntry (inOperand0),
mProperty_name (inOperand1),
mProperty_initialization (inOperand2),
mProperty_hasSetter (inOperand3),
mProperty_hasSelector (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_typedProperty::isValid (void) const {
  return mProperty_typeEntry.isValid () && mProperty_name.isValid () && mProperty_initialization.isValid () && mProperty_hasSetter.isValid () && mProperty_hasSelector.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedProperty::drop (void) {
  mProperty_typeEntry.drop () ;
  mProperty_name.drop () ;
  mProperty_initialization.drop () ;
  mProperty_hasSetter.drop () ;
  mProperty_hasSelector.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typedProperty::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typedProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeEntry.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialization.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSelector.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typedProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typedProperty ("typedProperty",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typedProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typedProperty ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (void) :
mProperty_typeName (),
mProperty_isPredefined (),
mProperty_isConcrete (),
mProperty_isFinal (),
mProperty_superType (),
mProperty_typeKind (),
mProperty_supportArrayLiteral (),
mProperty_allTypedPropertyList (),
mProperty_propertyMap (),
mProperty_currentTypedPropertyList (),
mProperty_initializerMap (),
mProperty_classFunctionMap (),
mProperty_getterMap (),
mProperty_setterMap (),
mProperty_instanceMethodMap (),
mProperty_classMethodMap (),
mProperty_unwrappedType (),
mProperty_readSubscriptMap (),
mProperty_writeSubscriptMap (),
mProperty_enumerationDescriptorList (),
mProperty_features (),
mProperty_generateHeaderInSeparateFile (),
mProperty_typeForEnumeratedElement (),
mProperty_headerFileName (),
mProperty_headerKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (const GGS_unifiedTypeDefinition & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_isPredefined (inSource.mProperty_isPredefined),
mProperty_isConcrete (inSource.mProperty_isConcrete),
mProperty_isFinal (inSource.mProperty_isFinal),
mProperty_superType (inSource.mProperty_superType),
mProperty_typeKind (inSource.mProperty_typeKind),
mProperty_supportArrayLiteral (inSource.mProperty_supportArrayLiteral),
mProperty_allTypedPropertyList (inSource.mProperty_allTypedPropertyList),
mProperty_propertyMap (inSource.mProperty_propertyMap),
mProperty_currentTypedPropertyList (inSource.mProperty_currentTypedPropertyList),
mProperty_initializerMap (inSource.mProperty_initializerMap),
mProperty_classFunctionMap (inSource.mProperty_classFunctionMap),
mProperty_getterMap (inSource.mProperty_getterMap),
mProperty_setterMap (inSource.mProperty_setterMap),
mProperty_instanceMethodMap (inSource.mProperty_instanceMethodMap),
mProperty_classMethodMap (inSource.mProperty_classMethodMap),
mProperty_unwrappedType (inSource.mProperty_unwrappedType),
mProperty_readSubscriptMap (inSource.mProperty_readSubscriptMap),
mProperty_writeSubscriptMap (inSource.mProperty_writeSubscriptMap),
mProperty_enumerationDescriptorList (inSource.mProperty_enumerationDescriptorList),
mProperty_features (inSource.mProperty_features),
mProperty_generateHeaderInSeparateFile (inSource.mProperty_generateHeaderInSeparateFile),
mProperty_typeForEnumeratedElement (inSource.mProperty_typeForEnumeratedElement),
mProperty_headerFileName (inSource.mProperty_headerFileName),
mProperty_headerKind (inSource.mProperty_headerKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition & GGS_unifiedTypeDefinition::operator = (const GGS_unifiedTypeDefinition & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_isPredefined = inSource.mProperty_isPredefined ;
  mProperty_isConcrete = inSource.mProperty_isConcrete ;
  mProperty_isFinal = inSource.mProperty_isFinal ;
  mProperty_superType = inSource.mProperty_superType ;
  mProperty_typeKind = inSource.mProperty_typeKind ;
  mProperty_supportArrayLiteral = inSource.mProperty_supportArrayLiteral ;
  mProperty_allTypedPropertyList = inSource.mProperty_allTypedPropertyList ;
  mProperty_propertyMap = inSource.mProperty_propertyMap ;
  mProperty_currentTypedPropertyList = inSource.mProperty_currentTypedPropertyList ;
  mProperty_initializerMap = inSource.mProperty_initializerMap ;
  mProperty_classFunctionMap = inSource.mProperty_classFunctionMap ;
  mProperty_getterMap = inSource.mProperty_getterMap ;
  mProperty_setterMap = inSource.mProperty_setterMap ;
  mProperty_instanceMethodMap = inSource.mProperty_instanceMethodMap ;
  mProperty_classMethodMap = inSource.mProperty_classMethodMap ;
  mProperty_unwrappedType = inSource.mProperty_unwrappedType ;
  mProperty_readSubscriptMap = inSource.mProperty_readSubscriptMap ;
  mProperty_writeSubscriptMap = inSource.mProperty_writeSubscriptMap ;
  mProperty_enumerationDescriptorList = inSource.mProperty_enumerationDescriptorList ;
  mProperty_features = inSource.mProperty_features ;
  mProperty_generateHeaderInSeparateFile = inSource.mProperty_generateHeaderInSeparateFile ;
  mProperty_typeForEnumeratedElement = inSource.mProperty_typeForEnumeratedElement ;
  mProperty_headerFileName = inSource.mProperty_headerFileName ;
  mProperty_headerKind = inSource.mProperty_headerKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeDefinition GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportArrayLiteral_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_writeSubscriptMap_21_enumerationDescriptorList_21_features_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const GGS_lstring & in_typeName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_bool & in_isPredefined,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_bool & in_isConcrete,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_bool & in_isFinal,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_unifiedTypeMapEntry & in_superType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_typeKindEnum & in_typeKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_bool & in_supportArrayLiteral,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS__5B_typedProperty_5D_ & in_allTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_propertyMap & in_propertyMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS__5B_typedProperty_5D_ & in_currentTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_initializerMap & in_initializerMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_classFunctionMap & in_classFunctionMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_getterMap & in_getterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_setterMap & in_setterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_instanceMethodMap & in_instanceMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_classMethodMap & in_classMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_readSubcriptMap & in_readSubscriptMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_writeSubcriptMap & in_writeSubscriptMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS__5B_enumerationDescriptor_5D_ & in_enumerationDescriptorList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_typeFeatures & in_features,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_bool & in_generateHeaderInSeparateFile,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_unifiedTypeMapEntry & in_typeForEnumeratedElement,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_string & in_headerFileName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         const GGS_headerKind & in_headerKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         Compiler * inCompiler
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeDefinition result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_isPredefined = in_isPredefined ;
  result.mProperty_isConcrete = in_isConcrete ;
  result.mProperty_isFinal = in_isFinal ;
  result.mProperty_superType = in_superType ;
  result.mProperty_typeKind = in_typeKind ;
  result.mProperty_supportArrayLiteral = in_supportArrayLiteral ;
  result.mProperty_allTypedPropertyList = in_allTypedPropertyList ;
  result.mProperty_propertyMap = in_propertyMap ;
  result.mProperty_currentTypedPropertyList = in_currentTypedPropertyList ;
  result.mProperty_initializerMap = in_initializerMap ;
  result.mProperty_classFunctionMap = in_classFunctionMap ;
  result.mProperty_getterMap = in_getterMap ;
  result.mProperty_setterMap = in_setterMap ;
  result.mProperty_instanceMethodMap = in_instanceMethodMap ;
  result.mProperty_classMethodMap = in_classMethodMap ;
  result.mProperty_unwrappedType = in_unwrappedType ;
  result.mProperty_readSubscriptMap = in_readSubscriptMap ;
  result.mProperty_writeSubscriptMap = in_writeSubscriptMap ;
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_features = in_features ;
  result.mProperty_generateHeaderInSeparateFile = in_generateHeaderInSeparateFile ;
  result.mProperty_typeForEnumeratedElement = in_typeForEnumeratedElement ;
  result.mProperty_headerFileName = in_headerFileName ;
  result.mProperty_headerKind = in_headerKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (const GGS_lstring & inOperand0,
                                                      const GGS_bool & inOperand1,
                                                      const GGS_bool & inOperand2,
                                                      const GGS_bool & inOperand3,
                                                      const GGS_unifiedTypeMapEntry & inOperand4,
                                                      const GGS_typeKindEnum & inOperand5,
                                                      const GGS_bool & inOperand6,
                                                      const GGS__5B_typedProperty_5D_ & inOperand7,
                                                      const GGS_propertyMap & inOperand8,
                                                      const GGS__5B_typedProperty_5D_ & inOperand9,
                                                      const GGS_initializerMap & inOperand10,
                                                      const GGS_classFunctionMap & inOperand11,
                                                      const GGS_getterMap & inOperand12,
                                                      const GGS_setterMap & inOperand13,
                                                      const GGS_instanceMethodMap & inOperand14,
                                                      const GGS_classMethodMap & inOperand15,
                                                      const GGS_unifiedTypeMapEntry & inOperand16,
                                                      const GGS_readSubcriptMap & inOperand17,
                                                      const GGS_writeSubcriptMap & inOperand18,
                                                      const GGS__5B_enumerationDescriptor_5D_ & inOperand19,
                                                      const GGS_typeFeatures & inOperand20,
                                                      const GGS_bool & inOperand21,
                                                      const GGS_unifiedTypeMapEntry & inOperand22,
                                                      const GGS_string & inOperand23,
                                                      const GGS_headerKind & inOperand24) :
mProperty_typeName (inOperand0),
mProperty_isPredefined (inOperand1),
mProperty_isConcrete (inOperand2),
mProperty_isFinal (inOperand3),
mProperty_superType (inOperand4),
mProperty_typeKind (inOperand5),
mProperty_supportArrayLiteral (inOperand6),
mProperty_allTypedPropertyList (inOperand7),
mProperty_propertyMap (inOperand8),
mProperty_currentTypedPropertyList (inOperand9),
mProperty_initializerMap (inOperand10),
mProperty_classFunctionMap (inOperand11),
mProperty_getterMap (inOperand12),
mProperty_setterMap (inOperand13),
mProperty_instanceMethodMap (inOperand14),
mProperty_classMethodMap (inOperand15),
mProperty_unwrappedType (inOperand16),
mProperty_readSubscriptMap (inOperand17),
mProperty_writeSubscriptMap (inOperand18),
mProperty_enumerationDescriptorList (inOperand19),
mProperty_features (inOperand20),
mProperty_generateHeaderInSeparateFile (inOperand21),
mProperty_typeForEnumeratedElement (inOperand22),
mProperty_headerFileName (inOperand23),
mProperty_headerKind (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeDefinition::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_isPredefined.isValid () && mProperty_isConcrete.isValid () && mProperty_isFinal.isValid () && mProperty_superType.isValid () && mProperty_typeKind.isValid () && mProperty_supportArrayLiteral.isValid () && mProperty_allTypedPropertyList.isValid () && mProperty_propertyMap.isValid () && mProperty_currentTypedPropertyList.isValid () && mProperty_initializerMap.isValid () && mProperty_classFunctionMap.isValid () && mProperty_getterMap.isValid () && mProperty_setterMap.isValid () && mProperty_instanceMethodMap.isValid () && mProperty_classMethodMap.isValid () && mProperty_unwrappedType.isValid () && mProperty_readSubscriptMap.isValid () && mProperty_writeSubscriptMap.isValid () && mProperty_enumerationDescriptorList.isValid () && mProperty_features.isValid () && mProperty_generateHeaderInSeparateFile.isValid () && mProperty_typeForEnumeratedElement.isValid () && mProperty_headerFileName.isValid () && mProperty_headerKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_isPredefined.drop () ;
  mProperty_isConcrete.drop () ;
  mProperty_isFinal.drop () ;
  mProperty_superType.drop () ;
  mProperty_typeKind.drop () ;
  mProperty_supportArrayLiteral.drop () ;
  mProperty_allTypedPropertyList.drop () ;
  mProperty_propertyMap.drop () ;
  mProperty_currentTypedPropertyList.drop () ;
  mProperty_initializerMap.drop () ;
  mProperty_classFunctionMap.drop () ;
  mProperty_getterMap.drop () ;
  mProperty_setterMap.drop () ;
  mProperty_instanceMethodMap.drop () ;
  mProperty_classMethodMap.drop () ;
  mProperty_unwrappedType.drop () ;
  mProperty_readSubscriptMap.drop () ;
  mProperty_writeSubscriptMap.drop () ;
  mProperty_enumerationDescriptorList.drop () ;
  mProperty_features.drop () ;
  mProperty_generateHeaderInSeparateFile.drop () ;
  mProperty_typeForEnumeratedElement.drop () ;
  mProperty_headerFileName.drop () ;
  mProperty_headerKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeDefinition:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isPredefined.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isConcrete.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isFinal.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_superType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_supportArrayLiteral.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_allTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_currentTypedPropertyList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initializerMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_classFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_getterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_setterMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_instanceMethodMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_classMethodMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_unwrappedType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_readSubscriptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_writeSubscriptMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enumerationDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_features.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_generateHeaderInSeparateFile.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeForEnumeratedElement.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_headerFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_headerKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeDefinition generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeDefinition ("unifiedTypeDefinition",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeDefinition::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeDefinition ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureElementForGrammarAnalysis::GGS_signatureElementForGrammarAnalysis (void) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (),
mProperty_mGalgasTypeNameForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureElementForGrammarAnalysis::GGS_signatureElementForGrammarAnalysis (const GGS_signatureElementForGrammarAnalysis & inSource) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inSource.mProperty_mFormalArgumentPassingModeForGrammarAnalysis),
mProperty_mGalgasTypeNameForGrammarAnalysis (inSource.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureElementForGrammarAnalysis & GGS_signatureElementForGrammarAnalysis::operator = (const GGS_signatureElementForGrammarAnalysis & inSource) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inSource.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  mProperty_mGalgasTypeNameForGrammarAnalysis = inSource.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_signatureElementForGrammarAnalysis GGS_signatureElementForGrammarAnalysis::init_21__21_ (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                             const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_signatureElementForGrammarAnalysis result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = in_mFormalArgumentPassingModeForGrammarAnalysis ;
  result.mProperty_mGalgasTypeNameForGrammarAnalysis = in_mGalgasTypeNameForGrammarAnalysis ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureElementForGrammarAnalysis::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureElementForGrammarAnalysis::GGS_signatureElementForGrammarAnalysis (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mProperty_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_signatureElementForGrammarAnalysis::isValid (void) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mProperty_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureElementForGrammarAnalysis::drop (void) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mProperty_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureElementForGrammarAnalysis::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @signatureElementForGrammarAnalysis:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalArgumentPassingModeForGrammarAnalysis.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGalgasTypeNameForGrammarAnalysis.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @signatureElementForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_signatureElementForGrammarAnalysis ("signatureElementForGrammarAnalysis",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_signatureElementForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureElementForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleAST::GGS_syntaxRuleAST (void) :
mProperty_mNonterminalName (),
mProperty_mLabelList () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleAST::GGS_syntaxRuleAST (const GGS_syntaxRuleAST & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mLabelList (inSource.mProperty_mLabelList) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleAST & GGS_syntaxRuleAST::operator = (const GGS_syntaxRuleAST & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mLabelList = inSource.mProperty_mLabelList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxRuleAST GGS_syntaxRuleAST::init_21__21_ (const GGS_lstring & in_mNonterminalName,
                                                   const GGS__5B_syntaxRuleLabelAST_5D_ & in_mLabelList,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxRuleAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mLabelList = in_mLabelList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxRuleAST::GGS_syntaxRuleAST (const GGS_lstring & inOperand0,
                                      const GGS__5B_syntaxRuleLabelAST_5D_ & inOperand1) :
mProperty_mNonterminalName (inOperand0),
mProperty_mLabelList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxRuleAST::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mLabelList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleAST::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mLabelList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxRuleAST::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxRuleAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxRuleAST ("syntaxRuleAST",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxRuleAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentForGrammarAnalysis::GGS_syntaxComponentForGrammarAnalysis (void) :
mProperty_mProductionRulesList (),
mProperty_mSyntaxComponentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentForGrammarAnalysis::GGS_syntaxComponentForGrammarAnalysis (const GGS_syntaxComponentForGrammarAnalysis & inSource) :
mProperty_mProductionRulesList (inSource.mProperty_mProductionRulesList),
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentForGrammarAnalysis & GGS_syntaxComponentForGrammarAnalysis::operator = (const GGS_syntaxComponentForGrammarAnalysis & inSource) {
  mProperty_mProductionRulesList = inSource.mProperty_mProductionRulesList ;
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxComponentForGrammarAnalysis GGS_syntaxComponentForGrammarAnalysis::init_21__21_ (const GGS__5B_productionRuleForGrammarAnalysis_5D_ & in_mProductionRulesList,
                                                                                           const GGS_lstring & in_mSyntaxComponentName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxComponentForGrammarAnalysis result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProductionRulesList = in_mProductionRulesList ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentForGrammarAnalysis::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentForGrammarAnalysis::GGS_syntaxComponentForGrammarAnalysis (const GGS__5B_productionRuleForGrammarAnalysis_5D_ & inOperand0,
                                                                              const GGS_lstring & inOperand1) :
mProperty_mProductionRulesList (inOperand0),
mProperty_mSyntaxComponentName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxComponentForGrammarAnalysis::isValid (void) const {
  return mProperty_mProductionRulesList.isValid () && mProperty_mSyntaxComponentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentForGrammarAnalysis::drop (void) {
  mProperty_mProductionRulesList.drop () ;
  mProperty_mSyntaxComponentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentForGrammarAnalysis::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxComponentForGrammarAnalysis:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProductionRulesList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxComponentForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentForGrammarAnalysis ("syntaxComponentForGrammarAnalysis",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------
// @grammarForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarForGeneration::objectCompare (const GGS_grammarForGeneration & inOperand) const {
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

GGS_grammarForGeneration::GGS_grammarForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarForGeneration GGS_grammarForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                    const GGS_bool & in_generateHeader,
                                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                                    const GGS_string & in_mGrammarName,
                                                                                                    const GGS_string & in_mLexiqueName,
                                                                                                    const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                    const GGS__5B_nonTerminalToAdd_5D_ & in_mNonTerminalToAddList,
                                                                                                    const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                                                                    const GGS_string & in_mStartSymbolName,
                                                                                                    const GGS_bool & in_mHasTranslateFeature,
                                                                                                    const GGS_string & in_mCppFileContents,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_grammarForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_mGrammarName, in_mLexiqueName, in_mNonTerminalMapForGrammarAnalysis, in_mNonTerminalToAddList, in_mSyntaxComponents, in_mStartSymbolName, in_mHasTranslateFeature, in_mCppFileContents, inCompiler) ;
  const GGS_grammarForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::
grammarForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                                         const GGS_bool & in_generateHeader,
                                                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                                                         const GGS_string & in_mGrammarName,
                                                                                                                         const GGS_string & in_mLexiqueName,
                                                                                                                         const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                                                                                         const GGS__5B_nonTerminalToAdd_5D_ & in_mNonTerminalToAddList,
                                                                                                                         const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                                                                                         const GGS_string & in_mStartSymbolName,
                                                                                                                         const GGS_bool & in_mHasTranslateFeature,
                                                                                                                         const GGS_string & in_mCppFileContents,
                                                                                                                         Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarForGeneration::GGS_grammarForGeneration (const cPtr_grammarForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis GGS_grammarForGeneration::readProperty_mNonTerminalMapForGrammarAnalysis (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalSymbolMapForGrammarAnalysis () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalMapForGrammarAnalysis ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_nonTerminalToAdd_5D_ GGS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_nonTerminalToAdd_5D_ () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mNonTerminalToAddList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_grammarForGeneration::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lstring_5D_ () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarForGeneration::readProperty_mCppFileContents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarForGeneration * p = (cPtr_grammarForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarForGeneration) ;
    return p->mProperty_mCppFileContents ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarForGeneration::cPtr_grammarForGeneration (const GGS_string & in_infoMessage,
                                                      const GGS_bool & in_generateHeader,
                                                      const GGS_string & in_implementationCppFileName,
                                                      const GGS_string & in_mGrammarName,
                                                      const GGS_string & in_mLexiqueName,
                                                      const GGS_nonTerminalSymbolMapForGrammarAnalysis & in_mNonTerminalMapForGrammarAnalysis,
                                                      const GGS__5B_nonTerminalToAdd_5D_ & in_mNonTerminalToAddList,
                                                      const GGS__5B_lstring_5D_ & in_mSyntaxComponents,
                                                      const GGS_string & in_mStartSymbolName,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      const GGS_string & in_mCppFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mGrammarName (),
mProperty_mLexiqueName (),
mProperty_mNonTerminalMapForGrammarAnalysis (),
mProperty_mNonTerminalToAddList (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mHasTranslateFeature (),
mProperty_mCppFileContents () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonTerminalMapForGrammarAnalysis = in_mNonTerminalMapForGrammarAnalysis ;
  mProperty_mNonTerminalToAddList = in_mNonTerminalToAddList ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
  mProperty_mCppFileContents = in_mCppFileContents ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

void cPtr_grammarForGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalMapForGrammarAnalysis.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonTerminalToAddList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppFileContents.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mGrammarName, mProperty_mLexiqueName, mProperty_mNonTerminalMapForGrammarAnalysis, mProperty_mNonTerminalToAddList, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mHasTranslateFeature, mProperty_mCppFileContents, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonTerminalMapForGrammarAnalysis.printNonNullClassInstanceProperties ("mNonTerminalMapForGrammarAnalysis") ;
    mProperty_mNonTerminalToAddList.printNonNullClassInstanceProperties ("mNonTerminalToAddList") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
    mProperty_mCppFileContents.printNonNullClassInstanceProperties ("mCppFileContents") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarForGeneration ("grammarForGeneration",
                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::objectCompare (const GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & inOperand) const {
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

GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (void) :
GGS_semanticDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationWithHeaderForGeneration_2E_weak & GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::operator = (const GGS_semanticDeclarationWithHeaderForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (const GGS_semanticDeclarationWithHeaderForGeneration & inSource) :
GGS_semanticDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationWithHeaderForGeneration_2E_weak GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticDeclarationWithHeaderForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationWithHeaderForGeneration GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_semanticDeclarationWithHeaderForGeneration result ;
  if (isValid ()) {
    const cPtr_semanticDeclarationWithHeaderForGeneration * p = (cPtr_semanticDeclarationWithHeaderForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticDeclarationWithHeaderForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticDeclarationWithHeaderForGeneration GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::bang_semanticDeclarationWithHeaderForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticDeclarationWithHeaderForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticDeclarationWithHeaderForGeneration) ;
      result = GGS_semanticDeclarationWithHeaderForGeneration ((cPtr_semanticDeclarationWithHeaderForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticDeclarationWithHeaderForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak ("semanticDeclarationWithHeaderForGeneration.weak",
                                                                                                       & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticDeclarationWithHeaderForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationAST::GGS_ruleDeclarationAST (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationAST::GGS_ruleDeclarationAST (const GGS_ruleDeclarationAST & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mRuleIndex (inSource.mProperty_mRuleIndex),
mProperty_mLabelImplementationList (inSource.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationAST & GGS_ruleDeclarationAST::operator = (const GGS_ruleDeclarationAST & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mRuleIndex = inSource.mProperty_mRuleIndex ;
  mProperty_mLabelImplementationList = inSource.mProperty_mLabelImplementationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleDeclarationAST GGS_ruleDeclarationAST::init_21__21__21_ (const GGS_string & in_mNonterminalName,
                                                                 const GGS_uint & in_mRuleIndex,
                                                                 const GGS__5B_ruleLabelImplementationAST_5D_ & in_mLabelImplementationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationAST::GGS_ruleDeclarationAST (const GGS_string & inOperand0,
                                                const GGS_uint & inOperand1,
                                                const GGS__5B_ruleLabelImplementationAST_5D_ & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleDeclarationAST::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationAST::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationAST::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleDeclarationAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonterminalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRuleIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelImplementationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ruleDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationAST ("ruleDeclarationAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterForGeneration::GGS_formalParameterForGeneration (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_mFormalArgumentCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterForGeneration::GGS_formalParameterForGeneration (const GGS_formalParameterForGeneration & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mFormalArgumentCppName (inSource.mProperty_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterForGeneration & GGS_formalParameterForGeneration::operator = (const GGS_formalParameterForGeneration & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mFormalArgumentCppName = inSource.mProperty_mFormalArgumentCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterForGeneration GGS_formalParameterForGeneration::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                             const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                             const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                             const GGS_lstring & in_mFormalArgumentName,
                                                                                             const GGS_string & in_mFormalArgumentCppName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterForGeneration::GGS_formalParameterForGeneration (const GGS_lstring & inOperand0,
                                                                    const GGS_formalArgumentPassingModeAST & inOperand1,
                                                                    const GGS_unifiedTypeMapEntry & inOperand2,
                                                                    const GGS_lstring & inOperand3,
                                                                    const GGS_string & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentPassingMode (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mFormalArgumentCppName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalParameterForGeneration::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mFormalArgumentCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterForGeneration::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentPassingMode.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalParameterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterForGeneration ("formalParameterForGeneration",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxDeclarationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration::objectCompare (const GGS_syntaxDeclarationForGeneration & inOperand) const {
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

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (void) :
GGS_semanticDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration::
init_21_infoMessage_21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                 const GGS_string & in_mSyntaxComponentName,
                                                 const GGS_string & in_mLexiqueName,
                                                 const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                 const GGS__5B_ruleDeclarationAST_5D_ & in_mRuleDeclarationList,
                                                 const GGS_uint & in_mSelectMethodCount,
                                                 const GGS_bool & in_mHasIndexing,
                                                 const GGS_bool & in_mHasTranslateFeature,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  cPtr_syntaxDeclarationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_syntaxDeclarationForGeneration (inCompiler COMMA_THERE)) ;
  object->syntaxDeclarationForGeneration_init_21_infoMessage_21__21__21__21__21__21__21_ (in_infoMessage, in_mSyntaxComponentName, in_mLexiqueName, in_mNonterminalDeclarationMap, in_mRuleDeclarationList, in_mSelectMethodCount, in_mHasIndexing, in_mHasTranslateFeature, inCompiler) ;
  const GGS_syntaxDeclarationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::
syntaxDeclarationForGeneration_init_21_infoMessage_21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                const GGS_string & in_mSyntaxComponentName,
                                                                                const GGS_string & in_mLexiqueName,
                                                                                const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                                const GGS__5B_ruleDeclarationAST_5D_ & in_mRuleDeclarationList,
                                                                                const GGS_uint & in_mSelectMethodCount,
                                                                                const GGS_bool & in_mHasIndexing,
                                                                                const GGS_bool & in_mHasTranslateFeature,
                                                                                Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration::GGS_syntaxDeclarationForGeneration (const cPtr_syntaxDeclarationForGeneration * inSourcePtr) :
GGS_semanticDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxDeclarationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mSyntaxComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSyntaxComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_syntaxDeclarationForGeneration::readProperty_mLexiqueName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mLexiqueName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap GGS_syntaxDeclarationForGeneration::readProperty_mNonterminalDeclarationMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonterminalMap () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mNonterminalDeclarationMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_ruleDeclarationAST_5D_ GGS_syntaxDeclarationForGeneration::readProperty_mRuleDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_ruleDeclarationAST_5D_ () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mRuleDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_syntaxDeclarationForGeneration::readProperty_mSelectMethodCount (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mSelectMethodCount ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_syntaxDeclarationForGeneration::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxDeclarationForGeneration) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxDeclarationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxDeclarationForGeneration::cPtr_syntaxDeclarationForGeneration (const GGS_string & in_infoMessage,
                                                                          const GGS_string & in_mSyntaxComponentName,
                                                                          const GGS_string & in_mLexiqueName,
                                                                          const GGS_nonterminalMap & in_mNonterminalDeclarationMap,
                                                                          const GGS__5B_ruleDeclarationAST_5D_ & in_mRuleDeclarationList,
                                                                          const GGS_uint & in_mSelectMethodCount,
                                                                          const GGS_bool & in_mHasIndexing,
                                                                          const GGS_bool & in_mHasTranslateFeature,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationForGeneration (in_infoMessage, inCompiler COMMA_THERE),
mProperty_mSyntaxComponentName (),
mProperty_mLexiqueName (),
mProperty_mNonterminalDeclarationMap (),
mProperty_mRuleDeclarationList (),
mProperty_mSelectMethodCount (),
mProperty_mHasIndexing (),
mProperty_mHasTranslateFeature () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  mProperty_mLexiqueName = in_mLexiqueName ;
  mProperty_mNonterminalDeclarationMap = in_mNonterminalDeclarationMap ;
  mProperty_mRuleDeclarationList = in_mRuleDeclarationList ;
  mProperty_mSelectMethodCount = in_mSelectMethodCount ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syntaxDeclarationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

void cPtr_syntaxDeclarationForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxDeclarationForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalDeclarationMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRuleDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelectMethodCount.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_syntaxDeclarationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxDeclarationForGeneration (mProperty_infoMessage, mProperty_mSyntaxComponentName, mProperty_mLexiqueName, mProperty_mNonterminalDeclarationMap, mProperty_mRuleDeclarationList, mProperty_mSelectMethodCount, mProperty_mHasIndexing, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxDeclarationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mSyntaxComponentName.printNonNullClassInstanceProperties ("mSyntaxComponentName") ;
    mProperty_mLexiqueName.printNonNullClassInstanceProperties ("mLexiqueName") ;
    mProperty_mNonterminalDeclarationMap.printNonNullClassInstanceProperties ("mNonterminalDeclarationMap") ;
    mProperty_mRuleDeclarationList.printNonNullClassInstanceProperties ("mRuleDeclarationList") ;
    mProperty_mSelectMethodCount.printNonNullClassInstanceProperties ("mSelectMethodCount") ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ("syntaxDeclarationForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxDeclarationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxDeclarationForGeneration_2E_weak::objectCompare (const GGS_syntaxDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak & GGS_syntaxDeclarationForGeneration_2E_weak::operator = (const GGS_syntaxDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak::GGS_syntaxDeclarationForGeneration_2E_weak (const GGS_syntaxDeclarationForGeneration & inSource) :
GGS_semanticDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration_2E_weak GGS_syntaxDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_syntaxDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxDeclarationForGeneration * p = (cPtr_syntaxDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxDeclarationForGeneration GGS_syntaxDeclarationForGeneration_2E_weak::bang_syntaxDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_syntaxDeclarationForGeneration) ;
      result = GGS_syntaxDeclarationForGeneration ((cPtr_syntaxDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ("syntaxDeclarationForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_semanticDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueDeclarationForGeneration_2E_weak::objectCompare (const GGS_lexiqueDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak & GGS_lexiqueDeclarationForGeneration_2E_weak::operator = (const GGS_lexiqueDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak::GGS_lexiqueDeclarationForGeneration_2E_weak (const GGS_lexiqueDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration_2E_weak GGS_lexiqueDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexiqueDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_lexiqueDeclarationForGeneration * p = (cPtr_lexiqueDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexiqueDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueDeclarationForGeneration GGS_lexiqueDeclarationForGeneration_2E_weak::bang_lexiqueDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexiqueDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexiqueDeclarationForGeneration) ;
      result = GGS_lexiqueDeclarationForGeneration ((cPtr_lexiqueDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexiqueDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ("lexiqueDeclarationForGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @primitiveTypeForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primitiveTypeForGeneration::objectCompare (const GGS_primitiveTypeForGeneration & inOperand) const {
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

GGS_primitiveTypeForGeneration::GGS_primitiveTypeForGeneration (void) :
GGS_semanticTypeForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration::
init_21_infoMessage_21__21__21__21_isPackage (const GGS_string & in_infoMessage,
                                              const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                              const GGS_string & in_mPredefinedTypeName,
                                              const GGS_string & in_mCppDeclarationString,
                                              const GGS_bool & in_isPackage,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_primitiveTypeForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_primitiveTypeForGeneration (inCompiler COMMA_THERE)) ;
  object->primitiveTypeForGeneration_init_21_infoMessage_21__21__21__21_isPackage (in_infoMessage, in_mSelfTypeEntry, in_mPredefinedTypeName, in_mCppDeclarationString, in_isPackage, inCompiler) ;
  const GGS_primitiveTypeForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_primitiveTypeForGeneration::
primitiveTypeForGeneration_init_21_infoMessage_21__21__21__21_isPackage (const GGS_string & in_infoMessage,
                                                                         const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                         const GGS_string & in_mPredefinedTypeName,
                                                                         const GGS_string & in_mCppDeclarationString,
                                                                         const GGS_bool & in_isPackage,
                                                                         Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration::GGS_primitiveTypeForGeneration (const cPtr_primitiveTypeForGeneration * inSourcePtr) :
GGS_semanticTypeForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_primitiveTypeForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveTypeForGeneration::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_primitiveTypeForGeneration::readProperty_mCppDeclarationString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_mCppDeclarationString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_primitiveTypeForGeneration::readProperty_isPackage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_primitiveTypeForGeneration) ;
    return p->mProperty_isPackage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @primitiveTypeForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_primitiveTypeForGeneration::cPtr_primitiveTypeForGeneration (const GGS_string & in_infoMessage,
                                                                  const GGS_unifiedTypeMapEntry & in_mSelfTypeEntry,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  const GGS_string & in_mCppDeclarationString,
                                                                  const GGS_bool & in_isPackage,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticTypeForGeneration (in_infoMessage, in_mSelfTypeEntry, inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName (),
mProperty_mCppDeclarationString (),
mProperty_isPackage () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_mSelfTypeEntry = in_mSelfTypeEntry ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
  mProperty_mCppDeclarationString = in_mCppDeclarationString ;
  mProperty_isPackage = in_isPackage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_primitiveTypeForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

void cPtr_primitiveTypeForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@primitiveTypeForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSelfTypeEntry.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppDeclarationString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isPackage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_primitiveTypeForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_primitiveTypeForGeneration (mProperty_infoMessage, mProperty_mSelfTypeEntry, mProperty_mPredefinedTypeName, mProperty_mCppDeclarationString, mProperty_isPackage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_primitiveTypeForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticTypeForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
    mProperty_mCppDeclarationString.printNonNullClassInstanceProperties ("mCppDeclarationString") ;
    mProperty_isPackage.printNonNullClassInstanceProperties ("isPackage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @primitiveTypeForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration ("primitiveTypeForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticTypeForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primitiveTypeForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_primitiveTypeForGeneration_2E_weak::objectCompare (const GGS_primitiveTypeForGeneration_2E_weak & inOperand) const {
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

GGS_primitiveTypeForGeneration_2E_weak::GGS_primitiveTypeForGeneration_2E_weak (void) :
GGS_semanticTypeForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak & GGS_primitiveTypeForGeneration_2E_weak::operator = (const GGS_primitiveTypeForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak::GGS_primitiveTypeForGeneration_2E_weak (const GGS_primitiveTypeForGeneration & inSource) :
GGS_semanticTypeForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration_2E_weak GGS_primitiveTypeForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_primitiveTypeForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_primitiveTypeForGeneration result ;
  if (isValid ()) {
    const cPtr_primitiveTypeForGeneration * p = (cPtr_primitiveTypeForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_primitiveTypeForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_primitiveTypeForGeneration GGS_primitiveTypeForGeneration_2E_weak::bang_primitiveTypeForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_primitiveTypeForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_primitiveTypeForGeneration) ;
      result = GGS_primitiveTypeForGeneration ((cPtr_primitiveTypeForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @primitiveTypeForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ("primitiveTypeForGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_semanticTypeForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_primitiveTypeForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_primitiveTypeForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterAST::GGS_actualInputParameterAST (void) :
mProperty_mActualSelector (),
mProperty_mInputParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterAST::GGS_actualInputParameterAST (const GGS_actualInputParameterAST & inSource) :
mProperty_mActualSelector (inSource.mProperty_mActualSelector),
mProperty_mInputParameter (inSource.mProperty_mInputParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterAST & GGS_actualInputParameterAST::operator = (const GGS_actualInputParameterAST & inSource) {
  mProperty_mActualSelector = inSource.mProperty_mActualSelector ;
  mProperty_mInputParameter = inSource.mProperty_mInputParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualInputParameterAST GGS_actualInputParameterAST::init_21__21_ (const GGS_lstring & in_mActualSelector,
                                                                       const GGS_abstractInputParameter & in_mInputParameter,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualInputParameterAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mInputParameter = in_mInputParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualInputParameterAST::GGS_actualInputParameterAST (const GGS_lstring & inOperand0,
                                                          const GGS_abstractInputParameter & inOperand1) :
mProperty_mActualSelector (inOperand0),
mProperty_mInputParameter (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualInputParameterAST::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mInputParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterAST::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mInputParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualInputParameterAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualInputParameterAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInputParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualInputParameterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualInputParameterAST ("actualInputParameterAST",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualInputParameterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualInputParameterAST ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result ;
}




//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overrideExtensionGetterForGeneration_2E_weak::objectCompare (const GGS_overrideExtensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_overrideExtensionGetterForGeneration_2E_weak::GGS_overrideExtensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak & GGS_overrideExtensionGetterForGeneration_2E_weak::operator = (const GGS_overrideExtensionGetterForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak::GGS_overrideExtensionGetterForGeneration_2E_weak (const GGS_overrideExtensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration_2E_weak GGS_overrideExtensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overrideExtensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_overrideExtensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_overrideExtensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration_2E_weak::bang_overrideExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overrideExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overrideExtensionGetterForGeneration) ;
      result = GGS_overrideExtensionGetterForGeneration ((cPtr_overrideExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overrideExtensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ("overrideExtensionGetterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideExtensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionMethodForGeneration_2E_weak::objectCompare (const GGS_abstractExtensionMethodForGeneration_2E_weak & inOperand) const {
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

GGS_abstractExtensionMethodForGeneration_2E_weak::GGS_abstractExtensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak & GGS_abstractExtensionMethodForGeneration_2E_weak::operator = (const GGS_abstractExtensionMethodForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak::GGS_abstractExtensionMethodForGeneration_2E_weak (const GGS_abstractExtensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration_2E_weak GGS_abstractExtensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractExtensionMethodForGeneration * p = (cPtr_abstractExtensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionMethodForGeneration GGS_abstractExtensionMethodForGeneration_2E_weak::bang_abstractExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionMethodForGeneration) ;
      result = GGS_abstractExtensionMethodForGeneration ((cPtr_abstractExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ("abstractExtensionMethodForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterForGeneration_2E_weak::objectCompare (const GGS_extensionSetterForGeneration_2E_weak & inOperand) const {
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

GGS_extensionSetterForGeneration_2E_weak::GGS_extensionSetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak & GGS_extensionSetterForGeneration_2E_weak::operator = (const GGS_extensionSetterForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak::GGS_extensionSetterForGeneration_2E_weak (const GGS_extensionSetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration_2E_weak GGS_extensionSetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionSetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionSetterForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionSetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration_2E_weak::bang_extensionSetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionSetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionSetterForGeneration) ;
      result = GGS_extensionSetterForGeneration ((cPtr_extensionSetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionSetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ("extensionSetterForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionInitializerForGeneration_2E_weak::objectCompare (const GGS_extensionInitializerForGeneration_2E_weak & inOperand) const {
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

GGS_extensionInitializerForGeneration_2E_weak::GGS_extensionInitializerForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak & GGS_extensionInitializerForGeneration_2E_weak::operator = (const GGS_extensionInitializerForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak::GGS_extensionInitializerForGeneration_2E_weak (const GGS_extensionInitializerForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration_2E_weak GGS_extensionInitializerForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionInitializerForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionInitializerForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionInitializerForGeneration * p = (cPtr_extensionInitializerForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionInitializerForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionInitializerForGeneration GGS_extensionInitializerForGeneration_2E_weak::bang_extensionInitializerForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionInitializerForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionInitializerForGeneration) ;
      result = GGS_extensionInitializerForGeneration ((cPtr_extensionInitializerForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionInitializerForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ("extensionInitializerForGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionInitializerForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionInitializerForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionGetterForGeneration_2E_weak::objectCompare (const GGS_extensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_extensionGetterForGeneration_2E_weak::GGS_extensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak & GGS_extensionGetterForGeneration_2E_weak::operator = (const GGS_extensionGetterForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak::GGS_extensionGetterForGeneration_2E_weak (const GGS_extensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration_2E_weak GGS_extensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionGetterForGeneration * p = (cPtr_extensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterForGeneration GGS_extensionGetterForGeneration_2E_weak::bang_extensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionGetterForGeneration) ;
      result = GGS_extensionGetterForGeneration ((cPtr_extensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ("extensionGetterForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionMethodForGeneration_2E_weak::objectCompare (const GGS_overridingExtensionMethodForGeneration_2E_weak & inOperand) const {
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

GGS_overridingExtensionMethodForGeneration_2E_weak::GGS_overridingExtensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak & GGS_overridingExtensionMethodForGeneration_2E_weak::operator = (const GGS_overridingExtensionMethodForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak::GGS_overridingExtensionMethodForGeneration_2E_weak (const GGS_overridingExtensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration_2E_weak GGS_overridingExtensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_overridingExtensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_overridingExtensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_overridingExtensionMethodForGeneration * p = (cPtr_overridingExtensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_overridingExtensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionMethodForGeneration GGS_overridingExtensionMethodForGeneration_2E_weak::bang_overridingExtensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_overridingExtensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_overridingExtensionMethodForGeneration) ;
      result = GGS_overridingExtensionMethodForGeneration ((cPtr_overridingExtensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ("overridingExtensionMethodForGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractExtensionGetterForGeneration_2E_weak::objectCompare (const GGS_abstractExtensionGetterForGeneration_2E_weak & inOperand) const {
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

GGS_abstractExtensionGetterForGeneration_2E_weak::GGS_abstractExtensionGetterForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak & GGS_abstractExtensionGetterForGeneration_2E_weak::operator = (const GGS_abstractExtensionGetterForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak::GGS_abstractExtensionGetterForGeneration_2E_weak (const GGS_abstractExtensionGetterForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration_2E_weak GGS_abstractExtensionGetterForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractExtensionGetterForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractExtensionGetterForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractExtensionGetterForGeneration * p = (cPtr_abstractExtensionGetterForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractExtensionGetterForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractExtensionGetterForGeneration GGS_abstractExtensionGetterForGeneration_2E_weak::bang_abstractExtensionGetterForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractExtensionGetterForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractExtensionGetterForGeneration) ;
      result = GGS_abstractExtensionGetterForGeneration ((cPtr_abstractExtensionGetterForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractExtensionGetterForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ("abstractExtensionGetterForGeneration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractExtensionGetterForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractExtensionGetterForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionMethodForGeneration_2E_weak::objectCompare (const GGS_extensionMethodForGeneration_2E_weak & inOperand) const {
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

GGS_extensionMethodForGeneration_2E_weak::GGS_extensionMethodForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak & GGS_extensionMethodForGeneration_2E_weak::operator = (const GGS_extensionMethodForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak::GGS_extensionMethodForGeneration_2E_weak (const GGS_extensionMethodForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration_2E_weak GGS_extensionMethodForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_extensionMethodForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_extensionMethodForGeneration result ;
  if (isValid ()) {
    const cPtr_extensionMethodForGeneration * p = (cPtr_extensionMethodForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_extensionMethodForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodForGeneration GGS_extensionMethodForGeneration_2E_weak::bang_extensionMethodForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_extensionMethodForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_extensionMethodForGeneration) ;
      result = GGS_extensionMethodForGeneration ((cPtr_extensionMethodForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMethodForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ("extensionMethodForGeneration.weak",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

GGS_row::GGS_row (void) :
mProperty_columns () {
}

//--------------------------------------------------------------------------------------------------

GGS_row::GGS_row (const GGS_row & inSource) :
mProperty_columns (inSource.mProperty_columns) {
}

//--------------------------------------------------------------------------------------------------

GGS_row & GGS_row::operator = (const GGS_row & inSource) {
  mProperty_columns = inSource.mProperty_columns ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_row GGS_row::init_21_ (const GGS__5B__32_string_5D_ & in_columns,
                           Compiler * inCompiler
                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_row result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_columns = in_columns ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_row::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_row::GGS_row (const GGS__5B__32_string_5D_ & inOperand0) :
mProperty_columns (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_row::isValid (void) const {
  return mProperty_columns.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_row::drop (void) {
  mProperty_columns.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_row::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @row:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_columns.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @row generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_row ("row",
                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_row::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_row ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStructuredSendInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST::objectCompare (const GGS_lexicalStructuredSendInstructionAST & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST::
init_21__21_ (const GGS__5B_lexicalSendSearchAST_5D_ & in_mLexicalSendSearchList,
              const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStructuredSendInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStructuredSendInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalStructuredSendInstructionAST_init_21__21_ (in_mLexicalSendSearchList, in_mLexicalSendDefaultAction, inCompiler) ;
  const GGS_lexicalStructuredSendInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStructuredSendInstructionAST::
lexicalStructuredSendInstructionAST_init_21__21_ (const GGS__5B_lexicalSendSearchAST_5D_ & in_mLexicalSendSearchList,
                                                  const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST::GGS_lexicalStructuredSendInstructionAST (const cPtr_lexicalStructuredSendInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStructuredSendInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_lexicalSendSearchAST_5D_ GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lexicalSendSearchAST_5D_ () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendSearchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendDefaultAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendDefaultActionAST () ;
  }else{
    cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStructuredSendInstructionAST) ;
    return p->mProperty_mLexicalSendDefaultAction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStructuredSendInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GGS__5B_lexicalSendSearchAST_5D_ & in_mLexicalSendSearchList,
                                                                                    const GGS_lexicalSendDefaultActionAST & in_mLexicalSendDefaultAction,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSendSearchList (),
mProperty_mLexicalSendDefaultAction () {
  mProperty_mLexicalSendSearchList = in_mLexicalSendSearchList ;
  mProperty_mLexicalSendDefaultAction = in_mLexicalSendDefaultAction ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStructuredSendInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

void cPtr_lexicalStructuredSendInstructionAST::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStructuredSendInstructionAST:") ;
  mProperty_mLexicalSendSearchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalSendDefaultAction.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalStructuredSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStructuredSendInstructionAST (mProperty_mLexicalSendSearchList, mProperty_mLexicalSendDefaultAction, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStructuredSendInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSendSearchList.printNonNullClassInstanceProperties ("mLexicalSendSearchList") ;
    mProperty_mLexicalSendDefaultAction.printNonNullClassInstanceProperties ("mLexicalSendDefaultAction") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ("lexicalStructuredSendInstructionAST",
                                                                                        & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStructuredSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStructuredSendInstructionAST_2E_weak::objectCompare (const GGS_lexicalStructuredSendInstructionAST_2E_weak & inOperand) const {
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

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (void) :
GGS_lexicalInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak & GGS_lexicalStructuredSendInstructionAST_2E_weak::operator = (const GGS_lexicalStructuredSendInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak::GGS_lexicalStructuredSendInstructionAST_2E_weak (const GGS_lexicalStructuredSendInstructionAST & inSource) :
GGS_lexicalInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST_2E_weak GGS_lexicalStructuredSendInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStructuredSendInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_lexicalStructuredSendInstructionAST * p = (cPtr_lexicalStructuredSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStructuredSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStructuredSendInstructionAST GGS_lexicalStructuredSendInstructionAST_2E_weak::bang_lexicalStructuredSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStructuredSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStructuredSendInstructionAST) ;
      result = GGS_lexicalStructuredSendInstructionAST ((cPtr_lexicalStructuredSendInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStructuredSendInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ("lexicalStructuredSendInstructionAST.weak",
                                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStructuredSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStructuredSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRoutineActualArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_abstractLexicalRoutineActualArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalArgumentModeAST constin__5F_inLexicalRoutineFormalArgumentMode,
                                                          const GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRoutineActualArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io__5F_ioLexiqueAnalysisContext, constin__5F_inLexicalRoutineFormalArgumentMode, constin__5F_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchAST::GGS_lexicalSelectBranchAST (void) :
mProperty_mSelectExpression (),
mProperty_mSelectInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchAST::GGS_lexicalSelectBranchAST (const GGS_lexicalSelectBranchAST & inSource) :
mProperty_mSelectExpression (inSource.mProperty_mSelectExpression),
mProperty_mSelectInstructionList (inSource.mProperty_mSelectInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchAST & GGS_lexicalSelectBranchAST::operator = (const GGS_lexicalSelectBranchAST & inSource) {
  mProperty_mSelectExpression = inSource.mProperty_mSelectExpression ;
  mProperty_mSelectInstructionList = inSource.mProperty_mSelectInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_lexicalSelectBranchAST GGS_lexicalSelectBranchAST::init_21__21_ (const GGS_lexicalExpressionAST & in_mSelectExpression,
                                                                     const GGS__5B_lexicalInstructionAST_5D_ & in_mSelectInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalSelectBranchAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSelectExpression = in_mSelectExpression ;
  result.mProperty_mSelectInstructionList = in_mSelectInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchAST::GGS_lexicalSelectBranchAST (const GGS_lexicalExpressionAST & inOperand0,
                                                        const GGS__5B_lexicalInstructionAST_5D_ & inOperand1) :
mProperty_mSelectExpression (inOperand0),
mProperty_mSelectInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_lexicalSelectBranchAST::isValid (void) const {
  return mProperty_mSelectExpression.isValid () && mProperty_mSelectInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchAST::drop (void) {
  mProperty_mSelectExpression.drop () ;
  mProperty_mSelectInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_lexicalSelectBranchAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @lexicalSelectBranchAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSelectExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectBranchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectBranchAST ("lexicalSelectBranchAST",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectBranchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectBranchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routinePrototypeDeclarationForGeneration_2E_weak::objectCompare (const GGS_routinePrototypeDeclarationForGeneration_2E_weak & inOperand) const {
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

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (void) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak & GGS_routinePrototypeDeclarationForGeneration_2E_weak::operator = (const GGS_routinePrototypeDeclarationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak::GGS_routinePrototypeDeclarationForGeneration_2E_weak (const GGS_routinePrototypeDeclarationForGeneration & inSource) :
GGS_semanticDeclarationWithHeaderForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration_2E_weak GGS_routinePrototypeDeclarationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routinePrototypeDeclarationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (isValid ()) {
    const cPtr_routinePrototypeDeclarationForGeneration * p = (cPtr_routinePrototypeDeclarationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routinePrototypeDeclarationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routinePrototypeDeclarationForGeneration GGS_routinePrototypeDeclarationForGeneration_2E_weak::bang_routinePrototypeDeclarationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routinePrototypeDeclarationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routinePrototypeDeclarationForGeneration) ;
      result = GGS_routinePrototypeDeclarationForGeneration ((cPtr_routinePrototypeDeclarationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routinePrototypeDeclarationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ("routinePrototypeDeclarationForGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routinePrototypeDeclarationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 44)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 44)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_classFuncName_1754 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 30)) ;
  GGS_location var_startOfExpression_1802 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 32)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_1872 ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    var_expressionList_1872 = GGS__5B_actualOutputArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 37)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_1872, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 39)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_2035 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 41)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startOfExpression_1802, inCompiler COMMA_HERE), var_classFuncName_1754, var_expressionList_1872, var_startOfExpression_1802.getter_union (var_endOfExpression_2035, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 46)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 30)) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 37)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 39)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                                const GGS_lstring constinArgument_inClassFunctionName,
                                                                                                                                GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_2713 ;
  GGS_location var_startOfExpression_2736 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 58)) ;
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
    var_expressionList_2713 = GGS__5B_actualOutputArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 62)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_2713, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 64)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_2919 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 66)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (constinArgument_inTypeName, constinArgument_inClassFunctionName, var_expressionList_2713, var_startOfExpression_2736.getter_union (var_endOfExpression_2919, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 71)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 62)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 64)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_startLocation_1458 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 27)) ;
  GGS__5B_collectionValueElementAST_5D_ var_expressionList_1534 = GGS__5B_collectionValueElementAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_1654 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_1654, inCompiler) ;
      var_expressionList_1534.plusPlusAssignOperation (GGS_collectionValueElementAST::init_21__21_ (var_expression_1654, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 33)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 33)) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startLocation_1458, inCompiler COMMA_HERE), var_expressionList_1534, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 38)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 27)) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 35)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                 GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 47)) ;
  GGS__5B_collectionValueElementAST_5D_ var_expressionList_2217 = GGS__5B_collectionValueElementAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_2337 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2337, inCompiler) ;
      var_expressionList_2217.plusPlusAssignOperation (GGS_collectionValueElementAST::init_21__21_ (var_expression_2337, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 53)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 53)) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_2217, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 58)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 47)) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_1474 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 26)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_1474, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 26)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS__5B_actualOutputArgumentAST_5D_ & outArgument_outExpressionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS__5B_actualOutputArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_2916 ;
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        var_selector_2916 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 69)) ;
      } break ;
      case 2: {
        var_selector_2916 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 74)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_expression_3158 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_3158, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentAST::init_21__21__21_ (var_selector_2916, var_expression_3158, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 77)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 77)) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 79)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 69)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 79)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                           GGS__5B_actualOutputArgumentAST_5D_ & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS__5B_actualOutputArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_3620 ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      var_selector_3620 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 93)) ;
    } break ;
    case 2: {
      var_selector_3620 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 98)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_3844 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3844, inCompiler) ;
    outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentAST::init_21__21__21_ (var_selector_3620, var_expression_3844, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 101)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 101)) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 103)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_non_5F_empty_5F_output_5F_expression_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 93)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 103)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_2520 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_2520, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_2530 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_2530, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS__5B_string_5D_ var_literalStringList_1938 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_literalString_1996 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 39)) ;
    var_literalStringList_1938.plusPlusAssignOperation (var_literalString_1996.readProperty_string ()  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 40)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outExpression = GGS_literalStringExpressionAST::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 43)), var_literalStringList_1938, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-literal-string.galgas4", 39)) ;
    if (select_galgas_34_ExpressionSyntax_11 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1939 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 38)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_1939, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 38)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_2623, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2652 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2652, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 52)) ;
  GGS_lstring var_filewrapperName_2521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 53)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_2521, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 57)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_2732 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 59)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_2521, var_filePath_2732, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_2897 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 65)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 66)) ;
      GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_3018 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3018, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_2521, var_filewrapperTemplateName_2897, var_expressionList_3018, inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 52)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 53)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 57)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 59)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 65)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 66)) ;
      nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_3159 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3159, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3159, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 71)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_3325 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 73)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3159, var_classFuncName_3325, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3159, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_14 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 71)) ;
    switch (select_galgas_34_ExpressionSyntax_15 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 73)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i16_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                               GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                               GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_t_3972 ;
  nt_simple_5F_type_5F_definition_ (ioArgument_ioDeclarations, var_t_3972, inCompiler) ;
  GGS_lstring var_typeName_3983 = function_makeEmbeddedTypeLName (constinArgument_inTypeName, var_t_3972, inCompiler COMMA_SOURCE_FILE ("expression-initializer.galgas4", 88)) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_ (var_typeName_3983, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 92)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      GGS_lstring var_classFuncName_4204 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 94)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_ (var_typeName_3983, var_classFuncName_4204, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_ (var_typeName_3983, ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_type_5F_definition_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_16 (inCompiler)) {
  case 1: {
    nt_primary_5F_beginning_5F_by_5F_type_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 92)) ;
    switch (select_galgas_34_ExpressionSyntax_17 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-initializer.galgas4", 94)) ;
      nt_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_indexing (inCompiler) ;
    } break ;
    case 2: {
      nt_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  GGS_location var_initLocation_4813 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 109)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_4896 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4896, inCompiler) ;
  GGS_location var_endOfExpression_4920 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_initLocation_4813, inCompiler COMMA_HERE), var_expressionList_4896, var_endOfExpression_4920, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i19_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_5895 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5895, inCompiler) ;
  GGS_location var_endOfExpression_5919 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_5895, var_endOfExpression_5919, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  GGS_location var_endOfExpression_6311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_endOfExpression_6311, inCompiler COMMA_HERE), GGS__5B_actualOutputArgumentAST_5D_::init (inCompiler COMMA_HERE), var_endOfExpression_6311, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5312 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5366 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5456 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5456, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionAST::init_21__21__21_ (var_operatorLocation_5312, var_leftOperand_5366, var_rightOperand_5456, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5587 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5642 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5732 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5732, inCompiler) ;
      outArgument_outExpression = GGS_multiplicationExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_5587, var_leftOperand_5642, var_rightOperand_5732, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5873 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5927 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5994 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_5994, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionAST::init_21__21__21_ (var_operatorLocation_5873, var_leftOperand_5927, var_rightOperand_5994, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6119 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6174 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6241 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6241, inCompiler) ;
      outArgument_outExpression = GGS_divisionExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6119, var_leftOperand_6174, var_rightOperand_6241, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6376 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6430 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6497 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6497, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6376, var_leftOperand_6430, var_rightOperand_6497, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 121)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2A_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 127)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 133)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2F_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 139)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__25_ COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2633 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2633, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_2639, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                          GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_or_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    GGS_location var_endOfReceiverExpression_3478 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 84)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas4", 85)) ;
    GGS_lstring var_typeName_3550 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 86)) ;
    outArgument_outExpression = GGS_testDynamicClassInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3478, var_typeName_3550, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_location var_endOfReceiverExpression_3715 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-is-as.galgas4", 93)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas4", 94)) ;
    GGS_lstring var_typeName_3787 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 95)) ;
    outArgument_outExpression = GGS_castInExpressionAST::init_21__21__21_ (outArgument_outExpression, var_endOfReceiverExpression_3715, var_typeName_3787, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_or_indexing (inCompiler) ;
  switch (select_galgas_34_ExpressionSyntax_19 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_is COMMA_SOURCE_FILE ("expression-is-as.galgas4", 85)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 86)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("expression-is-as.galgas4", 94)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("expression-is-as.galgas4", 95)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3659 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 81)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 82)) ;
      GGS_semanticExpressionAST var_leftOperand_3714 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3779 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_3779, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3659, var_leftOperand_3714, var_rightOperand_3779, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3905 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 87)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 88)) ;
      GGS_semanticExpressionAST var_leftOperand_3960 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4025 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_4025, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_3905, var_leftOperand_3960, var_rightOperand_4025, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_4152 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 93)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 94)) ;
      GGS_semanticExpressionAST var_leftOperand_4206 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4271 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_4271, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_4152, var_leftOperand_4206, var_rightOperand_4271, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4391 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 99)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 100)) ;
      GGS_semanticExpressionAST var_leftOperand_4446 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4511 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_4511, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4391, var_leftOperand_4446, var_rightOperand_4511, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4641 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 105)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 106)) ;
      GGS_semanticExpressionAST var_leftOperand_4695 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4760 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_4760, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_4641, var_leftOperand_4695, var_rightOperand_4760, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_4880 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 111)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 112)) ;
      GGS_semanticExpressionAST var_leftOperand_4935 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5000 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5000, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_4880, var_leftOperand_4935, var_rightOperand_5000, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 82)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 88)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 94)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 100)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 106)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 112)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3339 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 73)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 74)) ;
      GGS_semanticExpressionAST var_leftOperand_3393 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3468 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_3468, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_3339, var_leftOperand_3393, var_rightOperand_3468, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3587 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 79)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 80)) ;
      GGS_semanticExpressionAST var_leftOperand_3642 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3717 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_3717, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_3587, var_leftOperand_3642, var_rightOperand_3717, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_3841 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 85)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 86)) ;
      GGS_semanticExpressionAST var_leftOperand_3895 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3970 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_3970, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_3841, var_leftOperand_3895, var_rightOperand_3970, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_4090 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 91)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 92)) ;
      GGS_semanticExpressionAST var_leftOperand_4146 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4221 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_4221, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4090, var_leftOperand_4146, var_rightOperand_4221, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_4349 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 97)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 98)) ;
      GGS_semanticExpressionAST var_leftOperand_4405 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4480 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_4480, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_4349, var_leftOperand_4405, var_rightOperand_4480, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 74)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 80)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 86)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 92)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 98)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 31)) ;
      GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_1749 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_1749, inCompiler) ;
      outArgument_outExpression = GGS_subcriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_1749, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 39)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 43)) ;
      GGS_lstring var_structFieldName_1953 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 44)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_1953.readProperty_location (), outArgument_outExpression, var_structFieldName_1953, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GGS_lstring var_getterName_2182 = var_structFieldName_1953 ;
        GGS_location var_startLocation_2223 = GGS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 53)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 54)) ;
        GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_2350 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_2350, inCompiler) ;
        GGS_location var_endLocation_2378 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 56)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 57)) ;
        outArgument_outExpression = GGS_getterCallExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_getterName_2182, var_expressionList_2350, var_startLocation_2223.getter_union (var_endLocation_2378, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 62)), inCompiler COMMA_HERE) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 31)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 43)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 44)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 54)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 57)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1456 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 27)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_1456, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 27)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_simple_5F_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5384 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5439 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5517 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5517, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5384, var_leftOperand_5439, GGS_comparison::class_func_equal (SOURCE_FILE ("expression-comparison.galgas4", 124)), var_rightOperand_5517, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5652 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5707 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5785 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_5785, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5652, var_leftOperand_5707, GGS_comparison::class_func_notEqual (SOURCE_FILE ("expression-comparison.galgas4", 130)), var_rightOperand_5785, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5923 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5978 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6056 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6056, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_5923, var_leftOperand_5978, GGS_comparison::class_func_lowerOrEqual (SOURCE_FILE ("expression-comparison.galgas4", 136)), var_rightOperand_6056, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6198 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6253 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6331 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6331, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6198, var_leftOperand_6253, GGS_comparison::class_func_greaterOrEqual (SOURCE_FILE ("expression-comparison.galgas4", 142)), var_rightOperand_6331, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6475 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6529 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6607 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6607, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6475, var_leftOperand_6529, GGS_comparison::class_func_greaterThan (SOURCE_FILE ("expression-comparison.galgas4", 148)), var_rightOperand_6607, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_6748 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 150)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 151)) ;
      GGS_semanticExpressionAST var_leftOperand_6802 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6880 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_6880, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_6748, var_leftOperand_6802, GGS_comparison::class_func_lowerThan (SOURCE_FILE ("expression-comparison.galgas4", 154)), var_rightOperand_6880, inCompiler COMMA_HERE) ;
    } break ;
    case 8: {
      GGS_location var_operatorLocation_7019 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 156)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 157)) ;
      GGS_semanticExpressionAST var_leftOperand_7075 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7153 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7153, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7019, var_leftOperand_7075, GGS_comparison::class_func_sameInstance (SOURCE_FILE ("expression-comparison.galgas4", 160)), var_rightOperand_7153, inCompiler COMMA_HERE) ;
    } break ;
    case 9: {
      GGS_location var_operatorLocation_7295 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-comparison.galgas4", 162)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 163)) ;
      GGS_semanticExpressionAST var_leftOperand_7351 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7429 ;
      nt_simple_5F_expression_ (ioArgument_ioDeclarations, var_rightOperand_7429, inCompiler) ;
      outArgument_outExpression = GGS_comparisonExpressionAST::init_21__21__21__21_ (var_operatorLocation_7295, var_leftOperand_7351, GGS_comparison::class_func_differentInstances (SOURCE_FILE ("expression-comparison.galgas4", 166)), var_rightOperand_7429, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_simple_5F_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_24 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 121)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 127)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 133)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 139)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 145)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 151)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 8: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 157)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3D__3D_ COMMA_SOURCE_FILE ("expression-comparison.galgas4", 163)) ;
      nt_simple_5F_expression_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i33_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lf_36__34_ var_literalDouble_1905 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 37)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_1905, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 37)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_1594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 29)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_expressionList_1720 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_1720, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 31)) ;
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_1594, var_expressionList_1720, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 29)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 31)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i35_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_relation_5F_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_3592 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 78)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 79)) ;
      GGS_semanticExpressionAST var_leftOperand_3646 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_3745 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_3745, inCompiler) ;
      outArgument_outExpression = GGS_andExpressionAST::init_21__21__21_ (var_operatorLocation_3592, var_leftOperand_3646, var_rightOperand_3745, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_3865 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-and.galgas4", 84)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 85)) ;
      GGS_semanticExpressionAST var_leftOperand_3920 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_4019 ;
      nt_relation_5F_factor_ (ioArgument_ioDeclarations, var_rightOperand_4019, inCompiler) ;
      outArgument_outExpression = GGS_andShortExpressionAST::init_21__21__21_ (var_operatorLocation_3865, var_leftOperand_3920, var_rightOperand_4019, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_relation_5F_factor_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_25 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 79)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__26_ COMMA_SOURCE_FILE ("expression-and.galgas4", 85)) ;
      nt_relation_5F_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 67)) ;
  GGS_semanticExpressionAST var_ifExpression_3014 ;
  nt_expression_ (ioArgument_ioDeclarations, var_ifExpression_3014, inCompiler) ;
  GGS_location var_operatorLocation_3036 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 70)) ;
  GGS_semanticExpressionAST var_thenExpression_3122 ;
  nt_expression_ (ioArgument_ioDeclarations, var_thenExpression_3122, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 72)) ;
  GGS_semanticExpressionAST var_elseExpression_3190 ;
  nt_expression_ (ioArgument_ioDeclarations, var_elseExpression_3190, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 74)) ;
  outArgument_outExpression = GGS_ifExpressionAST::init_21__21__21__21_ (var_operatorLocation_3036, var_ifExpression_3014, var_thenExpression_3122, var_elseExpression_3190, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 45)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                        GGS__5B_formalParameterAST_5D_ & outArgument_outFormalParameterList,
                                                                                                                        Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalParameterList = GGS__5B_formalParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 43)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_2381 ;
      GGS_formalArgumentPassingModeAST var_formalParameterPassingMode_2432 ;
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 50)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 52)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 54)) ;
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 55)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 57)) ;
          var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 58)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 73)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 74)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 75)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 77)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 78)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentVarIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 79)) ;
      } break ;
      case 4: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 81)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 82)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 84)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 85)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentInOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 86)) ;
      } break ;
      case 6: {
        var_selector_2381 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 88)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 89)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 91)) ;
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 92)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentOut (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 93)) ;
      } break ;
      case 8: {
        var_selector_2381 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 95)) ;
        var_formalParameterPassingMode_2432 = GGS_formalArgumentPassingModeAST::class_func_argumentConstantIn (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 96)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_3935 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_3935, inCompiler) ;
      GGS_lstring var_formalParameterName_3996 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 99)) ;
      GGS_bool var_isUnused_4029 = var_formalParameterName_3996.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 100)) ;
      outArgument_outFormalParameterList.plusPlusAssignOperation (GGS_formalParameterAST::init_21__21__21__21__21_ (var_selector_2381, var_formalParameterPassingMode_2432, var_formalParameterTypeName_3935, var_formalParameterName_3996, var_isUnused_4029, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 101)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 109)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_parameter_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 43)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_2 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 50)) ;
        switch (select_galgas_34_ParameterArgumentSyntax_3 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 54)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 57)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 73)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 77)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 81)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 84)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 88)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 91)) ;
      } break ;
      case 8: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 99)) ;
      if (select_galgas_34_ParameterArgumentSyntax_1 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 109)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                               GGS__5B_actualParameterAST_5D_ & outArgument_outActualParameterList,
                                                                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualParameterList.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 121)) ;
  outArgument_outActualParameterList = GGS__5B_actualParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_ (ioArgument_ioDeclarations, outArgument_outActualParameterList, inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 121)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_actual_5F_parameter_indexing (inCompiler) ;
      if (select_galgas_34_ParameterArgumentSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 128)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 131)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_5355 ;
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    var_selector_5355 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 144)) ;
    var_selector_5355 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 145)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 148)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_5509 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_5509, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputSingleJokerActualParameterAST::init_21__21_ (var_selector_5355, var_poisonedVarNameList_5509, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 150)) ;
  } break ;
  case 2: {
    GGS_lbigint var_count_5662 = inCompiler->synthetizedAttribute_bigintValue () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 153)) ;
    GGS_uint var_n_5689 = var_count_5662.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 154)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_selector_5355.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("\?")) ;
        inCompiler->emitSemanticError (var_selector_5355.readProperty_location (), GGS_string ("the selector should be '\?'"), fixItArray1  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 156)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::equal, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_count_5662.readProperty_location (), GGS_string ("the count value should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 159)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      if (var_n_5689.isValid ()) {
        uint32_t variant_5925 = var_n_5689.uintValue () ;
        bool loop_5925 = true ;
        while (loop_5925) {
          loop_5925 = GGS_bool (ComparisonKind::greaterThan, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
          if (loop_5925) {
            loop_5925 = GGS_bool (ComparisonKind::greaterThan, var_n_5689.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
          }
          if (loop_5925 && (0 == variant_5925)) {
            loop_5925 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 161)) ;
          }
          if (loop_5925) {
            variant_5925 -= 1 ;
            ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputJokerActualParameterAST::init_21__21_ (var_selector_5355.readProperty_location (), var_n_5689, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 163)) ;
            var_n_5689.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 164)) ;
          }
        }
      }
    }
  } break ;
  case 3: {
    GGS_lstring var_inputActualParameterName_6117 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 168)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6175 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6175, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualExistingVariableParameterAST::init_21__21__21_ (var_selector_5355, var_inputActualParameterName_6117, var_poisonedVarNameList_6175, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 170)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 176)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 177)) ;
    GGS_lstring var_inputActualParameterName_6448 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 178)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6506 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6506, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualSelfPropertyParameterAST::init_21__21__21_ (var_selector_5355, var_inputActualParameterName_6448, var_poisonedVarNameList_6506, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 180)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 186)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_6763 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_6763, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualSelfParameterAST::init_21__21__21_ (var_selector_5355, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 190)), var_poisonedVarNameList_6763, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 188)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 194)) ;
    GGS_lstring var_declarationTypeName_6987 ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
      var_declarationTypeName_6987 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 197)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_6987, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_7172 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 201)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_7230 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_7230, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_5355, var_declarationTypeName_6987, var_inputActualParameterName_7172, var_poisonedVarNameList_7230, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 203)) ;
  } break ;
  case 7: {
    GGS_lstring var_declarationTypeName_7541 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_7541, inCompiler) ;
    GGS_lstring var_inputActualParameterName_7587 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 211)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_7645 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_7645, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewVariableParameterAST::init_21__21__21__21_ (var_selector_5355, var_declarationTypeName_7541, var_inputActualParameterName_7587, var_poisonedVarNameList_7645, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 213)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 220)) ;
    GGS_lstring var_declarationTypeName_7924 ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
      var_declarationTypeName_7924 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("parameterArgumentSyntax.galgas4", 223)) ;
    } break ;
    case 2: {
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_declarationTypeName_7924, inCompiler) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_inputActualParameterName_8109 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 227)) ;
    GGS_bool var_markedAsUnused_8145 = var_inputActualParameterName_8109.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 228)) ;
    GGS__5B_lstring_5D_ var_poisonedVarNameList_8235 ;
    nt_poisoned_5F_var_5F_list_ (var_poisonedVarNameList_8235, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_inputActualNewConstantParameterAST::init_21__21__21__21__21_ (var_selector_5355, var_declarationTypeName_7924, var_inputActualParameterName_8109, var_markedAsUnused_8145, var_poisonedVarNameList_8235, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 230)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_6 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 142)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 144)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 148)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 153)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 168)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 176)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 177)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 178)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 186)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 194)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_8 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 201)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 7: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 211)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 220)) ;
    switch (select_galgas_34_ParameterArgumentSyntax_9 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      nt_type_5F_definition_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 227)) ;
    nt_poisoned_5F_var_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_8879 ;
  switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
  case 1: {
    var_selector_8879 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 250)) ;
    var_selector_8879 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 251)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    GGS_lstring var_outputInputActualParameterName_9018 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 254)) ;
    GGS__5B_lstring_5D_ var_structAttributeList_9060 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 258)) ;
        GGS_lstring var_structAttributeName_9160 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 259)) ;
        var_structAttributeList_9060.plusPlusAssignOperation (var_structAttributeName_9160  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 260)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputActualParameterAST::init_21__21__21_ (var_selector_8879, var_outputInputActualParameterName_9018, var_structAttributeList_9060, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 262)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 268)) ;
    GGS_semanticExpressionAST var_initializerCall_9466 ;
    nt_expression_ (ioArgument_ioDeclarations, var_initializerCall_9466, inCompiler) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputJokerParameterAST::init_21__21_ (var_selector_8879, var_initializerCall_9466, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 270)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 272)) ;
    ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputInputSelfParameterAST::init_21_ (var_selector_8879, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 273)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_10 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 248)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 250)) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_ParameterArgumentSyntax_11 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 254)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      if (select_galgas_34_ParameterArgumentSyntax_12 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 258)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 259)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_from COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 268)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 272)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS__5B_actualParameterAST_5D_ & ioArgument_ioActualParameterList,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_selector_10069 ;
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    var_selector_10069 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 285)) ;
  } break ;
  case 2: {
    var_selector_10069 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 290)) ;
  } break ;
  default:
    break ;
  }
  GGS_semanticExpressionAST var_e_10274 ;
  nt_expression_ (ioArgument_ioDeclarations, var_e_10274, inCompiler) ;
  GGS_location var_endOfExpressionLocation_10295 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 293)) ;
  ioArgument_ioActualParameterList.plusPlusAssignOperation (GGS_outputActualParameterAST::init_21__21__21_ (var_selector_10069, var_e_10274, var_endOfExpressionLocation_10295, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 294)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_actual_5F_parameter_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ParameterArgumentSyntax_13 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 285)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                 GGS__5B_formalInputParameterAST_5D_ & outArgument_outFormalInputParameterList,
                                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFormalInputParameterList.drop () ; // Release 'out' argument
  outArgument_outFormalInputParameterList = GGS__5B_formalInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 308)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_10990 ;
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
        var_selector_10990 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 314)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 316)) ;
        var_selector_10990 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 317)) ;
      } break ;
      case 3: {
        var_selector_10990 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 319)) ;
      } break ;
      default:
        break ;
      }
      GGS_bool var_isConstant_11173 ;
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 323)) ;
        var_isConstant_11173 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 326)) ;
        var_isConstant_11173 = GGS_bool (true) ;
      } break ;
      case 3: {
        var_isConstant_11173 = GGS_bool (true) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_formalParameterTypeName_11400 ;
      nt_type_5F_definition_ (ioArgument_ioDeclarations, var_formalParameterTypeName_11400, inCompiler) ;
      GGS_lstring var_formalParameterName_11461 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 332)) ;
      GGS_bool var_isUnused_11494 = var_formalParameterName_11461.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 333)) ;
      outArgument_outFormalInputParameterList.plusPlusAssignOperation (GGS_formalInputParameterAST::init_21__21__21__21__21_ (var_selector_10990, var_formalParameterTypeName_11400, var_formalParameterName_11461, var_isUnused_11494, var_isConstant_11173, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 334)) ;
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 342)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_formal_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 308)) ;
  switch (select_galgas_34_ParameterArgumentSyntax_14 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_ParameterArgumentSyntax_16 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 314)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 316)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      switch (select_galgas_34_ParameterArgumentSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 323)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 326)) ;
      } break ;
      case 3: {
      } break ;
      default:
        break ;
      }
      nt_type_5F_definition_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 332)) ;
      if (select_galgas_34_ParameterArgumentSyntax_15 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 342)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 345)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_ (GGS__5B_lstring_5D_ & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i6_indexing (Lexique_galgasScanner_34_ * /* inCompiler */) {
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_ (GGS__5B_lstring_5D_ & outArgument_outPoisonedVarNameList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outPoisonedVarNameList.drop () ; // Release 'out' argument
  outArgument_outPoisonedVarNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 358)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 359)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_varName_12242 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 361)) ;
    outArgument_outPoisonedVarNameList.plusPlusAssignOperation (var_varName_12242  COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 362)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 364)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 366)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ParameterArgumentSyntax::rule_galgas_34_ParameterArgumentSyntax_poisoned_5F_var_5F_list_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 358)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 359)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 361)) ;
    if (select_galgas_34_ParameterArgumentSyntax_18 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 364)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("parameterArgumentSyntax.galgas4", 366)) ;
}



//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS__5B_semanticInstructionAST_5D_ & outArgument_outInstructionsList,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstructionsList.drop () ; // Release 'out' argument
  outArgument_outInstructionsList = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticInstructionAST var_instruction_3275 ;
      nt_semantic_5F_instruction_ (ioArgument_ioDeclarations, var_instruction_3275, inCompiler) ;
      outArgument_outInstructionsList.plusPlusAssignOperation (var_instruction_3275  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 61)) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 64)) ;
        } break ;
        case 2: {
          GGS_string var_separator_3398 = GGS_string::class_func_separatorString (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 66)) ;
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            test_1 = var_separator_3398.getter_containsCharacter (GGS_char (utf32 (10)) COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 67)).operator_not (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 67)).boolEnum () ;
            if (GalgasBool::boolTrue == test_1) {
              GenericArray <FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (GGS_location::class_func_separator (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 68)), GGS_string ("instructions on same line should be separated by ';'"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 68)) ;
            }
          }
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 75)) ;
    GGS_location var_instructionLocation_3663 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 76)) ;
    GGS__5B_CommaSeparatedExpressionElement_5D_ var_testExpression_3759 ;
    nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_3759, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 78)) ;
    GGS__5B_semanticInstructionAST_5D_ var_else_5F_instructionList_3846 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_3846, inCompiler) ;
    GGS_location var_endOf_5F_else_5F_branch_3878 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 80)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 81)) ;
    GGS__5B_semanticInstructionAST_5D_ var_then_5F_instructionList_3983 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_3983, inCompiler) ;
    GGS_location var_endOf_5F_then_5F_branch_4015 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 83)) ;
    GGS_ifInstructionAST var_instruction_4060 = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_3663, var_testExpression_3759, var_then_5F_instructionList_3983, var_endOf_5F_then_5F_branch_4015, var_else_5F_instructionList_3846, var_endOf_5F_else_5F_branch_3878, inCompiler COMMA_HERE) ;
    outArgument_outInstructionsList.plusPlusAssignOperation (var_instruction_4060  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 92)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_list_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_semantic_5F_instruction_indexing (inCompiler) ;
      if (select_galgas_34_InstructionsSyntax_1 (inCompiler) == 2) {
        switch (select_galgas_34_InstructionsSyntax_2 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 64)) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_3 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_guard COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 75)) ;
    nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 78)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 81)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 101)) ;
  GGS_bool var_isUsefull_4658 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 105)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_4658.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 107)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 107)) ;
        }
      }
      var_isUsefull_4658 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_functionName_4860 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 111)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_4989 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_4989, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 113)) ;
  GGS_lstring var_resultTypeName_5070 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_5070, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 115)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_5176 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_5176, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 117)) ;
  GGS_location var_endOfFunctionInstructionList_5217 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 118)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (GGS_bool (false), var_functionName_4860, var_formalInputParameterList_4989, var_resultTypeName_5070, var_isUsefull_4658, var_functionInstructionList_5176, var_endOfFunctionInstructionList_5217, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 119)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 105)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 111)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 113)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 115)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 117)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 135)) ;
  GGS_bool var_isUsefull_5763 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 139)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_5763.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 141)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 141)) ;
        }
      }
      var_isUsefull_5763 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_functionName_5965 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 145)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_6094 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_6094, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 147)) ;
  GGS_lstring var_resultTypeName_6175 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_6175, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 149)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_6281 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_6281, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 151)) ;
  GGS_location var_endOfFunctionInstructionList_6322 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 152)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_functionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc_21__21__21_ (GGS_bool (false), var_functionName_5965, var_formalInputParameterList_6094, var_resultTypeName_6175, var_isUsefull_5763, var_functionInstructionList_6281, var_endOfFunctionInstructionList_6322, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 153)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 134)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 135)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_5 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 139)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 145)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 147)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 149)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 151)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 171)) ;
  GGS_bool var_isUsefull_7031 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 175)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_7031.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 177)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 177)) ;
        }
      }
      var_isUsefull_7031 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_7233 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 181)) ;
  GGS__5B_formalInputParameterAST_5D_ var_formalInputParameterList_7361 ;
  nt_formal_5F_input_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalInputParameterList_7361, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 183)) ;
  GGS_lstring var_resultTypeName_7442 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_7442, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_externFunctionDeclarationAST::init_21_isPredefined_21__21__21__21_usefullFunc (GGS_bool (false), var_mActionName_7233, var_formalInputParameterList_7361, var_resultTypeName_7442, var_isUsefull_7031, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 185)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 170)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_func COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 171)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_6 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 175)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 181)) ;
  nt_formal_5F_input_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3E_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 183)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & outArgument_result,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_result.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 205)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 206)) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 208)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationDropResult::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 209)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    GGS_lstring var_actualParameterTypeName_8607 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_8607, inCompiler) ;
    GGS_lstring var_actualParameterName_8657 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 212)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::init_21__21_ (var_actualParameterTypeName_8607, var_actualParameterName_8657, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 215)) ;
    GGS_lstring var_actualParameterTypeName_8880 ;
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_8880, inCompiler) ;
    GGS_lstring var_actualParameterName_8930 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 217)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::init_21__21_ (var_actualParameterTypeName_8880, var_actualParameterName_8930, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    GGS_lstring var_actualParameterName_9111 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 220)) ;
    outArgument_result = GGS_grammarInstructionSyntaxDirectedTranslationResultInVar::init_21_ (var_actualParameterName_9111, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_syntax_5F_directed_5F_translation_5F_result_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 205)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 206)) ;
  switch (select_galgas_34_InstructionsSyntax_7 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 208)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 212)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 215)) ;
    nt_type_5F_definition_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 217)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 220)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                       GGS__5B_actualInputParameterAST_5D_ & outArgument_outActualInputParameterList,
                                                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outActualInputParameterList.drop () ; // Release 'out' argument
  outArgument_outActualInputParameterList = GGS__5B_actualInputParameterAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 233)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 236)) ;
        GGS_lstring var_selector_9671 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 237)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 238)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9671, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 239)) ;
      } break ;
      case 2: {
        GGS_lstring var_selector_9835 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 241)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 242)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9835, GGS_inputParameterAnonymousVariable::init (inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 243)) ;
      } break ;
      case 3: {
        GGS_lstring var_selector_9990 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 245)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 246)) ;
        GGS_lstring var_actualParameterTypeName_10039 ;
        switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_10039 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 249)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_10039, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_10259 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 253)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_9990, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_10039, var_actualParameterName_10259, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 254)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 258)) ;
        GGS_lstring var_selector_10478 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 259)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 260)) ;
        GGS_lstring var_actualParameterTypeName_10536 ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_10536 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 263)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_10536, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_10756 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 267)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_10478, GGS_inputParameterDeclaredVariable::init_21__21_ (var_actualParameterTypeName_10536, var_actualParameterName_10756, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 268)) ;
      } break ;
      case 5: {
        GGS_lstring var_selector_10976 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 272)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 273)) ;
        GGS_lstring var_actualParameterTypeName_11025 ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_11025 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 276)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_11025, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11246 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 280)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_10976, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_11025, var_actualParameterName_11246, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 281)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 285)) ;
        GGS_lstring var_selector_11465 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 286)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 287)) ;
        GGS_lstring var_actualParameterTypeName_11523 ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
          var_actualParameterTypeName_11523 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 290)) ;
        } break ;
        case 2: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_actualParameterTypeName_11523, inCompiler) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_actualParameterName_11744 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 294)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_11465, GGS_inputParameterDeclaredConstant::init_21__21_ (var_actualParameterTypeName_11523, var_actualParameterName_11744, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 295)) ;
      } break ;
      case 7: {
        GGS_lstring var_selector_11964 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 299)) ;
        GGS_lstring var_actualParameterName_12003 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 300)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_11964, GGS_inputParameterVariable::init_21_ (var_actualParameterName_12003, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 301)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 303)) ;
        GGS_lstring var_selector_12164 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 304)) ;
        GGS_lstring var_actualParameterName_12212 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 305)) ;
        outArgument_outActualInputParameterList.plusPlusAssignOperation (GGS_actualInputParameterAST::init_21__21_ (var_selector_12164, GGS_inputParameterVariable::init_21_ (var_actualParameterName_12212, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 306)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 309)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 311)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_actual_5F_input_5F_parameter_5F_list_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 233)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_10 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 236)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 238)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 241)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 242)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 245)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 246)) ;
        switch (select_galgas_34_InstructionsSyntax_11 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 253)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 258)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 260)) ;
        switch (select_galgas_34_InstructionsSyntax_12 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 267)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 272)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 273)) ;
        switch (select_galgas_34_InstructionsSyntax_13 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 280)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 285)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 287)) ;
        switch (select_galgas_34_InstructionsSyntax_14 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 294)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_selector_3A_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 299)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 300)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3F_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 303)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 305)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 309)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasInstructionsSyntax.galgas4", 311)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 29)) ;
  GGS_lstring var_methodName_1635 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 30)) ;
  GGS_location var_instructionLocation_1655 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 31)) ;
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_1783 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_1783, inCompiler) ;
  outArgument_outInstruction = GGS_superMethodCallInstructionAST::init_21__21__21_ (var_instructionLocation_1655, var_methodName_1635, var_actualParameterList_1783, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i6_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-super-method-call.galgas4", 30)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                 GGS__5B_fixitElementAST_5D_ & outArgument_outFixitListAST,
                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outFixitListAST.drop () ; // Release 'out' argument
  outArgument_outFixitListAST = GGS__5B_fixitElementAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas4", 51)) ;
    GGS_bool var_hasFixItRemove_2488 = GGS_bool (false) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_remove COMMA_SOURCE_FILE ("instruction-error.galgas4", 55)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = var_hasFixItRemove_2488.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            GenericArray <FixItDescription> fixItArray2 ;
            fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticWarning (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 57)), GGS_string ("duplicated action"), fixItArray2  COMMA_SOURCE_FILE ("instruction-error.galgas4", 57)) ;
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItRemove (SOURCE_FILE ("instruction-error.galgas4", 59))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 59)) ;
          var_hasFixItRemove_2488 = GGS_bool (true) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas4", 63)) ;
        GGS_location var_errorLocation_2810 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 64)) ;
        GGS_semanticExpressionAST var_expression_2911 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_2911, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItReplace (var_expression_2911, var_errorLocation_2810  COMMA_SOURCE_FILE ("instruction-error.galgas4", 66))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 66)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas4", 68)) ;
        GGS_location var_errorLocation_3065 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 69)) ;
        GGS_semanticExpressionAST var_expression_3166 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_3166, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItInsertAfter (var_expression_3166, var_errorLocation_3065  COMMA_SOURCE_FILE ("instruction-error.galgas4", 71))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 71)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas4", 73)) ;
        GGS_location var_errorLocation_3325 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 74)) ;
        GGS_semanticExpressionAST var_expression_3426 ;
        nt_expression_ (ioArgument_ioDeclarations, var_expression_3426, inCompiler) ;
        outArgument_outFixitListAST.plusPlusAssignOperation (GGS_fixitElementAST::class_func_fixItInsertBefore (var_expression_3426, var_errorLocation_3325  COMMA_SOURCE_FILE ("instruction-error.galgas4", 76))  COMMA_SOURCE_FILE ("instruction-error.galgas4", 76)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 79)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_issue_5F_fixit_i7_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_15 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_fixit COMMA_SOURCE_FILE ("instruction-error.galgas4", 51)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      switch (select_galgas_34_InstructionsSyntax_17 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_remove COMMA_SOURCE_FILE ("instruction-error.galgas4", 55)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_replaceBy COMMA_SOURCE_FILE ("instruction-error.galgas4", 63)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertAfter COMMA_SOURCE_FILE ("instruction-error.galgas4", 68)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_insertBefore COMMA_SOURCE_FILE ("instruction-error.galgas4", 73)) ;
        nt_expression_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_16 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 79)) ;
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

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas4", 88)) ;
  GGS_location var_instructionLocation_3861 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-error.galgas4", 89)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_3962 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_3962, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 91)) ;
  GGS_semanticExpressionAST var_mErrorExpression_4055 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mErrorExpression_4055, inCompiler) ;
  GGS__5B_lstring_5D_ var_builtVariableList_4081 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas4", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_builtVariableName_4186 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas4", 98)) ;
      var_builtVariableList_4081.plusPlusAssignOperation (var_builtVariableName_4186  COMMA_SOURCE_FILE ("instruction-error.galgas4", 99)) ;
      if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 101)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  GGS__5B_fixitElementAST_5D_ var_fixitListAST_4355 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_4355, inCompiler) ;
  outArgument_outInstruction = GGS_errorInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_3861, var_mReceiverExpression_3962, var_mErrorExpression_4055, var_builtVariableList_4081, var_fixitListAST_4355, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_error COMMA_SOURCE_FILE ("instruction-error.galgas4", 88)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 91)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_spoil COMMA_SOURCE_FILE ("instruction-error.galgas4", 96)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-error.galgas4", 98)) ;
      if (select_galgas_34_InstructionsSyntax_19 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-error.galgas4", 101)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                          GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                          Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 28)) ;
  GGS_location var_instructionLocation_1611 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 30)) ;
  GGS_semanticExpressionAST var_expression_1721 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_1721, inCompiler) ;
  outArgument_outInstruction = GGS_selfPlusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_1611, var_expression_1721, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 28)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 30)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 42)) ;
  GGS_location var_instructionLocation_2116 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 44)) ;
  GGS_semanticExpressionAST var_expression_2226 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_2226, inCompiler) ;
  outArgument_outInstruction = GGS_selfMinusEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2116, var_expression_2226, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 44)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 56)) ;
  GGS_location var_instructionLocation_2622 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 58)) ;
  GGS_semanticExpressionAST var_expression_2732 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_2732, inCompiler) ;
  outArgument_outInstruction = GGS_selfMulEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_2622, var_expression_2732, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 58)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 70)) ;
  GGS_location var_instructionLocation_3126 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 71)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 72)) ;
  GGS_semanticExpressionAST var_expression_3236 ;
  nt_expression_ (ioArgument_ioDeclarations, var_expression_3236, inCompiler) ;
  outArgument_outInstruction = GGS_selfDivEqualExpressionInstructionAST::init_21__21_ (var_instructionLocation_3126, var_expression_3236, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-self-concat.galgas4", 72)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (false), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_ (ioArgument_ioDeclarations, GGS_bool (true), outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-concat.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                                              const GGS_bool constinArgument_inHasSelfPrefix,
                                                                                                                                              GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_receiverName_2525 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 45)) ;
  GGS_location var_instructionLocation_2547 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 46)) ;
  GGS__5B_lstring_5D_ var_propertyList_2603 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 50)) ;
      GGS_lstring var_attributeName_2678 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 51)) ;
      var_propertyList_2603.plusPlusAssignOperation (var_attributeName_2678  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 52)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 56)) ;
    GGS_semanticExpressionAST var_expression_2834 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_2834, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_minusAssign (SOURCE_FILE ("instruction-concat.galgas4", 63)), var_expression_2834, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 67)) ;
    GGS_semanticExpressionAST var_expression_3136 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3136, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_plusAssign (SOURCE_FILE ("instruction-concat.galgas4", 74)), var_expression_3136, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 78)) ;
    GGS_semanticExpressionAST var_expression_3438 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3438, inCompiler) ;
    outArgument_outInstruction = GGS_plusPlusEqualElementInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, var_expression_3438, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 88)) ;
    GGS_semanticExpressionAST var_expression_3720 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_3720, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_mulAssign (SOURCE_FILE ("instruction-concat.galgas4", 95)), var_expression_3720, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 99)) ;
    GGS_semanticExpressionAST var_expression_4020 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4020, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_andAssign (SOURCE_FILE ("instruction-concat.galgas4", 106)), var_expression_4020, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 110)) ;
    GGS_semanticExpressionAST var_expression_4320 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4320, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_orAssign (SOURCE_FILE ("instruction-concat.galgas4", 117)), var_expression_4320, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 121)) ;
    GGS_semanticExpressionAST var_expression_4619 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4619, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_xorAssign (SOURCE_FILE ("instruction-concat.galgas4", 128)), var_expression_4619, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 132)) ;
    GGS_semanticExpressionAST var_expression_4919 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_4919, inCompiler) ;
    outArgument_outInstruction = GGS_opAssignExpressionInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2547, constinArgument_inHasSelfPrefix, var_receiverName_2525, var_propertyList_2603, GGS_opAssignmentOperator::class_func_divAssign (SOURCE_FILE ("instruction-concat.galgas4", 139)), var_expression_4919, inCompiler COMMA_HERE) ;
  } break ;
  case 9: {
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_5235 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5235, inCompiler) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = constinArgument_inHasSelfPrefix.boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_propertyList_2603.getter_count (SOURCE_FILE ("instruction-concat.galgas4", 145)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, GGS_selfInExpressionAST::init_21_ (var_instructionLocation_2547, inCompiler COMMA_HERE), var_receiverName_2525, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GGS_lstring var_methodName_5595 ;
          {
          var_propertyList_2603.setter_removeLast (var_methodName_5595, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 153)) ;
          }
          GGS_semanticExpressionAST var_receiverExpression_5644 = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-concat.galgas4", 154)), inCompiler COMMA_HERE) ;
          var_receiverExpression_5644 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_receiverName_2525.readProperty_location (), var_receiverExpression_5644, var_receiverName_2525, inCompiler COMMA_HERE) ;
          UpEnumerator__5B_lstring_5D_ enumerator_5850 (var_propertyList_2603) ;
          while (enumerator_5850.hasCurrentObject ()) {
            var_receiverExpression_5644 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_5850.current (HERE).readProperty_location (), var_receiverExpression_5644, enumerator_5850.current (HERE), inCompiler COMMA_HERE) ;
            enumerator_5850.gotoNextObject () ;
          }
          outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, var_receiverExpression_5644, var_methodName_5595, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, var_propertyList_2603.getter_count (SOURCE_FILE ("instruction-concat.galgas4", 166)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          outArgument_outInstruction = GGS_procCallInstructionAST::init_21__21__21_ (var_receiverName_2525.readProperty_location (), var_receiverName_2525, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        GGS_lstring var_methodName_6432 ;
        {
        var_propertyList_2603.setter_removeLast (var_methodName_6432, inCompiler COMMA_SOURCE_FILE ("instruction-concat.galgas4", 173)) ;
        }
        GGS_semanticExpressionAST var_receiverExpression_6479 = GGS_varInExpressionAST::init_21_ (var_receiverName_2525, inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_6556 (var_propertyList_2603) ;
        while (enumerator_6556.hasCurrentObject ()) {
          var_receiverExpression_6479 = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (enumerator_6556.current (HERE).readProperty_location (), var_receiverExpression_6479, enumerator_6556.current (HERE), inCompiler COMMA_HERE) ;
          enumerator_6556.gotoNextObject () ;
        }
        outArgument_outInstruction = GGS_methodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2547, var_receiverExpression_6479, var_methodName_6432, var_actualParameterList_5235, inCompiler COMMA_HERE) ;
      }
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_5F_beginning_5F_with_5F_identifier_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 50)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-concat.galgas4", 51)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 56)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 67)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B__2B__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 78)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 88)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 99)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 110)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 121)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2F__3D_ COMMA_SOURCE_FILE ("instruction-concat.galgas4", 132)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 9: {
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas4", 38)) ;
  GGS_location var_instructionLocation_2048 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-warning.galgas4", 39)) ;
  GGS_semanticExpressionAST var_mReceiverExpression_2149 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mReceiverExpression_2149, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas4", 41)) ;
  GGS_semanticExpressionAST var_mWarningExpression_2242 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mWarningExpression_2242, inCompiler) ;
  GGS__5B_fixitElementAST_5D_ var_fixitListAST_2323 ;
  nt_issue_5F_fixit_ (ioArgument_ioDeclarations, var_fixitListAST_2323, inCompiler) ;
  outArgument_outInstruction = GGS_warningInstructionAST::init_21__21__21__21_ (var_instructionLocation_2048, var_mReceiverExpression_2149, var_mWarningExpression_2242, var_fixitListAST_2323, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_warning COMMA_SOURCE_FILE ("instruction-warning.galgas4", 38)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-warning.galgas4", 41)) ;
  nt_expression_indexing (inCompiler) ;
  nt_issue_5F_fixit_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                    GGS__5B_CommaSeparatedExpressionElement_5D_ & outArgument_outExpressionList,
                                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS__5B_CommaSeparatedExpressionElement_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      GGS_lstring var_varName_1691 ;
      GGS_bool var_isConstant_1717 ;
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 34)) ;
        var_varName_1691 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 35)) ;
        var_isConstant_1717 = GGS_bool (false) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 38)) ;
        var_isConstant_1717 = GGS_bool (true) ;
        switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
        case 1: {
          var_varName_1691 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 43)) ;
          var_varName_1691 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 44)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 47)) ;
      GGS_semanticExpressionAST var_expression_2078 ;
      nt_expression_5F_or_ (ioArgument_ioDeclarations, var_expression_2078, inCompiler) ;
      GGS_location var_endOfReceiverExpression_2102 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 49)) ;
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
        outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1691, var_isConstant_1717, var_expression_2078, var_endOfReceiverExpression_2102, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 56))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 51)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 51)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 59)) ;
        GGS_lstring var_typeName_2473 ;
        nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_2473, inCompiler) ;
        outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_letVarExp (var_varName_1691, var_isConstant_1717, var_expression_2078, var_endOfReceiverExpression_2102, var_typeName_2473  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 61)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 61)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      GGS_semanticExpressionAST var_expression_2787 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2787, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_CommaSeparatedExpressionElement::init_21_ (GGS_ifExpressionKind::class_func_regularExp (var_expression_2787, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71))  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 71)) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_comma_5F_separated_5F_expression_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_23 (inCompiler)) {
    case 1: {
      switch (select_galgas_34_InstructionsSyntax_24 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 34)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 35)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 38)) ;
        switch (select_galgas_34_InstructionsSyntax_25 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 41)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 43)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 47)) ;
      nt_expression_5F_or_indexing (inCompiler) ;
      switch (select_galgas_34_InstructionsSyntax_26 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_as COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 59)) ;
        nt_type_5F_definition_indexing (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 2: {
      nt_expression_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
    if (select_galgas_34_InstructionsSyntax_22 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 74)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 112)) ;
  GGS_location var_instructionLocation_5582 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 113)) ;
  GGS_lstring var_grammarComponentName_5651 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 114)) ;
  GGS_lstring var_labelName_5727 ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
    var_labelName_5727 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 117)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 119)) ;
    var_labelName_5727 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 120)) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_5939 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_5939, inCompiler) ;
  nt_grammar_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instructionLocation_5582, var_actualParameterList_5939, var_grammarComponentName_5651, var_labelName_5727, outArgument_outInstruction, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_grammar COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 112)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_grammarComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 114)) ;
  switch (select_galgas_34_InstructionsSyntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_label COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 119)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 120)) ;
  } break ;
  default:
    break ;
  }
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  nt_grammar_5F_instruction_5F_core_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS__5B_actualParameterAST_5D_ constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 134)) ;
  GGS_semanticExpressionAST var_sourceExpression_6722 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_6722, inCompiler) ;
  GGS_location var_endOfSourceExpression_6748 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 136)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_6908 ;
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_6908 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_6908, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInFileInstructionAST::init_21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_6722, var_endOfSourceExpression_6748, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_6908, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 134)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_28 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 142)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  const GGS_location constinArgument_inInstructionLocation,
                                                                                                                  const GGS__5B_actualParameterAST_5D_ constinArgument_actualParameterList,
                                                                                                                  const GGS_lstring constinArgument_inGrammarComponentName,
                                                                                                                  const GGS_lstring constinArgument_inLabelName,
                                                                                                                  GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 164)) ;
  GGS_semanticExpressionAST var_sourceExpression_8117 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_8117, inCompiler) ;
  GGS_location var_endOfSourceExpression_8153 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 166)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 167)) ;
  GGS_semanticExpressionAST var_nameExpression_8255 ;
  nt_expression_ (ioArgument_ioDeclarations, var_nameExpression_8255, inCompiler) ;
  GGS_location var_endOfNameExpression_8289 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 169)) ;
  GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult var_grammarInstructionSyntaxDirectedTranslationResult_8438 ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
    var_grammarInstructionSyntaxDirectedTranslationResult_8438 = GGS_grammarInstructionSyntaxDirectedTranslationResultNone::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 175)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_ (ioArgument_ioDeclarations, var_grammarInstructionSyntaxDirectedTranslationResult_8438, inCompiler) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_grammarInStringInstructionAST::init_21__21__21__21__21__21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inGrammarComponentName, constinArgument_inLabelName, var_sourceExpression_8117, var_endOfSourceExpression_8153, var_nameExpression_8255, var_endOfNameExpression_8289, constinArgument_actualParameterList, var_grammarInstructionSyntaxDirectedTranslationResult_8438, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_grammar_5F_instruction_5F_core_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_on COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 164)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 167)) ;
  nt_expression_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_29 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A__3E_ COMMA_SOURCE_FILE ("instruction-grammar.galgas4", 175)) ;
    nt_syntax_5F_directed_5F_translation_5F_result_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 44)) ;
  GGS_location var_instructionLocation_2351 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 47)) ;
  GGS_semanticExpressionAST var_variantExpression_2476 ;
  nt_expression_ (ioArgument_ioDeclarations, var_variantExpression_2476, inCompiler) ;
  GGS_location var_endOfVariantExpression_2503 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 49)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 50)) ;
  GGS__5B_semanticInstructionAST_5D_ var_firstInstructions_2641 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_2641, inCompiler) ;
  GGS_location var_endOfFirstInstructions_2676 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 55)) ;
  GGS_semanticExpressionAST var_loopExpression_2792 ;
  nt_expression_ (ioArgument_ioDeclarations, var_loopExpression_2792, inCompiler) ;
  GGS_location var_endOfLoopExpression_2816 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 58)) ;
  GGS__5B_semanticInstructionAST_5D_ var_secondInstructions_2944 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_2944, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2972 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 61)) ;
  GGS_location var_endOfLoopInstruction_3031 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 62)) ;
  outArgument_outInstruction = GGS_loopInstructionWithVariantAST::init_21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_2351, var_variantExpression_2476, var_endOfVariantExpression_2503, var_firstInstructions_2641, var_endOfFirstInstructions_2676, var_loopExpression_2792, var_endOfLoopExpression_2816, var_secondInstructions_2944, var_endOfSecondInstructions_2972, var_endOfLoopInstruction_3031, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 47)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 50)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 55)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 58)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-with-variant.galgas4", 61)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                             GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                             Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_1827 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 33)) ;
  GGS__5B_CommaSeparatedExpressionElement_5D_ var_testExpression_1921 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_testExpression_1921, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas4", 35)) ;
  GGS__5B_semanticInstructionAST_5D_ var_then_5F_instructionList_2004 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_then_5F_instructionList_2004, inCompiler) ;
  GGS_location var_endOf_5F_then_5F_branchLocation_2034 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 37)) ;
  GGS__5B_semanticInstructionAST_5D_ var_else_5F_instructionList_2111 ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
    var_else_5F_instructionList_2111 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_else_5F_instructionList_2111, inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas4", 45)) ;
    GGS_semanticInstructionAST var_instruction_2345 ;
    nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, var_instruction_2345, inCompiler) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("instruction-if.galgas4", 47)) ;
    temp_0.plusPlusAssignOperation (var_instruction_2345  COMMA_SOURCE_FILE ("instruction-if.galgas4", 47)) ;
    var_else_5F_instructionList_2111 = temp_0 ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_ifInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_1827, var_testExpression_1921, var_then_5F_instructionList_2004, var_endOf_5F_then_5F_branchLocation_2034, var_else_5F_instructionList_2111, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-if.galgas4", 55)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_if_5F_instruction_5F_core_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("instruction-if.galgas4", 35)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_30 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("instruction-if.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_elsif COMMA_SOURCE_FILE ("instruction-if.galgas4", 45)) ;
    nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas4", 63)) ;
  nt_if_5F_instruction_5F_core_ (ioArgument_ioDeclarations, outArgument_outInstruction, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("instruction-if.galgas4", 63)) ;
  nt_if_5F_instruction_5F_core_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-if.galgas4", 65)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                                                 GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lbigint var_count_4850 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 98)) ;
  GGS_uint var_n_4873 = var_count_4850.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 99)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_count_4850.readProperty_location (), GGS_string ("this value should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("instruction-for.galgas4", 101)) ;
    }
  }
  if (var_n_4873.isValid ()) {
    uint32_t variant_4972 = var_n_4873.uintValue () ;
    bool loop_4972 = true ;
    while (loop_4972) {
      loop_4972 = GGS_bool (ComparisonKind::greaterThan, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_4972) {
        loop_4972 = GGS_bool (ComparisonKind::greaterThan, var_n_4873.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_4972 && (0 == variant_4972)) {
        loop_4972 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("instruction-for.galgas4", 103)) ;
      }
      if (loop_4972) {
        variant_4972 -= 1 ;
        ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 104)), GGS_bool (true), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 104)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 104)) ;
        var_n_4873.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 105)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-for.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ & ioArgument_ioElementList,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  GGS_lstring var_typeName_5368 ;
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
    var_typeName_5368 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 115)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_5368, inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 120)) ;
    ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (var_typeName_5368, GGS_bool (true), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 121)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 121)) ;
  } break ;
  case 2: {
    GGS_lstring var_constantName_5598 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 123)) ;
    GGS_bool var_isUnused_5622 = var_constantName_5598.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("instruction-for.galgas4", 124)) ;
    ioArgument_ioElementList.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectElementAST::init_21__21__21_ (var_typeName_5368, var_isUnused_5622, var_constantName_5598, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 125)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_element_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_32 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 120)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 123)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 133)) ;
  GGS__5B_forInstructionEnumeratedObjectElementAST_5D_ var_elementList_6038 = GGS__5B_forInstructionEnumeratedObjectElementAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_ (ioArgument_ioDeclarations, var_elementList_6038, inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_location var_location_6212 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 140)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 142)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_6319 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_6319, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionCstListInExpAST::init_21__21__21_ (var_elementList_6038, var_enumeratedExpression_6319, var_location_6212, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 133)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_for_5F_instruction_5F_element_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_33 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 138)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 141)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 142)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                              GGS_abstractEnumeratedCollectionAST & outArgument_outEnumeratedObject,
                                                                                                                              Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outEnumeratedObject.drop () ; // Release 'out' argument
  GGS_lstring var_typeName_6783 ;
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
    var_typeName_6783 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("instruction-for.galgas4", 157)) ;
  } break ;
  case 2: {
    nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_6783, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_enumerationVariable_6917 ;
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 163)) ;
    var_enumerationVariable_6917 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-for.galgas4", 164)) ;
  } break ;
  case 2: {
    var_enumerationVariable_6917 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 168)) ;
  GGS_semanticExpressionAST var_enumeratedExpression_7124 ;
  nt_expression_ (ioArgument_ioDeclarations, var_enumeratedExpression_7124, inCompiler) ;
  outArgument_outEnumeratedObject = GGS_enumeratedCollectionVarInExpAST::init_21__21__21__21_ (var_typeName_6783, var_enumerationVariable_6917, var_enumeratedExpression_7124, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 174)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_for_5F_instruction_5F_enumerated_5F_object_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_InstructionsSyntax_34 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_type_5F_definition_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_35 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 163)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 166)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_in COMMA_SOURCE_FILE ("instruction-for.galgas4", 168)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas4", 182)) ;
  GGS_location var_instructionLocation_7575 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 183)) ;
  GGS__5B_forInstructionEnumeratedObjectAST_5D_ var_mEnumeratedObjectList_7620 = GGS__5B_forInstructionEnumeratedObjectAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_bool var_ascending_7711 ;
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
      var_ascending_7711 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 190)) ;
      var_ascending_7711 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_abstractEnumeratedCollectionAST var_enumeratedObject_7915 ;
    nt_for_5F_instruction_5F_enumerated_5F_object_ (ioArgument_ioDeclarations, var_enumeratedObject_7915, inCompiler) ;
    var_mEnumeratedObjectList_7620.plusPlusAssignOperation (GGS_forInstructionEnumeratedObjectAST::init_21__21_ (var_ascending_7711, var_enumeratedObject_7915, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-for.galgas4", 194)) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 196)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_semanticExpressionAST var_mWhileExpression_8055 ;
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
    var_mWhileExpression_8055 = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 200)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas4", 202)) ;
    nt_expression_ (ioArgument_ioDeclarations, var_mWhileExpression_8055, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_while_5F_expression_8239 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 205)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mBeforeInstructionList_8313 ;
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
    var_mBeforeInstructionList_8313 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas4", 210)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBeforeInstructionList_8313, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_before_5F_branch_8524 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 213)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas4", 214)) ;
  GGS_lstring var_indexVariableName_8587 ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
    var_indexVariableName_8587 = GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 217)), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 219)) ;
    var_indexVariableName_8587 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 220)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 221)) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_semanticInstructionAST_5D_ var_mDoInstructionList_8804 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mDoInstructionList_8804, inCompiler) ;
  GGS_location var_endof_5F_do_5F_branch_8832 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 224)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mBetweenInstructionList_8899 ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
    var_mBetweenInstructionList_8899 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas4", 229)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mBetweenInstructionList_8899, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_between_5F_branch_9114 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 232)) ;
  GGS__5B_semanticInstructionAST_5D_ var_mAfterInstructionList_9186 ;
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
    var_mAfterInstructionList_9186 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas4", 237)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_mAfterInstructionList_9186, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endof_5F_after_5F_branch_9393 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 240)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas4", 241)) ;
  GGS_location var_endof_5F_foreach_5F_instruction_9447 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-for.galgas4", 242)) ;
  outArgument_outInstruction = GGS_forInstructionAST::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_instructionLocation_7575, var_mEnumeratedObjectList_7620, var_indexVariableName_8587, var_mWhileExpression_8055, var_endof_5F_while_5F_expression_8239, var_mBeforeInstructionList_8313, var_endof_5F_before_5F_branch_8524, var_mBetweenInstructionList_8899, var_endof_5F_between_5F_branch_9114, var_mDoInstructionList_8804, var_endof_5F_do_5F_branch_8832, var_mAfterInstructionList_9186, var_endof_5F_after_5F_branch_9393, var_endof_5F_foreach_5F_instruction_9447, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_for COMMA_SOURCE_FILE ("instruction-for.galgas4", 182)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_InstructionsSyntax_37 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 190)) ;
    } break ;
    default:
      break ;
    }
    nt_for_5F_instruction_5F_enumerated_5F_object_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_36 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 196)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_38 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-for.galgas4", 202)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_before COMMA_SOURCE_FILE ("instruction-for.galgas4", 210)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-for.galgas4", 214)) ;
  switch (select_galgas_34_InstructionsSyntax_40 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 219)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-for.galgas4", 220)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-for.galgas4", 221)) ;
  } break ;
  default:
    break ;
  }
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  switch (select_galgas_34_InstructionsSyntax_41 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_between COMMA_SOURCE_FILE ("instruction-for.galgas4", 229)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_galgas_34_InstructionsSyntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_after COMMA_SOURCE_FILE ("instruction-for.galgas4", 237)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-for.galgas4", 241)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas4", 28)) ;
  GGS_location var_instructionLocation_1613 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 29)) ;
  GGS_semanticExpressionAST var_switchExpression_1691 ;
  nt_expression_ (ioArgument_ioDeclarations, var_switchExpression_1691, inCompiler) ;
  GGS_location var_endOfSwitchExpression_1717 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 31)) ;
  GGS__5B_switchBranchAST_5D_ var_switchBranches_1783 = GGS__5B_switchBranchAST_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas4", 34)) ;
    GGS__5B_lstring_5D_ var_constantNameList_1899 ;
    GGS__5B_switchExtractedValuesAST_5D_ var_associatedValuesExtraction_1958 ;
    nt_switch_5F_case_ (ioArgument_ioDeclarations, var_constantNameList_1899, var_associatedValuesExtraction_1958, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 39)) ;
    GGS__5B_semanticInstructionAST_5D_ var_instructions_2054 ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_instructions_2054, inCompiler) ;
    var_switchBranches_1783.plusPlusAssignOperation (GGS_switchBranchAST::init_21__21__21__21_ (var_constantNameList_1899, var_associatedValuesExtraction_1958, var_instructions_2054, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 41)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 41)) ;
    if (select_galgas_34_InstructionsSyntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas4", 44)) ;
  GGS_location var_endOfSwitchInstruction_2207 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 45)) ;
  outArgument_outInstruction = GGS_switchInstructionAST::init_21__21__21__21__21_ (var_instructionLocation_1613, var_switchExpression_1691, var_endOfSwitchExpression_1717, var_switchBranches_1783, var_endOfSwitchInstruction_2207, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_switch COMMA_SOURCE_FILE ("instruction-switch.galgas4", 28)) ;
  nt_expression_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_case COMMA_SOURCE_FILE ("instruction-switch.galgas4", 34)) ;
    nt_switch_5F_case_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 39)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    if (select_galgas_34_InstructionsSyntax_43 (inCompiler) == 2) {
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-switch.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                  GGS__5B_lstring_5D_ & outArgument_outConstantNameList,
                                                                                                  GGS__5B_switchExtractedValuesAST_5D_ & outArgument_outAssociatedValuesExtraction,
                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outConstantNameList.drop () ; // Release 'out' argument
  outArgument_outAssociatedValuesExtraction.drop () ; // Release 'out' argument
  outArgument_outConstantNameList = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_constantName_2812 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 62)) ;
    {
    outArgument_outConstantNameList.setter_append (var_constantName_2812, inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 63)) ;
    }
    if (select_galgas_34_InstructionsSyntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outAssociatedValuesExtraction = GGS__5B_switchExtractedValuesAST_5D_::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        GGS_lbigint var_n_3029 = inCompiler->synthetizedAttribute_bigintValue () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas4", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 74)) ;
        UpEnumerator_range enumerator_3073 (GGS_range (GGS_uint (uint32_t (0U)), var_n_3029.readProperty_bigint ().getter_uint (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 75)).subtract_operation (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 75)))) ;
        while (enumerator_3073.hasCurrentObject ()) {
          outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 76)) ;
          enumerator_3073.gotoNextObject () ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 79)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)), GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 80)) ;
      } break ;
      case 3: {
        GGS_lstring var_typeName_3302 ;
        switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_3302, inCompiler) ;
        } break ;
        case 2: {
          var_typeName_3302 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("instruction-switch.galgas4", 86)) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_constantName_3484 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 88)) ;
        GGS_bool var_constantMarkedAsUnused_3512 = var_constantName_3484.readProperty_string ().getter_hasPrefix (GGS_string ("_") COMMA_SOURCE_FILE ("instruction-switch.galgas4", 89)) ;
        outArgument_outAssociatedValuesExtraction.plusPlusAssignOperation (GGS_switchExtractedValuesAST::init_21__21__21_ (var_typeName_3302, var_constantName_3484, var_constantMarkedAsUnused_3512, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("instruction-switch.galgas4", 90)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 93)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 95)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_switch_5F_case_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 62)) ;
    if (select_galgas_34_InstructionsSyntax_44 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 65)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_galgas_34_InstructionsSyntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 70)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_galgas_34_InstructionsSyntax_47 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("instruction-switch.galgas4", 73)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 74)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2A_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 79)) ;
      } break ;
      case 3: {
        switch (select_galgas_34_InstructionsSyntax_48 (inCompiler)) {
        case 1: {
          nt_type_5F_definition_indexing (inCompiler) ;
        } break ;
        case 2: {
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-switch.galgas4", 88)) ;
      } break ;
      default:
        break ;
      }
      if (select_galgas_34_InstructionsSyntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 93)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-switch.galgas4", 95)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2362 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 48)) ;
  GGS_bool var_prefixedBySelf_2422 ;
  switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
    var_prefixedBySelf_2422 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 54)) ;
    var_prefixedBySelf_2422 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_mReceiverName_2566 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 57)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_2685 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_2685, inCompiler) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_prefixedBySelf_2422.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outInstruction = GGS_selfSetterCallInstructionAST::init_21__21__21_ (var_instructionLocation_2362, var_mReceiverName_2566, var_actualParameterList_2685, inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_instructionLocation_2362, GGS_string ("invalid mutating proc call"), fixItArray1  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 67)) ;
      outArgument_outInstruction.drop () ; // Release error dropped variable
    }
  } break ;
  case 2: {
    GGS__5B_lstring_5D_ var_receiverStructProperties_3012 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
    bool repeatFlag_2 = true ;
    while (repeatFlag_2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 72)) ;
      GGS_lstring var_structProperty_3105 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 73)) ;
      var_receiverStructProperties_3012.plusPlusAssignOperation (var_structProperty_3105  COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 74)) ;
      if (select_galgas_34_InstructionsSyntax_51 (inCompiler) == 2) {
      }else{
        repeatFlag_2 = false ;
      }
    }
    GGS_lstring var_setterName_3245 ;
    {
    var_receiverStructProperties_3012.setter_removeLast (var_setterName_3245, inCompiler COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 77)) ;
    }
    GGS__5B_actualParameterAST_5D_ var_actualParameterList_3350 ;
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_3350, inCompiler) ;
    outArgument_outInstruction = GGS_setterCallInstructionAST::init_21__21__21__21__21__21_ (var_instructionLocation_2362, var_prefixedBySelf_2422, var_mReceiverName_2566, var_receiverStructProperties_3012, var_setterName_3245, var_actualParameterList_3350, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21__3F_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 48)) ;
  switch (select_galgas_34_InstructionsSyntax_49 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 57)) ;
  switch (select_galgas_34_InstructionsSyntax_50 (inCompiler)) {
  case 1: {
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 72)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-setter-call.galgas4", 73)) ;
      if (select_galgas_34_InstructionsSyntax_51 (inCompiler) == 2) {
      }else{
        repeatFlag_0 = false ;
      }
    }
    nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 28)) ;
  GGS_location var_instructionLocation_1611 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 29)) ;
  GGS__5B_semanticInstructionAST_5D_ var_firstInstructions_1730 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_firstInstructions_1730, inCompiler) ;
  GGS_location var_endOfFirstInstructions_1765 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 32)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 33)) ;
  GGS__5B_CommaSeparatedExpressionElement_5D_ var_loopExpression_1874 ;
  nt_comma_5F_separated_5F_expression_ (ioArgument_ioDeclarations, var_loopExpression_1874, inCompiler) ;
  GGS_location var_endOfLoopExpression_1898 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 35)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 36)) ;
  GGS__5B_semanticInstructionAST_5D_ var_secondInstructions_2026 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_secondInstructions_2026, inCompiler) ;
  GGS_location var_endOfSecondInstructions_2054 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 39)) ;
  GGS_location var_endOfLoopInstruction_2113 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 40)) ;
  outArgument_outInstruction = GGS_loopInstructionWithoutVariantAST::init_21__21__21__21__21__21__21__21_ (var_instructionLocation_1611, var_firstInstructions_1730, var_endOfFirstInstructions_1765, var_loopExpression_1874, var_endOfLoopExpression_1898, var_secondInstructions_2026, var_endOfSecondInstructions_2054, var_endOfLoopInstruction_2113, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_loop COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 28)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_while COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 33)) ;
  nt_comma_5F_separated_5F_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_do COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 36)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("instruction-loop-without-variant.galgas4", 39)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 101)) ;
  GGS_lstring var_typeName_4374 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4374, inCompiler) ;
  GGS_lstring var_constantName_4407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_undefinedLocalConstantDeclarationAST::init_21__21__21_ (var_typeName_4374.readProperty_location (), var_typeName_4374, var_constantName_4407, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 111)) ;
    GGS_semanticExpressionAST var_sourceExpression_4651 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4651, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4374.readProperty_location (), GGS_bool (true), var_typeName_4374, var_constantName_4407, var_sourceExpression_4651, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 101)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 103)) ;
  switch (select_galgas_34_InstructionsSyntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 111)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 127)) ;
  GGS_lstring var_variableName_5169 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 129)) ;
  GGS_semanticExpressionAST var_sourceExpression_5255 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_5255, inCompiler) ;
  outArgument_outInstruction = GGS_localConstantDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_5169.readProperty_location (), var_variableName_5169, var_sourceExpression_5255, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("instruction-let.galgas4", 127)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-let.galgas4", 128)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-let.galgas4", 129)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas4", 36)) ;
  GGS_location var_instructionLocation_1921 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-drop.galgas4", 37)) ;
  GGS__5B_lstring_5D_ var_dropList_1977 = GGS__5B_lstring_5D_::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_variableName_2028 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas4", 40)) ;
    var_dropList_1977.plusPlusAssignOperation (var_variableName_2028  COMMA_SOURCE_FILE ("instruction-drop.galgas4", 41)) ;
    if (select_galgas_34_InstructionsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas4", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  outArgument_outInstruction = GGS_dropInstructionAST::init_21__21_ (var_instructionLocation_1921, var_dropList_1977, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_drop COMMA_SOURCE_FILE ("instruction-drop.galgas4", 36)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-drop.galgas4", 40)) ;
    if (select_galgas_34_InstructionsSyntax_53 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("instruction-drop.galgas4", 43)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 93)) ;
  GGS_lstring var_variableName_3994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 95)) ;
  GGS_semanticExpressionAST var_sourceExpression_4080 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4080, inCompiler) ;
  outArgument_outInstruction = GGS_localVariableDeclarationWithAssignmentAST::init_21__21__21_ (var_variableName_3994.readProperty_location (), var_variableName_3994, var_sourceExpression_4080, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 93)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 95)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 108)) ;
  GGS_lstring var_typeName_4550 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_typeName_4550, inCompiler) ;
  GGS_lstring var_variableName_4583 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
    outArgument_outInstruction = GGS_localVariableDeclarationNoAssignmentAST::init_21__21__21_ (var_typeName_4550.readProperty_location (), var_typeName_4550, var_variableName_4583, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 114)) ;
    GGS_semanticExpressionAST var_sourceExpression_4799 ;
    nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_4799, inCompiler) ;
    outArgument_outInstruction = GGS_localVariableOrConstantDeclarationWithAssignmentAST::init_21__21__21__21__21_ (var_typeName_4550.readProperty_location (), GGS_bool (false), var_typeName_4550, var_variableName_4583, var_sourceExpression_4799, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_var COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 108)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 110)) ;
  switch (select_galgas_34_InstructionsSyntax_54 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-var-declaration.galgas4", 114)) ;
    nt_expression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 37)) ;
  GGS_location var_instructionLocation_2001 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 38)) ;
  GGS_assignmentSupplementAST var_supplement_2071 ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
    var_supplement_2071 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-self-assignment.galgas4", 41)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 43)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_2244 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_2244, inCompiler) ;
    var_supplement_2071 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_2244, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 48))  COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 48)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 51)) ;
  GGS_semanticExpressionAST var_sourceExpression_2450 ;
  nt_expression_ (ioArgument_ioDeclarations, var_sourceExpression_2450, inCompiler) ;
  outArgument_outInstruction = GGS_selfAssignmentInstructionAST::init_21__21__21_ (var_instructionLocation_2001, var_supplement_2071, var_sourceExpression_2450, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 37)) ;
  switch (select_galgas_34_InstructionsSyntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 43)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 49)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-self-assignment.galgas4", 51)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 55)) ;
  GGS_location var_instructionLocation_2470 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 57)) ;
  GGS__5B_actualOutputArgumentAST_5D_ var_actualParameterList_2568 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_actualParameterList_2568, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 59)) ;
  outArgument_outInstruction = GGS_superInitInstructionAST::init_21__21_ (var_instructionLocation_2470, var_actualParameterList_2568, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_super COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_init COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 57)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("instruction-super-init.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_location var_instructionLocation_2009 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 38)) ;
  GGS_lstring var_mTypeName_2073 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 40)) ;
  GGS_lstring var_mMethodName_2161 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 41)) ;
  GGS__5B_actualParameterAST_5D_ var_actualParameterList_2265 ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_ (ioArgument_ioDeclarations, var_actualParameterList_2265, inCompiler) ;
  outArgument_outInstruction = GGS_typeMethodCallInstructionAST::init_21__21__21__21_ (var_instructionLocation_2009, var_mTypeName_2073, var_mMethodName_2161, var_actualParameterList_2265, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i40_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_typeReferenceInTypeMethod, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40_type COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-type-method-call.galgas4", 41)) ;
  nt_actual_5F_parameter_5F_list_5F_with_5F_parenthesis_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_mTargetVariableName_1618 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 29)) ;
  GGS_assignmentSupplementAST var_supplement_1672 ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 32)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 34)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_1845 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_1845, inCompiler) ;
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_1845, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 39))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 39)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 40)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 42)) ;
    GGS_lstring var_propertyName_2013 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 43)) ;
    var_supplement_1672 = GGS_assignmentSupplementAST::class_func_property (var_propertyName_2013  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 46)) ;
  GGS_semanticExpressionAST var_mSourceExpression_2158 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_2158, inCompiler) ;
  outArgument_outInstruction = GGS_assignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_1618.readProperty_location (), var_mTargetVariableName_1618, var_supplement_1672, var_mSourceExpression_2158, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i41_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 29)) ;
  switch (select_galgas_34_InstructionsSyntax_56 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 34)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 40)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 42)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 43)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 46)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_semanticInstructionAST & outArgument_outInstruction,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 61)) ;
  GGS_lstring var_mTargetVariableName_2632 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 62)) ;
  GGS_assignmentSupplementAST var_supplement_2686 ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("instruction-assignment.galgas4", 65)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 67)) ;
    GGS__5B_actualOutputArgumentAST_5D_ var_subcriptsArguments_2859 ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_subcriptsArguments_2859, inCompiler) ;
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_subcript (var_subcriptsArguments_2859, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 72))  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 72)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 75)) ;
    GGS_lstring var_propertyName_3027 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 76)) ;
    var_supplement_2686 = GGS_assignmentSupplementAST::class_func_property (var_propertyName_3027  COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 77)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 79)) ;
  GGS_semanticExpressionAST var_mSourceExpression_3172 ;
  nt_expression_ (ioArgument_ioDeclarations, var_mSourceExpression_3172, inCompiler) ;
  outArgument_outInstruction = GGS_selfPropertyAssignmentInstructionAST::init_21__21__21__21_ (var_mTargetVariableName_2632.readProperty_location (), var_mTargetVariableName_2632, var_supplement_2686, var_mSourceExpression_3172, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_semantic_5F_instruction_i42_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 62)) ;
  switch (select_galgas_34_InstructionsSyntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 67)) ;
    nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 73)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 75)) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 76)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("instruction-assignment.galgas4", 79)) ;
  nt_expression_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i43_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 27)) ;
  GGS_lstring var_resultTypeName_1692 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_1692, inCompiler) ;
  GGS_lstring var_functionName_1731 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 30)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_1817 ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    GGS_semanticExpressionAST var_expression_1918 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_1918, inCompiler) ;
    GGS_assignmentInstructionAST var_assignment_1940 = GGS_assignmentInstructionAST::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 35)), GGS_string ("result").getter_here (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 36)), GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 37)), var_expression_1918, inCompiler COMMA_HERE) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 40)) ;
    temp_0.plusPlusAssignOperation (var_assignment_1940  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 40)) ;
    var_functionInstructionList_1817 = temp_0 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_1817, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfFunctionInstructionList_2228 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_functionName_1731, var_resultTypeName_1692, var_functionInstructionList_1817, var_endOfFunctionInstructionList_2228, GGS_bool (false), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i43_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 27)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 29)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 30)) ;
  switch (select_galgas_34_InstructionsSyntax_58 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 42)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 44)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 62)) ;
  GGS_lstring var_resultTypeName_2764 ;
  nt_type_5F_definition_ (ioArgument_ioDeclarations, var_resultTypeName_2764, inCompiler) ;
  GGS_lstring var_functionName_2803 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 65)) ;
  GGS__5B_semanticInstructionAST_5D_ var_functionInstructionList_2889 ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    GGS_semanticExpressionAST var_expression_2990 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_2990, inCompiler) ;
    GGS_assignmentInstructionAST var_assignment_3012 = GGS_assignmentInstructionAST::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 70)), GGS_string ("result").getter_here (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 71)), GGS_assignmentSupplementAST::class_func_none (SOURCE_FILE ("declararation-global-constant.galgas4", 72)), var_expression_2990, inCompiler COMMA_HERE) ;
    GGS__5B_semanticInstructionAST_5D_ temp_0 = GGS__5B_semanticInstructionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 75)) ;
    temp_0.plusPlusAssignOperation (var_assignment_3012  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 75)) ;
    var_functionInstructionList_2889 = temp_0 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 77)) ;
    nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_functionInstructionList_2889, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 79)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfFunctionInstructionList_3300 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 81)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_onceFunctionDeclarationAST::init_21_isPredefined_21__21__21__21__21__21_ (GGS_bool (false), var_functionName_2803, var_resultTypeName_2764, var_functionInstructionList_2889, var_endOfFunctionInstructionList_3300, GGS_bool (true), GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 82)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i44_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_let COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 62)) ;
  nt_type_5F_definition_indexing (inCompiler) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 65)) ;
  switch (select_galgas_34_InstructionsSyntax_59 (inCompiler)) {
  case 1: {
    nt_expression_indexing (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 77)) ;
    nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("declararation-global-constant.galgas4", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  GGS_bool var_isUsefull_1761 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1761.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 38)) ;
        }
      }
      var_isUsefull_1761 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_mActionName_1972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  GGS__5B_formalParameterAST_5D_ var_mFormalParameterList_2088 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_mFormalParameterList_2088, inCompiler) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_externProcedureDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure (GGS_bool (false), GGS_bool (false), var_mActionName_1972, var_mFormalParameterList_2088, var_isUsefull_1761, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i45_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_extern COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 31)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 32)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_60 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 36)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("extern-procedure-declaration.galgas4", 42)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 31)) ;
  GGS_bool var_isUsefull_1719 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 35)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_1719.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 37)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 37)) ;
        }
      }
      var_isUsefull_1719 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_routineName_1921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 41)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_2037 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_2037, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 43)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_2148 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_2148, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 45)) ;
  GGS_location var_endOfInstructionList_2188 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 46)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (false), var_routineName_1921, var_formalParameterList_2037, var_isUsefull_1719, var_routineInstructionList_2148, var_endOfInstructionList_2188, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 47)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i46_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 31)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_61 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 35)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 41)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 43)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 45)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i47_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                               Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 62)) ;
  GGS_bool var_isUsefull_2694 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 66)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = var_isUsefull_2694.boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 68)), GGS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 68)) ;
        }
      }
      var_isUsefull_2694 = GGS_bool (true) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_routineName_2896 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 72)) ;
  GGS__5B_formalParameterAST_5D_ var_formalParameterList_3012 ;
  nt_formal_5F_parameter_5F_list_ (ioArgument_ioDeclarations, var_formalParameterList_3012, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 74)) ;
  GGS__5B_semanticInstructionAST_5D_ var_routineInstructionList_3123 ;
  nt_semantic_5F_instruction_5F_list_ (ioArgument_ioDeclarations, var_routineInstructionList_3123, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 76)) ;
  GGS_location var_endOfInstructionList_3163 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 77)) ;
  ioArgument_ioDeclarations.mProperty_mDeclarationList.plusPlusAssignOperation (GGS_procDeclarationAST::init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (GGS_bool (false), GGS_bool (true), var_routineName_2896, var_formalParameterList_3012, var_isUsefull_2694, var_routineInstructionList_3123, var_endOfInstructionList_3163, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_InstructionsSyntax::rule_galgas_34_InstructionsSyntax_declaration_i47_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_private COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_proc COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_galgas_34_InstructionsSyntax_62 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__23_usefull COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 66)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_routineDefinition, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 72)) ;
  nt_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7B_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 74)) ;
  nt_semantic_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7D_ COMMA_SOURCE_FILE ("procedure-declaration.galgas4", 76)) ;
}

