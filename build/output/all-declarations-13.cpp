#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceExpressionForGeneration::objectCompare (const GGS_grammarInstructionWithSourceExpressionForGeneration & inOperand) const {
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

GGS_grammarInstructionWithSourceExpressionForGeneration::GGS_grammarInstructionWithSourceExpressionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_string & in_mGrammarName,
                                          const GGS_string & in_mLabelName,
                                          const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                          const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                          const GGS_bool & in_mGrammarHasTranslateFeature,
                                          const GGS__5B_string_5D_ & in_mAssignementList,
                                          const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionWithSourceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionWithSourceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceStringExpression, in_mNameStringExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName, inCompiler) ;
  const GGS_grammarInstructionWithSourceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceExpressionForGeneration::
grammarInstructionWithSourceExpressionForGeneration_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                              const GGS_string & in_mGrammarName,
                                                                                              const GGS_string & in_mLabelName,
                                                                                              const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                              const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                              const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                              const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                              const GGS__5B_string_5D_ & in_mAssignementList,
                                                                                              const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceStringExpression = in_mSourceStringExpression ;
  mProperty_mNameStringExpression = in_mNameStringExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceExpressionForGeneration::GGS_grammarInstructionWithSourceExpressionForGeneration (const cPtr_grammarInstructionWithSourceExpressionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSourceStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mNameStringExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mNameStringExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_string_5D_ () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceExpressionForGeneration * p = (cPtr_grammarInstructionWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceExpressionForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceStringExpression (),
mProperty_mNameStringExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceExpressionForGeneration::cPtr_grammarInstructionWithSourceExpressionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                                    const GGS_string & in_mGrammarName,
                                                                                                                    const GGS_string & in_mLabelName,
                                                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceStringExpression,
                                                                                                                    const GGS_semanticExpressionForGeneration & in_mNameStringExpression,
                                                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                                    const GGS__5B_string_5D_ & in_mAssignementList,
                                                                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceStringExpression (),
mProperty_mNameStringExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceStringExpression = in_mSourceStringExpression ;
  mProperty_mNameStringExpression = in_mNameStringExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

void cPtr_grammarInstructionWithSourceExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionWithSourceExpressionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceStringExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameStringExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAssignementList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxDirectedTranslationResultVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInstructionWithSourceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceExpressionForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceStringExpression, mProperty_mNameStringExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceStringExpression.printNonNullClassInstanceProperties ("mSourceStringExpression") ;
    mProperty_mNameStringExpression.printNonNullClassInstanceProperties ("mNameStringExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ("grammarInstructionWithSourceExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST::objectCompare (const GGS_loopInstructionWithVariantAST & inOperand) const {
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

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                              const GGS_semanticExpressionAST & in_mVariantExpression,
                                              const GGS_location & in_mEndOfVariantExpression,
                                              const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                              const GGS_location & in_mEndOfFirstInstructions,
                                              const GGS_semanticExpressionAST & in_mLoopExpression,
                                              const GGS_location & in_mEndOfLoopExpression,
                                              const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                              const GGS_location & in_mEndOfSecondInstructions,
                                              const GGS_location & in_mEndOfLoopInstruction,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantAST * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantAST (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mEndOfVariantExpression, in_mFirstInstructions, in_mEndOfFirstInstructions, in_mLoopExpression, in_mEndOfLoopExpression, in_mSecondInstructions, in_mEndOfSecondInstructions, in_mEndOfLoopInstruction, inCompiler) ;
  const GGS_loopInstructionWithVariantAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantAST::
loopInstructionWithVariantAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                            const GGS_location & in_mEndOfVariantExpression,
                                                                            const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                                                            const GGS_location & in_mEndOfFirstInstructions,
                                                                            const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                            const GGS_location & in_mEndOfLoopExpression,
                                                                            const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                                                            const GGS_location & in_mEndOfSecondInstructions,
                                                                            const GGS_location & in_mEndOfLoopInstruction,
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

GGS_loopInstructionWithVariantAST::GGS_loopInstructionWithVariantAST (const cPtr_loopInstructionWithVariantAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_loopInstructionWithVariantAST::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_loopInstructionWithVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_loopInstructionWithVariantAST::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantAST::readProperty_mEndOfLoopInstruction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantAST) ;
    return p->mProperty_mEndOfLoopInstruction ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantAST class
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

cPtr_loopInstructionWithVariantAST::cPtr_loopInstructionWithVariantAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionAST & in_mVariantExpression,
                                                                        const GGS_location & in_mEndOfVariantExpression,
                                                                        const GGS__5B_semanticInstructionAST_5D_ & in_mFirstInstructions,
                                                                        const GGS_location & in_mEndOfFirstInstructions,
                                                                        const GGS_semanticExpressionAST & in_mLoopExpression,
                                                                        const GGS_location & in_mEndOfLoopExpression,
                                                                        const GGS__5B_semanticInstructionAST_5D_ & in_mSecondInstructions,
                                                                        const GGS_location & in_mEndOfSecondInstructions,
                                                                        const GGS_location & in_mEndOfLoopInstruction,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithVariantAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_loopInstructionWithVariantAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantAST (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mEndOfVariantExpression, mProperty_mFirstInstructions, mProperty_mEndOfFirstInstructions, mProperty_mLoopExpression, mProperty_mEndOfLoopExpression, mProperty_mSecondInstructions, mProperty_mEndOfSecondInstructions, mProperty_mEndOfLoopInstruction, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @loopInstructionWithVariantAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ("loopInstructionWithVariantAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantAST_2E_weak::objectCompare (const GGS_loopInstructionWithVariantAST_2E_weak & inOperand) const {
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

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak & GGS_loopInstructionWithVariantAST_2E_weak::operator = (const GGS_loopInstructionWithVariantAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak::GGS_loopInstructionWithVariantAST_2E_weak (const GGS_loopInstructionWithVariantAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST_2E_weak GGS_loopInstructionWithVariantAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_loopInstructionWithVariantAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::unwrappedValue (void) const {
  GGS_loopInstructionWithVariantAST result ;
  if (isValid ()) {
    const cPtr_loopInstructionWithVariantAST * p = (cPtr_loopInstructionWithVariantAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_loopInstructionWithVariantAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantAST GGS_loopInstructionWithVariantAST_2E_weak::bang_loopInstructionWithVariantAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_loopInstructionWithVariantAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_loopInstructionWithVariantAST) ;
      result = GGS_loopInstructionWithVariantAST ((cPtr_loopInstructionWithVariantAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ("loopInstructionWithVariantAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @loopInstructionWithVariantForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_loopInstructionWithVariantForGeneration::objectCompare (const GGS_loopInstructionWithVariantForGeneration & inOperand) const {
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

GGS_loopInstructionWithVariantForGeneration::GGS_loopInstructionWithVariantForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration GGS_loopInstructionWithVariantForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                          const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                          const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                          const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_loopInstructionWithVariantForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_loopInstructionWithVariantForGeneration (inCompiler COMMA_THERE)) ;
  object->loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mVariantExpression, in_mFirstInstructions, in_mLoopExpression, in_mSecondInstructions, inCompiler) ;
  const GGS_loopInstructionWithVariantForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_loopInstructionWithVariantForGeneration::
loopInstructionWithVariantForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                  const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                  const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                  const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

GGS_loopInstructionWithVariantForGeneration::GGS_loopInstructionWithVariantForGeneration (const cPtr_loopInstructionWithVariantForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_loopInstructionWithVariantForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_loopInstructionWithVariantForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mVariantExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mVariantExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mFirstInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mFirstInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mLoopExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_loopInstructionWithVariantForGeneration::readProperty_mSecondInstructions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_loopInstructionWithVariantForGeneration * p = (cPtr_loopInstructionWithVariantForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_loopInstructionWithVariantForGeneration) ;
    return p->mProperty_mSecondInstructions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @loopInstructionWithVariantForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_loopInstructionWithVariantForGeneration::cPtr_loopInstructionWithVariantForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_semanticExpressionForGeneration & in_mVariantExpression,
                                                                                            const GGS_semanticInstructionListForGeneration & in_mFirstInstructions,
                                                                                            const GGS_semanticExpressionForGeneration & in_mLoopExpression,
                                                                                            const GGS_semanticInstructionListForGeneration & in_mSecondInstructions,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mVariantExpression (),
mProperty_mFirstInstructions (),
mProperty_mLoopExpression (),
mProperty_mSecondInstructions () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mVariantExpression = in_mVariantExpression ;
  mProperty_mFirstInstructions = in_mFirstInstructions ;
  mProperty_mLoopExpression = in_mLoopExpression ;
  mProperty_mSecondInstructions = in_mSecondInstructions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_loopInstructionWithVariantForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

void cPtr_loopInstructionWithVariantForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@loopInstructionWithVariantForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mVariantExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFirstInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLoopExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSecondInstructions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_loopInstructionWithVariantForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_loopInstructionWithVariantForGeneration (mProperty_mInstructionLocation, mProperty_mVariantExpression, mProperty_mFirstInstructions, mProperty_mLoopExpression, mProperty_mSecondInstructions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_loopInstructionWithVariantForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mVariantExpression.printNonNullClassInstanceProperties ("mVariantExpression") ;
    mProperty_mFirstInstructions.printNonNullClassInstanceProperties ("mFirstInstructions") ;
    mProperty_mLoopExpression.printNonNullClassInstanceProperties ("mLoopExpression") ;
    mProperty_mSecondInstructions.printNonNullClassInstanceProperties ("mSecondInstructions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @loopInstructionWithVariantForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ("loopInstructionWithVariantForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_loopInstructionWithVariantForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_loopInstructionWithVariantForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @methodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionAST::objectCompare (const GGS_methodCallInstructionAST & inOperand) const {
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

GGS_methodCallInstructionAST::GGS_methodCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionAST & in_mReceiverExpression,
                      const GGS_lstring & in_mMethodName,
                      const GGS_actualParameterListAST & in_mActualParameterList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_methodCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_methodCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->methodCallInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mReceiverExpression, in_mMethodName, in_mActualParameterList, inCompiler) ;
  const GGS_methodCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionAST::
methodCallInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_semanticExpressionAST & in_mReceiverExpression,
                                               const GGS_lstring & in_mMethodName,
                                               const GGS_actualParameterListAST & in_mActualParameterList,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST::GGS_methodCallInstructionAST (const cPtr_methodCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_methodCallInstructionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_methodCallInstructionAST::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_methodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionAST::cPtr_methodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_semanticExpressionAST & in_mReceiverExpression,
                                                              const GGS_lstring & in_mMethodName,
                                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_methodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

void cPtr_methodCallInstructionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@methodCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_methodCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_methodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_methodCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST ("methodCallInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionAST_2E_weak::objectCompare (const GGS_methodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak & GGS_methodCallInstructionAST_2E_weak::operator = (const GGS_methodCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak::GGS_methodCallInstructionAST_2E_weak (const GGS_methodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST_2E_weak GGS_methodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_methodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_methodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_methodCallInstructionAST * p = (cPtr_methodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_methodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionAST GGS_methodCallInstructionAST_2E_weak::bang_methodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_methodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_methodCallInstructionAST) ;
      result = GGS_methodCallInstructionAST ((cPtr_methodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ("methodCallInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @methodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_methodCallInstructionForGeneration::objectCompare (const GGS_methodCallInstructionForGeneration & inOperand) const {
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

GGS_methodCallInstructionForGeneration::GGS_methodCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_methodCallInstructionForGeneration GGS_methodCallInstructionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                      const GGS_string & in_mMethodName,
                                      const GGS_methodKind & in_mKind,
                                      const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                      const GGS_bool & in_mHasCompilerArgument,
                                      const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_methodCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_methodCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverType, in_mReceiverExpression, in_mMethodName, in_mKind, in_mActualParameterList, in_mHasCompilerArgument, in_mMethodBaseType, inCompiler) ;
  const GGS_methodCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_methodCallInstructionForGeneration::
methodCallInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                         const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                         const GGS_string & in_mMethodName,
                                                                         const GGS_methodKind & in_mKind,
                                                                         const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                         const GGS_bool & in_mHasCompilerArgument,
                                                                         const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_methodCallInstructionForGeneration::GGS_methodCallInstructionForGeneration (const cPtr_methodCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_methodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_methodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_methodCallInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_methodCallInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_methodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_methodKind GGS_methodCallInstructionForGeneration::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_methodKind () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_methodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_methodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_methodCallInstructionForGeneration::readProperty_mMethodBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_methodCallInstructionForGeneration * p = (cPtr_methodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_methodCallInstructionForGeneration) ;
    return p->mProperty_mMethodBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @methodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverType (),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_methodCallInstructionForGeneration::cPtr_methodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                                  const GGS_string & in_mMethodName,
                                                                                  const GGS_methodKind & in_mKind,
                                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                                  const GGS_unifiedTypeMapEntry & in_mMethodBaseType,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverType (),
mProperty_mReceiverExpression (),
mProperty_mMethodName (),
mProperty_mKind (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mMethodBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mKind = in_mKind ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mMethodBaseType = in_mMethodBaseType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_methodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

void cPtr_methodCallInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@methodCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_methodCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_methodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverType, mProperty_mReceiverExpression, mProperty_mMethodName, mProperty_mKind, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mMethodBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_methodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mMethodBaseType.printNonNullClassInstanceProperties ("mMethodBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @methodCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ("methodCallInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_methodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_methodCallInstructionForGeneration ;
}

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
                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
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
                                               const GGS_CommaSeparatedExpressionList & in_mExpressions,
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

GGS_CommaSeparatedExpressionList GGS_ifInstructionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
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
                                              const GGS_CommaSeparatedExpressionList & in_mExpressions,
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

GGS_forInstructionEnumeratedObjectForGeneration::GGS_forInstructionEnumeratedObjectForGeneration (void) :
mProperty_mEnumerationOrder (),
mProperty_mEnumeratedExpression (),
mProperty_mEnumeratorCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration::GGS_forInstructionEnumeratedObjectForGeneration (const GGS_forInstructionEnumeratedObjectForGeneration & inSource) :
mProperty_mEnumerationOrder (inSource.mProperty_mEnumerationOrder),
mProperty_mEnumeratedExpression (inSource.mProperty_mEnumeratedExpression),
mProperty_mEnumeratorCppName (inSource.mProperty_mEnumeratorCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration & GGS_forInstructionEnumeratedObjectForGeneration::operator = (const GGS_forInstructionEnumeratedObjectForGeneration & inSource) {
  mProperty_mEnumerationOrder = inSource.mProperty_mEnumerationOrder ;
  mProperty_mEnumeratedExpression = inSource.mProperty_mEnumeratedExpression ;
  mProperty_mEnumeratorCppName = inSource.mProperty_mEnumeratorCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration GGS_forInstructionEnumeratedObjectForGeneration::init_21__21__21_ (const GGS_string & in_mEnumerationOrder,
                                                                                                                   const GGS_semanticExpressionForGeneration & in_mEnumeratedExpression,
                                                                                                                   const GGS_string & in_mEnumeratorCppName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_forInstructionEnumeratedObjectForGeneration result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumerationOrder = in_mEnumerationOrder ;
  result.mProperty_mEnumeratedExpression = in_mEnumeratedExpression ;
  result.mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectForGeneration::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionEnumeratedObjectForGeneration::GGS_forInstructionEnumeratedObjectForGeneration (const GGS_string & inOperand0,
                                                                                                  const GGS_semanticExpressionForGeneration & inOperand1,
                                                                                                  const GGS_string & inOperand2) :
mProperty_mEnumerationOrder (inOperand0),
mProperty_mEnumeratedExpression (inOperand1),
mProperty_mEnumeratorCppName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_forInstructionEnumeratedObjectForGeneration::isValid (void) const {
  return mProperty_mEnumerationOrder.isValid () && mProperty_mEnumeratedExpression.isValid () && mProperty_mEnumeratorCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectForGeneration::drop (void) {
  mProperty_mEnumerationOrder.drop () ;
  mProperty_mEnumeratedExpression.drop () ;
  mProperty_mEnumeratorCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_forInstructionEnumeratedObjectForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @forInstructionEnumeratedObjectForGeneration:") ;
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
//     @forInstructionEnumeratedObjectForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectForGeneration ("forInstructionEnumeratedObjectForGeneration",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionEnumeratedObjectForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionEnumeratedObjectForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @forInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_forInstructionForGeneration::objectCompare (const GGS_forInstructionForGeneration & inOperand) const {
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

GGS_forInstructionForGeneration::GGS_forInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_forInstructionForGeneration GGS_forInstructionForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & in_mEnumeratedObjectList,
                                      const GGS_string & in_mIndexVariableCppName,
                                      const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                      const GGS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GGS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GGS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                      const GGS_semanticInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_forInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_forInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->forInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mEnumeratedObjectList, in_mIndexVariableCppName, in_mWhileExpression, in_mBeforeInstructionList, in_mBetweenInstructionList, in_mDoInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_forInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_forInstructionForGeneration::
forInstructionForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & in_mEnumeratedObjectList,
                                                                  const GGS_string & in_mIndexVariableCppName,
                                                                  const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                  const GGS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                                  const GGS_semanticInstructionListForGeneration & in_mAfterInstructionList,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEnumeratedObjectList = in_mEnumeratedObjectList ;
  mProperty_mIndexVariableCppName = in_mIndexVariableCppName ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_forInstructionForGeneration::GGS_forInstructionForGeneration (const cPtr_forInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_forInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_forInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ GGS_forInstructionForGeneration::readProperty_mEnumeratedObjectList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mEnumeratedObjectList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_forInstructionForGeneration::readProperty_mIndexVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mIndexVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_forInstructionForGeneration::readProperty_mWhileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mWhileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_forInstructionForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_forInstructionForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_forInstructionForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_forInstructionForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_forInstructionForGeneration * p = (cPtr_forInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_forInstructionForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @forInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_forInstructionForGeneration::cPtr_forInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mEnumeratedObjectList (),
mProperty_mIndexVariableCppName (),
mProperty_mWhileExpression (),
mProperty_mBeforeInstructionList (),
mProperty_mBetweenInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_forInstructionForGeneration::cPtr_forInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                    const GGS__5B_forInstructionEnumeratedObjectForGeneration_5D_ & in_mEnumeratedObjectList,
                                                                    const GGS_string & in_mIndexVariableCppName,
                                                                    const GGS_semanticExpressionForGeneration & in_mWhileExpression,
                                                                    const GGS_semanticInstructionListForGeneration & in_mBeforeInstructionList,
                                                                    const GGS_semanticInstructionListForGeneration & in_mBetweenInstructionList,
                                                                    const GGS_semanticInstructionListForGeneration & in_mDoInstructionList,
                                                                    const GGS_semanticInstructionListForGeneration & in_mAfterInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mEnumeratedObjectList (),
mProperty_mIndexVariableCppName (),
mProperty_mWhileExpression (),
mProperty_mBeforeInstructionList (),
mProperty_mBetweenInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mEnumeratedObjectList = in_mEnumeratedObjectList ;
  mProperty_mIndexVariableCppName = in_mIndexVariableCppName ;
  mProperty_mWhileExpression = in_mWhileExpression ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_forInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
}

void cPtr_forInstructionForGeneration::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@forInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratedObjectList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWhileExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_forInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_forInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mEnumeratedObjectList, mProperty_mIndexVariableCppName, mProperty_mWhileExpression, mProperty_mBeforeInstructionList, mProperty_mBetweenInstructionList, mProperty_mDoInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_forInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mEnumeratedObjectList.printNonNullClassInstanceProperties ("mEnumeratedObjectList") ;
    mProperty_mIndexVariableCppName.printNonNullClassInstanceProperties ("mIndexVariableCppName") ;
    mProperty_mWhileExpression.printNonNullClassInstanceProperties ("mWhileExpression") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @forInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_forInstructionForGeneration ("forInstructionForGeneration",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_forInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_forInstructionForGeneration ;
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
                                                                                   const GGS_semanticInstructionListForGeneration & in_mInstructions,
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
                                                              const GGS_semanticInstructionListForGeneration & inOperand3) :
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
// @switchInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_switchInstructionForGeneration::objectCompare (const GGS_switchInstructionForGeneration & inOperand) const {
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

GGS_switchInstructionForGeneration::GGS_switchInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_switchInstructionForGeneration GGS_switchInstructionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumType,
                  const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                  const GGS__5B_switchBranchForGeneration_5D_ & in_mBranches,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_switchInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_switchInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->switchInstructionForGeneration_init_21__21__21_ (in_mEnumType, in_mSwitchExpression, in_mBranches, inCompiler) ;
  const GGS_switchInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_switchInstructionForGeneration::
switchInstructionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                                 const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                 const GGS__5B_switchBranchForGeneration_5D_ & in_mBranches,
                                                 Compiler * /* inCompiler */) {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
}

//--------------------------------------------------------------------------------------------------

GGS_switchInstructionForGeneration::GGS_switchInstructionForGeneration (const cPtr_switchInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_switchInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_switchInstructionForGeneration::readProperty_mEnumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mEnumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_switchInstructionForGeneration::readProperty_mSwitchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mSwitchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_switchBranchForGeneration_5D_ GGS_switchInstructionForGeneration::readProperty_mBranches (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_switchBranchForGeneration_5D_ () ;
  }else{
    cPtr_switchInstructionForGeneration * p = (cPtr_switchInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_switchInstructionForGeneration) ;
    return p->mProperty_mBranches ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @switchInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mBranches () {
}

//--------------------------------------------------------------------------------------------------

cPtr_switchInstructionForGeneration::cPtr_switchInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mEnumType,
                                                                          const GGS_semanticExpressionForGeneration & in_mSwitchExpression,
                                                                          const GGS__5B_switchBranchForGeneration_5D_ & in_mBranches,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mEnumType (),
mProperty_mSwitchExpression (),
mProperty_mBranches () {
  mProperty_mEnumType = in_mEnumType ;
  mProperty_mSwitchExpression = in_mSwitchExpression ;
  mProperty_mBranches = in_mBranches ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_switchInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
}

void cPtr_switchInstructionForGeneration::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("[@switchInstructionForGeneration:") ;
  mProperty_mEnumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSwitchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBranches.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_switchInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_switchInstructionForGeneration (mProperty_mEnumType, mProperty_mSwitchExpression, mProperty_mBranches, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_switchInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumType.printNonNullClassInstanceProperties ("mEnumType") ;
    mProperty_mSwitchExpression.printNonNullClassInstanceProperties ("mSwitchExpression") ;
    mProperty_mBranches.printNonNullClassInstanceProperties ("mBranches") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @switchInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_switchInstructionForGeneration ("switchInstructionForGeneration",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_switchInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_switchInstructionForGeneration ;
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
                              const GGS_actualParameterListAST & in_mActualParameterList,
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
                                                       const GGS_actualParameterListAST & in_mActualParameterList,
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

GGS_actualParameterListAST GGS_setterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
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
                                                              const GGS_actualParameterListAST & in_mActualParameterList,
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
                  const GGS_actualParameterListAST & in_mActualParameterList,
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
                                               const GGS_actualParameterListAST & in_mActualParameterList,
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

GGS_actualParameterListAST GGS_selfSetterCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
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
                                                                      const GGS_actualParameterListAST & in_mActualParameterList,
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
                                      const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
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
                                                                       const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
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

GGS_CommaSeparatedExpressionList GGS_loopInstructionWithoutVariantAST::readProperty_mLoopExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_CommaSeparatedExpressionList () ;
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
                                                                              const GGS_CommaSeparatedExpressionList & in_mLoopExpression,
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
// @localVariableOrConstantDeclarationWithSourceExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::objectCompare (const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration & inOperand) const {
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

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                      const GGS_bool & in_mIsConstant,
                      const GGS_string & in_mCppVariableName,
                      const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (in_mTargetType, in_mIsConstant, in_mCppVariableName, in_mSourceExpression, inCompiler) ;
  const GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::
localVariableOrConstantDeclarationWithSourceExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                          const GGS_bool & in_mIsConstant,
                                                                                          const GGS_string & in_mCppVariableName,
                                                                                          const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                          Compiler * /* inCompiler */) {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mCppVariableName = in_mCppVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mIsConstant (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mIsConstant ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mCppVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mCppVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * p = (cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @localVariableOrConstantDeclarationWithSourceExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mIsConstant (),
mProperty_mCppVariableName (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                                                                                    const GGS_bool & in_mIsConstant,
                                                                                                                                                    const GGS_string & in_mCppVariableName,
                                                                                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mTargetType (),
mProperty_mIsConstant (),
mProperty_mCppVariableName (),
mProperty_mSourceExpression () {
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mIsConstant = in_mIsConstant ;
  mProperty_mCppVariableName = in_mCppVariableName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
}

void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::description (String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@localVariableOrConstantDeclarationWithSourceExpressionForGeneration:") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration (mProperty_mTargetType, mProperty_mIsConstant, mProperty_mCppVariableName, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mIsConstant.printNonNullClassInstanceProperties ("mIsConstant") ;
    mProperty_mCppVariableName.printNonNullClassInstanceProperties ("mCppVariableName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @localVariableOrConstantDeclarationWithSourceExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ("localVariableOrConstantDeclarationWithSourceExpressionForGeneration",
                                                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration ;
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
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mSourceExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfAssignmentInstructionAST_init_21__21_ (in_mInstructionLocation, in_mSourceExpression, inCompiler) ;
  const GGS_selfAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfAssignmentInstructionAST::
selfAssignmentInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfAssignmentInstructionAST::GGS_selfAssignmentInstructionAST (const cPtr_selfAssignmentInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfAssignmentInstructionAST) ;
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
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfAssignmentInstructionAST::cPtr_selfAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
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
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
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
              const GGS_actualOutputArgumentList & in_mActualParameterList,
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
                                      const GGS_actualOutputArgumentList & in_mActualParameterList,
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

GGS_actualOutputArgumentList GGS_superInitInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
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
                                                            const GGS_actualOutputArgumentList & in_mActualParameterList,
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
// @superInitInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superInitInstructionForGeneration::objectCompare (const GGS_superInitInstructionForGeneration & inOperand) const {
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

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superInitInstructionForGeneration GGS_superInitInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_string & in_mSuperInitializerSignature,
                      const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                      const GGS_string & in_mSuperTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_superInitInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superInitInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superInitInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mSuperInitializerSignature, in_mActualParameterList, in_mSuperTypeName, inCompiler) ;
  const GGS_superInitInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superInitInstructionForGeneration::
superInitInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_string & in_mSuperInitializerSignature,
                                                        const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                        const GGS_string & in_mSuperTypeName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mSuperInitializerSignature = in_mSuperInitializerSignature ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mSuperTypeName = in_mSuperTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_superInitInstructionForGeneration::GGS_superInitInstructionForGeneration (const cPtr_superInitInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superInitInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_superInitInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperInitializerSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperInitializerSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_superInitInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superInitInstructionForGeneration::readProperty_mSuperTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superInitInstructionForGeneration * p = (cPtr_superInitInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superInitInstructionForGeneration) ;
    return p->mProperty_mSuperTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superInitInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mSuperInitializerSignature (),
mProperty_mActualParameterList (),
mProperty_mSuperTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superInitInstructionForGeneration::cPtr_superInitInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                const GGS_string & in_mSuperInitializerSignature,
                                                                                const GGS_semanticExpressionListForGeneration & in_mActualParameterList,
                                                                                const GGS_string & in_mSuperTypeName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
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

const GALGAS_TypeDescriptor * cPtr_superInitInstructionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_superInitInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superInitInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mSuperInitializerSignature, mProperty_mActualParameterList, mProperty_mSuperTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @superInitInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superInitInstructionForGeneration ("superInitInstructionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superInitInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superInitInstructionForGeneration ;
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
                      const GGS_actualParameterListAST & in_mActualParameterList,
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
                                                   const GGS_actualParameterListAST & in_mActualParameterList,
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

GGS_actualParameterListAST GGS_typeMethodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
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
                                                                      const GGS_actualParameterListAST & in_mActualParameterList,
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
                      const GGS_lstring & in_mOptionalProperty,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetVariableName, in_mOptionalProperty, in_mSourceExpression, inCompiler) ;
  const GGS_assignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionAST::
assignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                               const GGS_lstring & in_mTargetVariableName,
                                               const GGS_lstring & in_mOptionalProperty,
                                               const GGS_semanticExpressionAST & in_mSourceExpression,
                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
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

GGS_lstring GGS_assignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_assignmentInstructionAST * p = (cPtr_assignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
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
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionAST::cPtr_assignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                              const GGS_lstring & in_mTargetVariableName,
                                                              const GGS_lstring & in_mOptionalProperty,
                                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetVariableName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetVariableName = in_mTargetVariableName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
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
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_assignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetVariableName, mProperty_mOptionalProperty, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetVariableName.printNonNullClassInstanceProperties ("mTargetVariableName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
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
                      const GGS_lstring & in_mOptionalProperty,
                      const GGS_semanticExpressionAST & in_mSourceExpression,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_selfPropertyAssignmentInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPropertyAssignmentInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (in_mInstructionLocation, in_mTargetSelfPropertyName, in_mOptionalProperty, in_mSourceExpression, inCompiler) ;
  const GGS_selfPropertyAssignmentInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPropertyAssignmentInstructionAST::
selfPropertyAssignmentInstructionAST_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                           const GGS_lstring & in_mTargetSelfPropertyName,
                                                           const GGS_lstring & in_mOptionalProperty,
                                                           const GGS_semanticExpressionAST & in_mSourceExpression,
                                                           Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
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

GGS_lstring GGS_selfPropertyAssignmentInstructionAST::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_selfPropertyAssignmentInstructionAST * p = (cPtr_selfPropertyAssignmentInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPropertyAssignmentInstructionAST) ;
    return p->mProperty_mOptionalProperty ;
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
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfPropertyAssignmentInstructionAST::cPtr_selfPropertyAssignmentInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_lstring & in_mTargetSelfPropertyName,
                                                                                      const GGS_lstring & in_mOptionalProperty,
                                                                                      const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mTargetSelfPropertyName (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetSelfPropertyName = in_mTargetSelfPropertyName ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
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
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_selfPropertyAssignmentInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPropertyAssignmentInstructionAST (mProperty_mInstructionLocation, mProperty_mTargetSelfPropertyName, mProperty_mOptionalProperty, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPropertyAssignmentInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTargetSelfPropertyName.printNonNullClassInstanceProperties ("mTargetSelfPropertyName") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
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
// @assignmentInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_assignmentInstructionForGeneration::objectCompare (const GGS_assignmentInstructionForGeneration & inOperand) const {
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

GGS_assignmentInstructionForGeneration::GGS_assignmentInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_assignmentInstructionForGeneration GGS_assignmentInstructionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                  const GGS_unifiedTypeMapEntry & in_mTargetType,
                                  const GGS_string & in_mTargetCppName,
                                  const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                  const GGS_string & in_mOptionalProperty,
                                  const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                  const GGS_location & in_mSourceLocation,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_assignmentInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_assignmentInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->assignmentInstructionForGeneration_init_21__21__21__21__21__21__21_ (in_mReceiverType, in_mTargetType, in_mTargetCppName, in_mNameForCheckingFormalParameterUsing, in_mOptionalProperty, in_mSourceExpression, in_mSourceLocation, inCompiler) ;
  const GGS_assignmentInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_assignmentInstructionForGeneration::
assignmentInstructionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                     const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                     const GGS_string & in_mTargetCppName,
                                                                     const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                     const GGS_string & in_mOptionalProperty,
                                                                     const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                     const GGS_location & in_mSourceLocation,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetCppName = in_mTargetCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_assignmentInstructionForGeneration::GGS_assignmentInstructionForGeneration (const cPtr_assignmentInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_assignmentInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_assignmentInstructionForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_assignmentInstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentInstructionForGeneration::readProperty_mTargetCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mTargetCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_assignmentInstructionForGeneration::readProperty_mOptionalProperty (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mOptionalProperty ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_assignmentInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_assignmentInstructionForGeneration::readProperty_mSourceLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_assignmentInstructionForGeneration * p = (cPtr_assignmentInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_assignmentInstructionForGeneration) ;
    return p->mProperty_mSourceLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @assignmentInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mTargetType (),
mProperty_mTargetCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression (),
mProperty_mSourceLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_assignmentInstructionForGeneration::cPtr_assignmentInstructionForGeneration (const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                  const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                  const GGS_string & in_mTargetCppName,
                                                                                  const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                  const GGS_string & in_mOptionalProperty,
                                                                                  const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                  const GGS_location & in_mSourceLocation,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mTargetType (),
mProperty_mTargetCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mOptionalProperty (),
mProperty_mSourceExpression (),
mProperty_mSourceLocation () {
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetCppName = in_mTargetCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mOptionalProperty = in_mOptionalProperty ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mSourceLocation = in_mSourceLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_assignmentInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

void cPtr_assignmentInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@assignmentInstructionForGeneration:") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_assignmentInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_assignmentInstructionForGeneration (mProperty_mReceiverType, mProperty_mTargetType, mProperty_mTargetCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mOptionalProperty, mProperty_mSourceExpression, mProperty_mSourceLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_assignmentInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetCppName.printNonNullClassInstanceProperties ("mTargetCppName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mOptionalProperty.printNonNullClassInstanceProperties ("mOptionalProperty") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mSourceLocation.printNonNullClassInstanceProperties ("mSourceLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @assignmentInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ("assignmentInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_assignmentInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_assignmentInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueComponentAST::objectCompare (const GGS_lexiqueComponentAST & inOperand) const {
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

GGS_lexiqueComponentAST::GGS_lexiqueComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueComponentAST GGS_lexiqueComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                  const GGS_lstring & in_mLexiqueComponentName,
                                                                  const GGS_bool & in_mIsTemplate,
                                                                  const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                  const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementListAST,
                                                                  const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                  const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                  const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                  const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                  const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                  const GGS__5B_abstractLexicalRuleAST_5D_ & in_mLexicalRuleListAST,
                                                                  const GGS_indexingListAST & in_mIndexingListAST,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cPtr_lexiqueComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueComponentAST (inCompiler COMMA_THERE)) ;
  object->lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (in_isPredefined, in_mLexiqueComponentName, in_mIsTemplate, in_mTemplateDelimitorListAST, in_mTemplateReplacementListAST, in_mLexicalAttributeListAST, in_mLexicalStyleListAST, in_mTerminalDeclarationListAST, in_mLexicalMessageDeclarationListAST, in_mLexicalListDeclarationListAST, in_mLexicalRuleListAST, in_mIndexingListAST, inCompiler) ;
  const GGS_lexiqueComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::
lexiqueComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mLexiqueComponentName,
                                                                                      const GGS_bool & in_mIsTemplate,
                                                                                      const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                                                      const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementListAST,
                                                                                      const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                                                      const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                                                      const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                                                      const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                                                      const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                                                      const GGS__5B_abstractLexicalRuleAST_5D_ & in_mLexicalRuleListAST,
                                                                                      const GGS_indexingListAST & in_mIndexingListAST,
                                                                                      Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueComponentAST::GGS_lexiqueComponentAST (const cPtr_lexiqueComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueComponentAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_lexiqueComponentAST::readProperty_mIsTemplate (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIsTemplate ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateDelimitorListAST GGS_lexiqueComponentAST::readProperty_mTemplateDelimitorListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateDelimitorListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateDelimitorListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_templateReplacementAST_5D_ GGS_lexiqueComponentAST::readProperty_mTemplateReplacementListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_templateReplacementAST_5D_ () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTemplateReplacementListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalAttributeListAST GGS_lexiqueComponentAST::readProperty_mLexicalAttributeListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalAttributeListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalAttributeListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalStyleListAST GGS_lexiqueComponentAST::readProperty_mLexicalStyleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalStyleListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalStyleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_terminalDeclarationListAST GGS_lexiqueComponentAST::readProperty_mTerminalDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_terminalDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mTerminalDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalMessageDeclarationListAST GGS_lexiqueComponentAST::readProperty_mLexicalMessageDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalMessageDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalMessageDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalListDeclarationListAST GGS_lexiqueComponentAST::readProperty_mLexicalListDeclarationListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalListDeclarationListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalListDeclarationListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_abstractLexicalRuleAST_5D_ GGS_lexiqueComponentAST::readProperty_mLexicalRuleListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_abstractLexicalRuleAST_5D_ () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mLexicalRuleListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_indexingListAST GGS_lexiqueComponentAST::readProperty_mIndexingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_indexingListAST () ;
  }else{
    cPtr_lexiqueComponentAST * p = (cPtr_lexiqueComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueComponentAST) ;
    return p->mProperty_mIndexingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueComponentAST::cPtr_lexiqueComponentAST (const GGS_bool & in_isPredefined,
                                                    const GGS_lstring & in_mLexiqueComponentName,
                                                    const GGS_bool & in_mIsTemplate,
                                                    const GGS_templateDelimitorListAST & in_mTemplateDelimitorListAST,
                                                    const GGS__5B_templateReplacementAST_5D_ & in_mTemplateReplacementListAST,
                                                    const GGS_lexicalAttributeListAST & in_mLexicalAttributeListAST,
                                                    const GGS_lexicalStyleListAST & in_mLexicalStyleListAST,
                                                    const GGS_terminalDeclarationListAST & in_mTerminalDeclarationListAST,
                                                    const GGS_lexicalMessageDeclarationListAST & in_mLexicalMessageDeclarationListAST,
                                                    const GGS_lexicalListDeclarationListAST & in_mLexicalListDeclarationListAST,
                                                    const GGS__5B_abstractLexicalRuleAST_5D_ & in_mLexicalRuleListAST,
                                                    const GGS_indexingListAST & in_mIndexingListAST,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mIsTemplate (),
mProperty_mTemplateDelimitorListAST (),
mProperty_mTemplateReplacementListAST (),
mProperty_mLexicalAttributeListAST (),
mProperty_mLexicalStyleListAST (),
mProperty_mTerminalDeclarationListAST (),
mProperty_mLexicalMessageDeclarationListAST (),
mProperty_mLexicalListDeclarationListAST (),
mProperty_mLexicalRuleListAST (),
mProperty_mIndexingListAST () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mIsTemplate = in_mIsTemplate ;
  mProperty_mTemplateDelimitorListAST = in_mTemplateDelimitorListAST ;
  mProperty_mTemplateReplacementListAST = in_mTemplateReplacementListAST ;
  mProperty_mLexicalAttributeListAST = in_mLexicalAttributeListAST ;
  mProperty_mLexicalStyleListAST = in_mLexicalStyleListAST ;
  mProperty_mTerminalDeclarationListAST = in_mTerminalDeclarationListAST ;
  mProperty_mLexicalMessageDeclarationListAST = in_mLexicalMessageDeclarationListAST ;
  mProperty_mLexicalListDeclarationListAST = in_mLexicalListDeclarationListAST ;
  mProperty_mLexicalRuleListAST = in_mLexicalRuleListAST ;
  mProperty_mIndexingListAST = in_mIndexingListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
}

void cPtr_lexiqueComponentAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsTemplate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateDelimitorListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateReplacementListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalAttributeListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalStyleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTerminalDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalMessageDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalListDeclarationListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalRuleListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexingListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexiqueComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueComponentAST (mProperty_isPredefined, mProperty_mLexiqueComponentName, mProperty_mIsTemplate, mProperty_mTemplateDelimitorListAST, mProperty_mTemplateReplacementListAST, mProperty_mLexicalAttributeListAST, mProperty_mLexicalStyleListAST, mProperty_mTerminalDeclarationListAST, mProperty_mLexicalMessageDeclarationListAST, mProperty_mLexicalListDeclarationListAST, mProperty_mLexicalRuleListAST, mProperty_mIndexingListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mIsTemplate.printNonNullClassInstanceProperties ("mIsTemplate") ;
    mProperty_mTemplateDelimitorListAST.printNonNullClassInstanceProperties ("mTemplateDelimitorListAST") ;
    mProperty_mTemplateReplacementListAST.printNonNullClassInstanceProperties ("mTemplateReplacementListAST") ;
    mProperty_mLexicalAttributeListAST.printNonNullClassInstanceProperties ("mLexicalAttributeListAST") ;
    mProperty_mLexicalStyleListAST.printNonNullClassInstanceProperties ("mLexicalStyleListAST") ;
    mProperty_mTerminalDeclarationListAST.printNonNullClassInstanceProperties ("mTerminalDeclarationListAST") ;
    mProperty_mLexicalMessageDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalMessageDeclarationListAST") ;
    mProperty_mLexicalListDeclarationListAST.printNonNullClassInstanceProperties ("mLexicalListDeclarationListAST") ;
    mProperty_mLexicalRuleListAST.printNonNullClassInstanceProperties ("mLexicalRuleListAST") ;
    mProperty_mIndexingListAST.printNonNullClassInstanceProperties ("mIndexingListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexiqueComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueComponentAST ("lexiqueComponentAST",
                                                                        & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueComponentAST ;
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

GGS_terminalAST::GGS_terminalAST (void) :
mProperty_mTerminalName (),
mProperty_mSentAttributeList (),
mProperty_mSyntaxErrorMessage (),
mProperty_isEndOfTemplateMark (),
mProperty_atomicSelection (),
mProperty_mStyleIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalAST::GGS_terminalAST (const GGS_terminalAST & inSource) :
mProperty_mTerminalName (inSource.mProperty_mTerminalName),
mProperty_mSentAttributeList (inSource.mProperty_mSentAttributeList),
mProperty_mSyntaxErrorMessage (inSource.mProperty_mSyntaxErrorMessage),
mProperty_isEndOfTemplateMark (inSource.mProperty_isEndOfTemplateMark),
mProperty_atomicSelection (inSource.mProperty_atomicSelection),
mProperty_mStyleIndex (inSource.mProperty_mStyleIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalAST & GGS_terminalAST::operator = (const GGS_terminalAST & inSource) {
  mProperty_mTerminalName = inSource.mProperty_mTerminalName ;
  mProperty_mSentAttributeList = inSource.mProperty_mSentAttributeList ;
  mProperty_mSyntaxErrorMessage = inSource.mProperty_mSyntaxErrorMessage ;
  mProperty_isEndOfTemplateMark = inSource.mProperty_isEndOfTemplateMark ;
  mProperty_atomicSelection = inSource.mProperty_atomicSelection ;
  mProperty_mStyleIndex = inSource.mProperty_mStyleIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalAST GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (const GGS_lstring & in_mTerminalName,
                                                                                                 const GGS_lexicalSentValueList & in_mSentAttributeList,
                                                                                                 const GGS_string & in_mSyntaxErrorMessage,
                                                                                                 const GGS_bool & in_isEndOfTemplateMark,
                                                                                                 const GGS_bool & in_atomicSelection,
                                                                                                 const GGS_uint & in_mStyleIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalAST result ;
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

void GGS_terminalAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalAST::GGS_terminalAST (const GGS_lstring & inOperand0,
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

bool GGS_terminalAST::isValid (void) const {
  return mProperty_mTerminalName.isValid () && mProperty_mSentAttributeList.isValid () && mProperty_mSyntaxErrorMessage.isValid () && mProperty_isEndOfTemplateMark.isValid () && mProperty_atomicSelection.isValid () && mProperty_mStyleIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalAST::drop (void) {
  mProperty_mTerminalName.drop () ;
  mProperty_mSentAttributeList.drop () ;
  mProperty_mSyntaxErrorMessage.drop () ;
  mProperty_isEndOfTemplateMark.drop () ;
  mProperty_atomicSelection.drop () ;
  mProperty_mStyleIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalAST::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalAST:") ;
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
//     @terminalAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalAST ("terminalAST",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalAST ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@lexicalTypeEnum cppTypeName'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_cppTypeName (const GGS_lexicalTypeEnum & inObject,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_lexicalTypeEnum temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      result_result = GGS_string ("utf32") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      result_result = GGS_string ("uint32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      result_result = GGS_string ("uint64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      result_result = GGS_string ("int32_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      result_result = GGS_string ("int64_t") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      result_result = GGS_string ("double") ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      result_result = GGS_string ("BigSigned") ;
    }
    break ;
  }
//---
  return result_result ;
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

GGS_unifiedTypeDefinition::GGS_unifiedTypeDefinition (void) :
mProperty_typeName (),
mProperty_isPredefined (),
mProperty_isConcrete (),
mProperty_isFinal (),
mProperty_superType (),
mProperty_typeKind (),
mProperty_supportCollectionValue (),
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
mProperty_enumerationDescriptorList (),
mProperty_features (),
mProperty_addAssignOperatorArguments (),
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
mProperty_supportCollectionValue (inSource.mProperty_supportCollectionValue),
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
mProperty_enumerationDescriptorList (inSource.mProperty_enumerationDescriptorList),
mProperty_features (inSource.mProperty_features),
mProperty_addAssignOperatorArguments (inSource.mProperty_addAssignOperatorArguments),
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
  mProperty_supportCollectionValue = inSource.mProperty_supportCollectionValue ;
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
  mProperty_enumerationDescriptorList = inSource.mProperty_enumerationDescriptorList ;
  mProperty_features = inSource.mProperty_features ;
  mProperty_addAssignOperatorArguments = inSource.mProperty_addAssignOperatorArguments ;
  mProperty_generateHeaderInSeparateFile = inSource.mProperty_generateHeaderInSeparateFile ;
  mProperty_typeForEnumeratedElement = inSource.mProperty_typeForEnumeratedElement ;
  mProperty_headerFileName = inSource.mProperty_headerFileName ;
  mProperty_headerKind = inSource.mProperty_headerKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeDefinition GGS_unifiedTypeDefinition::init_21_typeName_21_isPredefined_21_isConcrete_21_isFinal_21_superType_21_typeKind_21_supportCollectionValue_21_allTypedPropertyList_21_propertyMap_21_currentTypedPropertyList_21_initializerMap_21_classFunctionMap_21_getterMap_21_setterMap_21_instanceMethodMap_21_classMethodMap_21_unwrappedType_21_readSubscriptMap_21_enumerationDescriptorList_21_features_21_addAssignOperatorArguments_21_generateHeaderInSeparateFile_21_typeForEnumeratedElement_21_headerFileName_21_headerKind (const GGS_lstring & in_typeName,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isPredefined,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isConcrete,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_isFinal,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_unifiedTypeMapEntry & in_superType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typeKindEnum & in_typeKind,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_bool & in_supportCollectionValue,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typedPropertyList & in_allTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_propertyMap & in_propertyMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typedPropertyList & in_currentTypedPropertyList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_initializerMap & in_initializerMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_classFunctionMap & in_classFunctionMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_getterMap & in_getterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_setterMap & in_setterMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_instanceMethodMap & in_instanceMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_classMethodMap & in_classMethodMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_unifiedTypeMapEntry & in_unwrappedType,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_subscriptMap & in_readSubscriptMap,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS__5B_enumerationDescriptor_5D_ & in_enumerationDescriptorList,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_typeFeatures & in_features,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     const GGS_functionSignature & in_addAssignOperatorArguments,
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
  result.mProperty_supportCollectionValue = in_supportCollectionValue ;
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
  result.mProperty_enumerationDescriptorList = in_enumerationDescriptorList ;
  result.mProperty_features = in_features ;
  result.mProperty_addAssignOperatorArguments = in_addAssignOperatorArguments ;
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
                                                      const GGS_typedPropertyList & inOperand7,
                                                      const GGS_propertyMap & inOperand8,
                                                      const GGS_typedPropertyList & inOperand9,
                                                      const GGS_initializerMap & inOperand10,
                                                      const GGS_classFunctionMap & inOperand11,
                                                      const GGS_getterMap & inOperand12,
                                                      const GGS_setterMap & inOperand13,
                                                      const GGS_instanceMethodMap & inOperand14,
                                                      const GGS_classMethodMap & inOperand15,
                                                      const GGS_unifiedTypeMapEntry & inOperand16,
                                                      const GGS_subscriptMap & inOperand17,
                                                      const GGS__5B_enumerationDescriptor_5D_ & inOperand18,
                                                      const GGS_typeFeatures & inOperand19,
                                                      const GGS_functionSignature & inOperand20,
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
mProperty_supportCollectionValue (inOperand6),
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
mProperty_enumerationDescriptorList (inOperand18),
mProperty_features (inOperand19),
mProperty_addAssignOperatorArguments (inOperand20),
mProperty_generateHeaderInSeparateFile (inOperand21),
mProperty_typeForEnumeratedElement (inOperand22),
mProperty_headerFileName (inOperand23),
mProperty_headerKind (inOperand24) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeDefinition::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_isPredefined.isValid () && mProperty_isConcrete.isValid () && mProperty_isFinal.isValid () && mProperty_superType.isValid () && mProperty_typeKind.isValid () && mProperty_supportCollectionValue.isValid () && mProperty_allTypedPropertyList.isValid () && mProperty_propertyMap.isValid () && mProperty_currentTypedPropertyList.isValid () && mProperty_initializerMap.isValid () && mProperty_classFunctionMap.isValid () && mProperty_getterMap.isValid () && mProperty_setterMap.isValid () && mProperty_instanceMethodMap.isValid () && mProperty_classMethodMap.isValid () && mProperty_unwrappedType.isValid () && mProperty_readSubscriptMap.isValid () && mProperty_enumerationDescriptorList.isValid () && mProperty_features.isValid () && mProperty_addAssignOperatorArguments.isValid () && mProperty_generateHeaderInSeparateFile.isValid () && mProperty_typeForEnumeratedElement.isValid () && mProperty_headerFileName.isValid () && mProperty_headerKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeDefinition::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_isPredefined.drop () ;
  mProperty_isConcrete.drop () ;
  mProperty_isFinal.drop () ;
  mProperty_superType.drop () ;
  mProperty_typeKind.drop () ;
  mProperty_supportCollectionValue.drop () ;
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
  mProperty_enumerationDescriptorList.drop () ;
  mProperty_features.drop () ;
  mProperty_addAssignOperatorArguments.drop () ;
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
    mProperty_supportCollectionValue.description (ioString, inIndentation+1) ;
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
    mProperty_enumerationDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_features.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_addAssignOperatorArguments.description (ioString, inIndentation+1) ;
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
                                                                                                    const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
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
                                                                                                                         const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
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

GGS_nonTerminalToAddList GGS_grammarForGeneration::readProperty_mNonTerminalToAddList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalToAddList () ;
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
                                                      const GGS_nonTerminalToAddList & in_mNonTerminalToAddList,
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
//
//Abstract extension proc '@semanticInstructionAST analyzeSemanticInstruction'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_analyzeSemanticInstruction (cPtr_semanticInstructionAST * inObject,
                                                     const GGS_lstring constin_inUsefulnessCallerEntityName,
                                                     GGS_usefulEntitiesGraph & io_ioUsefulEntitiesGraph,
                                                     const GGS_analysisContext constin_inAnalysisContext,
                                                     GGS_unifiedTypeMap & io_ioTypeMap,
                                                     GGS_semanticInstructionListForGeneration & io_ioInstructionListForGeneration,
                                                     GGS_localVarManager & io_ioVariableMap,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_semanticInstructionAST) ;
    inObject->method_analyzeSemanticInstruction (constin_inUsefulnessCallerEntityName, io_ioUsefulEntitiesGraph, constin_inAnalysisContext, io_ioTypeMap, io_ioInstructionListForGeneration, io_ioVariableMap, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//  Extension Getter '@formalArgumentPassingModeAST correspondingEffectiveParameterString'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_correspondingEffectiveParameterString (const GGS_formalArgumentPassingModeAST & inObject,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_formalArgumentPassingModeAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
    {
      result_result = GGS_string ("!") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
    {
      result_result = GGS_string ("\?") ;
    }
    break ;
  case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
    {
      result_result = GGS_string ("!\?") ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @overridingExtensionGetterAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingExtensionGetterAST::objectCompare (const GGS_overridingExtensionGetterAST & inOperand) const {
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

GGS_overridingExtensionGetterAST::GGS_overridingExtensionGetterAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingExtensionGetterAST GGS_overridingExtensionGetterAST::
init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                  const GGS_lstring & in_mTypeName,
                                                  const GGS_lstring & in_mOverridingExtensionGetterName,
                                                  const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                  const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                  const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                  const GGS__5B_semanticInstructionAST_5D_ & in_mOverridingExtensionGetterInstructionList,
                                                  const GGS_location & in_mEndOfReaderLocation,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingExtensionGetterAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingExtensionGetterAST (inCompiler COMMA_THERE)) ;
  object->overridingExtensionGetterAST_init_21_isPredefined_21__21__21__21__21__21__21_ (in_isPredefined, in_mTypeName, in_mOverridingExtensionGetterName, in_mOverridingExtensionGetterFormalInputParameterList, in_mOverridingExtensionGetterReturnedTypeName, in_mOverridingExtensionGetterReturnedVariableName, in_mOverridingExtensionGetterInstructionList, in_mEndOfReaderLocation, inCompiler) ;
  const GGS_overridingExtensionGetterAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingExtensionGetterAST::
overridingExtensionGetterAST_init_21_isPredefined_21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                               const GGS_lstring & in_mTypeName,
                                                                               const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                               const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                               const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                               const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                               const GGS__5B_semanticInstructionAST_5D_ & in_mOverridingExtensionGetterInstructionList,
                                                                               const GGS_location & in_mEndOfReaderLocation,
                                                                               Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList = in_mOverridingExtensionGetterFormalInputParameterList ;
  mProperty_mOverridingExtensionGetterReturnedTypeName = in_mOverridingExtensionGetterReturnedTypeName ;
  mProperty_mOverridingExtensionGetterReturnedVariableName = in_mOverridingExtensionGetterReturnedVariableName ;
  mProperty_mOverridingExtensionGetterInstructionList = in_mOverridingExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingExtensionGetterAST::GGS_overridingExtensionGetterAST (const cPtr_overridingExtensionGetterAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingExtensionGetterAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListAST GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterFormalInputParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListAST () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterFormalInputParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterReturnedVariableName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterReturnedVariableName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_semanticInstructionAST_5D_ GGS_overridingExtensionGetterAST::readProperty_mOverridingExtensionGetterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_semanticInstructionAST_5D_ () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mOverridingExtensionGetterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_overridingExtensionGetterAST::readProperty_mEndOfReaderLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_overridingExtensionGetterAST * p = (cPtr_overridingExtensionGetterAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingExtensionGetterAST) ;
    return p->mProperty_mEndOfReaderLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingExtensionGetterAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mOverridingExtensionGetterFormalInputParameterList (),
mProperty_mOverridingExtensionGetterReturnedTypeName (),
mProperty_mOverridingExtensionGetterReturnedVariableName (),
mProperty_mOverridingExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingExtensionGetterAST::cPtr_overridingExtensionGetterAST (const GGS_bool & in_isPredefined,
                                                                      const GGS_lstring & in_mTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterName,
                                                                      const GGS_formalInputParameterListAST & in_mOverridingExtensionGetterFormalInputParameterList,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedTypeName,
                                                                      const GGS_lstring & in_mOverridingExtensionGetterReturnedVariableName,
                                                                      const GGS__5B_semanticInstructionAST_5D_ & in_mOverridingExtensionGetterInstructionList,
                                                                      const GGS_location & in_mEndOfReaderLocation,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mOverridingExtensionGetterFormalInputParameterList (),
mProperty_mOverridingExtensionGetterReturnedTypeName (),
mProperty_mOverridingExtensionGetterReturnedVariableName (),
mProperty_mOverridingExtensionGetterInstructionList (),
mProperty_mEndOfReaderLocation () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList = in_mOverridingExtensionGetterFormalInputParameterList ;
  mProperty_mOverridingExtensionGetterReturnedTypeName = in_mOverridingExtensionGetterReturnedTypeName ;
  mProperty_mOverridingExtensionGetterReturnedVariableName = in_mOverridingExtensionGetterReturnedVariableName ;
  mProperty_mOverridingExtensionGetterInstructionList = in_mOverridingExtensionGetterInstructionList ;
  mProperty_mEndOfReaderLocation = in_mEndOfReaderLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingExtensionGetterAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

void cPtr_overridingExtensionGetterAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingExtensionGetterAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterFormalInputParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterReturnedTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterReturnedVariableName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReaderLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_overridingExtensionGetterAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingExtensionGetterAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mOverridingExtensionGetterFormalInputParameterList, mProperty_mOverridingExtensionGetterReturnedTypeName, mProperty_mOverridingExtensionGetterReturnedVariableName, mProperty_mOverridingExtensionGetterInstructionList, mProperty_mEndOfReaderLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingExtensionGetterAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionGetterName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterName") ;
    mProperty_mOverridingExtensionGetterFormalInputParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterFormalInputParameterList") ;
    mProperty_mOverridingExtensionGetterReturnedTypeName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterReturnedTypeName") ;
    mProperty_mOverridingExtensionGetterReturnedVariableName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterReturnedVariableName") ;
    mProperty_mOverridingExtensionGetterInstructionList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterInstructionList") ;
    mProperty_mEndOfReaderLocation.printNonNullClassInstanceProperties ("mEndOfReaderLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overridingExtensionGetterAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingExtensionGetterAST ("overridingExtensionGetterAST",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingExtensionGetterAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingExtensionGetterAST ;
}

//--------------------------------------------------------------------------------------------------
// @overrideExtensionGetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overrideExtensionGetterForGeneration::objectCompare (const GGS_overrideExtensionGetterForGeneration & inOperand) const {
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

GGS_overrideExtensionGetterForGeneration::GGS_overrideExtensionGetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration GGS_overrideExtensionGetterForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                    const GGS_bool & in_generateHeader,
                                                                                                    const GGS_string & in_implementationCppFileName,
                                                                                                    const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                    const GGS_string & in_mBaseTypeName,
                                                                                                    const GGS_string & in_mOverridingExtensionGetterName,
                                                                                                    const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                    const GGS_string & in_mResultVarCppName,
                                                                                                    const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                                    const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                    const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  cPtr_overrideExtensionGetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_overrideExtensionGetterForGeneration (inCompiler COMMA_THERE)) ;
  object->overrideExtensionGetterForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mBaseTypeName, in_mOverridingExtensionGetterName, in_mResultType, in_mResultVarCppName, in_mOverridingExtensionGetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_overrideExtensionGetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overrideExtensionGetterForGeneration::
overrideExtensionGetterForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                                                         const GGS_bool & in_generateHeader,
                                                                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                                         const GGS_string & in_mBaseTypeName,
                                                                                                                                         const GGS_string & in_mOverridingExtensionGetterName,
                                                                                                                                         const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                                                         const GGS_string & in_mResultVarCppName,
                                                                                                                                         const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                                                                         const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                                         const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                                         Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mOverridingExtensionGetterFormalParameterList = in_mOverridingExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_overrideExtensionGetterForGeneration::GGS_overrideExtensionGetterForGeneration (const cPtr_overrideExtensionGetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overrideExtensionGetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overrideExtensionGetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mBaseTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mBaseTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_overrideExtensionGetterForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_overrideExtensionGetterForGeneration::readProperty_mResultVarCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mResultVarCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration GGS_overrideExtensionGetterForGeneration::readProperty_mOverridingExtensionGetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalInputParameterListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mOverridingExtensionGetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_overrideExtensionGetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_overrideExtensionGetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_overrideExtensionGetterForGeneration * p = (cPtr_overrideExtensionGetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overrideExtensionGetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overrideExtensionGetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mOverridingExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overrideExtensionGetterForGeneration::cPtr_overrideExtensionGetterForGeneration (const GGS_string & in_infoMessage,
                                                                                      const GGS_bool & in_generateHeader,
                                                                                      const GGS_string & in_implementationCppFileName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                      const GGS_string & in_mBaseTypeName,
                                                                                      const GGS_string & in_mOverridingExtensionGetterName,
                                                                                      const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_string & in_mResultVarCppName,
                                                                                      const GGS_formalInputParameterListForGeneration & in_mOverridingExtensionGetterFormalParameterList,
                                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mBaseTypeName (),
mProperty_mOverridingExtensionGetterName (),
mProperty_mResultType (),
mProperty_mResultVarCppName (),
mProperty_mOverridingExtensionGetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mBaseTypeName = in_mBaseTypeName ;
  mProperty_mOverridingExtensionGetterName = in_mOverridingExtensionGetterName ;
  mProperty_mResultType = in_mResultType ;
  mProperty_mResultVarCppName = in_mResultVarCppName ;
  mProperty_mOverridingExtensionGetterFormalParameterList = in_mOverridingExtensionGetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overrideExtensionGetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
}

void cPtr_overrideExtensionGetterForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overrideExtensionGetterForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mResultVarCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionGetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_overrideExtensionGetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overrideExtensionGetterForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mBaseTypeName, mProperty_mOverridingExtensionGetterName, mProperty_mResultType, mProperty_mResultVarCppName, mProperty_mOverridingExtensionGetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overrideExtensionGetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mBaseTypeName.printNonNullClassInstanceProperties ("mBaseTypeName") ;
    mProperty_mOverridingExtensionGetterName.printNonNullClassInstanceProperties ("mOverridingExtensionGetterName") ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mResultVarCppName.printNonNullClassInstanceProperties ("mResultVarCppName") ;
    mProperty_mOverridingExtensionGetterFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionGetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overrideExtensionGetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ("overrideExtensionGetterForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overrideExtensionGetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration ;
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
// @overridingAbstractExtensionMethodAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_overridingAbstractExtensionMethodAST::objectCompare (const GGS_overridingAbstractExtensionMethodAST & inOperand) const {
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

GGS_overridingAbstractExtensionMethodAST::GGS_overridingAbstractExtensionMethodAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST GGS_overridingAbstractExtensionMethodAST::
init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                  const GGS_lstring & in_mTypeName,
                                  const GGS_lstring & in_mOverridingExtensionMethodName,
                                  const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_overridingAbstractExtensionMethodAST * object = nullptr ;
  macroMyNew (object, cPtr_overridingAbstractExtensionMethodAST (inCompiler COMMA_THERE)) ;
  object->overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (in_isPredefined, in_mTypeName, in_mOverridingExtensionMethodName, in_mOverridingExtensionMethodFormalParameterList, inCompiler) ;
  const GGS_overridingAbstractExtensionMethodAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_overridingAbstractExtensionMethodAST::
overridingAbstractExtensionMethodAST_init_21_isPredefined_21__21__21_ (const GGS_bool & in_isPredefined,
                                                                       const GGS_lstring & in_mTypeName,
                                                                       const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                       const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                       Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_overridingAbstractExtensionMethodAST::GGS_overridingAbstractExtensionMethodAST (const cPtr_overridingAbstractExtensionMethodAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_overridingAbstractExtensionMethodAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionMethodAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_overridingAbstractExtensionMethodAST::readProperty_mOverridingExtensionMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListAST GGS_overridingAbstractExtensionMethodAST::readProperty_mOverridingExtensionMethodFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListAST () ;
  }else{
    cPtr_overridingAbstractExtensionMethodAST * p = (cPtr_overridingAbstractExtensionMethodAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_overridingAbstractExtensionMethodAST) ;
    return p->mProperty_mOverridingExtensionMethodFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @overridingAbstractExtensionMethodAST class
//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_overridingAbstractExtensionMethodAST::cPtr_overridingAbstractExtensionMethodAST (const GGS_bool & in_isPredefined,
                                                                                      const GGS_lstring & in_mTypeName,
                                                                                      const GGS_lstring & in_mOverridingExtensionMethodName,
                                                                                      const GGS_formalParameterListAST & in_mOverridingExtensionMethodFormalParameterList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mOverridingExtensionMethodName (),
mProperty_mOverridingExtensionMethodFormalParameterList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mOverridingExtensionMethodName = in_mOverridingExtensionMethodName ;
  mProperty_mOverridingExtensionMethodFormalParameterList = in_mOverridingExtensionMethodFormalParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_overridingAbstractExtensionMethodAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

void cPtr_overridingAbstractExtensionMethodAST::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@overridingAbstractExtensionMethodAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridingExtensionMethodFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_overridingAbstractExtensionMethodAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_overridingAbstractExtensionMethodAST (mProperty_isPredefined, mProperty_mTypeName, mProperty_mOverridingExtensionMethodName, mProperty_mOverridingExtensionMethodFormalParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_overridingAbstractExtensionMethodAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mOverridingExtensionMethodName.printNonNullClassInstanceProperties ("mOverridingExtensionMethodName") ;
    mProperty_mOverridingExtensionMethodFormalParameterList.printNonNullClassInstanceProperties ("mOverridingExtensionMethodFormalParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @overridingAbstractExtensionMethodAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ("overridingAbstractExtensionMethodAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_overridingAbstractExtensionMethodAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST ;
}

//--------------------------------------------------------------------------------------------------
// @extensionSetterForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_extensionSetterForGeneration::objectCompare (const GGS_extensionSetterForGeneration & inOperand) const {
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

GGS_extensionSetterForGeneration::GGS_extensionSetterForGeneration (void) :
GGS_semanticDeclarationWithHeaderForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_extensionSetterForGeneration GGS_extensionSetterForGeneration::
init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                            const GGS_bool & in_generateHeader,
                                                                                            const GGS_string & in_implementationCppFileName,
                                                                                            const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                            const GGS_string & in_mExtensionSetterName,
                                                                                            const GGS_bool & in_mImplementedAsFunction,
                                                                                            const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                            const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                            const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  cPtr_extensionSetterForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_extensionSetterForGeneration (inCompiler COMMA_THERE)) ;
  object->extensionSetterForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (in_infoMessage, in_generateHeader, in_implementationCppFileName, in_mReceiverType, in_mExtensionSetterName, in_mImplementedAsFunction, in_mExtensionSetterFormalParameterList, in_mTypedAttributeList, in_mSemanticInstructionListForGeneration, inCompiler) ;
  const GGS_extensionSetterForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_extensionSetterForGeneration::
extensionSetterForGeneration_init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21_ (const GGS_string & in_infoMessage,
                                                                                                                         const GGS_bool & in_generateHeader,
                                                                                                                         const GGS_string & in_implementationCppFileName,
                                                                                                                         const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                                                                         const GGS_string & in_mExtensionSetterName,
                                                                                                                         const GGS_bool & in_mImplementedAsFunction,
                                                                                                                         const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                                                                         const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                                                                         const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                                                                         Compiler * /* inCompiler */) {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterForGeneration::GGS_extensionSetterForGeneration (const cPtr_extensionSetterForGeneration * inSourcePtr) :
GGS_semanticDeclarationWithHeaderForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_extensionSetterForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_extensionSetterForGeneration::readProperty_mReceiverType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mReceiverType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_extensionSetterForGeneration::readProperty_mExtensionSetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_extensionSetterForGeneration::readProperty_mImplementedAsFunction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mImplementedAsFunction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration GGS_extensionSetterForGeneration::readProperty_mExtensionSetterFormalParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_formalParameterListForGeneration () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mExtensionSetterFormalParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typedPropertyList GGS_extensionSetterForGeneration::readProperty_mTypedAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typedPropertyList () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mTypedAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_extensionSetterForGeneration::readProperty_mSemanticInstructionListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_extensionSetterForGeneration * p = (cPtr_extensionSetterForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_extensionSetterForGeneration) ;
    return p->mProperty_mSemanticInstructionListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @extensionSetterForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionSetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_extensionSetterForGeneration::cPtr_extensionSetterForGeneration (const GGS_string & in_infoMessage,
                                                                      const GGS_bool & in_generateHeader,
                                                                      const GGS_string & in_implementationCppFileName,
                                                                      const GGS_unifiedTypeMapEntry & in_mReceiverType,
                                                                      const GGS_string & in_mExtensionSetterName,
                                                                      const GGS_bool & in_mImplementedAsFunction,
                                                                      const GGS_formalParameterListForGeneration & in_mExtensionSetterFormalParameterList,
                                                                      const GGS_typedPropertyList & in_mTypedAttributeList,
                                                                      const GGS_semanticInstructionListForGeneration & in_mSemanticInstructionListForGeneration,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationWithHeaderForGeneration (in_infoMessage, in_generateHeader, in_implementationCppFileName, inCompiler COMMA_THERE),
mProperty_mReceiverType (),
mProperty_mExtensionSetterName (),
mProperty_mImplementedAsFunction (),
mProperty_mExtensionSetterFormalParameterList (),
mProperty_mTypedAttributeList (),
mProperty_mSemanticInstructionListForGeneration () {
  mProperty_infoMessage = in_infoMessage ;
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_mReceiverType = in_mReceiverType ;
  mProperty_mExtensionSetterName = in_mExtensionSetterName ;
  mProperty_mImplementedAsFunction = in_mImplementedAsFunction ;
  mProperty_mExtensionSetterFormalParameterList = in_mExtensionSetterFormalParameterList ;
  mProperty_mTypedAttributeList = in_mTypedAttributeList ;
  mProperty_mSemanticInstructionListForGeneration = in_mSemanticInstructionListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_extensionSetterForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
}

void cPtr_extensionSetterForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@extensionSetterForGeneration:") ;
  mProperty_infoMessage.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mImplementedAsFunction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExtensionSetterFormalParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypedAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSemanticInstructionListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_extensionSetterForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_extensionSetterForGeneration (mProperty_infoMessage, mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_mReceiverType, mProperty_mExtensionSetterName, mProperty_mImplementedAsFunction, mProperty_mExtensionSetterFormalParameterList, mProperty_mTypedAttributeList, mProperty_mSemanticInstructionListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_extensionSetterForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationWithHeaderForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverType.printNonNullClassInstanceProperties ("mReceiverType") ;
    mProperty_mExtensionSetterName.printNonNullClassInstanceProperties ("mExtensionSetterName") ;
    mProperty_mImplementedAsFunction.printNonNullClassInstanceProperties ("mImplementedAsFunction") ;
    mProperty_mExtensionSetterFormalParameterList.printNonNullClassInstanceProperties ("mExtensionSetterFormalParameterList") ;
    mProperty_mTypedAttributeList.printNonNullClassInstanceProperties ("mTypedAttributeList") ;
    mProperty_mSemanticInstructionListForGeneration.printNonNullClassInstanceProperties ("mSemanticInstructionListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @extensionSetterForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterForGeneration ("extensionSetterForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterForGeneration ;
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

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (void) :
mProperty_mLeftNonterminalSymbol (),
mProperty_mLeftNonterminalSymbolIndex (),
mProperty_mInstructionList (),
mProperty_mProductionIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) :
mProperty_mLeftNonterminalSymbol (inSource.mProperty_mLeftNonterminalSymbol),
mProperty_mLeftNonterminalSymbolIndex (inSource.mProperty_mLeftNonterminalSymbolIndex),
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mProductionIndex (inSource.mProperty_mProductionIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element & GGS_productionRuleListForGrammarAnalysis_2E_element::operator = (const GGS_productionRuleListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mLeftNonterminalSymbol = inSource.mProperty_mLeftNonterminalSymbol ;
  mProperty_mLeftNonterminalSymbolIndex = inSource.mProperty_mLeftNonterminalSymbolIndex ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mProductionIndex = inSource.mProperty_mProductionIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element GGS_productionRuleListForGrammarAnalysis_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mLeftNonterminalSymbol,
                                                                                                                               const GGS_uint & in_mLeftNonterminalSymbolIndex,
                                                                                                                               const GGS_syntaxInstructionListForGrammarAnalysis & in_mInstructionList,
                                                                                                                               const GGS_uint & in_mProductionIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_productionRuleListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLeftNonterminalSymbol = in_mLeftNonterminalSymbol ;
  result.mProperty_mLeftNonterminalSymbolIndex = in_mLeftNonterminalSymbolIndex ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mProductionIndex = in_mProductionIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_productionRuleListForGrammarAnalysis_2E_element::GGS_productionRuleListForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_uint & inOperand1,
                                                                                                          const GGS_syntaxInstructionListForGrammarAnalysis & inOperand2,
                                                                                                          const GGS_uint & inOperand3) :
mProperty_mLeftNonterminalSymbol (inOperand0),
mProperty_mLeftNonterminalSymbolIndex (inOperand1),
mProperty_mInstructionList (inOperand2),
mProperty_mProductionIndex (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_productionRuleListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mLeftNonterminalSymbol.isValid () && mProperty_mLeftNonterminalSymbolIndex.isValid () && mProperty_mInstructionList.isValid () && mProperty_mProductionIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mLeftNonterminalSymbol.drop () ;
  mProperty_mLeftNonterminalSymbolIndex.drop () ;
  mProperty_mInstructionList.drop () ;
  mProperty_mProductionIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_productionRuleListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @productionRuleListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLeftNonterminalSymbol.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLeftNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductionIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @productionRuleListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ("productionRuleListForGrammarAnalysis.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_productionRuleListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_productionRuleListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@productionRuleListForGrammarAnalysis.element displayRuleVertically'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_displayRuleVertically (const GGS_productionRuleListForGrammarAnalysis_2E_element inObject,
                                            const GGS_string constinArgument_inSyntaxComponentName,
                                            GGS_string & ioArgument_ioGeneratedCode,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_currentNode_6894 = GGS_string ("P0start") ;
  GGS_rowList var_rowArray_6933 = GGS_rowList::init (inCompiler COMMA_HERE) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_0 = inObject ;
  UpEnumerator_range enumerator_6987 (GGS_range (GGS_uint (uint32_t (1U)), temp_0.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 174)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 174)))) ;
  while (enumerator_6987.hasCurrentObject ()) {
    GGS__5B__32_string_5D_ temp_1 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 175)) ;
    temp_1.plusPlusAssignOperation (GGS__32_string::init_21__21_ (GGS_string::makeEmptyString (), GGS_string::makeEmptyString (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 175)) ;
    var_rowArray_6933.plusPlusAssignOperation (GGS_rowList_2E_element::init_21_ (temp_1, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 175)) ;
    enumerator_6987.gotoNextObject () ;
  }
  GGS__5B__32_string_5D_ temp_2 = GGS__5B__32_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 177)) ;
  temp_2.plusPlusAssignOperation (GGS__32_string::init_21__21_ (var_currentNode_6894, GGS_string ("[firstPoint] ()"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 177)) ;
  var_rowArray_6933.plusPlusAssignOperation (GGS_rowList_2E_element::init_21_ (temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 177)) ;
  GGS_string var_arrows_7102 = GGS_string::makeEmptyString () ;
  GGS_string var_arrowStyle_7128 = GGS_string ("--") ;
  GGS_uint var_unusedMaxUsedRowIndex_7158 = GGS_uint (uint32_t (0U)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_3 = inObject ;
  GGS_uint var_row_7200 = temp_3.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 181)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_4 = inObject ;
  UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_7254 (temp_4.readProperty_mInstructionList ()) ;
  while (enumerator_7254.hasCurrentObject ()) {
    var_row_7200.minusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 183)) ;
    GGS_uint var_column_7301 = GGS_uint (uint32_t (1U)) ;
    callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_7254.current (HERE).readProperty_mInstruction ().ptr (), var_rowArray_6933, var_row_7200, var_column_7301, var_currentNode_6894, var_arrowStyle_7128, var_arrows_7102, var_unusedMaxUsedRowIndex_7158, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 185)) ;
    enumerator_7254.gotoNextObject () ;
  }
  GGS_string var_lastNodeName_7685 ;
  {
  extensionSetter_appendRow (var_rowArray_6933, GGS_string ("[lastPoint] ()"), var_row_7200, GGS_uint (uint32_t (2U)), var_lastNodeName_7685, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 197)) ;
  }
  var_arrows_7102.plusAssignOperation(GGS_string ("  \\draw[->] (").add_operation (var_currentNode_6894, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 198)).add_operation (GGS_string (") -- ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 198)).add_operation (var_lastNodeName_7685, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 198)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 198)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 198)) ;
  const GGS_productionRuleListForGrammarAnalysis_2E_element temp_5 = inObject ;
  GGS_location var_loc_7805 = temp_5.readProperty_mLeftNonterminalSymbol ().readProperty_location () ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\ruleSubsection{").add_operation (function_escapeForTex (constinArgument_inSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 202)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 201)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 202)).add_operation (function_escapeForTex (var_loc_7805.getter_file (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 204)).getter_lastPathComponent (SOURCE_FILE ("production-rules-in-tex.galgas4", 204)).getter_deletingPathExtension (SOURCE_FILE ("production-rules-in-tex.galgas4", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 204)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 203)).add_operation (GGS_string ("}{"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 204)).add_operation (function_escapeForTex (var_loc_7805.getter_startLine (inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 205)).getter_string (SOURCE_FILE ("production-rules-in-tex.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 205)), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 205)).add_operation (GGS_string ("}\n\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 205)).add_operation (GGS_string ("\\begin{tikzpicture}\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 206)).add_operation (GGS_string ("  \\matrix[column sep=\\ruleMatrixColumnSeparation, row sep=\\ruleMatrixRowSeparation] {\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 207)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 201)) ;
  DownEnumerator_rowList enumerator_8214 (var_rowArray_6933) ;
  while (enumerator_8214.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("    "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 210)) ;
    UpEnumerator__5B__32_string_5D_ enumerator_8278 (enumerator_8214.current (HERE).readProperty_columns ()) ;
    while (enumerator_8278.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::equal, enumerator_8278.current (HERE).readProperty_mValue_30_ ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("& "), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 213)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\node (").add_operation (enumerator_8278.current (HERE).readProperty_mValue_30_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 215)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 215)).add_operation (enumerator_8278.current (HERE).readProperty_mValue_31_ (), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 215)).add_operation (GGS_string ("; & "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 215)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 215)) ;
      }
      enumerator_8278.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\\\\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 218)) ;
    enumerator_8214.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  };\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 220)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_arrows_7102, inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 222)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("\\end{tikzpicture}\n\n"), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 223)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@syntaxInstructionListForGrammarAnalysis tikzNodeForSyntaxInstruction'
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
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.getter_count (SOURCE_FILE ("production-rules-in-tex.galgas4", 240)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_nodeName_9333 ;
      {
      extensionSetter_appendRow (ioArgument_ioRowList, GGS_string ("[point] ()"), constinArgument_inRow, ioArgument_ioColumn, var_nodeName_9333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 241)) ;
      }
      ioArgument_ioArrows.plusAssignOperation(GGS_string ("  \\draw (").add_operation (ioArgument_ioCurrentNode, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)).add_operation (GGS_string (") "), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)).add_operation (ioArgument_ioArrowShape, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)).add_operation (var_nodeName_9333, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 247)) ;
      ioArgument_ioCurrentNode = var_nodeName_9333 ;
      ioArgument_ioArrowShape = GGS_string ("--") ;
      ioArgument_ioColumn.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 250)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_syntaxInstructionListForGrammarAnalysis temp_2 = inObject ;
    UpEnumerator_syntaxInstructionListForGrammarAnalysis enumerator_9538 (temp_2) ;
    while (enumerator_9538.hasCurrentObject ()) {
      callExtensionMethod_tikzNodeForSyntaxInstruction ((cPtr_abstractSyntaxInstructionForGrammarAnalysis *) enumerator_9538.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioRowList, constinArgument_inRow, ioArgument_ioColumn, ioArgument_ioCurrentNode, ioArgument_ioArrowShape, ioArgument_ioArrows, ioArgument_ioMaxUsedRowIndex, constinArgument_inDebug, inCompiler COMMA_SOURCE_FILE ("production-rules-in-tex.galgas4", 253)) ;
      enumerator_9538.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension proc '@abstractSyntaxInstructionForGrammarAnalysis tikzNodeForSyntaxInstruction'
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
//--- Find proc
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractSyntaxInstructionForGrammarAnalysis) ;
    inObject->method_tikzNodeForSyntaxInstruction (io_ioRowList, constin_inRow, io_ioColumn, io_ioCurrentNode, io_ioArrowShape, io_ioArrows, io_ioMaxUsedRowIndex, constin_inDebug, inCompiler COMMA_THERE) ;
  }
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
init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
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
lexicalStructuredSendInstructionAST_init_21__21_ (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
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

GGS_lexicalSendSearchListAST GGS_lexicalStructuredSendInstructionAST::readProperty_mLexicalSendSearchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSendSearchListAST () ;
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

cPtr_lexicalStructuredSendInstructionAST::cPtr_lexicalStructuredSendInstructionAST (const GGS_lexicalSendSearchListAST & in_mLexicalSendSearchList,
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
// @lexicalSelectInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalSelectInstructionAST::objectCompare (const GGS_lexicalSelectInstructionAST & inOperand) const {
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

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalSelectInstructionAST GGS_lexicalSelectInstructionAST::
init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
              const GGS__5B_lexicalInstructionAST_5D_ & in_mDefaultInstructionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexicalSelectInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalSelectInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalSelectInstructionAST_init_21__21_ (in_mLexicalSelectBranchList, in_mDefaultInstructionList, inCompiler) ;
  const GGS_lexicalSelectInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalSelectInstructionAST::
lexicalSelectInstructionAST_init_21__21_ (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                          const GGS__5B_lexicalInstructionAST_5D_ & in_mDefaultInstructionList,
                                          Compiler * /* inCompiler */) {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectInstructionAST::GGS_lexicalSelectInstructionAST (const cPtr_lexicalSelectInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalSelectInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lexicalSelectBranchListAST GGS_lexicalSelectInstructionAST::readProperty_mLexicalSelectBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalSelectBranchListAST () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mLexicalSelectBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lexicalInstructionAST_5D_ GGS_lexicalSelectInstructionAST::readProperty_mDefaultInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lexicalInstructionAST_5D_ () ;
  }else{
    cPtr_lexicalSelectInstructionAST * p = (cPtr_lexicalSelectInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalSelectInstructionAST) ;
    return p->mProperty_mDefaultInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalSelectInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalSelectInstructionAST::cPtr_lexicalSelectInstructionAST (const GGS_lexicalSelectBranchListAST & in_mLexicalSelectBranchList,
                                                                    const GGS__5B_lexicalInstructionAST_5D_ & in_mDefaultInstructionList,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mLexicalSelectBranchList (),
mProperty_mDefaultInstructionList () {
  mProperty_mLexicalSelectBranchList = in_mLexicalSelectBranchList ;
  mProperty_mDefaultInstructionList = in_mDefaultInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalSelectInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

void cPtr_lexicalSelectInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalSelectInstructionAST:") ;
  mProperty_mLexicalSelectBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDefaultInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalSelectInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalSelectInstructionAST (mProperty_mLexicalSelectBranchList, mProperty_mDefaultInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalSelectInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexicalSelectBranchList.printNonNullClassInstanceProperties ("mLexicalSelectBranchList") ;
    mProperty_mDefaultInstructionList.printNonNullClassInstanceProperties ("mDefaultInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalSelectInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ("lexicalSelectInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalSelectInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalSelectInstructionAST ;
}

//--------------------------------------------------------------------------------------------------
// @lexicalRepeatInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexicalRepeatInstructionAST::objectCompare (const GGS_lexicalRepeatInstructionAST & inOperand) const {
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

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (void) :
GGS_lexicalInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST GGS_lexicalRepeatInstructionAST::
init_21__21__21_ (const GGS__5B_lexicalInstructionAST_5D_ & in_mRepeatedInstructionList,
                  const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                  const GGS_location & in_mLocation,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_lexicalRepeatInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexicalRepeatInstructionAST (inCompiler COMMA_THERE)) ;
  object->lexicalRepeatInstructionAST_init_21__21__21_ (in_mRepeatedInstructionList, in_mLexicalWhileBranchList, in_mLocation, inCompiler) ;
  const GGS_lexicalRepeatInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexicalRepeatInstructionAST::
lexicalRepeatInstructionAST_init_21__21__21_ (const GGS__5B_lexicalInstructionAST_5D_ & in_mRepeatedInstructionList,
                                              const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                              const GGS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalRepeatInstructionAST::GGS_lexicalRepeatInstructionAST (const cPtr_lexicalRepeatInstructionAST * inSourcePtr) :
GGS_lexicalInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexicalRepeatInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_lexicalInstructionAST_5D_ GGS_lexicalRepeatInstructionAST::readProperty_mRepeatedInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_lexicalInstructionAST_5D_ () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mRepeatedInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lexicalWhileBranchListAST GGS_lexicalRepeatInstructionAST::readProperty_mLexicalWhileBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lexicalWhileBranchListAST () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLexicalWhileBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_lexicalRepeatInstructionAST::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_lexicalRepeatInstructionAST * p = (cPtr_lexicalRepeatInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexicalRepeatInstructionAST) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexicalRepeatInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexicalRepeatInstructionAST::cPtr_lexicalRepeatInstructionAST (const GGS__5B_lexicalInstructionAST_5D_ & in_mRepeatedInstructionList,
                                                                    const GGS_lexicalWhileBranchListAST & in_mLexicalWhileBranchList,
                                                                    const GGS_location & in_mLocation,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_lexicalInstructionAST (inCompiler COMMA_THERE),
mProperty_mRepeatedInstructionList (),
mProperty_mLexicalWhileBranchList (),
mProperty_mLocation () {
  mProperty_mRepeatedInstructionList = in_mRepeatedInstructionList ;
  mProperty_mLexicalWhileBranchList = in_mLexicalWhileBranchList ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexicalRepeatInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

void cPtr_lexicalRepeatInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@lexicalRepeatInstructionAST:") ;
  mProperty_mRepeatedInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexicalWhileBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexicalRepeatInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexicalRepeatInstructionAST (mProperty_mRepeatedInstructionList, mProperty_mLexicalWhileBranchList, mProperty_mLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexicalRepeatInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_lexicalInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRepeatedInstructionList.printNonNullClassInstanceProperties ("mRepeatedInstructionList") ;
    mProperty_mLexicalWhileBranchList.printNonNullClassInstanceProperties ("mLexicalWhileBranchList") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexicalRepeatInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ("lexicalRepeatInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_lexicalInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexicalRepeatInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexicalRepeatInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST::GGS_commandLineOptionAST (void) :
mProperty_mOptionTypeName (),
mProperty_mOptionInternalName (),
mProperty_mOptionInvocationLetter (),
mProperty_mOptionInvocationString (),
mProperty_mOptionComment (),
mProperty_mOptionDefaultValue (),
mProperty_mOptionDefaultValueKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST::GGS_commandLineOptionAST (const GGS_commandLineOptionAST & inSource) :
mProperty_mOptionTypeName (inSource.mProperty_mOptionTypeName),
mProperty_mOptionInternalName (inSource.mProperty_mOptionInternalName),
mProperty_mOptionInvocationLetter (inSource.mProperty_mOptionInvocationLetter),
mProperty_mOptionInvocationString (inSource.mProperty_mOptionInvocationString),
mProperty_mOptionComment (inSource.mProperty_mOptionComment),
mProperty_mOptionDefaultValue (inSource.mProperty_mOptionDefaultValue),
mProperty_mOptionDefaultValueKind (inSource.mProperty_mOptionDefaultValueKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST & GGS_commandLineOptionAST::operator = (const GGS_commandLineOptionAST & inSource) {
  mProperty_mOptionTypeName = inSource.mProperty_mOptionTypeName ;
  mProperty_mOptionInternalName = inSource.mProperty_mOptionInternalName ;
  mProperty_mOptionInvocationLetter = inSource.mProperty_mOptionInvocationLetter ;
  mProperty_mOptionInvocationString = inSource.mProperty_mOptionInvocationString ;
  mProperty_mOptionComment = inSource.mProperty_mOptionComment ;
  mProperty_mOptionDefaultValue = inSource.mProperty_mOptionDefaultValue ;
  mProperty_mOptionDefaultValueKind = inSource.mProperty_mOptionDefaultValueKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_commandLineOptionAST GGS_commandLineOptionAST::init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mOptionTypeName,
                                                                                     const GGS_lstring & in_mOptionInternalName,
                                                                                     const GGS_lchar & in_mOptionInvocationLetter,
                                                                                     const GGS_lstring & in_mOptionInvocationString,
                                                                                     const GGS_lstring & in_mOptionComment,
                                                                                     const GGS_lstring & in_mOptionDefaultValue,
                                                                                     const GGS_optionDefaultValueEnumAST & in_mOptionDefaultValueKind,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_commandLineOptionAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  result.mProperty_mOptionInternalName = in_mOptionInternalName ;
  result.mProperty_mOptionInvocationLetter = in_mOptionInvocationLetter ;
  result.mProperty_mOptionInvocationString = in_mOptionInvocationString ;
  result.mProperty_mOptionComment = in_mOptionComment ;
  result.mProperty_mOptionDefaultValue = in_mOptionDefaultValue ;
  result.mProperty_mOptionDefaultValueKind = in_mOptionDefaultValueKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_commandLineOptionAST::GGS_commandLineOptionAST (const GGS_lstring & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_lchar & inOperand2,
                                                    const GGS_lstring & inOperand3,
                                                    const GGS_lstring & inOperand4,
                                                    const GGS_lstring & inOperand5,
                                                    const GGS_optionDefaultValueEnumAST & inOperand6) :
mProperty_mOptionTypeName (inOperand0),
mProperty_mOptionInternalName (inOperand1),
mProperty_mOptionInvocationLetter (inOperand2),
mProperty_mOptionInvocationString (inOperand3),
mProperty_mOptionComment (inOperand4),
mProperty_mOptionDefaultValue (inOperand5),
mProperty_mOptionDefaultValueKind (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_commandLineOptionAST::isValid (void) const {
  return mProperty_mOptionTypeName.isValid () && mProperty_mOptionInternalName.isValid () && mProperty_mOptionInvocationLetter.isValid () && mProperty_mOptionInvocationString.isValid () && mProperty_mOptionComment.isValid () && mProperty_mOptionDefaultValue.isValid () && mProperty_mOptionDefaultValueKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionAST::drop (void) {
  mProperty_mOptionTypeName.drop () ;
  mProperty_mOptionInternalName.drop () ;
  mProperty_mOptionInvocationLetter.drop () ;
  mProperty_mOptionInvocationString.drop () ;
  mProperty_mOptionComment.drop () ;
  mProperty_mOptionDefaultValue.drop () ;
  mProperty_mOptionDefaultValueKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_commandLineOptionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @commandLineOptionAST:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInternalName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationLetter.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionInvocationString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionComment.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValue.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionDefaultValueKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @commandLineOptionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_commandLineOptionAST ("commandLineOptionAST",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_commandLineOptionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_commandLineOptionAST ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 66)) ;
  nt_expression_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i0_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 66)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("galgasExpressionSyntax.galgas4", 68)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_classFuncName_3218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 76)) ;
  GGS_location var_startOfExpression_3266 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 78)) ;
  GGS_actualOutputArgumentList var_expressionList_3335 ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
    var_expressionList_3335 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 83)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3335, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_3498 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 87)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startOfExpression_3266, inCompiler COMMA_HERE), var_classFuncName_3218, var_expressionList_3335, var_startOfExpression_3266.getter_union (var_endOfExpression_3498, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 92)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_dot_i1_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-class-func.galgas4", 76)) ;
  switch (select_galgas_34_ExpressionSyntax_0 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 83)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 85)) ;
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
  GGS_actualOutputArgumentList var_expressionList_4175 ;
  GGS_location var_startOfExpression_4198 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 104)) ;
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
    var_expressionList_4175 = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 108)) ;
    nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4175, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 110)) ;
  } break ;
  default:
    break ;
  }
  GGS_location var_endOfExpression_4381 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-class-func.galgas4", 112)) ;
  outArgument_outExpression = GGS_classFuncExpressionAST::init_21__21__21__21_ (constinArgument_inTypeName, constinArgument_inClassFunctionName, var_expressionList_4175, var_startOfExpression_4198.getter_union (var_endOfExpression_4381, inCompiler COMMA_SOURCE_FILE ("expression-class-func.galgas4", 117)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_5F_dot_5F_name_i2_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  switch (select_galgas_34_ExpressionSyntax_1 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 108)) ;
    nt_output_5F_expression_5F_list_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-class-func.galgas4", 110)) ;
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
  GGS_location var_startLocation_2398 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
  GGS_collectionValueElementList var_expressionList_2473 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_2593 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_2593, inCompiler) ;
      var_expressionList_2473.plusPlusAssignOperation (GGS_collectionValueElementList_2E_element::init_21__21_ (var_expression_2593, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 61)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 61)) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_startLocation_2398, inCompiler COMMA_HERE), var_expressionList_2473, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 66)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i3_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 55)) ;
  switch (select_galgas_34_ExpressionSyntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_3 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 63)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 67)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                 GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                 GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                 Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 75)) ;
  GGS_collectionValueElementList var_expressionList_3153 = GGS_collectionValueElementList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_semanticExpressionAST var_expression_3273 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_3273, inCompiler) ;
      var_expressionList_3153.plusPlusAssignOperation (GGS_collectionValueElementList_2E_element::init_21__21_ (var_expression_3273, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 81)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 81)) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  outArgument_outExpression = GGS_collectionValueAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_3153, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 86)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i4_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 75)) ;
  switch (select_galgas_34_ExpressionSyntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_5 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 83)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-collection-value.galgas4", 87)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_identifier_2081 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 42)) ;
  outArgument_outExpression = GGS_varInExpressionAST::init_21_ (var_identifier_2081, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i5_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-var.galgas4", 42)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_output_5F_expression_5F_list_i6_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  switch (select_galgas_34_ExpressionSyntax_6 (inCompiler)) {
  case 1: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GGS_lstring var_selector_5011 ;
      switch (select_galgas_34_ExpressionSyntax_8 (inCompiler)) {
      case 1: {
        var_selector_5011 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 126)) ;
      } break ;
      case 2: {
        var_selector_5011 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 131)) ;
      } break ;
      default:
        break ;
      }
      GGS_semanticExpressionAST var_expression_5253 ;
      nt_expression_ (ioArgument_ioDeclarations, var_expression_5253, inCompiler) ;
      outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentList_2E_element::init_21__21__21_ (var_selector_5011, var_expression_5253, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 134)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 134)) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 136)) ;
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
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 126)) ;
      } break ;
      case 2: {
      } break ;
      default:
        break ;
      }
      nt_expression_indexing (inCompiler) ;
      if (select_galgas_34_ExpressionSyntax_7 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 136)) ;
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
                                                                                                                           GGS_actualOutputArgumentList & outArgument_outExpressionList,
                                                                                                                           Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpressionList.drop () ; // Release 'out' argument
  outArgument_outExpressionList = GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GGS_lstring var_selector_5714 ;
    switch (select_galgas_34_ExpressionSyntax_10 (inCompiler)) {
    case 1: {
      var_selector_5714 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 150)) ;
    } break ;
    case 2: {
      var_selector_5714 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 155)) ;
    } break ;
    default:
      break ;
    }
    GGS_semanticExpressionAST var_expression_5938 ;
    nt_expression_ (ioArgument_ioDeclarations, var_expression_5938, inCompiler) ;
    outArgument_outExpressionList.plusPlusAssignOperation (GGS_actualOutputArgumentList_2E_element::init_21__21__21_ (var_selector_5714, var_expression_5938, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 158)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 158)) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 160)) ;
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_selector_3A_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 150)) ;
    } break ;
    case 2: {
    } break ;
    default:
      break ;
    }
    nt_expression_indexing (inCompiler) ;
    if (select_galgas_34_ExpressionSyntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2C_ COMMA_SOURCE_FILE ("expression-output-expression-list.galgas4", 160)) ;
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
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 39)) ;
  GGS_lstring var_optionComponentName_2004 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 41)) ;
  GGS_lstring var_optionName_2092 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 43)) ;
  GGS_lstring var_getterName_2135 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 44)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (var_optionComponentName_2004, var_optionName_2092, var_getterName_2135, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i8_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 39)) ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_optionComponentReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 41)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 46)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 54)) ;
  GGS_lstring var_optionName_2512 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 56)) ;
  GGS_lstring var_getterName_2555 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 57)) ;
  outArgument_outExpression = GGS_optionExpressionAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("galgas_builtin_options"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 58)), inCompiler COMMA_HERE), var_optionName_2512, var_getterName_2555, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i9_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_option COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 53)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 54)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 56)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-primary-option.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lchar var_literalChar_2520 = inCompiler->synthetizedAttribute_charValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalCharExpressionAST::init_21_ (var_literalChar_2520, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i10_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__27_char_27_ COMMA_SOURCE_FILE ("expression-primary-literal-char.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lbigint var_literalInt_2530 = inCompiler->synthetizedAttribute_bigintValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
  outArgument_outExpression = GGS_literalBigIntExpressionAST::init_21_ (var_literalInt_2530, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i11_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_literalInt COMMA_SOURCE_FILE ("expression-primary-literal-integer.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i12_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i13_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2635 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryMinusExpressionAST::init_21__21_ (var_operatorLocation_2635, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i13_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-unary-minus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2623 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-not.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_notExpressionAST::init_21__21_ (var_operatorLocation_2623, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i14_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_not COMMA_SOURCE_FILE ("expression-not.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2652 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryWrappingMinusExpressionAST::init_21__21_ (var_operatorLocation_2652, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i15_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-unary-wrapping-minus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_filewrapper COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 51)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 52)) ;
  GGS_lstring var_filewrapperName_2520 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_filewrapperReference, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 53)) ;
  switch (select_galgas_34_ExpressionSyntax_12 (inCompiler)) {
  case 1: {
    outArgument_outExpression = GGS_filewrapperObjectInstanciationInExpressionAST::init_21_ (var_filewrapperName_2520, inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 57)) ;
    switch (select_galgas_34_ExpressionSyntax_13 (inCompiler)) {
    case 1: {
      GGS_lstring var_filePath_2731 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__22_string_22_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 59)) ;
      outArgument_outExpression = GGS_filewrapperInExpressionAST::init_21__21_ (var_filewrapperName_2520, var_filePath_2731, inCompiler COMMA_HERE) ;
    } break ;
    case 2: {
      GGS_lstring var_filewrapperTemplateName_2896 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 65)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3A_ COMMA_SOURCE_FILE ("expression-primary-filewrapper.galgas4", 66)) ;
      GGS_actualOutputArgumentList var_expressionList_3016 ;
      nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3016, inCompiler) ;
      outArgument_outExpression = GGS_filewrapperTemplateInExpressionAST::init_21__21__21_ (var_filewrapperName_2520, var_filewrapperTemplateName_2896, var_expressionList_3016, inCompiler COMMA_HERE) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i16_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i17_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i18_ (const GGS_lstring constinArgument_inTypeName,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_type_5F_followed_5F_by_5F_dot_5F_type_i18_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  GGS_location var_initLocation_4813 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 109)) ;
  GGS_actualOutputArgumentList var_expressionList_4896 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4896, inCompiler) ;
  GGS_location var_endOfExpression_4920 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 111)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_initLocation_4813, inCompiler COMMA_HERE), var_expressionList_4896, var_endOfExpression_4920, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i19_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__40__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 108)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 112)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i20_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 126)) ;
  nt_primary_5F_beginning_5F_by_5F_dot_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i21_ (const GGS_lstring constinArgument_inTypeName,
                                                                                                                  GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                                  GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                                  Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  GGS_actualOutputArgumentList var_expressionList_5895 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_5895, inCompiler) ;
  GGS_location var_endOfExpression_5919 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 137)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (constinArgument_inTypeName, var_expressionList_5895, var_endOfExpression_5919, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_5F_beginning_5F_by_5F_type_i21_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 135)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 138)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  GGS_location var_endOfExpression_6311 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-initializer.galgas4", 151)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
  outArgument_outExpression = GGS_initializerCallAST::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string::makeEmptyString (), var_endOfExpression_6311, inCompiler COMMA_HERE), GGS_actualOutputArgumentList::init (inCompiler COMMA_HERE), var_endOfExpression_6311, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i22_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 150)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-initializer.galgas4", 152)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i23_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6432 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6499 ;
      nt_factor_ (ioArgument_ioDeclarations, var_rightOperand_6499, inCompiler) ;
      outArgument_outExpression = GGS_moduloExpressionAST::init_21__21__21_ (var_operatorLocation_6376, var_leftOperand_6432, var_rightOperand_6499, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_term_i23_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_mod COMMA_SOURCE_FILE ("expression-multiplicative.galgas4", 145)) ;
      nt_factor_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
  outArgument_outExpression = GGS_selfInExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 53)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i24_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_self COMMA_SOURCE_FILE ("expression-primary-self.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
  outArgument_outExpression = GGS_trueExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 67)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i25_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_true COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 66)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
  outArgument_outExpression = GGS_falseExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 75)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i26_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_false COMMA_SOURCE_FILE ("expression-primary-true-false.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i27_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2633 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 55)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_unaryPlusExpressionAST::init_21__21_ (var_operatorLocation_2633, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i27_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-unary-plus.galgas4", 56)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_2639 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 56)) ;
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
  outArgument_outExpression = GGS_bangExpressionAST::init_21__21_ (var_operatorLocation_2639, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i28_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__21_ COMMA_SOURCE_FILE ("expression-primary-bang.galgas4", 58)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i29_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_i29_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i30_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                    GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                    Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_term_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5842 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 134)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 135)) ;
      GGS_semanticExpressionAST var_leftOperand_5897 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5962 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_5962, inCompiler) ;
      outArgument_outExpression = GGS_leftShiftExpressionAST::init_21__21__21_ (var_operatorLocation_5842, var_leftOperand_5897, var_rightOperand_5962, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_6088 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 140)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 141)) ;
      GGS_semanticExpressionAST var_leftOperand_6143 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6208 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6208, inCompiler) ;
      outArgument_outExpression = GGS_rightShiftExpressionAST::init_21__21__21_ (var_operatorLocation_6088, var_leftOperand_6143, var_rightOperand_6208, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_6335 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 146)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 147)) ;
      GGS_semanticExpressionAST var_leftOperand_6389 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6454 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6454, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionAST::init_21__21__21_ (var_operatorLocation_6335, var_leftOperand_6389, var_rightOperand_6454, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6574 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 152)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 153)) ;
      GGS_semanticExpressionAST var_leftOperand_6629 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6694 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6694, inCompiler) ;
      outArgument_outExpression = GGS_addExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_6574, var_leftOperand_6629, var_rightOperand_6694, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6824 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 158)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 159)) ;
      GGS_semanticExpressionAST var_leftOperand_6878 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6943 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_6943, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionAST::init_21__21__21_ (var_operatorLocation_6824, var_leftOperand_6878, var_rightOperand_6943, inCompiler COMMA_HERE) ;
    } break ;
    case 7: {
      GGS_location var_operatorLocation_7063 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-additive.galgas4", 164)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 165)) ;
      GGS_semanticExpressionAST var_leftOperand_7118 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_7183 ;
      nt_term_ (ioArgument_ioDeclarations, var_rightOperand_7183, inCompiler) ;
      outArgument_outExpression = GGS_subExpressionNoOverflowAST::init_21__21__21_ (var_operatorLocation_7063, var_leftOperand_7118, var_rightOperand_7183, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_simple_5F_expression_i30_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_term_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3C__3C_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 135)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__3E__3E_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 141)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 147)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2B_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 153)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 159)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__26__2D_ COMMA_SOURCE_FILE ("expression-additive.galgas4", 165)) ;
      nt_term_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i31_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                                GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                                Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_expression_5F_and_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      GGS_location var_operatorLocation_5304 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 120)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 121)) ;
      GGS_semanticExpressionAST var_leftOperand_5358 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5433 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5433, inCompiler) ;
      outArgument_outExpression = GGS_orExpressionAST::init_21__21__21_ (var_operatorLocation_5304, var_leftOperand_5358, var_rightOperand_5433, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      GGS_location var_operatorLocation_5552 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 126)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 127)) ;
      GGS_semanticExpressionAST var_leftOperand_5607 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5682 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5682, inCompiler) ;
      outArgument_outExpression = GGS_orShortExpressionAST::init_21__21__21_ (var_operatorLocation_5552, var_leftOperand_5607, var_rightOperand_5682, inCompiler COMMA_HERE) ;
    } break ;
    case 4: {
      GGS_location var_operatorLocation_5806 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 132)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 133)) ;
      GGS_semanticExpressionAST var_leftOperand_5860 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_5935 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_5935, inCompiler) ;
      outArgument_outExpression = GGS_xorExpressionAST::init_21__21__21_ (var_operatorLocation_5806, var_leftOperand_5860, var_rightOperand_5935, inCompiler COMMA_HERE) ;
    } break ;
    case 5: {
      GGS_location var_operatorLocation_6055 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 138)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 139)) ;
      GGS_semanticExpressionAST var_leftOperand_6111 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6186 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6186, inCompiler) ;
      outArgument_outExpression = GGS_closedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6055, var_leftOperand_6111, var_rightOperand_6186, inCompiler COMMA_HERE) ;
    } break ;
    case 6: {
      GGS_location var_operatorLocation_6314 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-or.galgas4", 144)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 145)) ;
      GGS_semanticExpressionAST var_leftOperand_6370 = outArgument_outExpression ;
      GGS_semanticExpressionAST var_rightOperand_6445 ;
      nt_expression_5F_and_ (ioArgument_ioDeclarations, var_rightOperand_6445, inCompiler) ;
      outArgument_outExpression = GGS_openedSliceExpressionAST::init_21__21__21_ (var_operatorLocation_6314, var_leftOperand_6370, var_rightOperand_6445, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_or_i31_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_expression_5F_and_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_21 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 121)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7C__7C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 127)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 133)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__2E_ COMMA_SOURCE_FILE ("expression-or.galgas4", 139)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E__2E__3C_ COMMA_SOURCE_FILE ("expression-or.galgas4", 145)) ;
      nt_expression_5F_and_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  nt_primary_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 98)) ;
      GGS_actualOutputArgumentList var_expressionList_3936 ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3936, inCompiler) ;
      outArgument_outExpression = GGS_subscriptReadAccessExpressionAST::init_21__21__21_ (outArgument_outExpression, var_expressionList_3936, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 106)), inCompiler COMMA_HERE) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 110)) ;
      GGS_lstring var_structFieldName_4141 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
        outArgument_outExpression = GGS_structPropertyAccessExpressionAST::init_21__21__21_ (var_structFieldName_4141.readProperty_location (), outArgument_outExpression, var_structFieldName_4141, inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        GGS_lstring var_getterName_4370 = var_structFieldName_4141 ;
        GGS_location var_startLocation_4411 = GGS_location::class_func_next (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 120)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 121)) ;
        GGS_actualOutputArgumentList var_expressionList_4537 ;
        nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_4537, inCompiler) ;
        GGS_location var_endLocation_4565 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 123)) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 124)) ;
        outArgument_outExpression = GGS_getterCallExpressionAST::init_21__21__21__21_ (outArgument_outExpression, var_getterName_4370, var_expressionList_4537, var_startLocation_4411.getter_union (var_endLocation_4565, inCompiler COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 129)), inCompiler COMMA_HERE) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i32_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  nt_primary_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_galgas_34_ExpressionSyntax_22 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5B_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 98)) ;
      nt_non_5F_empty_5F_output_5F_expression_5F_list_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__5D_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 108)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__2E_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 110)) ;
      inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 111)) ;
      switch (select_galgas_34_ExpressionSyntax_23 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 121)) ;
        nt_output_5F_expression_5F_list_indexing (inCompiler) ;
        inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-factor-property-subscript-access.galgas4", 124)) ;
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                      GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                      Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_location var_operatorLocation_1456 = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-tilde.galgas4", 26)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 27)) ;
  nt_factor_ (ioArgument_ioDeclarations, outArgument_outExpression, inCompiler) ;
  outArgument_outExpression = GGS_tildeExpressionAST::init_21__21_ (var_operatorLocation_1456, outArgument_outExpression, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_factor_i33_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__7E_ COMMA_SOURCE_FILE ("expression-tilde.galgas4", 27)) ;
  nt_factor_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i34_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_relation_5F_factor_i34_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i35_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_ldouble var_literalDouble_2545 = inCompiler->synthetizedAttribute_floatValue () ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 53)) ;
  outArgument_outExpression = GGS_literalDoubleExpressionAST::init_21_ (var_literalDouble_2545, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i35_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_double_2E_xxx COMMA_SOURCE_FILE ("expression-primary-literal-double.galgas4", 53)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GGS_lstring var_functionName_3160 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 70)) ;
  GGS_actualOutputArgumentList var_expressionList_3285 ;
  nt_output_5F_expression_5F_list_ (ioArgument_ioDeclarations, var_expressionList_3285, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 72)) ;
  outArgument_outExpression = GGS_functionCallExpressionAST::init_21__21_ (var_functionName_3160, var_expressionList_3285, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i36_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->enterIndexing (Lexique_galgasScanner_34_::kIndexing_functionCall, "") ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_identifier COMMA_SOURCE_FILE ("expression-function-call.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__28_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 70)) ;
  nt_output_5F_expression_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken__29_ COMMA_SOURCE_FILE ("expression-function-call.galgas4", 72)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_expression_5F_and_i37_indexing (Lexique_galgasScanner_34_ * inCompiler) {
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_ (GGS_galgasDeclarationAST & ioArgument_ioDeclarations,
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

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i38_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_if COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 67)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_then COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 70)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_else COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 72)) ;
  nt_expression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_end COMMA_SOURCE_FILE ("expression-primary-if.galgas4", 74)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i39_ (GGS_galgasDeclarationAST & /* ioArgument__5F_ioDeclarations */,
                                                                                       GGS_semanticExpressionAST & outArgument_outExpression,
                                                                                       Lexique_galgasScanner_34_ * inCompiler) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
  outArgument_outExpression = GGS_nilExpressionAST::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 45)), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_galgas_34_ExpressionSyntax::rule_galgas_34_ExpressionSyntax_primary_i39_indexing (Lexique_galgasScanner_34_ * inCompiler) {
  inCompiler->acceptTerminal (Lexique_galgasScanner_34_::kToken_nil COMMA_SOURCE_FILE ("expression-primary-nil.galgas4", 44)) ;
}

