#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (void) :
mProperty_mTypeName (),
mProperty_mTargetVarCppName (),
mProperty_mSourceLexicalAttributeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (const GGS_terminalCheckAssignement & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mTargetVarCppName (inSource.mProperty_mTargetVarCppName),
mProperty_mSourceLexicalAttributeName (inSource.mProperty_mSourceLexicalAttributeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement & GGS_terminalCheckAssignement::operator = (const GGS_terminalCheckAssignement & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mTargetVarCppName = inSource.mProperty_mTargetVarCppName ;
  mProperty_mSourceLexicalAttributeName = inSource.mProperty_mSourceLexicalAttributeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalCheckAssignement GGS_terminalCheckAssignement::init_21__21__21_ (const GGS_string & in_mTypeName,
                                                                             const GGS_string & in_mTargetVarCppName,
                                                                             const GGS_string & in_mSourceLexicalAttributeName,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalCheckAssignement result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mTargetVarCppName = in_mTargetVarCppName ;
  result.mProperty_mSourceLexicalAttributeName = in_mSourceLexicalAttributeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckAssignement::GGS_terminalCheckAssignement (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2) :
mProperty_mTypeName (inOperand0),
mProperty_mTargetVarCppName (inOperand1),
mProperty_mSourceLexicalAttributeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalCheckAssignement::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mTargetVarCppName.isValid () && mProperty_mSourceLexicalAttributeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mTargetVarCppName.drop () ;
  mProperty_mSourceLexicalAttributeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalCheckAssignement::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalCheckAssignement:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetVarCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSourceLexicalAttributeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalCheckAssignement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckAssignement ("terminalCheckAssignement",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckAssignement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckAssignement ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST::objectCompare (const GGS_terminalCheckInstructionAST & inOperand) const {
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

GGS_terminalCheckInstructionAST::GGS_terminalCheckInstructionAST (void) :
GGS_syntaxInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_lstring & in_mTerminalName,
                              const GGS__5B_actualInputParameterAST_5D_ & in_mActualInputParameterList,
                              const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_terminalCheckInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_terminalCheckInstructionAST (inCompiler COMMA_THERE)) ;
  object->terminalCheckInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mTerminalName, in_mActualInputParameterList, in_mIndexingKeyList, in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, in_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler) ;
  const GGS_terminalCheckInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionAST::
terminalCheckInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mTerminalName,
                                                          const GGS__5B_actualInputParameterAST_5D_ & in_mActualInputParameterList,
                                                          const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                          Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mActualInputParameterList = in_mActualInputParameterList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST::GGS_terminalCheckInstructionAST (const cPtr_terminalCheckInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalCheckInstructionAST::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_actualInputParameterAST_5D_ GGS_terminalCheckInstructionAST::readProperty_mActualInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_actualInputParameterAST_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mActualInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__32_lstring_5D_ GGS_terminalCheckInstructionAST::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__32_lstring_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionAST::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionAST::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionAST) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionAST::cPtr_terminalCheckInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mActualInputParameterList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionAST::cPtr_terminalCheckInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_lstring & in_mTerminalName,
                                                                    const GGS__5B_actualInputParameterAST_5D_ & in_mActualInputParameterList,
                                                                    const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mActualInputParameterList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mActualInputParameterList = in_mActualInputParameterList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalCheckInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;
}

void cPtr_terminalCheckInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalCheckInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalCheckInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionAST (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mActualInputParameterList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mActualInputParameterList.printNonNullClassInstanceProperties ("mActualInputParameterList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST ("terminalCheckInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionAST_2E_weak::objectCompare (const GGS_terminalCheckInstructionAST_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionAST_2E_weak::GGS_terminalCheckInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST_2E_weak & GGS_terminalCheckInstructionAST_2E_weak::operator = (const GGS_terminalCheckInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionAST result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionAST * p = (cPtr_terminalCheckInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionAST GGS_terminalCheckInstructionAST_2E_weak::bang_terminalCheckInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ("terminalCheckInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @terminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalInstructionForGrammarAnalysis::objectCompare (const GGS_terminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis GGS_terminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mTerminalSymbolName,
                  const GGS_uint & in_mTerminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_terminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_terminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->terminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mTerminalSymbolName, in_mTerminalSymbolIndex, inCompiler) ;
  const GGS_terminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalInstructionForGrammarAnalysis::
terminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                        Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalInstructionForGrammarAnalysis::GGS_terminalInstructionForGrammarAnalysis (const cPtr_terminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_terminalInstructionForGrammarAnalysis::readProperty_mTerminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_terminalInstructionForGrammarAnalysis * p = (cPtr_terminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mTerminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalInstructionForGrammarAnalysis::cPtr_terminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                        const GGS_lstring & in_mTerminalSymbolName,
                                                                                        const GGS_uint & in_mTerminalSymbolIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mTerminalSymbolName (),
mProperty_mTerminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mTerminalSymbolName = in_mTerminalSymbolName ;
  mProperty_mTerminalSymbolIndex = in_mTerminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

void cPtr_terminalInstructionForGrammarAnalysis::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mTerminalSymbolName, mProperty_mTerminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalSymbolName.printNonNullClassInstanceProperties ("mTerminalSymbolName") ;
    mProperty_mTerminalSymbolIndex.printNonNullClassInstanceProperties ("mTerminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ("terminalInstructionForGrammarAnalysis",
                                                                                          & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::objectCompare (const GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & inOperand) const {
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

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak & GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::operator = (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::unwrappedValue (void) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (isValid ()) {
    const cPtr_abstractSyntaxInstructionForGrammarAnalysis * p = (cPtr_abstractSyntaxInstructionForGrammarAnalysis *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractSyntaxInstructionForGrammarAnalysis (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractSyntaxInstructionForGrammarAnalysis GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::bang_abstractSyntaxInstructionForGrammarAnalysis_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractSyntaxInstructionForGrammarAnalysis result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ("abstractSyntaxInstructionForGrammarAnalysis.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @terminalCheckInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration::objectCompare (const GGS_terminalCheckInstructionForGeneration & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_lstring & in_mTerminalName,
                                  const GGS_string & in_mLexiqueIdentifier,
                                  const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                  const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_terminalCheckInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_terminalCheckInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTerminalName, in_mLexiqueIdentifier, in_mTerminalCheckAssignementList, in_mIndexingKeyList, in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, in_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler) ;
  const GGS_terminalCheckInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_terminalCheckInstructionForGeneration::
terminalCheckInstructionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mTerminalName,
                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                        const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                                                        const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration::GGS_terminalCheckInstructionForGeneration (const cPtr_terminalCheckInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_terminalCheckInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_terminalCheckInstructionForGeneration::readProperty_mLexiqueIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mLexiqueIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_terminalCheckAssignement_5D_ GGS_terminalCheckInstructionForGeneration::readProperty_mTerminalCheckAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_terminalCheckAssignement_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mTerminalCheckAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__32_lstring_5D_ GGS_terminalCheckInstructionForGeneration::readProperty_mIndexingKeyList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B__32_lstring_5D_ () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mIndexingKeyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_terminalCheckInstructionForGeneration::readProperty_mGrammarInstructionSyntaxDirectedTranslationToken (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_terminalCheckInstructionForGeneration) ;
    return p->mProperty_mGrammarInstructionSyntaxDirectedTranslationToken ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @terminalCheckInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
}

//--------------------------------------------------------------------------------------------------

cPtr_terminalCheckInstructionForGeneration::cPtr_terminalCheckInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_lstring & in_mTerminalName,
                                                                                        const GGS_string & in_mLexiqueIdentifier,
                                                                                        const GGS__5B_terminalCheckAssignement_5D_ & in_mTerminalCheckAssignementList,
                                                                                        const GGS__5B__32_lstring_5D_ & in_mIndexingKeyList,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor,
                                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mGrammarInstructionSyntaxDirectedTranslationToken,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTerminalName (),
mProperty_mLexiqueIdentifier (),
mProperty_mTerminalCheckAssignementList (),
mProperty_mIndexingKeyList (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor (),
mProperty_mGrammarInstructionSyntaxDirectedTranslationToken () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTerminalName = in_mTerminalName ;
  mProperty_mLexiqueIdentifier = in_mLexiqueIdentifier ;
  mProperty_mTerminalCheckAssignementList = in_mTerminalCheckAssignementList ;
  mProperty_mIndexingKeyList = in_mIndexingKeyList ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor = in_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken = in_mGrammarInstructionSyntaxDirectedTranslationToken ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_terminalCheckInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

void cPtr_terminalCheckInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@terminalCheckInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalCheckAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingKeyList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_terminalCheckInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_terminalCheckInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTerminalName, mProperty_mLexiqueIdentifier, mProperty_mTerminalCheckAssignementList, mProperty_mIndexingKeyList, mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, mProperty_mGrammarInstructionSyntaxDirectedTranslationToken, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_terminalCheckInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTerminalName.printNonNullClassInstanceProperties ("mTerminalName") ;
    mProperty_mLexiqueIdentifier.printNonNullClassInstanceProperties ("mLexiqueIdentifier") ;
    mProperty_mTerminalCheckAssignementList.printNonNullClassInstanceProperties ("mTerminalCheckAssignementList") ;
    mProperty_mIndexingKeyList.printNonNullClassInstanceProperties ("mIndexingKeyList") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor") ;
    mProperty_mGrammarInstructionSyntaxDirectedTranslationToken.printNonNullClassInstanceProperties ("mGrammarInstructionSyntaxDirectedTranslationToken") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @terminalCheckInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ("terminalCheckInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_terminalCheckInstructionForGeneration_2E_weak::objectCompare (const GGS_terminalCheckInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_terminalCheckInstructionForGeneration_2E_weak::GGS_terminalCheckInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration_2E_weak & GGS_terminalCheckInstructionForGeneration_2E_weak::operator = (const GGS_terminalCheckInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_terminalCheckInstructionForGeneration * p = (cPtr_terminalCheckInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_terminalCheckInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalCheckInstructionForGeneration GGS_terminalCheckInstructionForGeneration_2E_weak::bang_terminalCheckInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_terminalCheckInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ("terminalCheckInstructionForGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalCheckInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_SyntaxInstructionListAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_::GGS__5B_SyntaxInstructionListAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_::GGS__5B_SyntaxInstructionListAST_5D_ (const GGS__5B_SyntaxInstructionListAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_ & GGS__5B_SyntaxInstructionListAST_5D_::operator = (const GGS__5B_SyntaxInstructionListAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_ GGS__5B_SyntaxInstructionListAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_SyntaxInstructionListAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::plusPlusAssignOperation (const GGS_SyntaxInstructionListAST & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_SyntaxInstructionListAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_ GGS__5B_SyntaxInstructionListAST_5D_::add_operation (const GGS__5B_SyntaxInstructionListAST_5D_ & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_SyntaxInstructionListAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::description (String & ioString,
                                                        const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@SyntaxInstructionListAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::plusAssignOperation (const GGS__5B_SyntaxInstructionListAST_5D_ inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_append (const GGS_SyntaxInstructionListAST inValue,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_set (const GGS_SyntaxInstructionListAST inValue,
                                                       const GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_insert (const GGS_SyntaxInstructionListAST inValue,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_remove (GGS_SyntaxInstructionListAST & outValue,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_removeFirst (GGS_SyntaxInstructionListAST & outValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_SyntaxInstructionListAST_5D_::setter_removeLast (GGS_SyntaxInstructionListAST & outValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_ GGS__5B_SyntaxInstructionListAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_SyntaxInstructionListAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_SyntaxInstructionListAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_SyntaxInstructionListAST_5D_ GGS__5B_SyntaxInstructionListAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                           const GGS_uint & inLength,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_SyntaxInstructionListAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_SyntaxInstructionListAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_SyntaxInstructionListAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST GGS__5B_SyntaxInstructionListAST_5D_::getter_first (Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_SyntaxInstructionListAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST GGS__5B_SyntaxInstructionListAST_5D_::getter_last (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_SyntaxInstructionListAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST GGS__5B_SyntaxInstructionListAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_SyntaxInstructionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_SyntaxInstructionListAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_SyntaxInstructionListAST_5D_::DownEnumerator__5B_SyntaxInstructionListAST_5D_ (const GGS__5B_SyntaxInstructionListAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST DownEnumerator__5B_SyntaxInstructionListAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST DownEnumerator__5B_SyntaxInstructionListAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_SyntaxInstructionListAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_SyntaxInstructionListAST_5D_::UpEnumerator__5B_SyntaxInstructionListAST_5D_ (const GGS__5B_SyntaxInstructionListAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST UpEnumerator__5B_SyntaxInstructionListAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST UpEnumerator__5B_SyntaxInstructionListAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[SyntaxInstructionListAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_SyntaxInstructionListAST_5D_ ("[SyntaxInstructionListAST]",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_SyntaxInstructionListAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_SyntaxInstructionListAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST::GGS_SyntaxInstructionListAST (void) :
mProperty_mSyntaxInstructionList (),
mProperty_mEndOf_5F_instructions () {
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST::GGS_SyntaxInstructionListAST (const GGS_SyntaxInstructionListAST & inSource) :
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList),
mProperty_mEndOf_5F_instructions (inSource.mProperty_mEndOf_5F_instructions) {
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST & GGS_SyntaxInstructionListAST::operator = (const GGS_SyntaxInstructionListAST & inSource) {
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  mProperty_mEndOf_5F_instructions = inSource.mProperty_mEndOf_5F_instructions ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_SyntaxInstructionListAST GGS_SyntaxInstructionListAST::init_21__21_ (const GGS__5B_syntaxInstructionAST_5D_ & in_mSyntaxInstructionList,
                                                                         const GGS_location & in_mEndOf_5F_instructions,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_SyntaxInstructionListAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  result.mProperty_mEndOf_5F_instructions = in_mEndOf_5F_instructions ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_SyntaxInstructionListAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_SyntaxInstructionListAST::GGS_SyntaxInstructionListAST (const GGS__5B_syntaxInstructionAST_5D_ & inOperand0,
                                                            const GGS_location & inOperand1) :
mProperty_mSyntaxInstructionList (inOperand0),
mProperty_mEndOf_5F_instructions (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_SyntaxInstructionListAST::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () && mProperty_mEndOf_5F_instructions.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_SyntaxInstructionListAST::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
  mProperty_mEndOf_5F_instructions.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_SyntaxInstructionListAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @SyntaxInstructionListAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOf_5F_instructions.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @SyntaxInstructionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_SyntaxInstructionListAST ("SyntaxInstructionListAST",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_SyntaxInstructionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_SyntaxInstructionListAST ;
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
                  const GGS__5B_SyntaxInstructionListAST_5D_ & in_mSelectBranchList,
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
                                    const GGS__5B_SyntaxInstructionListAST_5D_ & in_mSelectBranchList,
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

GGS__5B_SyntaxInstructionListAST_5D_ GGS_selectInstruction::readProperty_mSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_SyntaxInstructionListAST_5D_ () ;
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
                                                const GGS__5B_SyntaxInstructionListAST_5D_ & in_mSelectBranchList,
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

const GALGAS_TypeDescriptor * cPtr_selectInstruction::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selectInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction ("selectInstruction",
                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstruction_2E_weak::objectCompare (const GGS_selectInstruction_2E_weak & inOperand) const {
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

GGS_selectInstruction_2E_weak::GGS_selectInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction_2E_weak & GGS_selectInstruction_2E_weak::operator = (const GGS_selectInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::unwrappedValue (void) const {
  GGS_selectInstruction result ;
  if (isValid ()) {
    const cPtr_selectInstruction * p = (cPtr_selectInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstruction GGS_selectInstruction_2E_weak::bang_selectInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstruction_2E_weak ("selectInstruction.weak",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::operator = (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::plusPlusAssignOperation (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & inValue
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::add_operation (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand,
                                                                                                                                                Compiler * /* inCompiler */
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::description (String & ioString,
                                                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@_5B_abstractSyntaxInstructionForGrammarAnalysis_5D_], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::plusAssignOperation (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ inOperand,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_append (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ inValue,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_set (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ inValue,
                                                                                  const GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_insert (const GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ inValue,
                                                                                     const GGS_uint inInsertionIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_remove (GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outValue,
                                                                                     const GGS_uint inRemoveIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_removeFirst (GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outValue,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::setter_removeLast (GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ & outValue,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                                                                 const GGS_uint & inLength,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::getter_first (Compiler * inCompiler
                                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::getter_last (Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                                                                            Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ DownEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ (const GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractSyntaxInstructionForGrammarAnalysis_5D_ UpEnumerator__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[[abstractSyntaxInstructionForGrammarAnalysis]] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ ("[[abstractSyntaxInstructionForGrammarAnalysis]]",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B__5B_abstractSyntaxInstructionForGrammarAnalysis_5D__5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_semanticInstructionListForGeneration_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_::GGS__5B_semanticInstructionListForGeneration_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_::GGS__5B_semanticInstructionListForGeneration_5D_ (const GGS__5B_semanticInstructionListForGeneration_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_ & GGS__5B_semanticInstructionListForGeneration_5D_::operator = (const GGS__5B_semanticInstructionListForGeneration_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_ GGS__5B_semanticInstructionListForGeneration_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_semanticInstructionListForGeneration_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::plusPlusAssignOperation (const GGS_semanticInstructionListForGeneration & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_semanticInstructionListForGeneration_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_ GGS__5B_semanticInstructionListForGeneration_5D_::add_operation (const GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionListForGeneration_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@semanticInstructionListForGeneration], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::plusAssignOperation (const GGS__5B_semanticInstructionListForGeneration_5D_ inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_append (const GGS_semanticInstructionListForGeneration inValue,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_set (const GGS_semanticInstructionListForGeneration inValue,
                                                                   const GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_insert (const GGS_semanticInstructionListForGeneration inValue,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_remove (GGS_semanticInstructionListForGeneration & outValue,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_removeFirst (GGS_semanticInstructionListForGeneration & outValue,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_semanticInstructionListForGeneration_5D_::setter_removeLast (GGS_semanticInstructionListForGeneration & outValue,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_ GGS__5B_semanticInstructionListForGeneration_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionListForGeneration_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionListForGeneration_5D_ GGS__5B_semanticInstructionListForGeneration_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                                   const GGS_uint & inLength,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_semanticInstructionListForGeneration_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_semanticInstructionListForGeneration_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS__5B_semanticInstructionListForGeneration_5D_::getter_first (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS__5B_semanticInstructionListForGeneration_5D_::getter_last (Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS__5B_semanticInstructionListForGeneration_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_semanticInstructionListForGeneration_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_semanticInstructionListForGeneration_5D_::DownEnumerator__5B_semanticInstructionListForGeneration_5D_ (const GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator__5B_semanticInstructionListForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration DownEnumerator__5B_semanticInstructionListForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_semanticInstructionListForGeneration_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_semanticInstructionListForGeneration_5D_::UpEnumerator__5B_semanticInstructionListForGeneration_5D_ (const GGS__5B_semanticInstructionListForGeneration_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator__5B_semanticInstructionListForGeneration_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration UpEnumerator__5B_semanticInstructionListForGeneration_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[semanticInstructionListForGeneration] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_semanticInstructionListForGeneration_5D_ ("[semanticInstructionListForGeneration]",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_semanticInstructionListForGeneration_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_semanticInstructionListForGeneration_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (const GGS_semanticInstructionListForGeneration & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration & GGS_semanticInstructionListForGeneration::operator = (const GGS_semanticInstructionListForGeneration & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_semanticInstructionListForGeneration::init_21__21_ (const GGS__5B_semanticInstructionForGeneration_5D_ & in_mInstructionList,
                                                                                                 const GGS_location & in_mEndOfInstructionList,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration::GGS_semanticInstructionListForGeneration (const GGS__5B_semanticInstructionForGeneration_5D_ & inOperand0,
                                                                                    const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListForGeneration::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListForGeneration:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ("semanticInstructionListForGeneration",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration ;
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
                      const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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
                                                     const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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

GGS__5B_semanticInstructionListForGeneration_5D_ GGS_selectInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionListForGeneration_5D_ () ;
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
                                                                          const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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

const GALGAS_TypeDescriptor * cPtr_selectInstructionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selectInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration ("selectInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selectInstructionForGeneration_2E_weak::objectCompare (const GGS_selectInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_selectInstructionForGeneration_2E_weak::GGS_selectInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration_2E_weak & GGS_selectInstructionForGeneration_2E_weak::operator = (const GGS_selectInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selectInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_selectInstructionForGeneration * p = (cPtr_selectInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectInstructionForGeneration GGS_selectInstructionForGeneration_2E_weak::bang_selectInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ("selectInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectInstructionForGeneration_2E_weak ;
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
                          const GGS__5B_syntaxInstructionAST_5D_ & in_mRepeatedInstructionList,
                          const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                          const GGS__5B_SyntaxInstructionListAST_5D_ & in_mRepeatBranchList,
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
                                            const GGS__5B_syntaxInstructionAST_5D_ & in_mRepeatedInstructionList,
                                            const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                            const GGS__5B_SyntaxInstructionListAST_5D_ & in_mRepeatBranchList,
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

GGS__5B_syntaxInstructionAST_5D_ GGS_repeatInstruction::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_syntaxInstructionAST_5D_ () ;
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

GGS__5B_SyntaxInstructionListAST_5D_ GGS_repeatInstruction::readProperty_mRepeatBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_SyntaxInstructionListAST_5D_ () ;
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
                                                const GGS__5B_syntaxInstructionAST_5D_ & in_mRepeatedInstructionList,
                                                const GGS_location & in_mEndOf_5F_repeated_5F_instructions_5F_branch,
                                                const GGS__5B_SyntaxInstructionListAST_5D_ & in_mRepeatBranchList,
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

const GALGAS_TypeDescriptor * cPtr_repeatInstruction::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_repeatInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction ("repeatInstruction",
                                                                      & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstruction_2E_weak::objectCompare (const GGS_repeatInstruction_2E_weak & inOperand) const {
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

GGS_repeatInstruction_2E_weak::GGS_repeatInstruction_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction_2E_weak & GGS_repeatInstruction_2E_weak::operator = (const GGS_repeatInstruction & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstruction result ;
  if (isValid ()) {
    const cPtr_repeatInstruction * p = (cPtr_repeatInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstruction GGS_repeatInstruction_2E_weak::bang_repeatInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstruction result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ("repeatInstruction.weak",
                                                                              & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstruction_2E_weak ;
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
                              const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_repeated_5F_instructionList,
                              const GGS_location & in_mEndOfRepeatedInstructions,
                              const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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
                                                             const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_repeated_5F_instructionList,
                                                             const GGS_location & in_mEndOfRepeatedInstructions,
                                                             const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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

GGS__5B_semanticInstructionForGeneration_5D_ GGS_repeatInstructionForGeneration::readProperty_m_5F_repeated_5F_instructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionForGeneration_5D_ () ;
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

GGS__5B_semanticInstructionListForGeneration_5D_ GGS_repeatInstructionForGeneration::readProperty_mListOfSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionListForGeneration_5D_ () ;
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
                                                                          const GGS__5B_semanticInstructionForGeneration_5D_ & in_m_5F_repeated_5F_instructionList,
                                                                          const GGS_location & in_mEndOfRepeatedInstructions,
                                                                          const GGS__5B_semanticInstructionListForGeneration_5D_ & in_mListOfSemanticInstructionListForGeneration,
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

const GALGAS_TypeDescriptor * cPtr_repeatInstructionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_repeatInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration ("repeatInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_repeatInstructionForGeneration_2E_weak::objectCompare (const GGS_repeatInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_repeatInstructionForGeneration_2E_weak::GGS_repeatInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration_2E_weak & GGS_repeatInstructionForGeneration_2E_weak::operator = (const GGS_repeatInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_repeatInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_repeatInstructionForGeneration * p = (cPtr_repeatInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_repeatInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_repeatInstructionForGeneration GGS_repeatInstructionForGeneration_2E_weak::bang_repeatInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_repeatInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ("repeatInstructionForGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_repeatInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_repeatInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInGraph (cPtr_semanticDeclarationAST * inObject,
                                                  GGS_semanticTypePrecedenceGraph & io_ioSemanticTypePrecedenceGraph,
                                                  GGS_equatableExtensionMap & io_ioEquatableExtensionMap,
                                                  GGS_extensionInitializerForBuildingContext & io_ioExtensionInitializerForBuildingContext,
                                                  GGS_extensionMethodMapForBuildingContext & io_ioExtensionMethodMapForBuildingContext,
                                                  GGS_extensionGetterMapForBuildingContext & io_ioExtensionGetterMapForBuildingContext,
                                                  GGS_extensionSetterMapForBuildingContext & io_ioExtensionSetterMapForBuildingContext,
                                                  GGS__5B_semanticDeclarationAST_5D_ & io_ioExtensionOverrideDefinitionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInGraph (io_ioSemanticTypePrecedenceGraph, io_ioEquatableExtensionMap, io_ioExtensionInitializerForBuildingContext, io_ioExtensionMethodMapForBuildingContext, io_ioExtensionGetterMapForBuildingContext, io_ioExtensionSetterMapForBuildingContext, io_ioExtensionOverrideDefinitionList, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST enterDeclarationInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDeclarationInSemanticContext (cPtr_semanticDeclarationAST * inObject,
                                                            GGS_equatableExtensionMap & io__5F_ioEquatableExtensionMap,
                                                            const GGS_extensionInitializerForBuildingContext constin__5F_inExtensionInitializerMapForBuildingContext,
                                                            const GGS_extensionMethodMapForBuildingContext constin__5F_inExtensionMethodMapForBuildingContext,
                                                            const GGS_extensionGetterMapForBuildingContext constin__5F_inExtensionGetterMapForBuildingContext,
                                                            const GGS_extensionSetterMapForBuildingContext constin__5F_inExtensionSetterMapForBuildingContext,
                                                            GGS_unifiedTypeMap & io_ioTypeMap,
                                                            GGS_semanticContext & io__5F_ioSemanticContext,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_enterDeclarationInSemanticContext (io__5F_ioEquatableExtensionMap, constin__5F_inExtensionInitializerMapForBuildingContext, constin__5F_inExtensionMethodMapForBuildingContext, constin__5F_inExtensionGetterMapForBuildingContext, constin__5F_inExtensionSetterMapForBuildingContext, io_ioTypeMap, io__5F_ioSemanticContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@semanticDeclarationAST semanticAnalysis'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_semanticAnalysis (cPtr_semanticDeclarationAST * inObject,
                                           GGS__5B_lstring_5D_ & io_ioUsefulnessRootEntities,
                                           GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                           const GGS_string constin_inProductDirectory,
                                           const GGS_semanticContext constin__5F_inSemanticContext,
                                           GGS_unifiedTypeMap & io__5F_ioTypeMap,
                                           const GGS_predefinedTypes constin__5F_inPredefinedTypes,
                                           GGS__5B_semanticDeclarationForGeneration_5D_ & io__5F_ioSemanticDeclarationListForGeneration,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticDeclarationAST) ;
    inObject->method_semanticAnalysis (io_ioUsefulnessRootEntities, io_ioUsefulEntitiesGraph, constin_inProductDirectory, constin__5F_inSemanticContext, io__5F_ioTypeMap, constin__5F_inPredefinedTypes, io__5F_ioSemanticDeclarationListForGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @predefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_predefinedTypeAST::objectCompare (const GGS_predefinedTypeAST & inOperand) const {
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

GGS_predefinedTypeAST::GGS_predefinedTypeAST (void) :
GGS_semanticDeclarationAST () {
}


void cPtr_predefinedTypeAST::
predefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                            const GGS_string & in_mPredefinedTypeName,
                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST::GGS_predefinedTypeAST (const cPtr_predefinedTypeAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_predefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_predefinedTypeAST::readProperty_mPredefinedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_predefinedTypeAST) ;
    return p->mProperty_mPredefinedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @predefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_predefinedTypeAST::cPtr_predefinedTypeAST (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mPredefinedTypeName () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_predefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mPredefinedTypeName.printNonNullClassInstanceProperties ("mPredefinedTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @predefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST ("predefinedTypeAST",
                                                                      & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_predefinedTypeAST_2E_weak::objectCompare (const GGS_predefinedTypeAST_2E_weak & inOperand) const {
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

GGS_predefinedTypeAST_2E_weak::GGS_predefinedTypeAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak & GGS_predefinedTypeAST_2E_weak::operator = (const GGS_predefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak::GGS_predefinedTypeAST_2E_weak (const GGS_predefinedTypeAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST_2E_weak GGS_predefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_predefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST GGS_predefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_predefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_predefinedTypeAST * p = (cPtr_predefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_predefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypeAST GGS_predefinedTypeAST_2E_weak::bang_predefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_predefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_predefinedTypeAST) ;
      result = GGS_predefinedTypeAST ((cPtr_predefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @predefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak ("predefinedTypeAST.weak",
                                                                              & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B__5B_formalInputParameterAST_5D__5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_::GGS__5B__5B_formalInputParameterAST_5D__5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_::GGS__5B__5B_formalInputParameterAST_5D__5D_ (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ & GGS__5B__5B_formalInputParameterAST_5D__5D_::operator = (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::plusPlusAssignOperation (const GGS__5B_formalInputParameterAST_5D_ & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B__5B_formalInputParameterAST_5D__5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::add_operation (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@_5B_formalInputParameterAST_5D_], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::plusAssignOperation (const GGS__5B__5B_formalInputParameterAST_5D__5D_ inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_append (const GGS__5B_formalInputParameterAST_5D_ inValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_set (const GGS__5B_formalInputParameterAST_5D_ inValue,
                                                              const GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_insert (const GGS__5B_formalInputParameterAST_5D_ inValue,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_remove (GGS__5B_formalInputParameterAST_5D_ & outValue,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_removeFirst (GGS__5B_formalInputParameterAST_5D_ & outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B__5B_formalInputParameterAST_5D__5D_::setter_removeLast (GGS__5B_formalInputParameterAST_5D_ & outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                         const GGS_uint & inLength,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::getter_first (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::getter_last (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ GGS__5B__5B_formalInputParameterAST_5D__5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS__5B_formalInputParameterAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B__5B_formalInputParameterAST_5D__5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_::DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ DownEnumerator__5B__5B_formalInputParameterAST_5D__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B__5B_formalInputParameterAST_5D__5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_::UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_ (const GGS__5B__5B_formalInputParameterAST_5D__5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_formalInputParameterAST_5D_ UpEnumerator__5B__5B_formalInputParameterAST_5D__5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[[formalInputParameterAST]] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B__5B_formalInputParameterAST_5D__5D_ ("[[formalInputParameterAST]]",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B__5B_formalInputParameterAST_5D__5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B__5B_formalInputParameterAST_5D__5D_ ;
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
// @timerPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_timerPredefinedTypeAST::objectCompare (const GGS_timerPredefinedTypeAST & inOperand) const {
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

GGS_timerPredefinedTypeAST::GGS_timerPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_timerPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_timerPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->timerPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_timerPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_timerPredefinedTypeAST::
timerPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                 const GGS_string & in_mPredefinedTypeName,
                                                 Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST::GGS_timerPredefinedTypeAST (const cPtr_timerPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_timerPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @timerPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_timerPredefinedTypeAST::cPtr_timerPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                          const GGS_string & in_mPredefinedTypeName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_timerPredefinedTypeAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_timerPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_timerPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_timerPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @timerPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST ("timerPredefinedTypeAST",
                                                                           & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_timerPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_timerPredefinedTypeAST_2E_weak::objectCompare (const GGS_timerPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_timerPredefinedTypeAST_2E_weak::GGS_timerPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak & GGS_timerPredefinedTypeAST_2E_weak::operator = (const GGS_timerPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak::GGS_timerPredefinedTypeAST_2E_weak (const GGS_timerPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST_2E_weak GGS_timerPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_timerPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_timerPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_timerPredefinedTypeAST * p = (cPtr_timerPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_timerPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_timerPredefinedTypeAST GGS_timerPredefinedTypeAST_2E_weak::bang_timerPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_timerPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_timerPredefinedTypeAST) ;
      result = GGS_timerPredefinedTypeAST ((cPtr_timerPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @timerPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ("timerPredefinedTypeAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_timerPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_timerPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @stringPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringPredefinedTypeAST::objectCompare (const GGS_stringPredefinedTypeAST & inOperand) const {
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

GGS_stringPredefinedTypeAST::GGS_stringPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_stringPredefinedTypeAST GGS_stringPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_stringPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_stringPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->stringPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_stringPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringPredefinedTypeAST::
stringPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST::GGS_stringPredefinedTypeAST (const cPtr_stringPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @stringPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_stringPredefinedTypeAST::cPtr_stringPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                            const GGS_string & in_mPredefinedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_stringPredefinedTypeAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_stringPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @stringPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST ("stringPredefinedTypeAST",
                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringPredefinedTypeAST_2E_weak::objectCompare (const GGS_stringPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_stringPredefinedTypeAST_2E_weak::GGS_stringPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST_2E_weak & GGS_stringPredefinedTypeAST_2E_weak::operator = (const GGS_stringPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST_2E_weak::GGS_stringPredefinedTypeAST_2E_weak (const GGS_stringPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST_2E_weak GGS_stringPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_stringPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST GGS_stringPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_stringPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_stringPredefinedTypeAST * p = (cPtr_stringPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_stringPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringPredefinedTypeAST GGS_stringPredefinedTypeAST_2E_weak::bang_stringPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_stringPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringPredefinedTypeAST) ;
      result = GGS_stringPredefinedTypeAST ((cPtr_stringPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2E_weak ("stringPredefinedTypeAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @bigintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigintPredefinedTypeAST::objectCompare (const GGS_bigintPredefinedTypeAST & inOperand) const {
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

GGS_bigintPredefinedTypeAST::GGS_bigintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_bigintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_bigintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->bigintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_bigintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_bigintPredefinedTypeAST::
bigintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST::GGS_bigintPredefinedTypeAST (const cPtr_bigintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_bigintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @bigintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_bigintPredefinedTypeAST::cPtr_bigintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                            const GGS_string & in_mPredefinedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_bigintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

void cPtr_bigintPredefinedTypeAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@bigintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_bigintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_bigintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_bigintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @bigintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ("bigintPredefinedTypeAST",
                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_bigintPredefinedTypeAST_2E_weak::objectCompare (const GGS_bigintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_bigintPredefinedTypeAST_2E_weak::GGS_bigintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak & GGS_bigintPredefinedTypeAST_2E_weak::operator = (const GGS_bigintPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak::GGS_bigintPredefinedTypeAST_2E_weak (const GGS_bigintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST_2E_weak GGS_bigintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_bigintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_bigintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_bigintPredefinedTypeAST * p = (cPtr_bigintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_bigintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bigintPredefinedTypeAST GGS_bigintPredefinedTypeAST_2E_weak::bang_bigintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_bigintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_bigintPredefinedTypeAST) ;
      result = GGS_bigintPredefinedTypeAST ((cPtr_bigintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @bigintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ("bigintPredefinedTypeAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bigintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bigintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @locationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_locationPredefinedTypeAST::objectCompare (const GGS_locationPredefinedTypeAST & inOperand) const {
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

GGS_locationPredefinedTypeAST::GGS_locationPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_locationPredefinedTypeAST GGS_locationPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_locationPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_locationPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->locationPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_locationPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_locationPredefinedTypeAST::
locationPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                    const GGS_string & in_mPredefinedTypeName,
                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST::GGS_locationPredefinedTypeAST (const cPtr_locationPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_locationPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @locationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_locationPredefinedTypeAST::cPtr_locationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_locationPredefinedTypeAST::cPtr_locationPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                const GGS_string & in_mPredefinedTypeName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_locationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

void cPtr_locationPredefinedTypeAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@locationPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_locationPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_locationPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_locationPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @locationPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST ("locationPredefinedTypeAST",
                                                                              & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_locationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_locationPredefinedTypeAST_2E_weak::objectCompare (const GGS_locationPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_locationPredefinedTypeAST_2E_weak::GGS_locationPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST_2E_weak & GGS_locationPredefinedTypeAST_2E_weak::operator = (const GGS_locationPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST_2E_weak::GGS_locationPredefinedTypeAST_2E_weak (const GGS_locationPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST_2E_weak GGS_locationPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_locationPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST GGS_locationPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_locationPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_locationPredefinedTypeAST * p = (cPtr_locationPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_locationPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_locationPredefinedTypeAST GGS_locationPredefinedTypeAST_2E_weak::bang_locationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_locationPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_locationPredefinedTypeAST) ;
      result = GGS_locationPredefinedTypeAST ((cPtr_locationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @locationPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2E_weak ("locationPredefinedTypeAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_locationPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_locationPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @uint_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uint_36__34_PredefinedTypeAST::objectCompare (const GGS_uint_36__34_PredefinedTypeAST & inOperand) const {
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

GGS_uint_36__34_PredefinedTypeAST::GGS_uint_36__34_PredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST GGS_uint_36__34_PredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_uint_36__34_PredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_uint_36__34_PredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->uint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_uint_36__34_PredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_uint_36__34_PredefinedTypeAST::
uint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST::GGS_uint_36__34_PredefinedTypeAST (const cPtr_uint_36__34_PredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uint_36__34_PredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @uint64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_uint_36__34_PredefinedTypeAST::cPtr_uint_36__34_PredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_string & in_mPredefinedTypeName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_uint_36__34_PredefinedTypeAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_uint_36__34_PredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_uint_36__34_PredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uint_36__34_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @uint64PredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ("uint64PredefinedTypeAST",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uint_36__34_PredefinedTypeAST_2E_weak::objectCompare (const GGS_uint_36__34_PredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_uint_36__34_PredefinedTypeAST_2E_weak::GGS_uint_36__34_PredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST_2E_weak & GGS_uint_36__34_PredefinedTypeAST_2E_weak::operator = (const GGS_uint_36__34_PredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST_2E_weak::GGS_uint_36__34_PredefinedTypeAST_2E_weak (const GGS_uint_36__34_PredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST_2E_weak GGS_uint_36__34_PredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_uint_36__34_PredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST GGS_uint_36__34_PredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_uint_36__34_PredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_uint_36__34_PredefinedTypeAST * p = (cPtr_uint_36__34_PredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_uint_36__34_PredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_PredefinedTypeAST GGS_uint_36__34_PredefinedTypeAST_2E_weak::bang_uint_36__34_PredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_uint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uint_36__34_PredefinedTypeAST) ;
      result = GGS_uint_36__34_PredefinedTypeAST ((cPtr_uint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @uint64PredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2E_weak ("uint64PredefinedTypeAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uint_36__34_PredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST typeKind'
//
//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum cPtr_predefinedTypeAST::getter_typeKind (Compiler */* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindEnum result_result ; // Returned variable
  result_result = GGS_typeKindEnum::class_func_otherType (SOURCE_FILE ("all-predefined-types.galgas4", 78)) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_typeKindEnum callExtensionGetter_typeKind (const cPtr_predefinedTypeAST * inObject,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  GGS_typeKindEnum result ;
  if (nullptr != inObject) {
    result = inObject->getter_typeKind (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@predefinedTypeAST cppDeclarationString'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_cppDeclarationString (const cPtr_predefinedTypeAST * inObject,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_cppDeclarationString (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST initializers'
//
//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ cPtr_predefinedTypeAST::getter_initializers (Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result_result ; // Returned variable
  result_result = GGS__5B__5B_formalInputParameterAST_5D__5D_::init (inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS__5B__5B_formalInputParameterAST_5D__5D_ callExtensionGetter_initializers (const cPtr_predefinedTypeAST * inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS__5B__5B_formalInputParameterAST_5D__5D_ result ;
  if (nullptr != inObject) {
    result = inObject->getter_initializers (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getClassFunctionMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassFunctionMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                         GGS_classFunctionMap & outArgument_outClassFunctionMap,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassFunctionMap = GGS_classFunctionMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassFunctionMap (cPtr_predefinedTypeAST * inObject,
                                              GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                              GGS_classFunctionMap & out_outClassFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  out_outClassFunctionMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassFunctionMap (io__5F_ioUnifiedTypeMap, out_outClassFunctionMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getGetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getGetterMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                  GGS_getterMap & outArgument_outGetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGetterMap = GGS_getterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getGetterMap (cPtr_predefinedTypeAST * inObject,
                                       GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                       GGS_getterMap & out_outGetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outGetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getGetterMap (io__5F_ioUnifiedTypeMap, out_outGetterMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getSetterMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getSetterMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                  GGS_setterMap & outArgument_outSetterMap,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GGS_setterMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getSetterMap (cPtr_predefinedTypeAST * inObject,
                                       GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                       GGS_setterMap & out_outSetterMap,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  out_outSetterMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getSetterMap (io__5F_ioUnifiedTypeMap, out_outSetterMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getInstanceMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getInstanceMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                          GGS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GGS_instanceMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getInstanceMethodMap (cPtr_predefinedTypeAST * inObject,
                                               GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                               GGS_instanceMethodMap & out_outInstanceMethodMap,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  out_outInstanceMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getInstanceMethodMap (io__5F_ioUnifiedTypeMap, out_outInstanceMethodMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getClassMethodMap'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getClassMethodMap (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                       GGS_classMethodMap & outArgument_outClassMethodMap,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GGS_classMethodMap::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getClassMethodMap (cPtr_predefinedTypeAST * inObject,
                                            GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                            GGS_classMethodMap & out_outClassMethodMap,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  out_outClassMethodMap.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getClassMethodMap (io__5F_ioUnifiedTypeMap, out_outClassMethodMap, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST getSupportedOperatorFlags'
//
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures cPtr_predefinedTypeAST::getter_getSupportedOperatorFlags (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeFeatures result_result ; // Returned variable
  result_result = GGS_typeFeatures::init (inCompiler COMMA_HERE) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_typeFeatures callExtensionGetter_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_typeFeatures result ;
  if (nullptr != inObject) {
    result = inObject->getter_getSupportedOperatorFlags (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension func '@predefinedTypeAST supportsCollectionValue'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_predefinedTypeAST::getter_supportsCollectionValue (Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_supportsCollectionValue (const cPtr_predefinedTypeAST * inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_supportsCollectionValue (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getAddAssignArgumentList'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getAddAssignArgumentList (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                              GGS__5B_functionSignatureElement_5D_ & outArgument_outAddAssignArgumentList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAddAssignArgumentList = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getAddAssignArgumentList (cPtr_predefinedTypeAST * inObject,
                                                   GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                                   GGS__5B_functionSignatureElement_5D_ & out_outAddAssignArgumentList,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  out_outAddAssignArgumentList.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getAddAssignArgumentList (io__5F_ioUnifiedTypeMap, out_outAddAssignArgumentList, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Extension proc '@predefinedTypeAST getEnumerationList'
//--------------------------------------------------------------------------------------------------

void cPtr_predefinedTypeAST::method_getEnumerationList (GGS_unifiedTypeMap & /* ioArgument__5F_ioUnifiedTypeMap */,
                                                        GGS__5B_enumerationDescriptor_5D_ & outArgument_outEnumerationList,
                                                        GGS_string & outArgument_outEnumeratedType,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outEnumerationList = GGS__5B_enumerationDescriptor_5D_::init (inCompiler COMMA_HERE) ;
  outArgument_outEnumeratedType = GGS_string::makeEmptyString () ;
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_getEnumerationList (cPtr_predefinedTypeAST * inObject,
                                             GGS_unifiedTypeMap & io__5F_ioUnifiedTypeMap,
                                             GGS__5B_enumerationDescriptor_5D_ & out_outEnumerationList,
                                             GGS_string & out_outEnumeratedType,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  out_outEnumerationList.drop () ;
  out_outEnumeratedType.drop () ;
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_predefinedTypeAST) ;
    inObject->method_getEnumerationList (io__5F_ioUnifiedTypeMap, out_outEnumerationList, out_outEnumeratedType, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_propertyInCollectionAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_::GGS__5B_propertyInCollectionAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_::GGS__5B_propertyInCollectionAST_5D_ (const GGS__5B_propertyInCollectionAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ & GGS__5B_propertyInCollectionAST_5D_::operator = (const GGS__5B_propertyInCollectionAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS__5B_propertyInCollectionAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_propertyInCollectionAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::plusPlusAssignOperation (const GGS_propertyInCollectionAST & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_propertyInCollectionAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS__5B_propertyInCollectionAST_5D_::add_operation (const GGS__5B_propertyInCollectionAST_5D_ & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_propertyInCollectionAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@propertyInCollectionAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::plusAssignOperation (const GGS__5B_propertyInCollectionAST_5D_ inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_append (const GGS_propertyInCollectionAST inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_set (const GGS_propertyInCollectionAST inValue,
                                                      const GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_insert (const GGS_propertyInCollectionAST inValue,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_remove (GGS_propertyInCollectionAST & outValue,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_removeFirst (GGS_propertyInCollectionAST & outValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_propertyInCollectionAST_5D_::setter_removeLast (GGS_propertyInCollectionAST & outValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS__5B_propertyInCollectionAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_propertyInCollectionAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_propertyInCollectionAST_5D_ GGS__5B_propertyInCollectionAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                         const GGS_uint & inLength,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_propertyInCollectionAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_propertyInCollectionAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST GGS__5B_propertyInCollectionAST_5D_::getter_first (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST GGS__5B_propertyInCollectionAST_5D_::getter_last (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST GGS__5B_propertyInCollectionAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_propertyInCollectionAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_propertyInCollectionAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_propertyInCollectionAST_5D_::DownEnumerator__5B_propertyInCollectionAST_5D_ (const GGS__5B_propertyInCollectionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST DownEnumerator__5B_propertyInCollectionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST DownEnumerator__5B_propertyInCollectionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_propertyInCollectionAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_propertyInCollectionAST_5D_::UpEnumerator__5B_propertyInCollectionAST_5D_ (const GGS__5B_propertyInCollectionAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST UpEnumerator__5B_propertyInCollectionAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionAST UpEnumerator__5B_propertyInCollectionAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[propertyInCollectionAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_propertyInCollectionAST_5D_ ("[propertyInCollectionAST]",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_propertyInCollectionAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_propertyInCollectionAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------
// @sintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sintPredefinedTypeAST::objectCompare (const GGS_sintPredefinedTypeAST & inOperand) const {
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

GGS_sintPredefinedTypeAST::GGS_sintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_sintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->sintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_sintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sintPredefinedTypeAST::
sintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST::GGS_sintPredefinedTypeAST (const cPtr_sintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @sintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_sintPredefinedTypeAST::cPtr_sintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sintPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

void cPtr_sintPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@sintPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_sintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST ("sintPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sintPredefinedTypeAST_2E_weak::objectCompare (const GGS_sintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_sintPredefinedTypeAST_2E_weak::GGS_sintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak & GGS_sintPredefinedTypeAST_2E_weak::operator = (const GGS_sintPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak::GGS_sintPredefinedTypeAST_2E_weak (const GGS_sintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST_2E_weak GGS_sintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_sintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_sintPredefinedTypeAST * p = (cPtr_sintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sintPredefinedTypeAST GGS_sintPredefinedTypeAST_2E_weak::bang_sintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sintPredefinedTypeAST) ;
      result = GGS_sintPredefinedTypeAST ((cPtr_sintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2E_weak ("sintPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @sint_36__34_PredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sint_36__34_PredefinedTypeAST::objectCompare (const GGS_sint_36__34_PredefinedTypeAST & inOperand) const {
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

GGS_sint_36__34_PredefinedTypeAST::GGS_sint_36__34_PredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST GGS_sint_36__34_PredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_sint_36__34_PredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_sint_36__34_PredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->sint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_sint_36__34_PredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_sint_36__34_PredefinedTypeAST::
sint_36__34_PredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST::GGS_sint_36__34_PredefinedTypeAST (const cPtr_sint_36__34_PredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_sint_36__34_PredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @sint64PredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_sint_36__34_PredefinedTypeAST::cPtr_sint_36__34_PredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_string & in_mPredefinedTypeName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_sint_36__34_PredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

void cPtr_sint_36__34_PredefinedTypeAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@sint64PredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_sint_36__34_PredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_sint_36__34_PredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_sint_36__34_PredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @sint64PredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ("sint64PredefinedTypeAST",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sint_36__34_PredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_sint_36__34_PredefinedTypeAST_2E_weak::objectCompare (const GGS_sint_36__34_PredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_sint_36__34_PredefinedTypeAST_2E_weak::GGS_sint_36__34_PredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST_2E_weak & GGS_sint_36__34_PredefinedTypeAST_2E_weak::operator = (const GGS_sint_36__34_PredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST_2E_weak::GGS_sint_36__34_PredefinedTypeAST_2E_weak (const GGS_sint_36__34_PredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST_2E_weak GGS_sint_36__34_PredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_sint_36__34_PredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST GGS_sint_36__34_PredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_sint_36__34_PredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_sint_36__34_PredefinedTypeAST * p = (cPtr_sint_36__34_PredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_sint_36__34_PredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_PredefinedTypeAST GGS_sint_36__34_PredefinedTypeAST_2E_weak::bang_sint_36__34_PredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_sint_36__34_PredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_sint_36__34_PredefinedTypeAST) ;
      result = GGS_sint_36__34_PredefinedTypeAST ((cPtr_sint_36__34_PredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @sint64PredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2E_weak ("sint64PredefinedTypeAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sint_36__34_PredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @charPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_charPredefinedTypeAST::objectCompare (const GGS_charPredefinedTypeAST & inOperand) const {
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

GGS_charPredefinedTypeAST::GGS_charPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_charPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_charPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->charPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_charPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_charPredefinedTypeAST::
charPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST::GGS_charPredefinedTypeAST (const cPtr_charPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_charPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @charPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_charPredefinedTypeAST::cPtr_charPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_charPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

void cPtr_charPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@charPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_charPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_charPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_charPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @charPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST ("charPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_charPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_charPredefinedTypeAST_2E_weak::objectCompare (const GGS_charPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_charPredefinedTypeAST_2E_weak::GGS_charPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak & GGS_charPredefinedTypeAST_2E_weak::operator = (const GGS_charPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak::GGS_charPredefinedTypeAST_2E_weak (const GGS_charPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST_2E_weak GGS_charPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_charPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_charPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_charPredefinedTypeAST * p = (cPtr_charPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_charPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_charPredefinedTypeAST GGS_charPredefinedTypeAST_2E_weak::bang_charPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_charPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_charPredefinedTypeAST) ;
      result = GGS_charPredefinedTypeAST ((cPtr_charPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @charPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_charPredefinedTypeAST_2E_weak ("charPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_charPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_charPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @uintPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uintPredefinedTypeAST::objectCompare (const GGS_uintPredefinedTypeAST & inOperand) const {
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

GGS_uintPredefinedTypeAST::GGS_uintPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_uintPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_uintPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->uintPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_uintPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_uintPredefinedTypeAST::
uintPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST::GGS_uintPredefinedTypeAST (const cPtr_uintPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_uintPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @uintPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_uintPredefinedTypeAST::cPtr_uintPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_uintPredefinedTypeAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_uintPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_uintPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_uintPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @uintPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST ("uintPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uintPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_uintPredefinedTypeAST_2E_weak::objectCompare (const GGS_uintPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_uintPredefinedTypeAST_2E_weak::GGS_uintPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak & GGS_uintPredefinedTypeAST_2E_weak::operator = (const GGS_uintPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak::GGS_uintPredefinedTypeAST_2E_weak (const GGS_uintPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST_2E_weak GGS_uintPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_uintPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_uintPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_uintPredefinedTypeAST * p = (cPtr_uintPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_uintPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uintPredefinedTypeAST GGS_uintPredefinedTypeAST_2E_weak::bang_uintPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_uintPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_uintPredefinedTypeAST) ;
      result = GGS_uintPredefinedTypeAST ((cPtr_uintPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @uintPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2E_weak ("uintPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_uintPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_uintPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperPredefinedTypeAST::objectCompare (const GGS_filewrapperPredefinedTypeAST & inOperand) const {
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

GGS_filewrapperPredefinedTypeAST::GGS_filewrapperPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST GGS_filewrapperPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->filewrapperPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_filewrapperPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperPredefinedTypeAST::
filewrapperPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                       const GGS_string & in_mPredefinedTypeName,
                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST::GGS_filewrapperPredefinedTypeAST (const cPtr_filewrapperPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperPredefinedTypeAST::cPtr_filewrapperPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_string & in_mPredefinedTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

void cPtr_filewrapperPredefinedTypeAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ("filewrapperPredefinedTypeAST",
                                                                                 & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperPredefinedTypeAST_2E_weak::objectCompare (const GGS_filewrapperPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_filewrapperPredefinedTypeAST_2E_weak::GGS_filewrapperPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST_2E_weak & GGS_filewrapperPredefinedTypeAST_2E_weak::operator = (const GGS_filewrapperPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST_2E_weak::GGS_filewrapperPredefinedTypeAST_2E_weak (const GGS_filewrapperPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST_2E_weak GGS_filewrapperPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_filewrapperPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST GGS_filewrapperPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_filewrapperPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_filewrapperPredefinedTypeAST * p = (cPtr_filewrapperPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_filewrapperPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperPredefinedTypeAST GGS_filewrapperPredefinedTypeAST_2E_weak::bang_filewrapperPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_filewrapperPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_filewrapperPredefinedTypeAST) ;
      result = GGS_filewrapperPredefinedTypeAST ((cPtr_filewrapperPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2E_weak ("filewrapperPredefinedTypeAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @doublePredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doublePredefinedTypeAST::objectCompare (const GGS_doublePredefinedTypeAST & inOperand) const {
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

GGS_doublePredefinedTypeAST::GGS_doublePredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_doublePredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_doublePredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->doublePredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_doublePredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_doublePredefinedTypeAST::
doublePredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_string & in_mPredefinedTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST::GGS_doublePredefinedTypeAST (const cPtr_doublePredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doublePredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @doublePredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_doublePredefinedTypeAST::cPtr_doublePredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                            const GGS_string & in_mPredefinedTypeName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_doublePredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

void cPtr_doublePredefinedTypeAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@doublePredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_doublePredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_doublePredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_doublePredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @doublePredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST ("doublePredefinedTypeAST",
                                                                            & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doublePredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doublePredefinedTypeAST_2E_weak::objectCompare (const GGS_doublePredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_doublePredefinedTypeAST_2E_weak::GGS_doublePredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak & GGS_doublePredefinedTypeAST_2E_weak::operator = (const GGS_doublePredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak::GGS_doublePredefinedTypeAST_2E_weak (const GGS_doublePredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST_2E_weak GGS_doublePredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_doublePredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_doublePredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_doublePredefinedTypeAST * p = (cPtr_doublePredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_doublePredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doublePredefinedTypeAST GGS_doublePredefinedTypeAST_2E_weak::bang_doublePredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_doublePredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doublePredefinedTypeAST) ;
      result = GGS_doublePredefinedTypeAST ((cPtr_doublePredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @doublePredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2E_weak ("doublePredefinedTypeAST.weak",
                                                                                    & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doublePredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doublePredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @applicationPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_applicationPredefinedTypeAST::objectCompare (const GGS_applicationPredefinedTypeAST & inOperand) const {
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

GGS_applicationPredefinedTypeAST::GGS_applicationPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_applicationPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_applicationPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->applicationPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_applicationPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_applicationPredefinedTypeAST::
applicationPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                       const GGS_string & in_mPredefinedTypeName,
                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST::GGS_applicationPredefinedTypeAST (const cPtr_applicationPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_applicationPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @applicationPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_applicationPredefinedTypeAST::cPtr_applicationPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_string & in_mPredefinedTypeName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_applicationPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

void cPtr_applicationPredefinedTypeAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@applicationPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_applicationPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_applicationPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_applicationPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @applicationPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ("applicationPredefinedTypeAST",
                                                                                 & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_applicationPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_applicationPredefinedTypeAST_2E_weak::objectCompare (const GGS_applicationPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_applicationPredefinedTypeAST_2E_weak::GGS_applicationPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak & GGS_applicationPredefinedTypeAST_2E_weak::operator = (const GGS_applicationPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak::GGS_applicationPredefinedTypeAST_2E_weak (const GGS_applicationPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST_2E_weak GGS_applicationPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_applicationPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_applicationPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_applicationPredefinedTypeAST * p = (cPtr_applicationPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_applicationPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_applicationPredefinedTypeAST GGS_applicationPredefinedTypeAST_2E_weak::bang_applicationPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_applicationPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_applicationPredefinedTypeAST) ;
      result = GGS_applicationPredefinedTypeAST ((cPtr_applicationPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @applicationPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2E_weak ("applicationPredefinedTypeAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_applicationPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_applicationPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @boolPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolPredefinedTypeAST::objectCompare (const GGS_boolPredefinedTypeAST & inOperand) const {
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

GGS_boolPredefinedTypeAST::GGS_boolPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolPredefinedTypeAST GGS_boolPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_boolPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_boolPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->boolPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_boolPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolPredefinedTypeAST::
boolPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST::GGS_boolPredefinedTypeAST (const cPtr_boolPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @boolPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolPredefinedTypeAST::cPtr_boolPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

void cPtr_boolPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@boolPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_boolPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST ("boolPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolPredefinedTypeAST_2E_weak::objectCompare (const GGS_boolPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_boolPredefinedTypeAST_2E_weak::GGS_boolPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST_2E_weak & GGS_boolPredefinedTypeAST_2E_weak::operator = (const GGS_boolPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST_2E_weak::GGS_boolPredefinedTypeAST_2E_weak (const GGS_boolPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST_2E_weak GGS_boolPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST GGS_boolPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_boolPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_boolPredefinedTypeAST * p = (cPtr_boolPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolPredefinedTypeAST GGS_boolPredefinedTypeAST_2E_weak::bang_boolPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolPredefinedTypeAST) ;
      result = GGS_boolPredefinedTypeAST ((cPtr_boolPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2E_weak ("boolPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @dataPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dataPredefinedTypeAST::objectCompare (const GGS_dataPredefinedTypeAST & inOperand) const {
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

GGS_dataPredefinedTypeAST::GGS_dataPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_dataPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_dataPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->dataPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_dataPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_dataPredefinedTypeAST::
dataPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                const GGS_string & in_mPredefinedTypeName,
                                                Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST::GGS_dataPredefinedTypeAST (const cPtr_dataPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_dataPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @dataPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_dataPredefinedTypeAST::cPtr_dataPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                        const GGS_string & in_mPredefinedTypeName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_dataPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

void cPtr_dataPredefinedTypeAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@dataPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_dataPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_dataPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_dataPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @dataPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST ("dataPredefinedTypeAST",
                                                                          & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_dataPredefinedTypeAST_2E_weak::objectCompare (const GGS_dataPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_dataPredefinedTypeAST_2E_weak::GGS_dataPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak & GGS_dataPredefinedTypeAST_2E_weak::operator = (const GGS_dataPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak::GGS_dataPredefinedTypeAST_2E_weak (const GGS_dataPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST_2E_weak GGS_dataPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_dataPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_dataPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_dataPredefinedTypeAST * p = (cPtr_dataPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_dataPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_dataPredefinedTypeAST GGS_dataPredefinedTypeAST_2E_weak::bang_dataPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_dataPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_dataPredefinedTypeAST) ;
      result = GGS_dataPredefinedTypeAST ((cPtr_dataPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @dataPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2E_weak ("dataPredefinedTypeAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_dataPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_dataPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @stringsetPredefinedTypeAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringsetPredefinedTypeAST::objectCompare (const GGS_stringsetPredefinedTypeAST & inOperand) const {
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

GGS_stringsetPredefinedTypeAST::GGS_stringsetPredefinedTypeAST (void) :
GGS_predefinedTypeAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST::
init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                          const GGS_string & in_mPredefinedTypeName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_stringsetPredefinedTypeAST * object = nullptr ;
  macroMyNew (object, cPtr_stringsetPredefinedTypeAST (inCompiler COMMA_THERE)) ;
  object->stringsetPredefinedTypeAST_init_21_isPredefined_21_ (in_isPredefined, in_mPredefinedTypeName, inCompiler) ;
  const GGS_stringsetPredefinedTypeAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_stringsetPredefinedTypeAST::
stringsetPredefinedTypeAST_init_21_isPredefined_21_ (const GGS_bool & in_isPredefined,
                                                     const GGS_string & in_mPredefinedTypeName,
                                                     Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST::GGS_stringsetPredefinedTypeAST (const cPtr_stringsetPredefinedTypeAST * inSourcePtr) :
GGS_predefinedTypeAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_stringsetPredefinedTypeAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @stringsetPredefinedTypeAST class
//--------------------------------------------------------------------------------------------------

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_stringsetPredefinedTypeAST::cPtr_stringsetPredefinedTypeAST (const GGS_bool & in_isPredefined,
                                                                  const GGS_string & in_mPredefinedTypeName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_predefinedTypeAST (in_isPredefined, in_mPredefinedTypeName, inCompiler COMMA_THERE) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mPredefinedTypeName = in_mPredefinedTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_stringsetPredefinedTypeAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

void cPtr_stringsetPredefinedTypeAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@stringsetPredefinedTypeAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPredefinedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_stringsetPredefinedTypeAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_stringsetPredefinedTypeAST (mProperty_isPredefined, mProperty_mPredefinedTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_stringsetPredefinedTypeAST::printNonNullClassInstanceProperties (void) const {
    cPtr_predefinedTypeAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @stringsetPredefinedTypeAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ("stringsetPredefinedTypeAST",
                                                                               & kTypeDescriptor_GALGAS_predefinedTypeAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringsetPredefinedTypeAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringsetPredefinedTypeAST_2E_weak::objectCompare (const GGS_stringsetPredefinedTypeAST_2E_weak & inOperand) const {
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

GGS_stringsetPredefinedTypeAST_2E_weak::GGS_stringsetPredefinedTypeAST_2E_weak (void) :
GGS_predefinedTypeAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak & GGS_stringsetPredefinedTypeAST_2E_weak::operator = (const GGS_stringsetPredefinedTypeAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak::GGS_stringsetPredefinedTypeAST_2E_weak (const GGS_stringsetPredefinedTypeAST & inSource) :
GGS_predefinedTypeAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST_2E_weak GGS_stringsetPredefinedTypeAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_stringsetPredefinedTypeAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST_2E_weak::unwrappedValue (void) const {
  GGS_stringsetPredefinedTypeAST result ;
  if (isValid ()) {
    const cPtr_stringsetPredefinedTypeAST * p = (cPtr_stringsetPredefinedTypeAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_stringsetPredefinedTypeAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringsetPredefinedTypeAST GGS_stringsetPredefinedTypeAST_2E_weak::bang_stringsetPredefinedTypeAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_stringsetPredefinedTypeAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringsetPredefinedTypeAST) ;
      result = GGS_stringsetPredefinedTypeAST ((cPtr_stringsetPredefinedTypeAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringsetPredefinedTypeAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2E_weak ("stringsetPredefinedTypeAST.weak",
                                                                                       & kTypeDescriptor_GALGAS_predefinedTypeAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringsetPredefinedTypeAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_prologueEpilogueAST_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_::GGS__5B_prologueEpilogueAST_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_::GGS__5B_prologueEpilogueAST_5D_ (const GGS__5B_prologueEpilogueAST_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_ & GGS__5B_prologueEpilogueAST_5D_::operator = (const GGS__5B_prologueEpilogueAST_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_ GGS__5B_prologueEpilogueAST_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_prologueEpilogueAST_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::plusPlusAssignOperation (const GGS_prologueEpilogueAST & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_prologueEpilogueAST_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_ GGS__5B_prologueEpilogueAST_5D_::add_operation (const GGS__5B_prologueEpilogueAST_5D_ & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_prologueEpilogueAST_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::description (String & ioString,
                                                   const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@prologueEpilogueAST], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::plusAssignOperation (const GGS__5B_prologueEpilogueAST_5D_ inOperand,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_append (const GGS_prologueEpilogueAST inValue,
                                                     Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_set (const GGS_prologueEpilogueAST inValue,
                                                  const GGS_uint inIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_insert (const GGS_prologueEpilogueAST inValue,
                                                     const GGS_uint inInsertionIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_remove (GGS_prologueEpilogueAST & outValue,
                                                     const GGS_uint inRemoveIndex,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_removeFirst (GGS_prologueEpilogueAST & outValue,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_prologueEpilogueAST_5D_::setter_removeLast (GGS_prologueEpilogueAST & outValue,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_ GGS__5B_prologueEpilogueAST_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_prologueEpilogueAST_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_prologueEpilogueAST_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_prologueEpilogueAST_5D_ GGS__5B_prologueEpilogueAST_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                 const GGS_uint & inLength,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_prologueEpilogueAST_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_prologueEpilogueAST_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_prologueEpilogueAST_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST GGS__5B_prologueEpilogueAST_5D_::getter_first (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST GGS__5B_prologueEpilogueAST_5D_::getter_last (Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueAST result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST GGS__5B_prologueEpilogueAST_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_prologueEpilogueAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_prologueEpilogueAST_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_prologueEpilogueAST_5D_::DownEnumerator__5B_prologueEpilogueAST_5D_ (const GGS__5B_prologueEpilogueAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST DownEnumerator__5B_prologueEpilogueAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST DownEnumerator__5B_prologueEpilogueAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_prologueEpilogueAST_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_prologueEpilogueAST_5D_::UpEnumerator__5B_prologueEpilogueAST_5D_ (const GGS__5B_prologueEpilogueAST_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST UpEnumerator__5B_prologueEpilogueAST_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST UpEnumerator__5B_prologueEpilogueAST_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[prologueEpilogueAST] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_prologueEpilogueAST_5D_ ("[prologueEpilogueAST]",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_prologueEpilogueAST_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_prologueEpilogueAST_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (const GGS_prologueEpilogueAST & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST & GGS_prologueEpilogueAST::operator = (const GGS_prologueEpilogueAST & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_prologueEpilogueAST GGS_prologueEpilogueAST::init_21__21_ (const GGS__5B_semanticInstructionAST_5D_ & in_mInstructionList,
                                                               const GGS_location & in_mEndOfInstructionList,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_prologueEpilogueAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_prologueEpilogueAST::GGS_prologueEpilogueAST (const GGS__5B_semanticInstructionAST_5D_ & inOperand0,
                                                  const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_prologueEpilogueAST::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_prologueEpilogueAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @prologueEpilogueAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @prologueEpilogueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prologueEpilogueAST ("prologueEpilogueAST",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prologueEpilogueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prologueEpilogueAST ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExpressionAST::objectCompare (const GGS_lexicalExpressionAST & inOperand) const {
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

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (void) :
AC_GALGAS_reference_class () {
}


void cPtr_lexicalExpressionAST::
lexicalExpressionAST_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST::GGS_lexicalExpressionAST (const cPtr_lexicalExpressionAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExpressionAST class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_lexicalExpressionAST::cPtr_lexicalExpressionAST (Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST ("lexicalExpressionAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalRoutineOrFunctionFormalInputArgumentAST generateRoutineOrFunctionArgument'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateRoutineOrFunctionArgument (const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateRoutineOrFunctionArgument (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalSendDefaultActionAST generateDefaultSendCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateDefaultSendCode (const cPtr_lexicalSendDefaultActionAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateDefaultSendCode (in_inScannerClassName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST generateLexicalInstructionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalInstructionCode (const cPtr_lexicalInstructionAST * inObject,
                                                               const GGS_string in_inScannerClassName,
                                                               const GGS_lexiqueAnalysisContext in_inLexiqueAnalysisContext,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalInstructionCode (in_inScannerClassName, in_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@lexicalInstructionAST lexicalInstructionUsesLoopLocalVariable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalInstructionUsesLoopLocalVariable (const cPtr_lexicalInstructionAST * inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalInstructionUsesLoopLocalVariable (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST generateLexicalRuleCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateLexicalRuleCode (const cPtr_abstractLexicalRuleAST * inObject,
                                                        const GGS_string in_inScannerClassName,
                                                        const GGS_lexiqueAnalysisContext in__5F_inLexiqueAnalysisContext,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateLexicalRuleCode (in_inScannerClassName, in__5F_inLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension func '@abstractLexicalRuleAST lexicalRuleUsesLoopLocalVar'
//
//--------------------------------------------------------------------------------------------------

GGS_bool callExtensionGetter_lexicalRuleUsesLoopLocalVar (const cPtr_abstractLexicalRuleAST * inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_bool result ;
  if (nullptr != inObject) {
    result = inObject->getter_lexicalRuleUsesLoopLocalVar (inCompiler COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMutability ("selfMutability",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMutability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMutability ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@selfMutability selfIsMutable'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_selfIsMutable (const GGS_selfMutability & inObject,
                                        Compiler * /* inCompiler */
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
    s.appendCString ("proc @selfAvailability.available invoked with an invalid enum value") ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfAvailability ("selfAvailability",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfAvailability::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfAvailability ;
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (void) :
mProperty_mLocationType (),
mProperty_mBoolType (),
mProperty_mCharType (),
mProperty_mStringType (),
mProperty_mUIntType (),
mProperty_mSIntType (),
mProperty_mUInt_36__34_Type (),
mProperty_mSInt_36__34_Type (),
mProperty_mDoubleType (),
mProperty_mLBoolType (),
mProperty_mLCharType (),
mProperty_mLStringType (),
mProperty_mLUIntType (),
mProperty_mLSIntType (),
mProperty_mLUInt_36__34_Type (),
mProperty_mLSInt_36__34_Type (),
mProperty_mLDoubleType (),
mProperty_mLBigIntType (),
mProperty_mBigIntType (),
mProperty_mStringSetType (),
mProperty_mStringArrayType (),
mProperty_mLStringArrayType () {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_predefinedTypes & inSource) :
mProperty_mLocationType (inSource.mProperty_mLocationType),
mProperty_mBoolType (inSource.mProperty_mBoolType),
mProperty_mCharType (inSource.mProperty_mCharType),
mProperty_mStringType (inSource.mProperty_mStringType),
mProperty_mUIntType (inSource.mProperty_mUIntType),
mProperty_mSIntType (inSource.mProperty_mSIntType),
mProperty_mUInt_36__34_Type (inSource.mProperty_mUInt_36__34_Type),
mProperty_mSInt_36__34_Type (inSource.mProperty_mSInt_36__34_Type),
mProperty_mDoubleType (inSource.mProperty_mDoubleType),
mProperty_mLBoolType (inSource.mProperty_mLBoolType),
mProperty_mLCharType (inSource.mProperty_mLCharType),
mProperty_mLStringType (inSource.mProperty_mLStringType),
mProperty_mLUIntType (inSource.mProperty_mLUIntType),
mProperty_mLSIntType (inSource.mProperty_mLSIntType),
mProperty_mLUInt_36__34_Type (inSource.mProperty_mLUInt_36__34_Type),
mProperty_mLSInt_36__34_Type (inSource.mProperty_mLSInt_36__34_Type),
mProperty_mLDoubleType (inSource.mProperty_mLDoubleType),
mProperty_mLBigIntType (inSource.mProperty_mLBigIntType),
mProperty_mBigIntType (inSource.mProperty_mBigIntType),
mProperty_mStringSetType (inSource.mProperty_mStringSetType),
mProperty_mStringArrayType (inSource.mProperty_mStringArrayType),
mProperty_mLStringArrayType (inSource.mProperty_mLStringArrayType) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes & GGS_predefinedTypes::operator = (const GGS_predefinedTypes & inSource) {
  mProperty_mLocationType = inSource.mProperty_mLocationType ;
  mProperty_mBoolType = inSource.mProperty_mBoolType ;
  mProperty_mCharType = inSource.mProperty_mCharType ;
  mProperty_mStringType = inSource.mProperty_mStringType ;
  mProperty_mUIntType = inSource.mProperty_mUIntType ;
  mProperty_mSIntType = inSource.mProperty_mSIntType ;
  mProperty_mUInt_36__34_Type = inSource.mProperty_mUInt_36__34_Type ;
  mProperty_mSInt_36__34_Type = inSource.mProperty_mSInt_36__34_Type ;
  mProperty_mDoubleType = inSource.mProperty_mDoubleType ;
  mProperty_mLBoolType = inSource.mProperty_mLBoolType ;
  mProperty_mLCharType = inSource.mProperty_mLCharType ;
  mProperty_mLStringType = inSource.mProperty_mLStringType ;
  mProperty_mLUIntType = inSource.mProperty_mLUIntType ;
  mProperty_mLSIntType = inSource.mProperty_mLSIntType ;
  mProperty_mLUInt_36__34_Type = inSource.mProperty_mLUInt_36__34_Type ;
  mProperty_mLSInt_36__34_Type = inSource.mProperty_mLSInt_36__34_Type ;
  mProperty_mLDoubleType = inSource.mProperty_mLDoubleType ;
  mProperty_mLBigIntType = inSource.mProperty_mLBigIntType ;
  mProperty_mBigIntType = inSource.mProperty_mBigIntType ;
  mProperty_mStringSetType = inSource.mProperty_mStringSetType ;
  mProperty_mStringArrayType = inSource.mProperty_mStringArrayType ;
  mProperty_mLStringArrayType = inSource.mProperty_mLStringArrayType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_predefinedTypes GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mLocationType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBoolType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLCharType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLUInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLSInt_36__34_Type,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLDoubleType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mBigIntType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringSetType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mStringArrayType,
                                                                                                                                       const GGS_unifiedTypeMapEntry & in_mLStringArrayType,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLocationType = in_mLocationType ;
  result.mProperty_mBoolType = in_mBoolType ;
  result.mProperty_mCharType = in_mCharType ;
  result.mProperty_mStringType = in_mStringType ;
  result.mProperty_mUIntType = in_mUIntType ;
  result.mProperty_mSIntType = in_mSIntType ;
  result.mProperty_mUInt_36__34_Type = in_mUInt_36__34_Type ;
  result.mProperty_mSInt_36__34_Type = in_mSInt_36__34_Type ;
  result.mProperty_mDoubleType = in_mDoubleType ;
  result.mProperty_mLBoolType = in_mLBoolType ;
  result.mProperty_mLCharType = in_mLCharType ;
  result.mProperty_mLStringType = in_mLStringType ;
  result.mProperty_mLUIntType = in_mLUIntType ;
  result.mProperty_mLSIntType = in_mLSIntType ;
  result.mProperty_mLUInt_36__34_Type = in_mLUInt_36__34_Type ;
  result.mProperty_mLSInt_36__34_Type = in_mLSInt_36__34_Type ;
  result.mProperty_mLDoubleType = in_mLDoubleType ;
  result.mProperty_mLBigIntType = in_mLBigIntType ;
  result.mProperty_mBigIntType = in_mBigIntType ;
  result.mProperty_mStringSetType = in_mStringSetType ;
  result.mProperty_mStringArrayType = in_mStringArrayType ;
  result.mProperty_mLStringArrayType = in_mLStringArrayType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes::GGS_predefinedTypes (const GGS_unifiedTypeMapEntry & inOperand0,
                                          const GGS_unifiedTypeMapEntry & inOperand1,
                                          const GGS_unifiedTypeMapEntry & inOperand2,
                                          const GGS_unifiedTypeMapEntry & inOperand3,
                                          const GGS_unifiedTypeMapEntry & inOperand4,
                                          const GGS_unifiedTypeMapEntry & inOperand5,
                                          const GGS_unifiedTypeMapEntry & inOperand6,
                                          const GGS_unifiedTypeMapEntry & inOperand7,
                                          const GGS_unifiedTypeMapEntry & inOperand8,
                                          const GGS_unifiedTypeMapEntry & inOperand9,
                                          const GGS_unifiedTypeMapEntry & inOperand10,
                                          const GGS_unifiedTypeMapEntry & inOperand11,
                                          const GGS_unifiedTypeMapEntry & inOperand12,
                                          const GGS_unifiedTypeMapEntry & inOperand13,
                                          const GGS_unifiedTypeMapEntry & inOperand14,
                                          const GGS_unifiedTypeMapEntry & inOperand15,
                                          const GGS_unifiedTypeMapEntry & inOperand16,
                                          const GGS_unifiedTypeMapEntry & inOperand17,
                                          const GGS_unifiedTypeMapEntry & inOperand18,
                                          const GGS_unifiedTypeMapEntry & inOperand19,
                                          const GGS_unifiedTypeMapEntry & inOperand20,
                                          const GGS_unifiedTypeMapEntry & inOperand21) :
mProperty_mLocationType (inOperand0),
mProperty_mBoolType (inOperand1),
mProperty_mCharType (inOperand2),
mProperty_mStringType (inOperand3),
mProperty_mUIntType (inOperand4),
mProperty_mSIntType (inOperand5),
mProperty_mUInt_36__34_Type (inOperand6),
mProperty_mSInt_36__34_Type (inOperand7),
mProperty_mDoubleType (inOperand8),
mProperty_mLBoolType (inOperand9),
mProperty_mLCharType (inOperand10),
mProperty_mLStringType (inOperand11),
mProperty_mLUIntType (inOperand12),
mProperty_mLSIntType (inOperand13),
mProperty_mLUInt_36__34_Type (inOperand14),
mProperty_mLSInt_36__34_Type (inOperand15),
mProperty_mLDoubleType (inOperand16),
mProperty_mLBigIntType (inOperand17),
mProperty_mBigIntType (inOperand18),
mProperty_mStringSetType (inOperand19),
mProperty_mStringArrayType (inOperand20),
mProperty_mLStringArrayType (inOperand21) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_predefinedTypes::isValid (void) const {
  return mProperty_mLocationType.isValid () && mProperty_mBoolType.isValid () && mProperty_mCharType.isValid () && mProperty_mStringType.isValid () && mProperty_mUIntType.isValid () && mProperty_mSIntType.isValid () && mProperty_mUInt_36__34_Type.isValid () && mProperty_mSInt_36__34_Type.isValid () && mProperty_mDoubleType.isValid () && mProperty_mLBoolType.isValid () && mProperty_mLCharType.isValid () && mProperty_mLStringType.isValid () && mProperty_mLUIntType.isValid () && mProperty_mLSIntType.isValid () && mProperty_mLUInt_36__34_Type.isValid () && mProperty_mLSInt_36__34_Type.isValid () && mProperty_mLDoubleType.isValid () && mProperty_mLBigIntType.isValid () && mProperty_mBigIntType.isValid () && mProperty_mStringSetType.isValid () && mProperty_mStringArrayType.isValid () && mProperty_mLStringArrayType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::drop (void) {
  mProperty_mLocationType.drop () ;
  mProperty_mBoolType.drop () ;
  mProperty_mCharType.drop () ;
  mProperty_mStringType.drop () ;
  mProperty_mUIntType.drop () ;
  mProperty_mSIntType.drop () ;
  mProperty_mUInt_36__34_Type.drop () ;
  mProperty_mSInt_36__34_Type.drop () ;
  mProperty_mDoubleType.drop () ;
  mProperty_mLBoolType.drop () ;
  mProperty_mLCharType.drop () ;
  mProperty_mLStringType.drop () ;
  mProperty_mLUIntType.drop () ;
  mProperty_mLSIntType.drop () ;
  mProperty_mLUInt_36__34_Type.drop () ;
  mProperty_mLSInt_36__34_Type.drop () ;
  mProperty_mLDoubleType.drop () ;
  mProperty_mLBigIntType.drop () ;
  mProperty_mBigIntType.drop () ;
  mProperty_mStringSetType.drop () ;
  mProperty_mStringArrayType.drop () ;
  mProperty_mLStringArrayType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_predefinedTypes::description (String & ioString,
                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @predefinedTypes:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLocationType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBoolType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLCharType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLUInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLSInt_36__34_Type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLDoubleType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBigIntType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringSetType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mStringArrayType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLStringArrayType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @predefinedTypes generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_predefinedTypes ("predefinedTypes",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_predefinedTypes::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_predefinedTypes ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[functionSignatureElement] initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS__5B_functionSignatureElement_5D_ & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS__5B_functionSignatureElement_5D_ temp_0 = inObject ;
  UpEnumerator__5B_functionSignatureElement_5D_ enumerator_1872 (temp_0) ;
  while (enumerator_1872.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("!").add_operation (enumerator_1872.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 41)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 41)) ;
    enumerator_1872.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[functionSignatureElement] subcriptSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_subcriptSignature (const GGS__5B_functionSignatureElement_5D_ & inObject,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  const GGS__5B_functionSignatureElement_5D_ temp_0 = inObject ;
  UpEnumerator__5B_functionSignatureElement_5D_ enumerator_2035 (temp_0) ;
  while (enumerator_2035.hasCurrentObject ()) {
    result_result.plusAssignOperation(GGS_string ("\?").add_operation (enumerator_2035.current (HERE).readProperty_mFormalSelector ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 48)), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 48)) ;
    enumerator_2035.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum methodQualifier
//--------------------------------------------------------------------------------------------------

GGS_methodQualifier::GGS_methodQualifier (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtual (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtual ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualAbstract (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualAbstract ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isBasic (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isBasic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isBasicFinal (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isBasicFinal ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isInherited (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isInherited ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualOverriding (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualOverriding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodQualifier GGS_methodQualifier::class_func_isVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) {
  GGS_methodQualifier result ;
  result.mEnum = Enumeration::enum_isVirtualOverridingAbstract ;
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

static const char * gEnumNameArrayFor_methodQualifier [8] = {
  "(not built)",
  "isVirtual",
  "isVirtualAbstract",
  "isBasic",
  "isBasicFinal",
  "isInherited",
  "isVirtualOverriding",
  "isVirtualOverridingAbstract"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtual (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtual == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualAbstract (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualAbstract == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsBasic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isBasic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsBasicFinal (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isBasicFinal == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsInherited (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isInherited == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualOverriding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualOverriding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodQualifier::getter_isIsVirtualOverridingAbstract (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_isVirtualOverridingAbstract == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_methodQualifier::description (String & ioString,
                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @methodQualifier: ") ;
  ioString.appendCString (gEnumNameArrayFor_methodQualifier [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodQualifier::objectCompare (const GGS_methodQualifier & inOperand) const {
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
//     @methodQualifier generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodQualifier ("methodQualifier",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodQualifier::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodQualifier ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (void) :
mProperty_mInputArgument (),
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (const GGS_optionalMethodSignatureElement & inSource) :
mProperty_mInputArgument (inSource.mProperty_mInputArgument),
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement & GGS_optionalMethodSignatureElement::operator = (const GGS_optionalMethodSignatureElement & inSource) {
  mProperty_mInputArgument = inSource.mProperty_mInputArgument ;
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalMethodSignatureElement GGS_optionalMethodSignatureElement::init_21__21__21__21_ (const GGS_bool & in_mInputArgument,
                                                                                             const GGS_lstring & in_mFormalSelector,
                                                                                             const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                             const GGS_string & in_mFormalArgumentName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalMethodSignatureElement result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInputArgument = in_mInputArgument ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalMethodSignatureElement::GGS_optionalMethodSignatureElement (const GGS_bool & inOperand0,
                                                                        const GGS_lstring & inOperand1,
                                                                        const GGS_unifiedTypeMapEntry & inOperand2,
                                                                        const GGS_string & inOperand3) :
mProperty_mInputArgument (inOperand0),
mProperty_mFormalSelector (inOperand1),
mProperty_mFormalArgumentType (inOperand2),
mProperty_mFormalArgumentName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalMethodSignatureElement::isValid (void) const {
  return mProperty_mInputArgument.isValid () && mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::drop (void) {
  mProperty_mInputArgument.drop () ;
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalMethodSignatureElement::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalMethodSignatureElement:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInputArgument.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalMethodSignatureElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalMethodSignatureElement ("optionalMethodSignatureElement",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalMethodSignatureElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalMethodSignatureElement ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyInCollectionInitializationAST
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST::GGS_propertyInCollectionInitializationAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST GGS_propertyInCollectionInitializationAST::class_func_some (const GGS_semanticExpressionAST & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST result ;
  result.mEnum = Enumeration::enum_some ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyInCollectionInitializationAST_2E_some (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::method_extractSome (GGS_semanticExpressionAST & outAssociatedValue_expression,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_some) {
    outAssociatedValue_expression.drop () ;
    String s ;
    s.appendCString ("proc @propertyInCollectionInitializationAST.some invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST::getter_getSome (UNUSED_LOCATION_ARGS) const {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  if (mEnum == Enumeration::enum_some) {
    const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyInCollectionInitializationAST_2E_some (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::getAssociatedValuesFor_some (GGS_semanticExpressionAST & out_expression) const {
  const auto ptr = (const GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
  out_expression = ptr->mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyInCollectionInitializationAST [3] = {
  "(not built)",
  "none",
  "some"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyInCollectionInitializationAST::getter_isSome (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_some == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyInCollectionInitializationAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyInCollectionInitializationAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST::objectCompare (const GGS_propertyInCollectionInitializationAST & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_some: {
        const auto left = (GGS_propertyInCollectionInitializationAST_2E_some *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_propertyInCollectionInitializationAST_2E_some *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @propertyInCollectionInitializationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ("propertyInCollectionInitializationAST",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[typedProperty] initializerSignature'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_initializerSignature (const GGS__5B_typedProperty_5D_ & inObject,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("init") ;
  const GGS__5B_typedProperty_5D_ temp_0 = inObject ;
  UpEnumerator__5B_typedProperty_5D_ enumerator_8512 (temp_0) ;
  while (enumerator_8512.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::equal, enumerator_8512.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticsTypes.galgas4", 214)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        result_result.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 215)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_8512.current (HERE).readProperty_hasSelector ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            result_result.plusAssignOperation(enumerator_8512.current (HERE).readProperty_name ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("semanticsTypes.galgas4", 217)) ;
          }
        }
      }
    }
    enumerator_8512.gotoNextObject () ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Enum AccessControl
//--------------------------------------------------------------------------------------------------

GGS_AccessControl::GGS_AccessControl (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_publicAccess (UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_publicAccess ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_protectedAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_protectedAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_protectedAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_protectedSetAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_protectedSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_protectedSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_privateAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_privateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_privateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_privateSetAccess (const GGS_unifiedTypeMapEntry & inAssociatedValue0
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_privateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_privateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_fileprivateAccess (const GGS_location & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_fileprivateAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_fileprivateAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl GGS_AccessControl::class_func_fileprivateSetAccess (const GGS_location & inAssociatedValue0
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl result ;
  result.mEnum = Enumeration::enum_fileprivateSetAccess ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_AccessControl_2E_fileprivateSetAccess (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractProtectedAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_protectedAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.protectedAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractProtectedSetAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_protectedSetAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.protectedSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractPrivateAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_privateAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.privateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractPrivateSetAccess (GGS_unifiedTypeMapEntry & outAssociatedValue_declaringType,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_privateSetAccess) {
    outAssociatedValue_declaringType.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.privateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declaringType = ptr->mProperty_declaringType ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractFileprivateAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.fileprivateAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::method_extractFileprivateSetAccess (GGS_location & outAssociatedValue_declarationLocation,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_fileprivateSetAccess) {
    outAssociatedValue_declarationLocation.drop () ;
    String s ;
    s.appendCString ("proc @AccessControl.fileprivateSetAccess invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_declarationLocation = ptr->mProperty_declarationLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl::getter_getProtectedAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  if (mEnum == Enumeration::enum_protectedAccess) {
    const auto ptr = (const GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_protectedAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_protectedAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_protectedAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl::getter_getProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_protectedSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_protectedSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_protectedSetAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_protectedSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl::getter_getPrivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_privateAccess) {
    const auto ptr = (const GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_privateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_privateAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_privateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl::getter_getPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_privateSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_privateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_privateSetAccess (GGS_unifiedTypeMapEntry & out_declaringType) const {
  const auto ptr = (const GGS_AccessControl_2E_privateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declaringType = ptr->mProperty_declaringType ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl::getter_getFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateAccess) {
    const auto ptr = (const GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_fileprivateAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_fileprivateAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControl_2E_fileprivateAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl::getter_getFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  if (mEnum == Enumeration::enum_fileprivateSetAccess) {
    const auto ptr = (const GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_AccessControl_2E_fileprivateSetAccess (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::getAssociatedValuesFor_fileprivateSetAccess (GGS_location & out_declarationLocation) const {
  const auto ptr = (const GGS_AccessControl_2E_fileprivateSetAccess *) mAssociatedValues.associatedValuesPointer () ;
  out_declarationLocation = ptr->mProperty_declarationLocation ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_AccessControl [8] = {
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

GGS_bool GGS_AccessControl::getter_isPublicAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_publicAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isProtectedAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isProtectedSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_protectedSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isPrivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isPrivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_privateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isFileprivateAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_AccessControl::getter_isFileprivateSetAccess (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fileprivateSetAccess == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl::description (String & ioString,
                                     const int32_t inIndentation) const {
  ioString.appendCString ("<enum @AccessControl: ") ;
  ioString.appendCString (gEnumNameArrayFor_AccessControl [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @AccessControl generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl ("AccessControl",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (void) :
mProperty_type (),
mProperty_name () {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (const GGS_associatedValueDescriptor & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_name (inSource.mProperty_name) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor & GGS_associatedValueDescriptor::operator = (const GGS_associatedValueDescriptor & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_name = inSource.mProperty_name ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_associatedValueDescriptor GGS_associatedValueDescriptor::init_21__21_ (const GGS_unifiedTypeMapEntry & in_type,
                                                                           const GGS_string & in_name,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_associatedValueDescriptor result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_name = in_name ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor::GGS_associatedValueDescriptor (const GGS_unifiedTypeMapEntry & inOperand0,
                                                              const GGS_string & inOperand1) :
mProperty_type (inOperand0),
mProperty_name (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_associatedValueDescriptor::objectCompare (const GGS_associatedValueDescriptor & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_type.objectCompare (inOperand.mProperty_type) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_name.objectCompare (inOperand.mProperty_name) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_associatedValueDescriptor::isValid (void) const {
  return mProperty_type.isValid () && mProperty_name.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::drop (void) {
  mProperty_type.drop () ;
  mProperty_name.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_associatedValueDescriptor::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @associatedValueDescriptor:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @associatedValueDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_associatedValueDescriptor ("associatedValueDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_associatedValueDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_associatedValueDescriptor ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_associatedValueDescriptor_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_::GGS__5B_associatedValueDescriptor_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_::GGS__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ & GGS__5B_associatedValueDescriptor_5D_::operator = (const GGS__5B_associatedValueDescriptor_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::plusPlusAssignOperation (const GGS_associatedValueDescriptor & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_associatedValueDescriptor_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::add_operation (const GGS__5B_associatedValueDescriptor_5D_ & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::description (String & ioString,
                                                         const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@associatedValueDescriptor], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::plusAssignOperation (const GGS__5B_associatedValueDescriptor_5D_ inOperand,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_append (const GGS_associatedValueDescriptor inValue,
                                                           Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_set (const GGS_associatedValueDescriptor inValue,
                                                        const GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_insert (const GGS_associatedValueDescriptor inValue,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_remove (GGS_associatedValueDescriptor & outValue,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeFirst (GGS_associatedValueDescriptor & outValue,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_associatedValueDescriptor_5D_::setter_removeLast (GGS_associatedValueDescriptor & outValue,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS__5B_associatedValueDescriptor_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                             const GGS_uint & inLength,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_associatedValueDescriptor_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::getter_first (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::getter_last (Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor GGS__5B_associatedValueDescriptor_5D_::readSubcript__3F_ (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_associatedValueDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subcript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS__5B_associatedValueDescriptor_5D_::objectCompare (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      for (uint32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        const GGS_associatedValueDescriptor left = mSharedArray (int32_t (i) COMMA_HERE) ;
        const GGS_associatedValueDescriptor right = inOperand.mSharedArray (int32_t (i) COMMA_HERE) ;
        result = left.objectCompare (right) ;
      }
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_associatedValueDescriptor_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_associatedValueDescriptor_5D_::DownEnumerator__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor DownEnumerator__5B_associatedValueDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor DownEnumerator__5B_associatedValueDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_associatedValueDescriptor_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_associatedValueDescriptor_5D_::UpEnumerator__5B_associatedValueDescriptor_5D_ (const GGS__5B_associatedValueDescriptor_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor UpEnumerator__5B_associatedValueDescriptor_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_associatedValueDescriptor UpEnumerator__5B_associatedValueDescriptor_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[associatedValueDescriptor] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_associatedValueDescriptor_5D_ ("[associatedValueDescriptor]",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_associatedValueDescriptor_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_associatedValueDescriptor_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @constantIndexMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap::GGS_constantIndexMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap::~ GGS_constantIndexMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap::GGS_constantIndexMap (const GGS_constantIndexMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap & GGS_constantIndexMap::operator = (const GGS_constantIndexMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantIndexMap::getter_contains (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_constantIndexMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                     const GGS_uint & inLevel
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantIndexMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantIndexMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_constantIndexMap::getter_locationForKey (const GGS_string & inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_constantIndexMap::getter_keyList (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_constantIndexMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantIndexMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::performInsert (const GGS_constantIndexMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_constantIndexMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>
GGS_constantIndexMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_constantIndexMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>>
GGS_constantIndexMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_constantIndexMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element_3F_ GGS_constantIndexMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_constantIndexMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_constantIndexMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_constantIndexMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      element.mProperty_mAssociatedTypeList = info->mProperty_mAssociatedTypeList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::class_func_mapWithMapToOverride (const GGS_constantIndexMap & inMapToOverride
                                                                            COMMA_LOCATION_ARGS) {
  GGS_constantIndexMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_constantIndexMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap GGS_constantIndexMap::getter_overriddenMap (Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_constantIndexMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_insertKey (GGS_lstring inLKey,
                                             GGS_uint inArgument0,
                                             GGS__5B_associatedValueDescriptor_5D_ inArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_constantIndexMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' constant is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::method_searchKey (GGS_lstring inLKey,
                                             GGS_uint & outArgument0,
                                             GGS__5B_associatedValueDescriptor_5D_ & outArgument1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' constant is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
    outArgument1 = info->mProperty_mAssociatedTypeList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_constantIndexMap::getter_mIndexForKey (const GGS_string & inKey,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ GGS_constantIndexMap::getter_mAssociatedTypeListForKey (const GGS_string & inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS__5B_associatedValueDescriptor_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAssociatedTypeList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_setMIndexForKey (GGS_uint inValue,
                                                   GGS_string inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantIndexMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::setter_setMAssociatedTypeListForKey (GGS__5B_associatedValueDescriptor_5D_ inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_constantIndexMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAssociatedTypeList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_constantIndexMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAssociatedTypeList:") ;
    inArray (i COMMA_HERE)->mProperty_mAssociatedTypeList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_constantIndexMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @constantIndexMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> array = sortedInfoArray () ;
    GGS_constantIndexMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_constantIndexMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_constantIndexMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_constantIndexMap::objectCompare (const GGS_constantIndexMap & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> left = sortedInfoArray () ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_constantIndexMap_2E_element>> right = inOperand.sortedInfoArray () ;
      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;
      }
    }
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @constantIndexMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_constantIndexMap::DownEnumerator_constantIndexMap (const GGS_constantIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element DownEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ DownEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAssociatedTypeList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @constantIndexMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_constantIndexMap::UpEnumerator_constantIndexMap (const GGS_constantIndexMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_constantIndexMap_2E_element UpEnumerator_constantIndexMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_constantIndexMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_constantIndexMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_associatedValueDescriptor_5D_ UpEnumerator_constantIndexMap::current_mAssociatedTypeList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAssociatedTypeList ;
}


//--------------------------------------------------------------------------------------------------
//     @constantIndexMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_constantIndexMap ("constantIndexMap",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_constantIndexMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_constantIndexMap ;
}

//--------------------------------------------------------------------------------------------------
//  Enum optionDefaultValueEnumAST
//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST::GGS_optionDefaultValueEnumAST (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_noDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_noDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_unsignedDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_unsignedDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionDefaultValueEnumAST GGS_optionDefaultValueEnumAST::class_func_stringDefaultValue (UNUSED_LOCATION_ARGS) {
  GGS_optionDefaultValueEnumAST result ;
  result.mEnum = Enumeration::enum_stringDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionDefaultValueEnumAST [4] = {
  "(not built)",
  "noDefaultValue",
  "unsignedDefaultValue",
  "stringDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isNoDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isUnsignedDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_unsignedDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionDefaultValueEnumAST::getter_isStringDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionDefaultValueEnumAST::description (String & ioString,
                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @optionDefaultValueEnumAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionDefaultValueEnumAST [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionDefaultValueEnumAST::objectCompare (const GGS_optionDefaultValueEnumAST & inOperand) const {
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
//     @optionDefaultValueEnumAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ("optionDefaultValueEnumAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionDefaultValueEnumAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionDefaultValueEnumAST ;
}

//--------------------------------------------------------------------------------------------------
// @optionComponentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentDeclarationAST::objectCompare (const GGS_optionComponentDeclarationAST & inOperand) const {
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

GGS_optionComponentDeclarationAST::GGS_optionComponentDeclarationAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST::
init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                              const GGS_lstring & in_mOptionComponentName,
                              const GGS__5B_commandLineOptionAST_5D_ & in_mOptions,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_optionComponentDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_optionComponentDeclarationAST (inCompiler COMMA_THERE)) ;
  object->optionComponentDeclarationAST_init_21_isPredefined_21__21_ (in_isPredefined, in_mOptionComponentName, in_mOptions, inCompiler) ;
  const GGS_optionComponentDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionComponentDeclarationAST::
optionComponentDeclarationAST_init_21_isPredefined_21__21_ (const GGS_bool & in_isPredefined,
                                                            const GGS_lstring & in_mOptionComponentName,
                                                            const GGS__5B_commandLineOptionAST_5D_ & in_mOptions,
                                                            Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST::GGS_optionComponentDeclarationAST (const cPtr_optionComponentDeclarationAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionComponentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionComponentDeclarationAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_commandLineOptionAST_5D_ GGS_optionComponentDeclarationAST::readProperty_mOptions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_commandLineOptionAST_5D_ () ;
  }else{
    cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionComponentDeclarationAST) ;
    return p->mProperty_mOptions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionComponentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionComponentDeclarationAST::cPtr_optionComponentDeclarationAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lstring & in_mOptionComponentName,
                                                                        const GGS__5B_commandLineOptionAST_5D_ & in_mOptions,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptions () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptions = in_mOptions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionComponentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

void cPtr_optionComponentDeclarationAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@optionComponentDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionComponentDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionComponentDeclarationAST (mProperty_isPredefined, mProperty_mOptionComponentName, mProperty_mOptions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionComponentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptions.printNonNullClassInstanceProperties ("mOptions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionComponentDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST ("optionComponentDeclarationAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionComponentDeclarationAST_2E_weak::objectCompare (const GGS_optionComponentDeclarationAST_2E_weak & inOperand) const {
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

GGS_optionComponentDeclarationAST_2E_weak::GGS_optionComponentDeclarationAST_2E_weak (void) :
GGS_semanticDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak & GGS_optionComponentDeclarationAST_2E_weak::operator = (const GGS_optionComponentDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak::GGS_optionComponentDeclarationAST_2E_weak (const GGS_optionComponentDeclarationAST & inSource) :
GGS_semanticDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST_2E_weak GGS_optionComponentDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_optionComponentDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_optionComponentDeclarationAST result ;
  if (isValid ()) {
    const cPtr_optionComponentDeclarationAST * p = (cPtr_optionComponentDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_optionComponentDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionComponentDeclarationAST GGS_optionComponentDeclarationAST_2E_weak::bang_optionComponentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_optionComponentDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_optionComponentDeclarationAST) ;
      result = GGS_optionComponentDeclarationAST ((cPtr_optionComponentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @optionComponentDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ("optionComponentDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionComponentDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionComponentDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::GGS_commandLineOptionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::~ GGS_commandLineOptionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap::GGS_commandLineOptionMap (const GGS_commandLineOptionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap & GGS_commandLineOptionMap::operator = (const GGS_commandLineOptionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_commandLineOptionMap::getter_contains (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_commandLineOptionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                         const GGS_uint & inLevel
                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_commandLineOptionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_commandLineOptionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_commandLineOptionMap::getter_locationForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_commandLineOptionMap::getter_keyList (Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_commandLineOptionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::performInsert (const GGS_commandLineOptionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_commandLineOptionMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>
GGS_commandLineOptionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_commandLineOptionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>>
GGS_commandLineOptionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_commandLineOptionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element_3F_ GGS_commandLineOptionMap
::readSubcript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_commandLineOptionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_commandLineOptionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_commandLineOptionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOptionChar = info->mProperty_mOptionChar ;
      element.mProperty_mOptionString = info->mProperty_mOptionString ;
      element.mProperty_mComment = info->mProperty_mComment ;
      element.mProperty_mDefaultValue = info->mProperty_mDefaultValue ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::class_func_mapWithMapToOverride (const GGS_commandLineOptionMap & inMapToOverride
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_commandLineOptionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_commandLineOptionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap GGS_commandLineOptionMap::getter_overriddenMap (Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_commandLineOptionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_insertKey (GGS_lstring inLKey,
                                                 GGS_char inArgument0,
                                                 GGS_string inArgument1,
                                                 GGS_string inArgument2,
                                                 GGS_string inArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  const GGS_commandLineOptionMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' command line option has been already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::method_searchKey (GGS_lstring inLKey,
                                                 GGS_char & outArgument0,
                                                 GGS_string & outArgument1,
                                                 GGS_string & outArgument2,
                                                 GGS_string & outArgument3,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' command line option is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mOptionChar ;
    outArgument1 = info->mProperty_mOptionString ;
    outArgument2 = info->mProperty_mComment ;
    outArgument3 = info->mProperty_mDefaultValue ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_commandLineOptionMap::getter_mOptionCharForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_char result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOptionChar ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mOptionStringForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOptionString ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mCommentForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mComment ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_commandLineOptionMap::getter_mDefaultValueForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mDefaultValue ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMOptionCharForKey (GGS_char inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_commandLineOptionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOptionChar = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMOptionStringForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_commandLineOptionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOptionString = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMCommentForKey (GGS_string inValue,
                                                         GGS_string inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_commandLineOptionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mComment = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::setter_setMDefaultValueForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_commandLineOptionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mDefaultValue = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_commandLineOptionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOptionChar:") ;
    inArray (i COMMA_HERE)->mProperty_mOptionChar.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOptionString:") ;
    inArray (i COMMA_HERE)->mProperty_mOptionString.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mComment:") ;
    inArray (i COMMA_HERE)->mProperty_mComment.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mDefaultValue:") ;
    inArray (i COMMA_HERE)->mProperty_mDefaultValue.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @commandLineOptionMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_commandLineOptionMap_2E_element>> array = sortedInfoArray () ;
    GGS_commandLineOptionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_commandLineOptionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_commandLineOptionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_commandLineOptionMap::DownEnumerator_commandLineOptionMap (const GGS_commandLineOptionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element DownEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_char DownEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefaultValue ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @commandLineOptionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_commandLineOptionMap::UpEnumerator_commandLineOptionMap (const GGS_commandLineOptionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionMap_2E_element UpEnumerator_commandLineOptionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_commandLineOptionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_char UpEnumerator_commandLineOptionMap::current_mOptionChar (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionChar ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mOptionString (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOptionString ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mComment (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mComment ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_commandLineOptionMap::current_mDefaultValue (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mDefaultValue ;
}


//--------------------------------------------------------------------------------------------------
//     @commandLineOptionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionMap ("commandLineOptionMap",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_sortedCommandLineOption::GGS_sortedCommandLineOption (void) :
mProperty_mOptionIdentifier (),
mProperty_mOptionChar (),
mProperty_mOptionString (),
mProperty_mComment (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedCommandLineOption::GGS_sortedCommandLineOption (const GGS_sortedCommandLineOption & inSource) :
mProperty_mOptionIdentifier (inSource.mProperty_mOptionIdentifier),
mProperty_mOptionChar (inSource.mProperty_mOptionChar),
mProperty_mOptionString (inSource.mProperty_mOptionString),
mProperty_mComment (inSource.mProperty_mComment),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedCommandLineOption & GGS_sortedCommandLineOption::operator = (const GGS_sortedCommandLineOption & inSource) {
  mProperty_mOptionIdentifier = inSource.mProperty_mOptionIdentifier ;
  mProperty_mOptionChar = inSource.mProperty_mOptionChar ;
  mProperty_mOptionString = inSource.mProperty_mOptionString ;
  mProperty_mComment = inSource.mProperty_mComment ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_sortedCommandLineOption GGS_sortedCommandLineOption::init_21__21__21__21__21_ (const GGS_string & in_mOptionIdentifier,
                                                                                   const GGS_char & in_mOptionChar,
                                                                                   const GGS_string & in_mOptionString,
                                                                                   const GGS_string & in_mComment,
                                                                                   const GGS_string & in_mDefaultValue,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sortedCommandLineOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionIdentifier = in_mOptionIdentifier ;
  result.mProperty_mOptionChar = in_mOptionChar ;
  result.mProperty_mOptionString = in_mOptionString ;
  result.mProperty_mComment = in_mComment ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedCommandLineOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_sortedCommandLineOption::GGS_sortedCommandLineOption (const GGS_string & inOperand0,
                                                          const GGS_char & inOperand1,
                                                          const GGS_string & inOperand2,
                                                          const GGS_string & inOperand3,
                                                          const GGS_string & inOperand4) :
mProperty_mOptionIdentifier (inOperand0),
mProperty_mOptionChar (inOperand1),
mProperty_mOptionString (inOperand2),
mProperty_mComment (inOperand3),
mProperty_mDefaultValue (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_sortedCommandLineOption::isValid (void) const {
  return mProperty_mOptionIdentifier.isValid () && mProperty_mOptionChar.isValid () && mProperty_mOptionString.isValid () && mProperty_mComment.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedCommandLineOption::drop (void) {
  mProperty_mOptionIdentifier.drop () ;
  mProperty_mOptionChar.drop () ;
  mProperty_mOptionString.drop () ;
  mProperty_mComment.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_sortedCommandLineOption::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @sortedCommandLineOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionIdentifier.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionChar.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @sortedCommandLineOption generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_sortedCommandLineOption ("sortedCommandLineOption",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_sortedCommandLineOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_sortedCommandLineOption ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalExpressionAST checkLexicalExpression'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalExpression (cPtr_lexicalExpressionAST * inObject,
                                                 GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalExpressionAST) ;
    inObject->method_checkLexicalExpression (io__5F_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExpressionAST_2E_weak::objectCompare (const GGS_lexicalExpressionAST_2E_weak & inOperand) const {
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

GGS_lexicalExpressionAST_2E_weak::GGS_lexicalExpressionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak & GGS_lexicalExpressionAST_2E_weak::operator = (const GGS_lexicalExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak::GGS_lexicalExpressionAST_2E_weak (const GGS_lexicalExpressionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST_2E_weak GGS_lexicalExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalExpressionAST result ;
  if (isValid ()) {
    const cPtr_lexicalExpressionAST * p = (cPtr_lexicalExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExpressionAST_2E_weak::bang_lexicalExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExpressionAST) ;
      result = GGS_lexicalExpressionAST ((cPtr_lexicalExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ("lexicalExpressionAST.weak",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalInstructionAST checkLexicalInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalInstruction (cPtr_lexicalInstructionAST * inObject,
                                                  GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                                  GGS_lexicalTagMap & io__5F_ioTagMap,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalInstructionAST) ;
    inObject->method_checkLexicalInstruction (io_ioLexiqueAnalysisContext, io__5F_ioTagMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractLexicalRuleAST checkLexicalRule'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRule (cPtr_abstractLexicalRuleAST * inObject,
                                           GGS_lexiqueAnalysisContext & io_ioLexiqueAnalysisContext,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractLexicalRuleAST) ;
    inObject->method_checkLexicalRule (io_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractLexicalRuleAST_2E_weak::objectCompare (const GGS_abstractLexicalRuleAST_2E_weak & inOperand) const {
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

GGS_abstractLexicalRuleAST_2E_weak::GGS_abstractLexicalRuleAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak & GGS_abstractLexicalRuleAST_2E_weak::operator = (const GGS_abstractLexicalRuleAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak::GGS_abstractLexicalRuleAST_2E_weak (const GGS_abstractLexicalRuleAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST_2E_weak GGS_abstractLexicalRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractLexicalRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_abstractLexicalRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractLexicalRuleAST result ;
  if (isValid ()) {
    const cPtr_abstractLexicalRuleAST * p = (cPtr_abstractLexicalRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractLexicalRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractLexicalRuleAST GGS_abstractLexicalRuleAST_2E_weak::bang_abstractLexicalRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractLexicalRuleAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractLexicalRuleAST) ;
      result = GGS_abstractLexicalRuleAST ((cPtr_abstractLexicalRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractLexicalRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ("abstractLexicalRuleAST.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractLexicalRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@[abstractLexicalRuleAST] useLoopLocalVar'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_useLoopLocalVar (const GGS__5B_abstractLexicalRuleAST_5D_ & inObject,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  const GGS__5B_abstractLexicalRuleAST_5D_ temp_0 = inObject ;
  UpEnumerator__5B_abstractLexicalRuleAST_5D_ enumerator_2832 (temp_0) ;
  bool bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 70)).isValidAndTrue () ;
  if (enumerator_2832.hasCurrentObject () && bool_1) {
    while (enumerator_2832.hasCurrentObject () && bool_1) {
      result_result = callExtensionGetter_lexicalRuleUsesLoopLocalVar ((const cPtr_abstractLexicalRuleAST *) enumerator_2832.current (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexiqueTypesForAST.galgas4", 71)) ;
      enumerator_2832.gotoNextObject () ;
      if (enumerator_2832.hasCurrentObject ()) {
        bool_1 = result_result.operator_not (SOURCE_FILE ("lexiqueTypesForAST.galgas4", 70)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @lexicalImplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalImplicitRuleAST::objectCompare (const GGS_lexicalImplicitRuleAST & inOperand) const {
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

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (void) :
GGS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST::
init_21_ (const GGS_lstring & in_mListName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalImplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalImplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalImplicitRuleAST_init_21_ (in_mListName, inCompiler) ;
  const GGS_lexicalImplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalImplicitRuleAST::
lexicalImplicitRuleAST_init_21_ (const GGS_lstring & in_mListName,
                                 Compiler * /* inCompiler */) {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST::GGS_lexicalImplicitRuleAST (const cPtr_lexicalImplicitRuleAST * inSourcePtr) :
GGS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalImplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalImplicitRuleAST::readProperty_mListName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalImplicitRuleAST) ;
    return p->mProperty_mListName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalImplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalImplicitRuleAST::cPtr_lexicalImplicitRuleAST (const GGS_lstring & in_mListName,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mListName () {
  mProperty_mListName = in_mListName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalImplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

void cPtr_lexicalImplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalImplicitRuleAST:") ;
  mProperty_mListName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalImplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalImplicitRuleAST (mProperty_mListName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalImplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mListName.printNonNullClassInstanceProperties ("mListName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalImplicitRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ("lexicalImplicitRuleAST",
                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalImplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalImplicitRuleAST_2E_weak::objectCompare (const GGS_lexicalImplicitRuleAST_2E_weak & inOperand) const {
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

GGS_lexicalImplicitRuleAST_2E_weak::GGS_lexicalImplicitRuleAST_2E_weak (void) :
GGS_abstractLexicalRuleAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak & GGS_lexicalImplicitRuleAST_2E_weak::operator = (const GGS_lexicalImplicitRuleAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak::GGS_lexicalImplicitRuleAST_2E_weak (const GGS_lexicalImplicitRuleAST & inSource) :
GGS_abstractLexicalRuleAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST_2E_weak GGS_lexicalImplicitRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalImplicitRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalImplicitRuleAST result ;
  if (isValid ()) {
    const cPtr_lexicalImplicitRuleAST * p = (cPtr_lexicalImplicitRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalImplicitRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalImplicitRuleAST GGS_lexicalImplicitRuleAST_2E_weak::bang_lexicalImplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalImplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalImplicitRuleAST) ;
      result = GGS_lexicalImplicitRuleAST ((cPtr_lexicalImplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalImplicitRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ("lexicalImplicitRuleAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalImplicitRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalImplicitRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalExplicitRuleAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExplicitRuleAST::objectCompare (const GGS_lexicalExplicitRuleAST & inOperand) const {
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

GGS_lexicalExplicitRuleAST::GGS_lexicalExplicitRuleAST (void) :
GGS_abstractLexicalRuleAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST::
init_21__21_ (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
              const GGS__5B_lexicalInstructionAST_5D_ & in_mInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalExplicitRuleAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalExplicitRuleAST (inCompiler COMMA_THERE)) ;
  object->lexicalExplicitRuleAST_init_21__21_ (in_mLexicalRuleExpression, in_mInstructionList, inCompiler) ;
  const GGS_lexicalExplicitRuleAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalExplicitRuleAST::
lexicalExplicitRuleAST_init_21__21_ (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                     const GGS__5B_lexicalInstructionAST_5D_ & in_mInstructionList,
                                     Compiler * /* inCompiler */) {
  mProperty_mLexicalRuleExpression = in_mLexicalRuleExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST::GGS_lexicalExplicitRuleAST (const cPtr_lexicalExplicitRuleAST * inSourcePtr) :
GGS_abstractLexicalRuleAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalExplicitRuleAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalExplicitRuleAST::readProperty_mLexicalRuleExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mLexicalRuleExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lexicalInstructionAST_5D_ GGS_lexicalExplicitRuleAST::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lexicalInstructionAST_5D_ () ;
  }else{
    cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalExplicitRuleAST) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalExplicitRuleAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mLexicalRuleExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalExplicitRuleAST::cPtr_lexicalExplicitRuleAST (const GGS_lexicalExpressionAST & in_mLexicalRuleExpression,
                                                          const GGS__5B_lexicalInstructionAST_5D_ & in_mInstructionList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractLexicalRuleAST (inCompiler COMMA_THERE),
mProperty_mLexicalRuleExpression (),
mProperty_mInstructionList () {
  mProperty_mLexicalRuleExpression = in_mLexicalRuleExpression ;
  mProperty_mInstructionList = in_mInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalExplicitRuleAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

void cPtr_lexicalExplicitRuleAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalExplicitRuleAST:") ;
  mProperty_mLexicalRuleExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalExplicitRuleAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalExplicitRuleAST (mProperty_mLexicalRuleExpression, mProperty_mInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalExplicitRuleAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractLexicalRuleAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalRuleExpression.printNonNullClassInstanceProperties ("mLexicalRuleExpression") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitRuleAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ("lexicalExplicitRuleAST",
                                                                           & kTypeDescriptor_GALGAS_abstractLexicalRuleAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitRuleAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalExplicitRuleAST_2E_weak::objectCompare (const GGS_lexicalExplicitRuleAST_2E_weak & inOperand) const {
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

GGS_lexicalExplicitRuleAST_2E_weak::GGS_lexicalExplicitRuleAST_2E_weak (void) :
GGS_abstractLexicalRuleAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak & GGS_lexicalExplicitRuleAST_2E_weak::operator = (const GGS_lexicalExplicitRuleAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak::GGS_lexicalExplicitRuleAST_2E_weak (const GGS_lexicalExplicitRuleAST & inSource) :
GGS_abstractLexicalRuleAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST_2E_weak GGS_lexicalExplicitRuleAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalExplicitRuleAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalExplicitRuleAST result ;
  if (isValid ()) {
    const cPtr_lexicalExplicitRuleAST * p = (cPtr_lexicalExplicitRuleAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalExplicitRuleAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExplicitRuleAST GGS_lexicalExplicitRuleAST_2E_weak::bang_lexicalExplicitRuleAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalExplicitRuleAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalExplicitRuleAST) ;
      result = GGS_lexicalExplicitRuleAST ((cPtr_lexicalExplicitRuleAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalExplicitRuleAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ("lexicalExplicitRuleAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_abstractLexicalRuleAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalExplicitRuleAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalExplicitRuleAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalOrExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalOrExpressionAST::objectCompare (const GGS_lexicalOrExpressionAST & inOperand) const {
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

GGS_lexicalOrExpressionAST::GGS_lexicalOrExpressionAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST::
init_21__21_ (const GGS_lexicalExpressionAST & in_mLeftOperand,
              const GGS_lexicalExpressionAST & in_mRightOperand,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalOrExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalOrExpressionAST (inCompiler COMMA_THERE)) ;
  object->lexicalOrExpressionAST_init_21__21_ (in_mLeftOperand, in_mRightOperand, inCompiler) ;
  const GGS_lexicalOrExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalOrExpressionAST::
lexicalOrExpressionAST_init_21__21_ (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                     const GGS_lexicalExpressionAST & in_mRightOperand,
                                     Compiler * /* inCompiler */) {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST::GGS_lexicalOrExpressionAST (const cPtr_lexicalOrExpressionAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalOrExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalOrExpressionAST::readProperty_mLeftOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mLeftOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalExpressionAST GGS_lexicalOrExpressionAST::readProperty_mRightOperand (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalExpressionAST () ;
  }else{
    cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalOrExpressionAST) ;
    return p->mProperty_mRightOperand ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalOrExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalOrExpressionAST::cPtr_lexicalOrExpressionAST (const GGS_lexicalExpressionAST & in_mLeftOperand,
                                                          const GGS_lexicalExpressionAST & in_mRightOperand,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLeftOperand (),
mProperty_mRightOperand () {
  mProperty_mLeftOperand = in_mLeftOperand ;
  mProperty_mRightOperand = in_mRightOperand ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalOrExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

void cPtr_lexicalOrExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalOrExpressionAST:") ;
  mProperty_mLeftOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRightOperand.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalOrExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalOrExpressionAST (mProperty_mLeftOperand, mProperty_mRightOperand, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalOrExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLeftOperand.printNonNullClassInstanceProperties ("mLeftOperand") ;
    mProperty_mRightOperand.printNonNullClassInstanceProperties ("mRightOperand") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalOrExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST ("lexicalOrExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalOrExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalOrExpressionAST_2E_weak::objectCompare (const GGS_lexicalOrExpressionAST_2E_weak & inOperand) const {
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

GGS_lexicalOrExpressionAST_2E_weak::GGS_lexicalOrExpressionAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak & GGS_lexicalOrExpressionAST_2E_weak::operator = (const GGS_lexicalOrExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak::GGS_lexicalOrExpressionAST_2E_weak (const GGS_lexicalOrExpressionAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST_2E_weak GGS_lexicalOrExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalOrExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalOrExpressionAST result ;
  if (isValid ()) {
    const cPtr_lexicalOrExpressionAST * p = (cPtr_lexicalOrExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalOrExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalOrExpressionAST GGS_lexicalOrExpressionAST_2E_weak::bang_lexicalOrExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalOrExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalOrExpressionAST) ;
      result = GGS_lexicalOrExpressionAST ((cPtr_lexicalOrExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalOrExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ("lexicalOrExpressionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalOrExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalOrExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterSetMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterSetMatchAST::objectCompare (const GGS_lexicalCharacterSetMatchAST & inOperand) const {
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

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST::
init_21_ (const GGS_lstring & in_mCharacterSetName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterSetMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterSetMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterSetMatchAST_init_21_ (in_mCharacterSetName, inCompiler) ;
  const GGS_lexicalCharacterSetMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterSetMatchAST::
lexicalCharacterSetMatchAST_init_21_ (const GGS_lstring & in_mCharacterSetName,
                                      Compiler * /* inCompiler */) {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST::GGS_lexicalCharacterSetMatchAST (const cPtr_lexicalCharacterSetMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterSetMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalCharacterSetMatchAST::readProperty_mCharacterSetName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterSetMatchAST) ;
    return p->mProperty_mCharacterSetName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterSetMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterSetMatchAST::cPtr_lexicalCharacterSetMatchAST (const GGS_lstring & in_mCharacterSetName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacterSetName () {
  mProperty_mCharacterSetName = in_mCharacterSetName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCharacterSetMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

void cPtr_lexicalCharacterSetMatchAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterSetMatchAST:") ;
  mProperty_mCharacterSetName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCharacterSetMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterSetMatchAST (mProperty_mCharacterSetName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterSetMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacterSetName.printNonNullClassInstanceProperties ("mCharacterSetName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterSetMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ("lexicalCharacterSetMatchAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterSetMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterSetMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterSetMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterSetMatchAST_2E_weak::GGS_lexicalCharacterSetMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak & GGS_lexicalCharacterSetMatchAST_2E_weak::operator = (const GGS_lexicalCharacterSetMatchAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak::GGS_lexicalCharacterSetMatchAST_2E_weak (const GGS_lexicalCharacterSetMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST_2E_weak GGS_lexicalCharacterSetMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterSetMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterSetMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterSetMatchAST * p = (cPtr_lexicalCharacterSetMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterSetMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterSetMatchAST GGS_lexicalCharacterSetMatchAST_2E_weak::bang_lexicalCharacterSetMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterSetMatchAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterSetMatchAST) ;
      result = GGS_lexicalCharacterSetMatchAST ((cPtr_lexicalCharacterSetMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterSetMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ("lexicalCharacterSetMatchAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterSetMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterSetMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterMatchAST::objectCompare (const GGS_lexicalCharacterMatchAST & inOperand) const {
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

GGS_lexicalCharacterMatchAST::GGS_lexicalCharacterMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST::
init_21_ (const GGS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterMatchAST_init_21_ (in_mCharacter, inCompiler) ;
  const GGS_lexicalCharacterMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterMatchAST::
lexicalCharacterMatchAST_init_21_ (const GGS_lchar & in_mCharacter,
                                   Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST::GGS_lexicalCharacterMatchAST (const cPtr_lexicalCharacterMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterMatchAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterMatchAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterMatchAST::cPtr_lexicalCharacterMatchAST (const GGS_lchar & in_mCharacter,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCharacterMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

void cPtr_lexicalCharacterMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterMatchAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCharacterMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterMatchAST (mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ("lexicalCharacterMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterMatchAST_2E_weak::GGS_lexicalCharacterMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak & GGS_lexicalCharacterMatchAST_2E_weak::operator = (const GGS_lexicalCharacterMatchAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak::GGS_lexicalCharacterMatchAST_2E_weak (const GGS_lexicalCharacterMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST_2E_weak GGS_lexicalCharacterMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterMatchAST * p = (cPtr_lexicalCharacterMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterMatchAST GGS_lexicalCharacterMatchAST_2E_weak::bang_lexicalCharacterMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterMatchAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterMatchAST) ;
      result = GGS_lexicalCharacterMatchAST ((cPtr_lexicalCharacterMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ("lexicalCharacterMatchAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterIntervalMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterIntervalMatchAST::objectCompare (const GGS_lexicalCharacterIntervalMatchAST & inOperand) const {
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

GGS_lexicalCharacterIntervalMatchAST::GGS_lexicalCharacterIntervalMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST::
init_21__21_ (const GGS_lchar & in_mLowerBound,
              const GGS_lchar & in_mUpperBound,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterIntervalMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterIntervalMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterIntervalMatchAST_init_21__21_ (in_mLowerBound, in_mUpperBound, inCompiler) ;
  const GGS_lexicalCharacterIntervalMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterIntervalMatchAST::
lexicalCharacterIntervalMatchAST_init_21__21_ (const GGS_lchar & in_mLowerBound,
                                               const GGS_lchar & in_mUpperBound,
                                               Compiler * /* inCompiler */) {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST::GGS_lexicalCharacterIntervalMatchAST (const cPtr_lexicalCharacterIntervalMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterIntervalMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterIntervalMatchAST::readProperty_mLowerBound (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mLowerBound ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterIntervalMatchAST::readProperty_mUpperBound (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterIntervalMatchAST) ;
    return p->mProperty_mUpperBound ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterIntervalMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterIntervalMatchAST::cPtr_lexicalCharacterIntervalMatchAST (const GGS_lchar & in_mLowerBound,
                                                                              const GGS_lchar & in_mUpperBound,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mLowerBound (),
mProperty_mUpperBound () {
  mProperty_mLowerBound = in_mLowerBound ;
  mProperty_mUpperBound = in_mUpperBound ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCharacterIntervalMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

void cPtr_lexicalCharacterIntervalMatchAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterIntervalMatchAST:") ;
  mProperty_mLowerBound.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUpperBound.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCharacterIntervalMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterIntervalMatchAST (mProperty_mLowerBound, mProperty_mUpperBound, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterIntervalMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLowerBound.printNonNullClassInstanceProperties ("mLowerBound") ;
    mProperty_mUpperBound.printNonNullClassInstanceProperties ("mUpperBound") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterIntervalMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ("lexicalCharacterIntervalMatchAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterIntervalMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterIntervalMatchAST_2E_weak::objectCompare (const GGS_lexicalCharacterIntervalMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterIntervalMatchAST_2E_weak::GGS_lexicalCharacterIntervalMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak & GGS_lexicalCharacterIntervalMatchAST_2E_weak::operator = (const GGS_lexicalCharacterIntervalMatchAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak::GGS_lexicalCharacterIntervalMatchAST_2E_weak (const GGS_lexicalCharacterIntervalMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST_2E_weak GGS_lexicalCharacterIntervalMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterIntervalMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterIntervalMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterIntervalMatchAST * p = (cPtr_lexicalCharacterIntervalMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterIntervalMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterIntervalMatchAST GGS_lexicalCharacterIntervalMatchAST_2E_weak::bang_lexicalCharacterIntervalMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterIntervalMatchAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterIntervalMatchAST) ;
      result = GGS_lexicalCharacterIntervalMatchAST ((cPtr_lexicalCharacterIntervalMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterIntervalMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ("lexicalCharacterIntervalMatchAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterIntervalMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterIntervalMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringMatchAST::objectCompare (const GGS_lexicalStringMatchAST & inOperand) const {
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

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST::
init_21_ (const GGS_lstring & in_mString,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringMatchAST_init_21_ (in_mString, inCompiler) ;
  const GGS_lexicalStringMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringMatchAST::
lexicalStringMatchAST_init_21_ (const GGS_lstring & in_mString,
                                Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST::GGS_lexicalStringMatchAST (const cPtr_lexicalStringMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringMatchAST::cPtr_lexicalStringMatchAST (const GGS_lstring & in_mString,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStringMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

void cPtr_lexicalStringMatchAST::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalStringMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringMatchAST (mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStringMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST ("lexicalStringMatchAST",
                                                                          & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringMatchAST_2E_weak::objectCompare (const GGS_lexicalStringMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalStringMatchAST_2E_weak::GGS_lexicalStringMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak & GGS_lexicalStringMatchAST_2E_weak::operator = (const GGS_lexicalStringMatchAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak::GGS_lexicalStringMatchAST_2E_weak (const GGS_lexicalStringMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST_2E_weak GGS_lexicalStringMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStringMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStringMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalStringMatchAST * p = (cPtr_lexicalStringMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStringMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringMatchAST GGS_lexicalStringMatchAST_2E_weak::bang_lexicalStringMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStringMatchAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringMatchAST) ;
      result = GGS_lexicalStringMatchAST ((cPtr_lexicalStringMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStringMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ("lexicalStringMatchAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalStringNotMatchAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST::objectCompare (const GGS_lexicalStringNotMatchAST & inOperand) const {
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

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (void) :
GGS_lexicalExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST::
init_21__21_ (const GGS_lstring & in_mString,
              const GGS_lstring & in_mErrorMessage,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalStringNotMatchAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalStringNotMatchAST (inCompiler COMMA_THERE)) ;
  object->lexicalStringNotMatchAST_init_21__21_ (in_mString, in_mErrorMessage, inCompiler) ;
  const GGS_lexicalStringNotMatchAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalStringNotMatchAST::
lexicalStringNotMatchAST_init_21__21_ (const GGS_lstring & in_mString,
                                       const GGS_lstring & in_mErrorMessage,
                                       Compiler * /* inCompiler */) {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST::GGS_lexicalStringNotMatchAST (const cPtr_lexicalStringNotMatchAST * inSourcePtr) :
GGS_lexicalExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalStringNotMatchAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalStringNotMatchAST::readProperty_mErrorMessage (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalStringNotMatchAST) ;
    return p->mProperty_mErrorMessage ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalStringNotMatchAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalStringNotMatchAST::cPtr_lexicalStringNotMatchAST (const GGS_lstring & in_mString,
                                                              const GGS_lstring & in_mErrorMessage,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalExpressionAST (inCompiler COMMA_THERE),
mProperty_mString (),
mProperty_mErrorMessage () {
  mProperty_mString = in_mString ;
  mProperty_mErrorMessage = in_mErrorMessage ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalStringNotMatchAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

void cPtr_lexicalStringNotMatchAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalStringNotMatchAST:") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalStringNotMatchAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalStringNotMatchAST (mProperty_mString, mProperty_mErrorMessage, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalStringNotMatchAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
    mProperty_mErrorMessage.printNonNullClassInstanceProperties ("mErrorMessage") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalStringNotMatchAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ("lexicalStringNotMatchAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringNotMatchAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalStringNotMatchAST_2E_weak::objectCompare (const GGS_lexicalStringNotMatchAST_2E_weak & inOperand) const {
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

GGS_lexicalStringNotMatchAST_2E_weak::GGS_lexicalStringNotMatchAST_2E_weak (void) :
GGS_lexicalExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak & GGS_lexicalStringNotMatchAST_2E_weak::operator = (const GGS_lexicalStringNotMatchAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak::GGS_lexicalStringNotMatchAST_2E_weak (const GGS_lexicalStringNotMatchAST & inSource) :
GGS_lexicalExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST_2E_weak GGS_lexicalStringNotMatchAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalStringNotMatchAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalStringNotMatchAST result ;
  if (isValid ()) {
    const cPtr_lexicalStringNotMatchAST * p = (cPtr_lexicalStringNotMatchAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalStringNotMatchAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStringNotMatchAST GGS_lexicalStringNotMatchAST_2E_weak::bang_lexicalStringNotMatchAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalStringNotMatchAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalStringNotMatchAST) ;
      result = GGS_lexicalStringNotMatchAST ((cPtr_lexicalStringNotMatchAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalStringNotMatchAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ("lexicalStringNotMatchAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalStringNotMatchAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalStringNotMatchAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalSendDefaultActionAST checkLexicalDefaultAction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalDefaultAction (cPtr_lexicalSendDefaultActionAST * inObject,
                                                    GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalSendDefaultActionAST) ;
    inObject->method_checkLexicalDefaultAction (io__5F_ioLexiqueAnalysisContext, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendDefaultActionAST_2E_weak::objectCompare (const GGS_lexicalSendDefaultActionAST_2E_weak & inOperand) const {
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

GGS_lexicalSendDefaultActionAST_2E_weak::GGS_lexicalSendDefaultActionAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak & GGS_lexicalSendDefaultActionAST_2E_weak::operator = (const GGS_lexicalSendDefaultActionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak::GGS_lexicalSendDefaultActionAST_2E_weak (const GGS_lexicalSendDefaultActionAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST_2E_weak GGS_lexicalSendDefaultActionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSendDefaultActionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalSendDefaultActionAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSendDefaultActionAST result ;
  if (isValid ()) {
    const cPtr_lexicalSendDefaultActionAST * p = (cPtr_lexicalSendDefaultActionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSendDefaultActionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendDefaultActionAST GGS_lexicalSendDefaultActionAST_2E_weak::bang_lexicalSendDefaultActionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendDefaultActionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendDefaultActionAST) ;
      result = GGS_lexicalSendDefaultActionAST ((cPtr_lexicalSendDefaultActionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSendDefaultActionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ("lexicalSendDefaultActionAST.weak",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendDefaultActionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalSendTerminalByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendTerminalByDefaultAST::objectCompare (const GGS_lexicalSendTerminalByDefaultAST & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalSendTerminalByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSendTerminalByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalSendTerminalByDefaultAST_init_21_ (in_mDefaultSentTerminal, inCompiler) ;
  const GGS_lexicalSendTerminalByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSendTerminalByDefaultAST::
lexicalSendTerminalByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultSentTerminal,
                                          Compiler * /* inCompiler */) {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST::GGS_lexicalSendTerminalByDefaultAST (const cPtr_lexicalSendTerminalByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSendTerminalByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalSendTerminalByDefaultAST::readProperty_mDefaultSentTerminal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSendTerminalByDefaultAST) ;
    return p->mProperty_mDefaultSentTerminal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSendTerminalByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSendTerminalByDefaultAST::cPtr_lexicalSendTerminalByDefaultAST (const GGS_lstring & in_mDefaultSentTerminal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultSentTerminal () {
  mProperty_mDefaultSentTerminal = in_mDefaultSentTerminal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSendTerminalByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

void cPtr_lexicalSendTerminalByDefaultAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSendTerminalByDefaultAST:") ;
  mProperty_mDefaultSentTerminal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSendTerminalByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSendTerminalByDefaultAST (mProperty_mDefaultSentTerminal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSendTerminalByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultSentTerminal.printNonNullClassInstanceProperties ("mDefaultSentTerminal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSendTerminalByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ("lexicalSendTerminalByDefaultAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendTerminalByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSendTerminalByDefaultAST_2E_weak::objectCompare (const GGS_lexicalSendTerminalByDefaultAST_2E_weak & inOperand) const {
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

GGS_lexicalSendTerminalByDefaultAST_2E_weak::GGS_lexicalSendTerminalByDefaultAST_2E_weak (void) :
GGS_lexicalSendDefaultActionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak & GGS_lexicalSendTerminalByDefaultAST_2E_weak::operator = (const GGS_lexicalSendTerminalByDefaultAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak::GGS_lexicalSendTerminalByDefaultAST_2E_weak (const GGS_lexicalSendTerminalByDefaultAST & inSource) :
GGS_lexicalSendDefaultActionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST_2E_weak GGS_lexicalSendTerminalByDefaultAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalSendTerminalByDefaultAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalSendTerminalByDefaultAST result ;
  if (isValid ()) {
    const cPtr_lexicalSendTerminalByDefaultAST * p = (cPtr_lexicalSendTerminalByDefaultAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalSendTerminalByDefaultAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSendTerminalByDefaultAST GGS_lexicalSendTerminalByDefaultAST_2E_weak::bang_lexicalSendTerminalByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalSendTerminalByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalSendTerminalByDefaultAST) ;
      result = GGS_lexicalSendTerminalByDefaultAST ((cPtr_lexicalSendTerminalByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalSendTerminalByDefaultAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ("lexicalSendTerminalByDefaultAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSendTerminalByDefaultAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSendTerminalByDefaultAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalErrorByDefaultAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorByDefaultAST::objectCompare (const GGS_lexicalErrorByDefaultAST & inOperand) const {
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

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (void) :
GGS_lexicalSendDefaultActionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST::
init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalErrorByDefaultAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalErrorByDefaultAST (inCompiler COMMA_THERE)) ;
  object->lexicalErrorByDefaultAST_init_21_ (in_mDefaultErrorMessageName, inCompiler) ;
  const GGS_lexicalErrorByDefaultAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalErrorByDefaultAST::
lexicalErrorByDefaultAST_init_21_ (const GGS_lstring & in_mDefaultErrorMessageName,
                                   Compiler * /* inCompiler */) {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST::GGS_lexicalErrorByDefaultAST (const cPtr_lexicalErrorByDefaultAST * inSourcePtr) :
GGS_lexicalSendDefaultActionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalErrorByDefaultAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalErrorByDefaultAST::readProperty_mDefaultErrorMessageName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalErrorByDefaultAST) ;
    return p->mProperty_mDefaultErrorMessageName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalErrorByDefaultAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalErrorByDefaultAST::cPtr_lexicalErrorByDefaultAST (const GGS_lstring & in_mDefaultErrorMessageName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalSendDefaultActionAST (inCompiler COMMA_THERE),
mProperty_mDefaultErrorMessageName () {
  mProperty_mDefaultErrorMessageName = in_mDefaultErrorMessageName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalErrorByDefaultAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

void cPtr_lexicalErrorByDefaultAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalErrorByDefaultAST:") ;
  mProperty_mDefaultErrorMessageName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalErrorByDefaultAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalErrorByDefaultAST (mProperty_mDefaultErrorMessageName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalErrorByDefaultAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalSendDefaultActionAST::printNonNullClassInstanceProperties () ;
    mProperty_mDefaultErrorMessageName.printNonNullClassInstanceProperties ("mDefaultErrorMessageName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorByDefaultAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ("lexicalErrorByDefaultAST",
                                                                             & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorByDefaultAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalErrorByDefaultAST_2E_weak::objectCompare (const GGS_lexicalErrorByDefaultAST_2E_weak & inOperand) const {
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

GGS_lexicalErrorByDefaultAST_2E_weak::GGS_lexicalErrorByDefaultAST_2E_weak (void) :
GGS_lexicalSendDefaultActionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak & GGS_lexicalErrorByDefaultAST_2E_weak::operator = (const GGS_lexicalErrorByDefaultAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak::GGS_lexicalErrorByDefaultAST_2E_weak (const GGS_lexicalErrorByDefaultAST & inSource) :
GGS_lexicalSendDefaultActionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST_2E_weak GGS_lexicalErrorByDefaultAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalErrorByDefaultAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalErrorByDefaultAST result ;
  if (isValid ()) {
    const cPtr_lexicalErrorByDefaultAST * p = (cPtr_lexicalErrorByDefaultAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalErrorByDefaultAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalErrorByDefaultAST GGS_lexicalErrorByDefaultAST_2E_weak::bang_lexicalErrorByDefaultAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalErrorByDefaultAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalErrorByDefaultAST) ;
      result = GGS_lexicalErrorByDefaultAST ((cPtr_lexicalErrorByDefaultAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalErrorByDefaultAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ("lexicalErrorByDefaultAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_lexicalSendDefaultActionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalErrorByDefaultAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalErrorByDefaultAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalRoutineCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalRoutineCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                          GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                          const GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalRoutineCallArgument (io__5F_ioLexiqueAnalysisContext, constin__5F_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@lexicalRoutineOrFunctionFormalInputArgumentAST checkLexicalFunctionCallArgument'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkLexicalFunctionCallArgument (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * inObject,
                                                           GGS_lexiqueAnalysisContext & io__5F_ioLexiqueAnalysisContext,
                                                           const GGS_lexicalTypeEnum constin__5F_inLexicalRoutineFormalArgumentType,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
    inObject->method_checkLexicalFunctionCallArgument (io__5F_ioLexiqueAnalysisContext, constin__5F_inLexicalRoutineFormalArgumentType, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak & GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::operator = (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (const GGS_lexicalRoutineOrFunctionFormalInputArgumentAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST * p = (cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRoutineOrFunctionFormalInputArgumentAST GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::bang_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalRoutineOrFunctionFormalInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST) ;
      result = GGS_lexicalRoutineOrFunctionFormalInputArgumentAST ((cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalRoutineOrFunctionFormalInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ("lexicalRoutineOrFunctionFormalInputArgumentAST.weak",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalAttributeInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputArgumentAST::objectCompare (const GGS_lexicalAttributeInputArgumentAST & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST::
init_21_ (const GGS_lstring & in_mAttributeName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalAttributeInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalAttributeInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalAttributeInputArgumentAST_init_21_ (in_mAttributeName, inCompiler) ;
  const GGS_lexicalAttributeInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalAttributeInputArgumentAST::
lexicalAttributeInputArgumentAST_init_21_ (const GGS_lstring & in_mAttributeName,
                                           Compiler * /* inCompiler */) {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST::GGS_lexicalAttributeInputArgumentAST (const cPtr_lexicalAttributeInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalAttributeInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexicalAttributeInputArgumentAST::readProperty_mAttributeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalAttributeInputArgumentAST) ;
    return p->mProperty_mAttributeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalAttributeInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalAttributeInputArgumentAST::cPtr_lexicalAttributeInputArgumentAST (const GGS_lstring & in_mAttributeName,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mAttributeName () {
  mProperty_mAttributeName = in_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalAttributeInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

void cPtr_lexicalAttributeInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalAttributeInputArgumentAST:") ;
  mProperty_mAttributeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalAttributeInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalAttributeInputArgumentAST (mProperty_mAttributeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalAttributeInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mAttributeName.printNonNullClassInstanceProperties ("mAttributeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ("lexicalAttributeInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalAttributeInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalAttributeInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalAttributeInputArgumentAST_2E_weak::GGS_lexicalAttributeInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak & GGS_lexicalAttributeInputArgumentAST_2E_weak::operator = (const GGS_lexicalAttributeInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak::GGS_lexicalAttributeInputArgumentAST_2E_weak (const GGS_lexicalAttributeInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST_2E_weak GGS_lexicalAttributeInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalAttributeInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalAttributeInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalAttributeInputArgumentAST * p = (cPtr_lexicalAttributeInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalAttributeInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeInputArgumentAST GGS_lexicalAttributeInputArgumentAST_2E_weak::bang_lexicalAttributeInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalAttributeInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalAttributeInputArgumentAST) ;
      result = GGS_lexicalAttributeInputArgumentAST ((cPtr_lexicalAttributeInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalAttributeInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ("lexicalAttributeInputArgumentAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalAttributeInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalAttributeInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterInputArgumentAST::objectCompare (const GGS_lexicalCharacterInputArgumentAST & inOperand) const {
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

GGS_lexicalCharacterInputArgumentAST::GGS_lexicalCharacterInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST GGS_lexicalCharacterInputArgumentAST::
init_21_ (const GGS_lchar & in_mCharacter,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCharacterInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCharacterInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalCharacterInputArgumentAST_init_21_ (in_mCharacter, inCompiler) ;
  const GGS_lexicalCharacterInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCharacterInputArgumentAST::
lexicalCharacterInputArgumentAST_init_21_ (const GGS_lchar & in_mCharacter,
                                           Compiler * /* inCompiler */) {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST::GGS_lexicalCharacterInputArgumentAST (const cPtr_lexicalCharacterInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lchar GGS_lexicalCharacterInputArgumentAST::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lchar () ;
  }else{
    cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCharacterInputArgumentAST) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCharacterInputArgumentAST::cPtr_lexicalCharacterInputArgumentAST (const GGS_lchar & in_mCharacter,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

void cPtr_lexicalCharacterInputArgumentAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCharacterInputArgumentAST:") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCharacterInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCharacterInputArgumentAST (mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ("lexicalCharacterInputArgumentAST",
                                                                                     & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCharacterInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalCharacterInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalCharacterInputArgumentAST_2E_weak::GGS_lexicalCharacterInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak & GGS_lexicalCharacterInputArgumentAST_2E_weak::operator = (const GGS_lexicalCharacterInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak::GGS_lexicalCharacterInputArgumentAST_2E_weak (const GGS_lexicalCharacterInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST_2E_weak GGS_lexicalCharacterInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCharacterInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST GGS_lexicalCharacterInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCharacterInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalCharacterInputArgumentAST * p = (cPtr_lexicalCharacterInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCharacterInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCharacterInputArgumentAST GGS_lexicalCharacterInputArgumentAST_2E_weak::bang_lexicalCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCharacterInputArgumentAST) ;
      result = GGS_lexicalCharacterInputArgumentAST ((cPtr_lexicalCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCharacterInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ("lexicalCharacterInputArgumentAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCharacterInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCharacterInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalUnsignedInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalUnsignedInputArgumentAST::objectCompare (const GGS_lexicalUnsignedInputArgumentAST & inOperand) const {
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

GGS_lexicalUnsignedInputArgumentAST::GGS_lexicalUnsignedInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST::
init_21_ (const GGS_lbigint & in_mUnsigned,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalUnsignedInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalUnsignedInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalUnsignedInputArgumentAST_init_21_ (in_mUnsigned, inCompiler) ;
  const GGS_lexicalUnsignedInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalUnsignedInputArgumentAST::
lexicalUnsignedInputArgumentAST_init_21_ (const GGS_lbigint & in_mUnsigned,
                                          Compiler * /* inCompiler */) {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST::GGS_lexicalUnsignedInputArgumentAST (const cPtr_lexicalUnsignedInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalUnsignedInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_lexicalUnsignedInputArgumentAST::readProperty_mUnsigned (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalUnsignedInputArgumentAST) ;
    return p->mProperty_mUnsigned ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalUnsignedInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mUnsigned () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalUnsignedInputArgumentAST::cPtr_lexicalUnsignedInputArgumentAST (const GGS_lbigint & in_mUnsigned,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mUnsigned () {
  mProperty_mUnsigned = in_mUnsigned ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalUnsignedInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

void cPtr_lexicalUnsignedInputArgumentAST::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalUnsignedInputArgumentAST:") ;
  mProperty_mUnsigned.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalUnsignedInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalUnsignedInputArgumentAST (mProperty_mUnsigned, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalUnsignedInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mUnsigned.printNonNullClassInstanceProperties ("mUnsigned") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalUnsignedInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ("lexicalUnsignedInputArgumentAST",
                                                                                    & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalUnsignedInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalUnsignedInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalUnsignedInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalUnsignedInputArgumentAST_2E_weak::GGS_lexicalUnsignedInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak & GGS_lexicalUnsignedInputArgumentAST_2E_weak::operator = (const GGS_lexicalUnsignedInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak::GGS_lexicalUnsignedInputArgumentAST_2E_weak (const GGS_lexicalUnsignedInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST_2E_weak GGS_lexicalUnsignedInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalUnsignedInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalUnsignedInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalUnsignedInputArgumentAST * p = (cPtr_lexicalUnsignedInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalUnsignedInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalUnsignedInputArgumentAST GGS_lexicalUnsignedInputArgumentAST_2E_weak::bang_lexicalUnsignedInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalUnsignedInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalUnsignedInputArgumentAST) ;
      result = GGS_lexicalUnsignedInputArgumentAST ((cPtr_lexicalUnsignedInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalUnsignedInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ("lexicalUnsignedInputArgumentAST.weak",
                                                                                            & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalUnsignedInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalUnsignedInputArgumentAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalCurrentCharacterInputArgumentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCurrentCharacterInputArgumentAST::objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST & inOperand) const {
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

GGS_lexicalCurrentCharacterInputArgumentAST::GGS_lexicalCurrentCharacterInputArgumentAST (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST::
init_21_ (const GGS_location & in_mLocation,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_lexicalCurrentCharacterInputArgumentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalCurrentCharacterInputArgumentAST (inCompiler COMMA_THERE)) ;
  object->lexicalCurrentCharacterInputArgumentAST_init_21_ (in_mLocation, inCompiler) ;
  const GGS_lexicalCurrentCharacterInputArgumentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalCurrentCharacterInputArgumentAST::
lexicalCurrentCharacterInputArgumentAST_init_21_ (const GGS_location & in_mLocation,
                                                  Compiler * /* inCompiler */) {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST::GGS_lexicalCurrentCharacterInputArgumentAST (const cPtr_lexicalCurrentCharacterInputArgumentAST * inSourcePtr) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalCurrentCharacterInputArgumentAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalCurrentCharacterInputArgumentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalCurrentCharacterInputArgumentAST::cPtr_lexicalCurrentCharacterInputArgumentAST (const GGS_location & in_mLocation,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST (inCompiler COMMA_THERE),
mProperty_mLocation () {
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalCurrentCharacterInputArgumentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

void cPtr_lexicalCurrentCharacterInputArgumentAST::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalCurrentCharacterInputArgumentAST:") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalCurrentCharacterInputArgumentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalCurrentCharacterInputArgumentAST (mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalCurrentCharacterInputArgumentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalRoutineOrFunctionFormalInputArgumentAST::printNonNullClassInstanceProperties () ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalCurrentCharacterInputArgumentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ("lexicalCurrentCharacterInputArgumentAST",
                                                                                            & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCurrentCharacterInputArgumentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::objectCompare (const GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & inOperand) const {
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

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (void) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak & GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::operator = (const GGS_lexicalCurrentCharacterInputArgumentAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak (const GGS_lexicalCurrentCharacterInputArgumentAST & inSource) :
GGS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::unwrappedValue (void) const {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  if (isValid ()) {
    const cPtr_lexicalCurrentCharacterInputArgumentAST * p = (cPtr_lexicalCurrentCharacterInputArgumentAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_lexicalCurrentCharacterInputArgumentAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalCurrentCharacterInputArgumentAST GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::bang_lexicalCurrentCharacterInputArgumentAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_lexicalCurrentCharacterInputArgumentAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_lexicalCurrentCharacterInputArgumentAST) ;
      result = GGS_lexicalCurrentCharacterInputArgumentAST ((cPtr_lexicalCurrentCharacterInputArgumentAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @lexicalCurrentCharacterInputArgumentAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ("lexicalCurrentCharacterInputArgumentAST.weak",
                                                                                                    & kTypeDescriptor_GALGAS_lexicalRoutineOrFunctionFormalInputArgumentAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalCurrentCharacterInputArgumentAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalCurrentCharacterInputArgumentAST_2E_weak ;
}

