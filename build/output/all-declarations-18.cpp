#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-18.h"

//--------------------------------------------------------------------------------------------------
// @galgas_33_GrammarComponentAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_galgas_33_GrammarComponentAST::objectCompare (const GGS_galgas_33_GrammarComponentAST & inOperand) const {
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

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (void) :
GGS_semanticDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::
init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                      const GGS_lbool & in_mHasIndexing,
                                                      const GGS_lstring & in_mGrammarComponentName,
                                                      const GGS_lstring & in_mGrammarClass,
                                                      const GGS_lstringlist & in_mSyntaxComponents,
                                                      const GGS_lstring & in_mStartSymbolName,
                                                      const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                      const GGS_lstringlist & in_mUnusedNonterminalList,
                                                      const GGS_bool & in_mHasTranslateFeature,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_galgas_33_GrammarComponentAST * object = nullptr ;
  macroMyNew (object, cPtr_galgas_33_GrammarComponentAST (inCompiler COMMA_THERE)) ;
  object->galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (in_isPredefined, in_mHasIndexing, in_mGrammarComponentName, in_mGrammarClass, in_mSyntaxComponents, in_mStartSymbolName, in_mStartSymbolLabelList, in_mUnusedNonterminalList, in_mHasTranslateFeature, inCompiler) ;
  const GGS_galgas_33_GrammarComponentAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::
galgas_33_GrammarComponentAST_init_21_isPredefined_21__21__21__21__21__21__21__21_ (const GGS_bool & in_isPredefined,
                                                                                    const GGS_lbool & in_mHasIndexing,
                                                                                    const GGS_lstring & in_mGrammarComponentName,
                                                                                    const GGS_lstring & in_mGrammarClass,
                                                                                    const GGS_lstringlist & in_mSyntaxComponents,
                                                                                    const GGS_lstring & in_mStartSymbolName,
                                                                                    const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                                    const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                                    const GGS_bool & in_mHasTranslateFeature,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST::GGS_galgas_33_GrammarComponentAST (const cPtr_galgas_33_GrammarComponentAST * inSourcePtr) :
GGS_semanticDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_galgas_33_GrammarComponentAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_galgas_33_GrammarComponentAST::readProperty_mHasIndexing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasIndexing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mGrammarClass (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mGrammarClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mSyntaxComponents (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mSyntaxComponents ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalLabelListAST GGS_galgas_33_GrammarComponentAST::readProperty_mStartSymbolLabelList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_nonTerminalLabelListAST () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mStartSymbolLabelList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_galgas_33_GrammarComponentAST::readProperty_mUnusedNonterminalList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mUnusedNonterminalList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_galgas_33_GrammarComponentAST::readProperty_mHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_galgas_33_GrammarComponentAST * p = (cPtr_galgas_33_GrammarComponentAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_galgas_33_GrammarComponentAST) ;
    return p->mProperty_mHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @galgas3GrammarComponentAST class
//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
}

//--------------------------------------------------------------------------------------------------

cPtr_galgas_33_GrammarComponentAST::cPtr_galgas_33_GrammarComponentAST (const GGS_bool & in_isPredefined,
                                                                        const GGS_lbool & in_mHasIndexing,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mGrammarClass,
                                                                        const GGS_lstringlist & in_mSyntaxComponents,
                                                                        const GGS_lstring & in_mStartSymbolName,
                                                                        const GGS_nonTerminalLabelListAST & in_mStartSymbolLabelList,
                                                                        const GGS_lstringlist & in_mUnusedNonterminalList,
                                                                        const GGS_bool & in_mHasTranslateFeature,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticDeclarationAST (in_isPredefined, inCompiler COMMA_THERE),
mProperty_mHasIndexing (),
mProperty_mGrammarComponentName (),
mProperty_mGrammarClass (),
mProperty_mSyntaxComponents (),
mProperty_mStartSymbolName (),
mProperty_mStartSymbolLabelList (),
mProperty_mUnusedNonterminalList (),
mProperty_mHasTranslateFeature () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_mHasIndexing = in_mHasIndexing ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mGrammarClass = in_mGrammarClass ;
  mProperty_mSyntaxComponents = in_mSyntaxComponents ;
  mProperty_mStartSymbolName = in_mStartSymbolName ;
  mProperty_mStartSymbolLabelList = in_mStartSymbolLabelList ;
  mProperty_mUnusedNonterminalList = in_mUnusedNonterminalList ;
  mProperty_mHasTranslateFeature = in_mHasTranslateFeature ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_galgas_33_GrammarComponentAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

void cPtr_galgas_33_GrammarComponentAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@galgas3GrammarComponentAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasIndexing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarClass.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSyntaxComponents.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStartSymbolLabelList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUnusedNonterminalList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasTranslateFeature.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_galgas_33_GrammarComponentAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_galgas_33_GrammarComponentAST (mProperty_isPredefined, mProperty_mHasIndexing, mProperty_mGrammarComponentName, mProperty_mGrammarClass, mProperty_mSyntaxComponents, mProperty_mStartSymbolName, mProperty_mStartSymbolLabelList, mProperty_mUnusedNonterminalList, mProperty_mHasTranslateFeature, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_galgas_33_GrammarComponentAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mHasIndexing.printNonNullClassInstanceProperties ("mHasIndexing") ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mGrammarClass.printNonNullClassInstanceProperties ("mGrammarClass") ;
    mProperty_mSyntaxComponents.printNonNullClassInstanceProperties ("mSyntaxComponents") ;
    mProperty_mStartSymbolName.printNonNullClassInstanceProperties ("mStartSymbolName") ;
    mProperty_mStartSymbolLabelList.printNonNullClassInstanceProperties ("mStartSymbolLabelList") ;
    mProperty_mUnusedNonterminalList.printNonNullClassInstanceProperties ("mUnusedNonterminalList") ;
    mProperty_mHasTranslateFeature.printNonNullClassInstanceProperties ("mHasTranslateFeature") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @galgas3GrammarComponentAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ("galgas3GrammarComponentAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_galgas_33_GrammarComponentAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_galgas_33_GrammarComponentAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_galgas_33_GrammarComponentAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_galgas_33_GrammarComponentAST GGS_galgas_33_GrammarComponentAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_galgas_33_GrammarComponentAST result ;
  const GGS_galgas_33_GrammarComponentAST * p = (const GGS_galgas_33_GrammarComponentAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_galgas_33_GrammarComponentAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("galgas3GrammarComponentAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension method '@galgasDeclarationAST getOptionalTypeName'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_getOptionalTypeName (GGS_galgasDeclarationAST & ioObject,
                                          GGS_lstring & outArgument_outOptionalTypeName,
                                          const GGS_lstring constinArgument_inTypeName,
                                          const GGS_bool constinArgument_inPredefined,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionalTypeName.drop () ; // Release 'out' argument
  outArgument_outOptionalTypeName = function_makeOptionalTypeLName (constinArgument_inTypeName, inCompiler COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 435)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_galgasDeclarationAST temp_1 = ioObject ;
    test_0 = temp_1.readProperty_implicitTypeDeclarationSet ().getter_hasKey (outArgument_outOptionalTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 436)).operator_not (SOURCE_FILE ("semanticsTypesForAST.galgas3", 436)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioObject.mProperty_implicitTypeDeclarationSet.plusPlusAssignOperation (outArgument_outOptionalTypeName.readProperty_string ()  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 437)) ;
      ioObject.mProperty_mDeclarationList.addAssignOperation (GGS_optionalTypeDeclarationAST::init_21_isPredefined_21_optionalTypeName_21_unwrappedTypeName_21_isUsefull (constinArgument_inPredefined, outArgument_outOptionalTypeName, constinArgument_inTypeName, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticsTypesForAST.galgas3", 438)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@templateInstructionForGeneration templateCodeGeneration'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_templateCodeGeneration (cPtr_templateInstructionForGeneration * inObject,
                                                 GGS_string & io_ioGeneratedCode,
                                                 GGS_stringset & io_ioInclusionSet,
                                                 GGS_uint & io_ioTemporaryVariableIndex,
                                                 GGS_stringset & io_ioUnusedVariableCppNameSet,
                                                 GGS_bool & io_ioUseColumnMarker,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_templateInstructionForGeneration) ;
    inObject->method_templateCodeGeneration (io_ioGeneratedCode, io_ioInclusionSet, io_ioTemporaryVariableIndex, io_ioUnusedVariableCppNameSet, io_ioUseColumnMarker, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST::objectCompare (const GGS_templateInstructionForeachAST & inOperand) const {
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

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (void) :
GGS_templateInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                          const GGS_templateExpressionAST & in_mExpression,
                                          const GGS_lstringlist & in_mEnumeration,
                                          const GGS_location & in_mEndOfProperties,
                                          const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                          const GGS_templateInstructionListAST & in_mDoInstructionList,
                                          const GGS_lstring & in_mIndexIdentifier,
                                          const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                          const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachAST * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachAST (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeration, in_mEndOfProperties, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexIdentifier, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachAST::
templateInstructionForeachAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS_lstringlist & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST::GGS_templateInstructionForeachAST (const cPtr_templateInstructionForeachAST * inSourcePtr) :
GGS_templateInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachAST::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateInstructionForeachAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_templateInstructionForeachAST::readProperty_mEnumeration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEnumeration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateInstructionForeachAST::readProperty_mEndOfProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mEndOfProperties ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateInstructionForeachAST::readProperty_mIndexIdentifier (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mIndexIdentifier ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListAST GGS_templateInstructionForeachAST::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListAST () ;
  }else{
    cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachAST) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachAST::cPtr_templateInstructionForeachAST (const GGS_bool & in_mIsAscending,
                                                                        const GGS_templateExpressionAST & in_mExpression,
                                                                        const GGS_lstringlist & in_mEnumeration,
                                                                        const GGS_location & in_mEndOfProperties,
                                                                        const GGS_templateInstructionListAST & in_mBeforeInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mDoInstructionList,
                                                                        const GGS_lstring & in_mIndexIdentifier,
                                                                        const GGS_templateInstructionListAST & in_mBetweenInstructionList,
                                                                        const GGS_templateInstructionListAST & in_mAfterInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionAST (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeration (),
mProperty_mEndOfProperties (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexIdentifier (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeration = in_mEnumeration ;
  mProperty_mEndOfProperties = in_mEndOfProperties ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexIdentifier = in_mIndexIdentifier ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

void cPtr_templateInstructionForeachAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachAST:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeration.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfProperties.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexIdentifier.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionForeachAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachAST (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeration, mProperty_mEndOfProperties, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexIdentifier, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeration.printNonNullClassInstanceProperties ("mEnumeration") ;
    mProperty_mEndOfProperties.printNonNullClassInstanceProperties ("mEndOfProperties") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexIdentifier.printNonNullClassInstanceProperties ("mIndexIdentifier") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST ("templateInstructionForeachAST",
                                                                                  & kTypeDescriptor_GALGAS_templateInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST result ;
  const GGS_templateInstructionForeachAST * p = (const GGS_templateInstructionForeachAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachAST_2E_weak::objectCompare (const GGS_templateInstructionForeachAST_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (void) :
GGS_templateInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak & GGS_templateInstructionForeachAST_2E_weak::operator = (const GGS_templateInstructionForeachAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak::GGS_templateInstructionForeachAST_2E_weak (const GGS_templateInstructionForeachAST & inSource) :
GGS_templateInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak GGS_templateInstructionForeachAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachAST result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachAST * p = (cPtr_templateInstructionForeachAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST GGS_templateInstructionForeachAST_2E_weak::bang_templateInstructionForeachAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachAST) ;
      result = GGS_templateInstructionForeachAST ((cPtr_templateInstructionForeachAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ("templateInstructionForeachAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachAST_2E_weak GGS_templateInstructionForeachAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachAST_2E_weak result ;
  const GGS_templateInstructionForeachAST_2E_weak * p = (const GGS_templateInstructionForeachAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionForeachForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration::objectCompare (const GGS_templateInstructionForeachForGeneration & inOperand) const {
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

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                      const GGS_semanticExpressionForGeneration & in_mExpression,
                                      const GGS_string & in_mEnumeratorCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                      const GGS_string & in_mIndexCppName,
                                      const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                      const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionForeachForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionForeachForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (in_mIsAscending, in_mExpression, in_mEnumeratorCppName, in_mBeforeInstructionList, in_mDoInstructionList, in_mIndexCppName, in_mBetweenInstructionList, in_mAfterInstructionList, inCompiler) ;
  const GGS_templateInstructionForeachForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionForeachForGeneration::
templateInstructionForeachForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_bool & in_mIsAscending,
                                                                              const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                              const GGS_string & in_mEnumeratorCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                              const GGS_string & in_mIndexCppName,
                                                                              const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                              const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration::GGS_templateInstructionForeachForGeneration (const cPtr_templateInstructionForeachForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionForeachForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_templateInstructionForeachForGeneration::readProperty_mIsAscending (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIsAscending ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mEnumeratorCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mEnumeratorCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBeforeInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBeforeInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mDoInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mDoInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_templateInstructionForeachForGeneration::readProperty_mIndexCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mIndexCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mBetweenInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mBetweenInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateInstructionForeachForGeneration::readProperty_mAfterInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionForeachForGeneration) ;
    return p->mProperty_mAfterInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionForeachForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionForeachForGeneration::cPtr_templateInstructionForeachForGeneration (const GGS_bool & in_mIsAscending,
                                                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                            const GGS_string & in_mEnumeratorCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBeforeInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mDoInstructionList,
                                                                                            const GGS_string & in_mIndexCppName,
                                                                                            const GGS_templateInstructionListForGeneration & in_mBetweenInstructionList,
                                                                                            const GGS_templateInstructionListForGeneration & in_mAfterInstructionList,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mIsAscending (),
mProperty_mExpression (),
mProperty_mEnumeratorCppName (),
mProperty_mBeforeInstructionList (),
mProperty_mDoInstructionList (),
mProperty_mIndexCppName (),
mProperty_mBetweenInstructionList (),
mProperty_mAfterInstructionList () {
  mProperty_mIsAscending = in_mIsAscending ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mEnumeratorCppName = in_mEnumeratorCppName ;
  mProperty_mBeforeInstructionList = in_mBeforeInstructionList ;
  mProperty_mDoInstructionList = in_mDoInstructionList ;
  mProperty_mIndexCppName = in_mIndexCppName ;
  mProperty_mBetweenInstructionList = in_mBetweenInstructionList ;
  mProperty_mAfterInstructionList = in_mAfterInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionForeachForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

void cPtr_templateInstructionForeachForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionForeachForGeneration:") ;
  mProperty_mIsAscending.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumeratorCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBeforeInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDoInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIndexCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBetweenInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAfterInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionForeachForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionForeachForGeneration (mProperty_mIsAscending, mProperty_mExpression, mProperty_mEnumeratorCppName, mProperty_mBeforeInstructionList, mProperty_mDoInstructionList, mProperty_mIndexCppName, mProperty_mBetweenInstructionList, mProperty_mAfterInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionForeachForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mIsAscending.printNonNullClassInstanceProperties ("mIsAscending") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mEnumeratorCppName.printNonNullClassInstanceProperties ("mEnumeratorCppName") ;
    mProperty_mBeforeInstructionList.printNonNullClassInstanceProperties ("mBeforeInstructionList") ;
    mProperty_mDoInstructionList.printNonNullClassInstanceProperties ("mDoInstructionList") ;
    mProperty_mIndexCppName.printNonNullClassInstanceProperties ("mIndexCppName") ;
    mProperty_mBetweenInstructionList.printNonNullClassInstanceProperties ("mBetweenInstructionList") ;
    mProperty_mAfterInstructionList.printNonNullClassInstanceProperties ("mAfterInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ("templateInstructionForeachForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration result ;
  const GGS_templateInstructionForeachForGeneration * p = (const GGS_templateInstructionForeachForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionForeachForGeneration_2E_weak::objectCompare (const GGS_templateInstructionForeachForGeneration_2E_weak & inOperand) const {
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

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (void) :
GGS_templateInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak & GGS_templateInstructionForeachForGeneration_2E_weak::operator = (const GGS_templateInstructionForeachForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak::GGS_templateInstructionForeachForGeneration_2E_weak (const GGS_templateInstructionForeachForGeneration & inSource) :
GGS_templateInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak GGS_templateInstructionForeachForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (isValid ()) {
    const cPtr_templateInstructionForeachForGeneration * p = (cPtr_templateInstructionForeachForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateInstructionForeachForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration GGS_templateInstructionForeachForGeneration_2E_weak::bang_templateInstructionForeachForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateInstructionForeachForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateInstructionForeachForGeneration) ;
      result = GGS_templateInstructionForeachForGeneration ((cPtr_templateInstructionForeachForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionForeachForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ("templateInstructionForeachForGeneration.weak",
                                                                                                    & kTypeDescriptor_GALGAS_templateInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionForeachForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionForeachForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionForeachForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionForeachForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionForeachForGeneration_2E_weak GGS_templateInstructionForeachForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateInstructionForeachForGeneration_2E_weak result ;
  const GGS_templateInstructionForeachForGeneration_2E_weak * p = (const GGS_templateInstructionForeachForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionForeachForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionForeachForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionExpressionForGeneration::objectCompare (const GGS_templateInstructionExpressionForGeneration & inOperand) const {
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

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::
init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionExpressionForGeneration_init_21_ (in_mExpression, inCompiler) ;
  const GGS_templateInstructionExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionExpressionForGeneration::
templateInstructionExpressionForGeneration_init_21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration::GGS_templateInstructionExpressionForGeneration (const cPtr_templateInstructionExpressionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionExpressionForGeneration * p = (cPtr_templateInstructionExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionExpressionForGeneration::cPtr_templateInstructionExpressionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

void cPtr_templateInstructionExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionExpressionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionExpressionForGeneration (mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ("templateInstructionExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionExpressionForGeneration GGS_templateInstructionExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateInstructionExpressionForGeneration result ;
  const GGS_templateInstructionExpressionForGeneration * p = (const GGS_templateInstructionExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateBlockInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateBlockInstructionForGeneration::objectCompare (const GGS_templateBlockInstructionForGeneration & inOperand) const {
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

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::
init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                  const GGS_location & in_mLocation,
                  const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateBlockInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateBlockInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->templateBlockInstructionForGeneration_init_21__21__21_ (in_mExpression, in_mLocation, in_mBlockInstructionList, inCompiler) ;
  const GGS_templateBlockInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateBlockInstructionForGeneration::
templateBlockInstructionForGeneration_init_21__21__21_ (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                        Compiler * /* inCompiler */) {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration::GGS_templateBlockInstructionForGeneration (const cPtr_templateBlockInstructionForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateBlockInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateBlockInstructionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration GGS_templateBlockInstructionForGeneration::readProperty_mBlockInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionListForGeneration () ;
  }else{
    cPtr_templateBlockInstructionForGeneration * p = (cPtr_templateBlockInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateBlockInstructionForGeneration) ;
    return p->mProperty_mBlockInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateBlockInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateBlockInstructionForGeneration::cPtr_templateBlockInstructionForGeneration (const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                        const GGS_location & in_mLocation,
                                                                                        const GGS_templateInstructionListForGeneration & in_mBlockInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression (),
mProperty_mLocation (),
mProperty_mBlockInstructionList () {
  mProperty_mExpression = in_mExpression ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mBlockInstructionList = in_mBlockInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateBlockInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

void cPtr_templateBlockInstructionForGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@templateBlockInstructionForGeneration:") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBlockInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateBlockInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateBlockInstructionForGeneration (mProperty_mExpression, mProperty_mLocation, mProperty_mBlockInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateBlockInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
    mProperty_mBlockInstructionList.printNonNullClassInstanceProperties ("mBlockInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateBlockInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ("templateBlockInstructionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateBlockInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateBlockInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateBlockInstructionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateBlockInstructionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateBlockInstructionForGeneration GGS_templateBlockInstructionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_templateBlockInstructionForGeneration result ;
  const GGS_templateBlockInstructionForGeneration * p = (const GGS_templateBlockInstructionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateBlockInstructionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateBlockInstructionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateGetterCallInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST::objectCompare (const GGS_templateGetterCallInExpressionAST & inOperand) const {
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

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_lstring & in_mGetterName,
                      const GGS_templateExpressionListAST & in_mExpressionList,
                      const GGS_location & in_mExpressionLocation,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateGetterCallInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateGetterCallInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateGetterCallInExpressionAST_init_21__21__21__21_ (in_mReceiverExpression, in_mGetterName, in_mExpressionList, in_mExpressionLocation, inCompiler) ;
  const GGS_templateGetterCallInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateGetterCallInExpressionAST::
templateGetterCallInExpressionAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                        const GGS_lstring & in_mGetterName,
                                                        const GGS_templateExpressionListAST & in_mExpressionList,
                                                        const GGS_location & in_mExpressionLocation,
                                                        Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST::GGS_templateGetterCallInExpressionAST (const cPtr_templateGetterCallInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateGetterCallInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateGetterCallInExpressionAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateGetterCallInExpressionAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateGetterCallInExpressionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateGetterCallInExpressionAST::readProperty_mExpressionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateGetterCallInExpressionAST) ;
    return p->mProperty_mExpressionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateGetterCallInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateGetterCallInExpressionAST::cPtr_templateGetterCallInExpressionAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                                const GGS_lstring & in_mGetterName,
                                                                                const GGS_templateExpressionListAST & in_mExpressionList,
                                                                                const GGS_location & in_mExpressionLocation,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mGetterName (),
mProperty_mExpressionList (),
mProperty_mExpressionLocation () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mGetterName = in_mGetterName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mExpressionLocation = in_mExpressionLocation ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateGetterCallInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

void cPtr_templateGetterCallInExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@templateGetterCallInExpressionAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateGetterCallInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateGetterCallInExpressionAST (mProperty_mReceiverExpression, mProperty_mGetterName, mProperty_mExpressionList, mProperty_mExpressionLocation, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateGetterCallInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mExpressionLocation.printNonNullClassInstanceProperties ("mExpressionLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ("templateGetterCallInExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST result ;
  const GGS_templateGetterCallInExpressionAST * p = (const GGS_templateGetterCallInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateGetterCallInExpressionAST_2E_weak::objectCompare (const GGS_templateGetterCallInExpressionAST_2E_weak & inOperand) const {
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

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (void) :
GGS_templateExpressionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak & GGS_templateGetterCallInExpressionAST_2E_weak::operator = (const GGS_templateGetterCallInExpressionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak::GGS_templateGetterCallInExpressionAST_2E_weak (const GGS_templateGetterCallInExpressionAST & inSource) :
GGS_templateExpressionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (isValid ()) {
    const cPtr_templateGetterCallInExpressionAST * p = (cPtr_templateGetterCallInExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_templateGetterCallInExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST GGS_templateGetterCallInExpressionAST_2E_weak::bang_templateGetterCallInExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_templateGetterCallInExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_templateGetterCallInExpressionAST) ;
      result = GGS_templateGetterCallInExpressionAST ((cPtr_templateGetterCallInExpressionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @templateGetterCallInExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ("templateGetterCallInExpressionAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_templateExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateGetterCallInExpressionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateGetterCallInExpressionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateGetterCallInExpressionAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateGetterCallInExpressionAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateGetterCallInExpressionAST_2E_weak GGS_templateGetterCallInExpressionAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_templateGetterCallInExpressionAST_2E_weak result ;
  const GGS_templateGetterCallInExpressionAST_2E_weak * p = (const GGS_templateGetterCallInExpressionAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateGetterCallInExpressionAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateGetterCallInExpressionAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateInstructionSwitchForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateInstructionSwitchForGeneration::objectCompare (const GGS_templateInstructionSwitchForGeneration & inOperand) const {
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

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (void) :
GGS_templateInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                  const GGS_semanticExpressionForGeneration & in_switchExpression,
                  const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateInstructionSwitchForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_templateInstructionSwitchForGeneration (inCompiler COMMA_THERE)) ;
  object->templateInstructionSwitchForGeneration_init_21__21__21_ (in_enumType, in_switchExpression, in_templateInstructionSwitchBranchList, inCompiler) ;
  const GGS_templateInstructionSwitchForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateInstructionSwitchForGeneration::
templateInstructionSwitchForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_enumType,
                                                         const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                         const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                         Compiler * /* inCompiler */) {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration::GGS_templateInstructionSwitchForGeneration (const cPtr_templateInstructionSwitchForGeneration * inSourcePtr) :
GGS_templateInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateInstructionSwitchForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_templateInstructionSwitchForGeneration::readProperty_enumType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_enumType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_switchExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_switchExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchBranchListForGeneration GGS_templateInstructionSwitchForGeneration::readProperty_templateInstructionSwitchBranchList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateInstructionSwitchBranchListForGeneration () ;
  }else{
    cPtr_templateInstructionSwitchForGeneration * p = (cPtr_templateInstructionSwitchForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateInstructionSwitchForGeneration) ;
    return p->mProperty_templateInstructionSwitchBranchList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateInstructionSwitchForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateInstructionSwitchForGeneration::cPtr_templateInstructionSwitchForGeneration (const GGS_unifiedTypeMapEntry & in_enumType,
                                                                                          const GGS_semanticExpressionForGeneration & in_switchExpression,
                                                                                          const GGS_templateInstructionSwitchBranchListForGeneration & in_templateInstructionSwitchBranchList,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_enumType (),
mProperty_switchExpression (),
mProperty_templateInstructionSwitchBranchList () {
  mProperty_enumType = in_enumType ;
  mProperty_switchExpression = in_switchExpression ;
  mProperty_templateInstructionSwitchBranchList = in_templateInstructionSwitchBranchList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateInstructionSwitchForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

void cPtr_templateInstructionSwitchForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@templateInstructionSwitchForGeneration:") ;
  mProperty_enumType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_switchExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_templateInstructionSwitchBranchList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateInstructionSwitchForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateInstructionSwitchForGeneration (mProperty_enumType, mProperty_switchExpression, mProperty_templateInstructionSwitchBranchList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateInstructionSwitchForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_templateInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_enumType.printNonNullClassInstanceProperties ("enumType") ;
    mProperty_switchExpression.printNonNullClassInstanceProperties ("switchExpression") ;
    mProperty_templateInstructionSwitchBranchList.printNonNullClassInstanceProperties ("templateInstructionSwitchBranchList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateInstructionSwitchForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ("templateInstructionSwitchForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_templateInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionSwitchForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionSwitchForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateInstructionSwitchForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateInstructionSwitchForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionSwitchForGeneration GGS_templateInstructionSwitchForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_templateInstructionSwitchForGeneration result ;
  const GGS_templateInstructionSwitchForGeneration * p = (const GGS_templateInstructionSwitchForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateInstructionSwitchForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateInstructionSwitchForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateClassFunctionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateClassFunctionAST::objectCompare (const GGS_templateClassFunctionAST & inOperand) const {
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

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_lstring & in_mClassFunctionName,
                  const GGS_templateExpressionListAST & in_mExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateClassFunctionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateClassFunctionAST (inCompiler COMMA_THERE)) ;
  object->templateClassFunctionAST_init_21__21__21_ (in_mTypeName, in_mClassFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateClassFunctionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateClassFunctionAST::
templateClassFunctionAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                           const GGS_lstring & in_mClassFunctionName,
                                           const GGS_templateExpressionListAST & in_mExpressionList,
                                           Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST::GGS_templateClassFunctionAST (const cPtr_templateClassFunctionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateClassFunctionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateClassFunctionAST::readProperty_mClassFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mClassFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateClassFunctionAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateClassFunctionAST * p = (cPtr_templateClassFunctionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateClassFunctionAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateClassFunctionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateClassFunctionAST::cPtr_templateClassFunctionAST (const GGS_lstring & in_mTypeName,
                                                              const GGS_lstring & in_mClassFunctionName,
                                                              const GGS_templateExpressionListAST & in_mExpressionList,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mClassFunctionName (),
mProperty_mExpressionList () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mClassFunctionName = in_mClassFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateClassFunctionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

void cPtr_templateClassFunctionAST::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@templateClassFunctionAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateClassFunctionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateClassFunctionAST (mProperty_mTypeName, mProperty_mClassFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateClassFunctionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mClassFunctionName.printNonNullClassInstanceProperties ("mClassFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateClassFunctionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateClassFunctionAST ("templateClassFunctionAST",
                                                                             & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateClassFunctionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateClassFunctionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateClassFunctionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateClassFunctionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateClassFunctionAST GGS_templateClassFunctionAST::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateClassFunctionAST result ;
  const GGS_templateClassFunctionAST * p = (const GGS_templateClassFunctionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateClassFunctionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateClassFunctionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFileWrapperTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFileWrapperTemplateCallAST::objectCompare (const GGS_templateFileWrapperTemplateCallAST & inOperand) const {
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

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::
init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateFileWrapperTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFileWrapperTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateFileWrapperTemplateCallAST_init_21__21__21_ (in_mFileWrapperName, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateFileWrapperTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFileWrapperTemplateCallAST::
templateFileWrapperTemplateCallAST_init_21__21__21_ (const GGS_lstring & in_mFileWrapperName,
                                                     const GGS_lstring & in_mTemplateName,
                                                     const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST::GGS_templateFileWrapperTemplateCallAST (const cPtr_templateFileWrapperTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFileWrapperTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mFileWrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mFileWrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFileWrapperTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFileWrapperTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFileWrapperTemplateCallAST * p = (cPtr_templateFileWrapperTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFileWrapperTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFileWrapperTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFileWrapperTemplateCallAST::cPtr_templateFileWrapperTemplateCallAST (const GGS_lstring & in_mFileWrapperName,
                                                                                  const GGS_lstring & in_mTemplateName,
                                                                                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFileWrapperName (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mFileWrapperName = in_mFileWrapperName ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFileWrapperTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

void cPtr_templateFileWrapperTemplateCallAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFileWrapperTemplateCallAST:") ;
  mProperty_mFileWrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFileWrapperTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFileWrapperTemplateCallAST (mProperty_mFileWrapperName, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFileWrapperTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFileWrapperName.printNonNullClassInstanceProperties ("mFileWrapperName") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFileWrapperTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ("templateFileWrapperTemplateCallAST",
                                                                                       & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFileWrapperTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFileWrapperTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFileWrapperTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFileWrapperTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFileWrapperTemplateCallAST GGS_templateFileWrapperTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateFileWrapperTemplateCallAST result ;
  const GGS_templateFileWrapperTemplateCallAST * p = (const GGS_templateFileWrapperTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFileWrapperTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFileWrapperTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateExtensionTemplateCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateExtensionTemplateCallAST::objectCompare (const GGS_templateExtensionTemplateCallAST & inOperand) const {
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

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::
init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                  const GGS_lstring & in_mTemplateName,
                  const GGS_templateExpressionListAST & in_mOutExpressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateExtensionTemplateCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateExtensionTemplateCallAST (inCompiler COMMA_THERE)) ;
  object->templateExtensionTemplateCallAST_init_21__21__21_ (in_mExpressionValue, in_mTemplateName, in_mOutExpressionList, inCompiler) ;
  const GGS_templateExtensionTemplateCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateExtensionTemplateCallAST::
templateExtensionTemplateCallAST_init_21__21__21_ (const GGS_templateExpressionAST & in_mExpressionValue,
                                                   const GGS_lstring & in_mTemplateName,
                                                   const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                   Compiler * /* inCompiler */) {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST::GGS_templateExtensionTemplateCallAST (const cPtr_templateExtensionTemplateCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateExtensionTemplateCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateExtensionTemplateCallAST::readProperty_mExpressionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mExpressionValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateExtensionTemplateCallAST::readProperty_mTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateExtensionTemplateCallAST::readProperty_mOutExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateExtensionTemplateCallAST * p = (cPtr_templateExtensionTemplateCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateExtensionTemplateCallAST) ;
    return p->mProperty_mOutExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateExtensionTemplateCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateExtensionTemplateCallAST::cPtr_templateExtensionTemplateCallAST (const GGS_templateExpressionAST & in_mExpressionValue,
                                                                              const GGS_lstring & in_mTemplateName,
                                                                              const GGS_templateExpressionListAST & in_mOutExpressionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mExpressionValue (),
mProperty_mTemplateName (),
mProperty_mOutExpressionList () {
  mProperty_mExpressionValue = in_mExpressionValue ;
  mProperty_mTemplateName = in_mTemplateName ;
  mProperty_mOutExpressionList = in_mOutExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateExtensionTemplateCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

void cPtr_templateExtensionTemplateCallAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateExtensionTemplateCallAST:") ;
  mProperty_mExpressionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOutExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateExtensionTemplateCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateExtensionTemplateCallAST (mProperty_mExpressionValue, mProperty_mTemplateName, mProperty_mOutExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateExtensionTemplateCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpressionValue.printNonNullClassInstanceProperties ("mExpressionValue") ;
    mProperty_mTemplateName.printNonNullClassInstanceProperties ("mTemplateName") ;
    mProperty_mOutExpressionList.printNonNullClassInstanceProperties ("mOutExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateExtensionTemplateCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ("templateExtensionTemplateCallAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateExtensionTemplateCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateExtensionTemplateCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateExtensionTemplateCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateExtensionTemplateCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateExtensionTemplateCallAST GGS_templateExtensionTemplateCallAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateExtensionTemplateCallAST result ;
  const GGS_templateExtensionTemplateCallAST * p = (const GGS_templateExtensionTemplateCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateExtensionTemplateCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateExtensionTemplateCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateLiteralUIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateLiteralUIntExpressionAST::objectCompare (const GGS_templateLiteralUIntExpressionAST & inOperand) const {
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

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::
init_21_ (const GGS_lbigint & in_mLiteralInt,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateLiteralUIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateLiteralUIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateLiteralUIntExpressionAST_init_21_ (in_mLiteralInt, inCompiler) ;
  const GGS_templateLiteralUIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateLiteralUIntExpressionAST::
templateLiteralUIntExpressionAST_init_21_ (const GGS_lbigint & in_mLiteralInt,
                                           Compiler * /* inCompiler */) {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST::GGS_templateLiteralUIntExpressionAST (const cPtr_templateLiteralUIntExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateLiteralUIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_templateLiteralUIntExpressionAST::readProperty_mLiteralInt (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_templateLiteralUIntExpressionAST * p = (cPtr_templateLiteralUIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateLiteralUIntExpressionAST) ;
    return p->mProperty_mLiteralInt ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateLiteralUIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateLiteralUIntExpressionAST::cPtr_templateLiteralUIntExpressionAST (const GGS_lbigint & in_mLiteralInt,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mLiteralInt () {
  mProperty_mLiteralInt = in_mLiteralInt ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateLiteralUIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

void cPtr_templateLiteralUIntExpressionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@templateLiteralUIntExpressionAST:") ;
  mProperty_mLiteralInt.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateLiteralUIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateLiteralUIntExpressionAST (mProperty_mLiteralInt, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateLiteralUIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLiteralInt.printNonNullClassInstanceProperties ("mLiteralInt") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateLiteralUIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ("templateLiteralUIntExpressionAST",
                                                                                     & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateLiteralUIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateLiteralUIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateLiteralUIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateLiteralUIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateLiteralUIntExpressionAST GGS_templateLiteralUIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_templateLiteralUIntExpressionAST result ;
  const GGS_templateLiteralUIntExpressionAST * p = (const GGS_templateLiteralUIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateLiteralUIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateLiteralUIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @structFieldAccessTemplateExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_structFieldAccessTemplateExpressionAST::objectCompare (const GGS_structFieldAccessTemplateExpressionAST & inOperand) const {
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

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::
init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                  const GGS_templateExpressionAST & in_mExpression,
                  const GGS_lstring & in_mStructFieldName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_structFieldAccessTemplateExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_structFieldAccessTemplateExpressionAST (inCompiler COMMA_THERE)) ;
  object->structFieldAccessTemplateExpressionAST_init_21__21__21_ (in_mOperatorLocation, in_mExpression, in_mStructFieldName, inCompiler) ;
  const GGS_structFieldAccessTemplateExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_structFieldAccessTemplateExpressionAST::
structFieldAccessTemplateExpressionAST_init_21__21__21_ (const GGS_location & in_mOperatorLocation,
                                                         const GGS_templateExpressionAST & in_mExpression,
                                                         const GGS_lstring & in_mStructFieldName,
                                                         Compiler * /* inCompiler */) {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST::GGS_structFieldAccessTemplateExpressionAST (const cPtr_structFieldAccessTemplateExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_structFieldAccessTemplateExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_structFieldAccessTemplateExpressionAST::readProperty_mOperatorLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mOperatorLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_structFieldAccessTemplateExpressionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_structFieldAccessTemplateExpressionAST::readProperty_mStructFieldName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_structFieldAccessTemplateExpressionAST * p = (cPtr_structFieldAccessTemplateExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_structFieldAccessTemplateExpressionAST) ;
    return p->mProperty_mStructFieldName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @structFieldAccessTemplateExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_structFieldAccessTemplateExpressionAST::cPtr_structFieldAccessTemplateExpressionAST (const GGS_location & in_mOperatorLocation,
                                                                                          const GGS_templateExpressionAST & in_mExpression,
                                                                                          const GGS_lstring & in_mStructFieldName,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOperatorLocation (),
mProperty_mExpression (),
mProperty_mStructFieldName () {
  mProperty_mOperatorLocation = in_mOperatorLocation ;
  mProperty_mExpression = in_mExpression ;
  mProperty_mStructFieldName = in_mStructFieldName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_structFieldAccessTemplateExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

void cPtr_structFieldAccessTemplateExpressionAST::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@structFieldAccessTemplateExpressionAST:") ;
  mProperty_mOperatorLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructFieldName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_structFieldAccessTemplateExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_structFieldAccessTemplateExpressionAST (mProperty_mOperatorLocation, mProperty_mExpression, mProperty_mStructFieldName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_structFieldAccessTemplateExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOperatorLocation.printNonNullClassInstanceProperties ("mOperatorLocation") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
    mProperty_mStructFieldName.printNonNullClassInstanceProperties ("mStructFieldName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @structFieldAccessTemplateExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ("structFieldAccessTemplateExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_structFieldAccessTemplateExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldAccessTemplateExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_structFieldAccessTemplateExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_structFieldAccessTemplateExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_structFieldAccessTemplateExpressionAST GGS_structFieldAccessTemplateExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_structFieldAccessTemplateExpressionAST result ;
  const GGS_structFieldAccessTemplateExpressionAST * p = (const GGS_structFieldAccessTemplateExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_structFieldAccessTemplateExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldAccessTemplateExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateOptionAccessAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateOptionAccessAST::objectCompare (const GGS_templateOptionAccessAST & inOperand) const {
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

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionName,
                  const GGS_lstring & in_mGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_templateOptionAccessAST * object = nullptr ;
  macroMyNew (object, cPtr_templateOptionAccessAST (inCompiler COMMA_THERE)) ;
  object->templateOptionAccessAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionName, in_mGetterName, inCompiler) ;
  const GGS_templateOptionAccessAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateOptionAccessAST::
templateOptionAccessAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                          const GGS_lstring & in_mOptionName,
                                          const GGS_lstring & in_mGetterName,
                                          Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST::GGS_templateOptionAccessAST (const cPtr_templateOptionAccessAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateOptionAccessAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mOptionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mOptionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateOptionAccessAST::readProperty_mGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateOptionAccessAST * p = (cPtr_templateOptionAccessAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateOptionAccessAST) ;
    return p->mProperty_mGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateOptionAccessAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateOptionAccessAST::cPtr_templateOptionAccessAST (const GGS_lstring & in_mOptionComponentName,
                                                            const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mGetterName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionName (),
mProperty_mGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionName = in_mOptionName ;
  mProperty_mGetterName = in_mGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateOptionAccessAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

void cPtr_templateOptionAccessAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateOptionAccessAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateOptionAccessAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateOptionAccessAST (mProperty_mOptionComponentName, mProperty_mOptionName, mProperty_mGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateOptionAccessAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionName.printNonNullClassInstanceProperties ("mOptionName") ;
    mProperty_mGetterName.printNonNullClassInstanceProperties ("mGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateOptionAccessAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateOptionAccessAST ("templateOptionAccessAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateOptionAccessAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateOptionAccessAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateOptionAccessAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateOptionAccessAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateOptionAccessAST GGS_templateOptionAccessAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateOptionAccessAST result ;
  const GGS_templateOptionAccessAST * p = (const GGS_templateOptionAccessAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateOptionAccessAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateOptionAccessAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateTestDynamicClassAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateTestDynamicClassAST::objectCompare (const GGS_templateTestDynamicClassAST & inOperand) const {
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

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::
init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                      const GGS_location & in_mEndOfReceiverExpression,
                      const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                      const GGS_lstring & in_mTypeName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_templateTestDynamicClassAST * object = nullptr ;
  macroMyNew (object, cPtr_templateTestDynamicClassAST (inCompiler COMMA_THERE)) ;
  object->templateTestDynamicClassAST_init_21__21__21__21_ (in_mReceiverExpression, in_mEndOfReceiverExpression, in_mTypeComparisonKind, in_mTypeName, inCompiler) ;
  const GGS_templateTestDynamicClassAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateTestDynamicClassAST::
templateTestDynamicClassAST_init_21__21__21__21_ (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                  const GGS_location & in_mEndOfReceiverExpression,
                                                  const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                  const GGS_lstring & in_mTypeName,
                                                  Compiler * /* inCompiler */) {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST::GGS_templateTestDynamicClassAST (const cPtr_templateTestDynamicClassAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateTestDynamicClassAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_templateExpressionAST GGS_templateTestDynamicClassAST::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionAST () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_templateTestDynamicClassAST::readProperty_mEndOfReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mEndOfReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_dynamicTypeComparisonKind GGS_templateTestDynamicClassAST::readProperty_mTypeComparisonKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_dynamicTypeComparisonKind () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeComparisonKind ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateTestDynamicClassAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateTestDynamicClassAST * p = (cPtr_templateTestDynamicClassAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateTestDynamicClassAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateTestDynamicClassAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateTestDynamicClassAST::cPtr_templateTestDynamicClassAST (const GGS_templateExpressionAST & in_mReceiverExpression,
                                                                    const GGS_location & in_mEndOfReceiverExpression,
                                                                    const GGS_dynamicTypeComparisonKind & in_mTypeComparisonKind,
                                                                    const GGS_lstring & in_mTypeName,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mReceiverExpression (),
mProperty_mEndOfReceiverExpression (),
mProperty_mTypeComparisonKind (),
mProperty_mTypeName () {
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mEndOfReceiverExpression = in_mEndOfReceiverExpression ;
  mProperty_mTypeComparisonKind = in_mTypeComparisonKind ;
  mProperty_mTypeName = in_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateTestDynamicClassAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

void cPtr_templateTestDynamicClassAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@templateTestDynamicClassAST:") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeComparisonKind.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateTestDynamicClassAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateTestDynamicClassAST (mProperty_mReceiverExpression, mProperty_mEndOfReceiverExpression, mProperty_mTypeComparisonKind, mProperty_mTypeName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateTestDynamicClassAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mEndOfReceiverExpression.printNonNullClassInstanceProperties ("mEndOfReceiverExpression") ;
    mProperty_mTypeComparisonKind.printNonNullClassInstanceProperties ("mTypeComparisonKind") ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateTestDynamicClassAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateTestDynamicClassAST ("templateTestDynamicClassAST",
                                                                                & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateTestDynamicClassAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateTestDynamicClassAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateTestDynamicClassAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateTestDynamicClassAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateTestDynamicClassAST GGS_templateTestDynamicClassAST::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_templateTestDynamicClassAST result ;
  const GGS_templateTestDynamicClassAST * p = (const GGS_templateTestDynamicClassAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateTestDynamicClassAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateTestDynamicClassAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateFunctionCallAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateFunctionCallAST::objectCompare (const GGS_templateFunctionCallAST & inOperand) const {
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

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::
init_21__21_ (const GGS_lstring & in_mFunctionName,
              const GGS_templateExpressionListAST & in_mExpressionList,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_templateFunctionCallAST * object = nullptr ;
  macroMyNew (object, cPtr_templateFunctionCallAST (inCompiler COMMA_THERE)) ;
  object->templateFunctionCallAST_init_21__21_ (in_mFunctionName, in_mExpressionList, inCompiler) ;
  const GGS_templateFunctionCallAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateFunctionCallAST::
templateFunctionCallAST_init_21__21_ (const GGS_lstring & in_mFunctionName,
                                      const GGS_templateExpressionListAST & in_mExpressionList,
                                      Compiler * /* inCompiler */) {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST::GGS_templateFunctionCallAST (const cPtr_templateFunctionCallAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateFunctionCallAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateFunctionCallAST::readProperty_mFunctionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mFunctionName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_templateExpressionListAST GGS_templateFunctionCallAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_templateExpressionListAST () ;
  }else{
    cPtr_templateFunctionCallAST * p = (cPtr_templateFunctionCallAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateFunctionCallAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateFunctionCallAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateFunctionCallAST::cPtr_templateFunctionCallAST (const GGS_lstring & in_mFunctionName,
                                                            const GGS_templateExpressionListAST & in_mExpressionList,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mFunctionName (),
mProperty_mExpressionList () {
  mProperty_mFunctionName = in_mFunctionName ;
  mProperty_mExpressionList = in_mExpressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateFunctionCallAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

void cPtr_templateFunctionCallAST::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@templateFunctionCallAST:") ;
  mProperty_mFunctionName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateFunctionCallAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateFunctionCallAST (mProperty_mFunctionName, mProperty_mExpressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateFunctionCallAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionName.printNonNullClassInstanceProperties ("mFunctionName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateFunctionCallAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateFunctionCallAST ("templateFunctionCallAST",
                                                                            & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateFunctionCallAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateFunctionCallAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateFunctionCallAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateFunctionCallAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateFunctionCallAST GGS_templateFunctionCallAST::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_templateFunctionCallAST result ;
  const GGS_templateFunctionCallAST * p = (const GGS_templateFunctionCallAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateFunctionCallAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateFunctionCallAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @templateVarInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_templateVarInExpressionAST::objectCompare (const GGS_templateVarInExpressionAST & inOperand) const {
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

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (void) :
GGS_templateExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_templateVarInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_templateVarInExpressionAST (inCompiler COMMA_THERE)) ;
  object->templateVarInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_templateVarInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_templateVarInExpressionAST::
templateVarInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                                     Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST::GGS_templateVarInExpressionAST (const cPtr_templateVarInExpressionAST * inSourcePtr) :
GGS_templateExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_templateVarInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_templateVarInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_templateVarInExpressionAST * p = (cPtr_templateVarInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_templateVarInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @templateVarInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_templateVarInExpressionAST::cPtr_templateVarInExpressionAST (const GGS_lstring & in_mVarName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_templateExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_templateVarInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

void cPtr_templateVarInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@templateVarInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_templateVarInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_templateVarInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_templateVarInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_templateExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @templateVarInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateVarInExpressionAST ("templateVarInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_templateExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateVarInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateVarInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_templateVarInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_templateVarInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateVarInExpressionAST GGS_templateVarInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_templateVarInExpressionAST result ;
  const GGS_templateVarInExpressionAST * p = (const GGS_templateVarInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_templateVarInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateVarInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//                             N O N    T E R M I N A L    N A M E S                                
//
//--------------------------------------------------------------------------------------------------

static const char * gNonTerminalNames_templateGrammar [50] = {
  "<expression_tpl>",// Index 0
  "<relation_term_tpl>",// Index 1
  "<relation_factor_tpl>",// Index 2
  "<simple_expression_tpl>",// Index 3
  "<term_tpl>",// Index 4
  "<factor_tpl>",// Index 5
  "<primary_tpl>",// Index 6
  "<output_expression_list_tpl>",// Index 7
  "<template_instruction>",// Index 8
  "<template_parser_start_symbol>",// Index 9
  "<for_instruction_element>",// Index 10
  "<for_instruction_enumerated_object>",// Index 11
  "<switch_case>",// Index 12
  "<select_templateSyntax_0>",// Index 13
  "<select_templateSyntax_1>",// Index 14
  "<select_templateSyntax_2>",// Index 15
  "<select_templateSyntax_3>",// Index 16
  "<select_templateSyntax_4>",// Index 17
  "<select_templateSyntax_5>",// Index 18
  "<select_templateSyntax_6>",// Index 19
  "<select_templateSyntax_7>",// Index 20
  "<select_templateSyntax_8>",// Index 21
  "<select_templateSyntax_9>",// Index 22
  "<select_templateSyntax_10>",// Index 23
  "<select_templateSyntax_11>",// Index 24
  "<select_templateSyntax_12>",// Index 25
  "<select_templateSyntax_13>",// Index 26
  "<select_templateSyntax_14>",// Index 27
  "<select_templateSyntax_15>",// Index 28
  "<select_templateSyntax_16>",// Index 29
  "<select_templateSyntax_17>",// Index 30
  "<select_templateSyntax_18>",// Index 31
  "<select_templateSyntax_19>",// Index 32
  "<select_templateSyntax_20>",// Index 33
  "<select_templateSyntax_21>",// Index 34
  "<select_templateSyntax_22>",// Index 35
  "<select_templateSyntax_23>",// Index 36
  "<select_templateSyntax_24>",// Index 37
  "<select_templateSyntax_25>",// Index 38
  "<select_templateSyntax_26>",// Index 39
  "<select_templateSyntax_27>",// Index 40
  "<select_templateSyntax_28>",// Index 41
  "<select_templateSyntax_29>",// Index 42
  "<select_templateSyntax_30>",// Index 43
  "<select_templateSyntax_31>",// Index 44
  "<select_templateSyntax_32>",// Index 45
  "<select_templateSyntax_33>",// Index 46
  "<select_templateSyntax_34>",// Index 47
  "<select_templateSyntax_35>",// Index 48
  "<>"// Index 49
} ;

//--------------------------------------------------------------------------------------------------
//
//                      S L R    A N A L Y Z E R    A C T I O N    T A B L E                        
//
//--------------------------------------------------------------------------------------------------

// Action tables handle shift and reduce actions:
//  - a shift action is (terminal_symbol, SHIFT (n)): if shifts to state n;
//  - the accept action is (terminal_symbol, ACCEPT);
//  - a reduce action is (terminal_symbol, REDUCE (n)); if reduces to state n.

static const int32_t gActionTable_templateGrammar [] = {
// State S0 (index = 0)
  Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S1 (index = 17)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S2 (index = 42)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (22)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (22)
, BOTTOM_UP_END
// State S3 (index = 73)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (23)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (23)
, BOTTOM_UP_END
// State S4 (index = 104)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S5 (index = 129)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S6 (index = 154)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (32)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (33)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (88)
, BOTTOM_UP_END
// State S7 (index = 161)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S8 (index = 186)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (82)
, BOTTOM_UP_END
// State S9 (index = 203)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_ACCEPT
, BOTTOM_UP_END
// State S10 (index = 206)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (26)
, BOTTOM_UP_END
// State S11 (index = 209)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S12 (index = 234)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (38)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (9)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (9)
, BOTTOM_UP_END
// State S13 (index = 317)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S14 (index = 342)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S15 (index = 367)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S16 (index = 392)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (11)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (11)
, BOTTOM_UP_END
// State S17 (index = 473)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (12)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (12)
, BOTTOM_UP_END
// State S18 (index = 554)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (13)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (13)
, BOTTOM_UP_END
// State S19 (index = 635)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (14)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (14)
, BOTTOM_UP_END
// State S20 (index = 716)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (15)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (15)
, BOTTOM_UP_END
// State S21 (index = 797)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S22 (index = 880)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, Lexique_galgasTemplateScanner::kToken_template, BOTTOM_UP_SHIFT (44)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (45)
, Lexique_galgasTemplateScanner::kToken_filewrapper, BOTTOM_UP_SHIFT (46)
, Lexique_galgasTemplateScanner::kToken_option, BOTTOM_UP_SHIFT (47)
, BOTTOM_UP_END
// State S23 (index = 913)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (21)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (21)
, BOTTOM_UP_END
// State S24 (index = 944)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S25 (index = 993)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S26 (index = 1044)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_SHIFT (56)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_SHIFT (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (58)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (59)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_SHIFT (60)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (39)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (39)
, BOTTOM_UP_END
// State S27 (index = 1107)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S28 (index = 1178)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S29 (index = 1255)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_SHIFT (72)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S30 (index = 1336)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (74)
, BOTTOM_UP_END
// State S31 (index = 1339)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (75)
, BOTTOM_UP_END
// State S32 (index = 1342)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (90)
, BOTTOM_UP_END
// State S33 (index = 1345)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (89)
, BOTTOM_UP_END
// State S34 (index = 1348)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (76)
, BOTTOM_UP_END
// State S35 (index = 1351)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S36 (index = 1356)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (83)
, BOTTOM_UP_END
// State S37 (index = 1359)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (6)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (6)
, BOTTOM_UP_END
// State S38 (index = 1436)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S39 (index = 1445)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (7)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (7)
, BOTTOM_UP_END
// State S40 (index = 1522)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (8)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (8)
, BOTTOM_UP_END
// State S41 (index = 1599)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (84)
, BOTTOM_UP_END
// State S42 (index = 1602)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (57)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (57)
, BOTTOM_UP_END
// State S43 (index = 1685)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (16)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (16)
, BOTTOM_UP_END
// State S44 (index = 1766)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S45 (index = 1791)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (87)
, BOTTOM_UP_END
// State S46 (index = 1794)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (88)
, BOTTOM_UP_END
// State S47 (index = 1797)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (89)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (90)
, BOTTOM_UP_END
// State S48 (index = 1802)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (92)
, BOTTOM_UP_END
// State S49 (index = 1805)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (17)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (17)
, BOTTOM_UP_END
// State S50 (index = 1886)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S51 (index = 1911)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S52 (index = 1936)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (0)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (0)
, BOTTOM_UP_END
// State S53 (index = 1981)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S54 (index = 2006)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (1)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (1)
, BOTTOM_UP_END
// State S55 (index = 2055)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S56 (index = 2080)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S57 (index = 2105)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S58 (index = 2130)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S59 (index = 2155)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S60 (index = 2180)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S61 (index = 2205)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (2)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (2)
, BOTTOM_UP_END
// State S62 (index = 2256)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S63 (index = 2281)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S64 (index = 2306)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S65 (index = 2331)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S66 (index = 2356)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (3)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (3)
, BOTTOM_UP_END
// State S67 (index = 2419)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S68 (index = 2444)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S69 (index = 2469)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S70 (index = 2494)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (4)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (4)
, BOTTOM_UP_END
// State S71 (index = 2565)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (109)
, BOTTOM_UP_END
// State S72 (index = 2568)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_SHIFT (110)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_SHIFT (111)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_SHIFT (112)
, BOTTOM_UP_END
// State S73 (index = 2575)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (5)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (5)
, BOTTOM_UP_END
// State S74 (index = 2652)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S75 (index = 2669)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S76 (index = 2690)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S77 (index = 2697)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_SHIFT (122)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (91)
, BOTTOM_UP_END
// State S78 (index = 2702)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (124)
, BOTTOM_UP_END
// State S79 (index = 2705)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (126)
, BOTTOM_UP_END
// State S80 (index = 2708)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S81 (index = 2733)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S82 (index = 2758)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (129)
, BOTTOM_UP_END
// State S83 (index = 2761)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (20)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (20)
, BOTTOM_UP_END
// State S84 (index = 2766)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (10)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (10)
, BOTTOM_UP_END
// State S85 (index = 2847)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (58)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (58)
, BOTTOM_UP_END
// State S86 (index = 2928)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (130)
, BOTTOM_UP_END
// State S87 (index = 2931)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S88 (index = 2940)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (132)
, BOTTOM_UP_END
// State S89 (index = 2943)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (133)
, BOTTOM_UP_END
// State S90 (index = 2946)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (134)
, BOTTOM_UP_END
// State S91 (index = 2949)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (135)
, BOTTOM_UP_END
// State S92 (index = 2952)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S93 (index = 2961)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S94 (index = 3010)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_SHIFT (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_SHIFT (51)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (34)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (34)
, BOTTOM_UP_END
// State S95 (index = 3059)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_SHIFT (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (37)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (37)
, BOTTOM_UP_END
// State S96 (index = 3110)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (40)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (40)
, BOTTOM_UP_END
// State S97 (index = 3161)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (41)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (41)
, BOTTOM_UP_END
// State S98 (index = 3212)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (42)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (42)
, BOTTOM_UP_END
// State S99 (index = 3263)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (43)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (43)
, BOTTOM_UP_END
// State S100 (index = 3314)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (44)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (44)
, BOTTOM_UP_END
// State S101 (index = 3365)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (45)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (45)
, BOTTOM_UP_END
// State S102 (index = 3416)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S103 (index = 3487)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S104 (index = 3558)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S105 (index = 3629)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_SHIFT (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_SHIFT (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_SHIFT (64)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (65)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (46)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (46)
, BOTTOM_UP_END
// State S106 (index = 3700)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S107 (index = 3777)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S108 (index = 3854)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (67)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_SHIFT (68)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_SHIFT (69)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (51)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (51)
, BOTTOM_UP_END
// State S109 (index = 3931)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_SHIFT (71)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (55)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (55)
, BOTTOM_UP_END
// State S110 (index = 4010)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (66)
, BOTTOM_UP_END
// State S111 (index = 4013)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (67)
, BOTTOM_UP_END
// State S112 (index = 4016)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (68)
, BOTTOM_UP_END
// State S113 (index = 4019)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (148)
, BOTTOM_UP_END
// State S114 (index = 4022)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (72)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S115 (index = 4039)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (150)
, BOTTOM_UP_END
// State S116 (index = 4042)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S117 (index = 4063)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (152)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
// State S118 (index = 4070)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (28)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (28)
, BOTTOM_UP_END
// State S119 (index = 4079)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (29)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (29)
, BOTTOM_UP_END
// State S120 (index = 4088)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (154)
, BOTTOM_UP_END
// State S121 (index = 4091)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (84)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S122 (index = 4100)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (93)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S123 (index = 4117)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_SHIFT (159)
, BOTTOM_UP_END
// State S124 (index = 4120)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (160)
, BOTTOM_UP_END
// State S125 (index = 4127)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (162)
, BOTTOM_UP_END
// State S126 (index = 4130)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (32)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (32)
, BOTTOM_UP_END
// State S127 (index = 4161)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S128 (index = 4170)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S129 (index = 4179)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (18)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (18)
, BOTTOM_UP_END
// State S130 (index = 4260)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S131 (index = 4269)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (166)
, BOTTOM_UP_END
// State S132 (index = 4272)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (167)
, BOTTOM_UP_END
// State S133 (index = 4275)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (168)
, BOTTOM_UP_END
// State S134 (index = 4278)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (169)
, BOTTOM_UP_END
// State S135 (index = 4281)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (63)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (63)
, BOTTOM_UP_END
// State S136 (index = 4362)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (170)
, BOTTOM_UP_END
// State S137 (index = 4365)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (35)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (35)
, BOTTOM_UP_END
// State S138 (index = 4410)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (36)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (36)
, BOTTOM_UP_END
// State S139 (index = 4455)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (38)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (38)
, BOTTOM_UP_END
// State S140 (index = 4504)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (47)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (47)
, BOTTOM_UP_END
// State S141 (index = 4567)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (48)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (48)
, BOTTOM_UP_END
// State S142 (index = 4630)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (49)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (49)
, BOTTOM_UP_END
// State S143 (index = 4693)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (50)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (50)
, BOTTOM_UP_END
// State S144 (index = 4756)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (52)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (52)
, BOTTOM_UP_END
// State S145 (index = 4827)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (53)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (53)
, BOTTOM_UP_END
// State S146 (index = 4898)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (54)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (54)
, BOTTOM_UP_END
// State S147 (index = 4969)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (56)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (56)
, BOTTOM_UP_END
// State S148 (index = 5046)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (19)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (19)
, BOTTOM_UP_END
// State S149 (index = 5127)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (73)
, BOTTOM_UP_END
// State S150 (index = 5130)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (24)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (24)
, BOTTOM_UP_END
// State S151 (index = 5161)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (77)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (77)
, BOTTOM_UP_END
// State S152 (index = 5168)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S153 (index = 5193)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (78)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_SHIFT (172)
, BOTTOM_UP_END
// State S154 (index = 5198)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (27)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (27)
, BOTTOM_UP_END
// State S155 (index = 5207)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (84)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (120)
, BOTTOM_UP_END
// State S156 (index = 5216)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (175)
, BOTTOM_UP_END
// State S157 (index = 5219)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (93)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S158 (index = 5236)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (92)
, BOTTOM_UP_END
// State S159 (index = 5239)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (177)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (95)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (95)
, BOTTOM_UP_END
// State S160 (index = 5262)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (179)
, BOTTOM_UP_END
// State S161 (index = 5265)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (180)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (113)
, BOTTOM_UP_END
// State S162 (index = 5270)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S163 (index = 5289)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (70)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (70)
, BOTTOM_UP_END
// State S164 (index = 5294)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (71)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (71)
, BOTTOM_UP_END
// State S165 (index = 5299)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (184)
, BOTTOM_UP_END
// State S166 (index = 5302)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (60)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (60)
, BOTTOM_UP_END
// State S167 (index = 5383)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (69)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_SHIFT (80)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (81)
, BOTTOM_UP_END
// State S168 (index = 5392)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (64)
, BOTTOM_UP_END
// State S169 (index = 5395)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (186)
, BOTTOM_UP_END
// State S170 (index = 5398)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (62)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (62)
, BOTTOM_UP_END
// State S171 (index = 5479)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_SHIFT (187)
, BOTTOM_UP_END
// State S172 (index = 5482)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S173 (index = 5499)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (190)
, BOTTOM_UP_END
// State S174 (index = 5502)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (85)
, BOTTOM_UP_END
// State S175 (index = 5505)
, Lexique_galgasTemplateScanner::kToken_in, BOTTOM_UP_SHIFT (191)
, BOTTOM_UP_END
// State S176 (index = 5508)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (94)
, BOTTOM_UP_END
// State S177 (index = 5511)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (192)
, BOTTOM_UP_END
// State S178 (index = 5514)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S179 (index = 5535)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (111)
, Lexique_galgasTemplateScanner::kToken__2C_, BOTTOM_UP_SHIFT (160)
, BOTTOM_UP_END
// State S180 (index = 5542)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S181 (index = 5553)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (33)
, BOTTOM_UP_END
// State S182 (index = 5556)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (109)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (109)
, BOTTOM_UP_END
// State S183 (index = 5575)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (107)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_SHIFT (78)
, BOTTOM_UP_END
// State S184 (index = 5580)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (59)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (59)
, BOTTOM_UP_END
// State S185 (index = 5661)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_SHIFT (203)
, BOTTOM_UP_END
// State S186 (index = 5664)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (65)
, BOTTOM_UP_END
// State S187 (index = 5667)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (76)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S188 (index = 5688)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (80)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S189 (index = 5705)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (79)
, BOTTOM_UP_END
// State S190 (index = 5708)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (25)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (25)
, BOTTOM_UP_END
// State S191 (index = 5739)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_SHIFT (11)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (12)
, Lexique_galgasTemplateScanner::kToken_not, BOTTOM_UP_SHIFT (13)
, Lexique_galgasTemplateScanner::kToken__7E_, BOTTOM_UP_SHIFT (14)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_SHIFT (15)
, Lexique_galgasTemplateScanner::kToken_true, BOTTOM_UP_SHIFT (16)
, Lexique_galgasTemplateScanner::kToken_false, BOTTOM_UP_SHIFT (17)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (18)
, Lexique_galgasTemplateScanner::kToken_double_2E_xxx, BOTTOM_UP_SHIFT (19)
, Lexique_galgasTemplateScanner::kToken__27_char_27_, BOTTOM_UP_SHIFT (20)
, Lexique_galgasTemplateScanner::kToken__22_string_22_, BOTTOM_UP_SHIFT (21)
, Lexique_galgasTemplateScanner::kToken__5B_, BOTTOM_UP_SHIFT (22)
, BOTTOM_UP_END
// State S192 (index = 5764)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (207)
, BOTTOM_UP_END
// State S193 (index = 5767)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (97)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S194 (index = 5788)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (99)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_SHIFT (209)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (99)
, BOTTOM_UP_END
// State S195 (index = 5795)
, Lexique_galgasTemplateScanner::kToken__28_, BOTTOM_UP_REDUCE (112)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (112)
, BOTTOM_UP_END
// State S196 (index = 5800)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (118)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (118)
, BOTTOM_UP_END
// State S197 (index = 5813)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (211)
, BOTTOM_UP_END
// State S198 (index = 5816)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (120)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (120)
, BOTTOM_UP_END
// State S199 (index = 5821)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S200 (index = 5834)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (122)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_SHIFT (214)
, BOTTOM_UP_END
// State S201 (index = 5839)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (110)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (110)
, BOTTOM_UP_END
// State S202 (index = 5844)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (108)
, BOTTOM_UP_END
// State S203 (index = 5847)
, Lexique_galgasTemplateScanner::kToken__7C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__26_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3D__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E__3D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3C__3C_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3E__3E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2B_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2F_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_mod, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__2E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__5D_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_is, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21_selector_3A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_then, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (61)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (61)
, BOTTOM_UP_END
// State S204 (index = 5928)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (74)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_SHIFT (152)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (74)
, BOTTOM_UP_END
// State S205 (index = 5935)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (81)
, BOTTOM_UP_END
// State S206 (index = 5938)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_SHIFT (217)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (86)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (86)
, BOTTOM_UP_END
// State S207 (index = 5945)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (96)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (96)
, BOTTOM_UP_END
// State S208 (index = 5966)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (98)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (98)
, BOTTOM_UP_END
// State S209 (index = 5973)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S210 (index = 5992)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (103)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_SHIFT (221)
, BOTTOM_UP_END
// State S211 (index = 5997)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (117)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (117)
, BOTTOM_UP_END
// State S212 (index = 6010)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_SHIFT (223)
, BOTTOM_UP_END
// State S213 (index = 6013)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_SHIFT (196)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (121)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (115)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_SHIFT (197)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_SHIFT (198)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (121)
, BOTTOM_UP_END
// State S214 (index = 6026)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (123)
, BOTTOM_UP_END
// State S215 (index = 6029)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (225)
, BOTTOM_UP_END
// State S216 (index = 6032)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (75)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (75)
, BOTTOM_UP_END
// State S217 (index = 6037)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_SHIFT (226)
, BOTTOM_UP_END
// State S218 (index = 6040)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (30)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (30)
, BOTTOM_UP_END
// State S219 (index = 6045)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (101)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S220 (index = 6064)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (100)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (100)
, BOTTOM_UP_END
// State S221 (index = 6069)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S222 (index = 6086)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_SHIFT (230)
, BOTTOM_UP_END
// State S223 (index = 6089)
, Lexique_galgasTemplateScanner::kToken__3A_, BOTTOM_UP_REDUCE (114)
, BOTTOM_UP_END
// State S224 (index = 6092)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (116)
, BOTTOM_UP_END
// State S225 (index = 6095)
, Lexique_galgasTemplateScanner::kToken__2A_, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_identifier, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken__29_, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_literalInt, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken__40_type, BOTTOM_UP_REDUCE (119)
, Lexique_galgasTemplateScanner::kToken_unused, BOTTOM_UP_REDUCE (119)
, BOTTOM_UP_END
// State S226 (index = 6108)
, Lexique_galgasTemplateScanner::kToken_before, BOTTOM_UP_REDUCE (87)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (87)
, BOTTOM_UP_END
// State S227 (index = 6113)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (102)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (102)
, BOTTOM_UP_END
// State S228 (index = 6118)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_SHIFT (1)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_SHIFT (2)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_SHIFT (3)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_SHIFT (4)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (105)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_SHIFT (5)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_SHIFT (6)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_SHIFT (7)
, BOTTOM_UP_END
// State S229 (index = 6135)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (104)
, BOTTOM_UP_END
// State S230 (index = 6138)
, Lexique_galgasTemplateScanner::kToken__21_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken__3F__5E_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken__21__5E_, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_block, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_if, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_elsif, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_else, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_for, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_do, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_between, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_after, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_switch, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_case, BOTTOM_UP_REDUCE (31)
, Lexique_galgasTemplateScanner::kToken_, BOTTOM_UP_REDUCE (31)
, BOTTOM_UP_END
// State S231 (index = 6169)
, Lexique_galgasTemplateScanner::kToken_end, BOTTOM_UP_REDUCE (106)
, BOTTOM_UP_END} ;

static const uint32_t gActionTableIndex_templateGrammar [232] = {
  0  // S0
, 17  // S1
, 42  // S2
, 73  // S3
, 104  // S4
, 129  // S5
, 154  // S6
, 161  // S7
, 186  // S8
, 203  // S9
, 206  // S10
, 209  // S11
, 234  // S12
, 317  // S13
, 342  // S14
, 367  // S15
, 392  // S16
, 473  // S17
, 554  // S18
, 635  // S19
, 716  // S20
, 797  // S21
, 880  // S22
, 913  // S23
, 944  // S24
, 993  // S25
, 1044  // S26
, 1107  // S27
, 1178  // S28
, 1255  // S29
, 1336  // S30
, 1339  // S31
, 1342  // S32
, 1345  // S33
, 1348  // S34
, 1351  // S35
, 1356  // S36
, 1359  // S37
, 1436  // S38
, 1445  // S39
, 1522  // S40
, 1599  // S41
, 1602  // S42
, 1685  // S43
, 1766  // S44
, 1791  // S45
, 1794  // S46
, 1797  // S47
, 1802  // S48
, 1805  // S49
, 1886  // S50
, 1911  // S51
, 1936  // S52
, 1981  // S53
, 2006  // S54
, 2055  // S55
, 2080  // S56
, 2105  // S57
, 2130  // S58
, 2155  // S59
, 2180  // S60
, 2205  // S61
, 2256  // S62
, 2281  // S63
, 2306  // S64
, 2331  // S65
, 2356  // S66
, 2419  // S67
, 2444  // S68
, 2469  // S69
, 2494  // S70
, 2565  // S71
, 2568  // S72
, 2575  // S73
, 2652  // S74
, 2669  // S75
, 2690  // S76
, 2697  // S77
, 2702  // S78
, 2705  // S79
, 2708  // S80
, 2733  // S81
, 2758  // S82
, 2761  // S83
, 2766  // S84
, 2847  // S85
, 2928  // S86
, 2931  // S87
, 2940  // S88
, 2943  // S89
, 2946  // S90
, 2949  // S91
, 2952  // S92
, 2961  // S93
, 3010  // S94
, 3059  // S95
, 3110  // S96
, 3161  // S97
, 3212  // S98
, 3263  // S99
, 3314  // S100
, 3365  // S101
, 3416  // S102
, 3487  // S103
, 3558  // S104
, 3629  // S105
, 3700  // S106
, 3777  // S107
, 3854  // S108
, 3931  // S109
, 4010  // S110
, 4013  // S111
, 4016  // S112
, 4019  // S113
, 4022  // S114
, 4039  // S115
, 4042  // S116
, 4063  // S117
, 4070  // S118
, 4079  // S119
, 4088  // S120
, 4091  // S121
, 4100  // S122
, 4117  // S123
, 4120  // S124
, 4127  // S125
, 4130  // S126
, 4161  // S127
, 4170  // S128
, 4179  // S129
, 4260  // S130
, 4269  // S131
, 4272  // S132
, 4275  // S133
, 4278  // S134
, 4281  // S135
, 4362  // S136
, 4365  // S137
, 4410  // S138
, 4455  // S139
, 4504  // S140
, 4567  // S141
, 4630  // S142
, 4693  // S143
, 4756  // S144
, 4827  // S145
, 4898  // S146
, 4969  // S147
, 5046  // S148
, 5127  // S149
, 5130  // S150
, 5161  // S151
, 5168  // S152
, 5193  // S153
, 5198  // S154
, 5207  // S155
, 5216  // S156
, 5219  // S157
, 5236  // S158
, 5239  // S159
, 5262  // S160
, 5265  // S161
, 5270  // S162
, 5289  // S163
, 5294  // S164
, 5299  // S165
, 5302  // S166
, 5383  // S167
, 5392  // S168
, 5395  // S169
, 5398  // S170
, 5479  // S171
, 5482  // S172
, 5499  // S173
, 5502  // S174
, 5505  // S175
, 5508  // S176
, 5511  // S177
, 5514  // S178
, 5535  // S179
, 5542  // S180
, 5553  // S181
, 5556  // S182
, 5575  // S183
, 5580  // S184
, 5661  // S185
, 5664  // S186
, 5667  // S187
, 5688  // S188
, 5705  // S189
, 5708  // S190
, 5739  // S191
, 5764  // S192
, 5767  // S193
, 5788  // S194
, 5795  // S195
, 5800  // S196
, 5813  // S197
, 5816  // S198
, 5821  // S199
, 5834  // S200
, 5839  // S201
, 5844  // S202
, 5847  // S203
, 5928  // S204
, 5935  // S205
, 5938  // S206
, 5945  // S207
, 5966  // S208
, 5973  // S209
, 5992  // S210
, 5997  // S211
, 6010  // S212
, 6013  // S213
, 6026  // S214
, 6029  // S215
, 6032  // S216
, 6037  // S217
, 6040  // S218
, 6045  // S219
, 6064  // S220
, 6069  // S221
, 6086  // S222
, 6089  // S223
, 6092  // S224
, 6095  // S225
, 6108  // S226
, 6113  // S227
, 6118  // S228
, 6135  // S229
, 6138  // S230
, 6169  // S231
} ;

//--------------------------------------------------------------------------------------------------
//
//                                  SLR states successors table                                     
//
//--------------------------------------------------------------------------------------------------

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int32_t gSuccessorTable_templateGrammar_0 [7] = {8, 8,
  9, 9,
  29, 10, -1} ;

static const int32_t gSuccessorTable_templateGrammar_1 [15] = {0, 23,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_4 [15] = {0, 30,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_5 [15] = {0, 31,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_6 [3] = {32, 34, -1} ;

static const int32_t gSuccessorTable_templateGrammar_7 [15] = {0, 35,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_8 [5] = {8, 8,
  29, 36, -1} ;

static const int32_t gSuccessorTable_templateGrammar_11 [5] = {5, 37,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_13 [5] = {5, 39,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_14 [5] = {5, 40,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_15 [15] = {0, 41,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_21 [3] = {19, 43, -1} ;

static const int32_t gSuccessorTable_templateGrammar_22 [17] = {0, 48,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29,
  20, 49, -1} ;

static const int32_t gSuccessorTable_templateGrammar_24 [3] = {13, 52, -1} ;

static const int32_t gSuccessorTable_templateGrammar_25 [3] = {14, 54, -1} ;

static const int32_t gSuccessorTable_templateGrammar_26 [3] = {15, 61, -1} ;

static const int32_t gSuccessorTable_templateGrammar_27 [3] = {16, 66, -1} ;

static const int32_t gSuccessorTable_templateGrammar_28 [3] = {17, 70, -1} ;

static const int32_t gSuccessorTable_templateGrammar_29 [3] = {18, 73, -1} ;

static const int32_t gSuccessorTable_templateGrammar_34 [3] = {11, 77, -1} ;

static const int32_t gSuccessorTable_templateGrammar_35 [3] = {41, 79, -1} ;

static const int32_t gSuccessorTable_templateGrammar_38 [5] = {7, 82,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_42 [3] = {19, 85, -1} ;

static const int32_t gSuccessorTable_templateGrammar_44 [15] = {0, 86,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_47 [3] = {21, 91, -1} ;

static const int32_t gSuccessorTable_templateGrammar_50 [13] = {1, 93,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_51 [13] = {1, 94,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_53 [11] = {2, 95,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_55 [9] = {3, 96,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_56 [9] = {3, 97,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_57 [9] = {3, 98,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_58 [9] = {3, 99,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_59 [9] = {3, 100,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_60 [9] = {3, 101,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_62 [7] = {4, 102,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_63 [7] = {4, 103,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_64 [7] = {4, 104,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_65 [7] = {4, 105,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_67 [5] = {5, 106,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_68 [5] = {5, 107,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_69 [5] = {5, 108,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_72 [3] = {22, 113, -1} ;

static const int32_t gSuccessorTable_templateGrammar_74 [5] = {8, 114,
  24, 115, -1} ;

static const int32_t gSuccessorTable_templateGrammar_75 [5] = {8, 116,
  26, 117, -1} ;

static const int32_t gSuccessorTable_templateGrammar_76 [3] = {10, 121, -1} ;

static const int32_t gSuccessorTable_templateGrammar_77 [3] = {33, 123, -1} ;

static const int32_t gSuccessorTable_templateGrammar_78 [3] = {12, 125, -1} ;

static const int32_t gSuccessorTable_templateGrammar_80 [15] = {0, 127,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_81 [15] = {0, 128,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_87 [5] = {7, 131,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_92 [5] = {7, 136,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_93 [3] = {13, 137, -1} ;

static const int32_t gSuccessorTable_templateGrammar_94 [3] = {13, 138, -1} ;

static const int32_t gSuccessorTable_templateGrammar_95 [3] = {14, 139, -1} ;

static const int32_t gSuccessorTable_templateGrammar_102 [3] = {16, 140, -1} ;

static const int32_t gSuccessorTable_templateGrammar_103 [3] = {16, 141, -1} ;

static const int32_t gSuccessorTable_templateGrammar_104 [3] = {16, 142, -1} ;

static const int32_t gSuccessorTable_templateGrammar_105 [3] = {16, 143, -1} ;

static const int32_t gSuccessorTable_templateGrammar_106 [3] = {17, 144, -1} ;

static const int32_t gSuccessorTable_templateGrammar_107 [3] = {17, 145, -1} ;

static const int32_t gSuccessorTable_templateGrammar_108 [3] = {17, 146, -1} ;

static const int32_t gSuccessorTable_templateGrammar_109 [3] = {18, 147, -1} ;

static const int32_t gSuccessorTable_templateGrammar_114 [5] = {8, 114,
  24, 149, -1} ;

static const int32_t gSuccessorTable_templateGrammar_116 [5] = {8, 116,
  26, 151, -1} ;

static const int32_t gSuccessorTable_templateGrammar_117 [3] = {25, 153, -1} ;

static const int32_t gSuccessorTable_templateGrammar_121 [5] = {10, 155,
  30, 156, -1} ;

static const int32_t gSuccessorTable_templateGrammar_122 [5] = {8, 157,
  34, 158, -1} ;

static const int32_t gSuccessorTable_templateGrammar_124 [3] = {43, 161, -1} ;

static const int32_t gSuccessorTable_templateGrammar_127 [3] = {23, 163, -1} ;

static const int32_t gSuccessorTable_templateGrammar_128 [3] = {23, 164, -1} ;

static const int32_t gSuccessorTable_templateGrammar_130 [5] = {7, 165,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_152 [15] = {0, 171,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_153 [3] = {27, 173, -1} ;

static const int32_t gSuccessorTable_templateGrammar_155 [5] = {10, 155,
  30, 174, -1} ;

static const int32_t gSuccessorTable_templateGrammar_157 [5] = {8, 157,
  34, 176, -1} ;

static const int32_t gSuccessorTable_templateGrammar_159 [3] = {35, 178, -1} ;

static const int32_t gSuccessorTable_templateGrammar_161 [3] = {44, 181, -1} ;

static const int32_t gSuccessorTable_templateGrammar_162 [5] = {8, 182,
  42, 183, -1} ;

static const int32_t gSuccessorTable_templateGrammar_167 [5] = {7, 185,
  23, 83, -1} ;

static const int32_t gSuccessorTable_templateGrammar_172 [5] = {8, 188,
  28, 189, -1} ;

static const int32_t gSuccessorTable_templateGrammar_178 [5] = {8, 193,
  36, 194, -1} ;

static const int32_t gSuccessorTable_templateGrammar_179 [3] = {43, 195, -1} ;

static const int32_t gSuccessorTable_templateGrammar_180 [5] = {46, 199,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_182 [5] = {8, 182,
  42, 201, -1} ;

static const int32_t gSuccessorTable_templateGrammar_183 [3] = {41, 202, -1} ;

static const int32_t gSuccessorTable_templateGrammar_187 [5] = {8, 116,
  26, 204, -1} ;

static const int32_t gSuccessorTable_templateGrammar_188 [5] = {8, 188,
  28, 205, -1} ;

static const int32_t gSuccessorTable_templateGrammar_191 [15] = {0, 206,
  1, 24,
  2, 25,
  3, 26,
  4, 27,
  5, 28,
  6, 29, -1} ;

static const int32_t gSuccessorTable_templateGrammar_193 [5] = {8, 193,
  36, 208, -1} ;

static const int32_t gSuccessorTable_templateGrammar_194 [3] = {37, 210, -1} ;

static const int32_t gSuccessorTable_templateGrammar_199 [7] = {45, 212,
  46, 213,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_200 [3] = {48, 215, -1} ;

static const int32_t gSuccessorTable_templateGrammar_204 [3] = {25, 216, -1} ;

static const int32_t gSuccessorTable_templateGrammar_206 [3] = {31, 218, -1} ;

static const int32_t gSuccessorTable_templateGrammar_209 [5] = {8, 219,
  38, 220, -1} ;

static const int32_t gSuccessorTable_templateGrammar_210 [3] = {39, 222, -1} ;

static const int32_t gSuccessorTable_templateGrammar_213 [7] = {45, 224,
  46, 213,
  47, 200, -1} ;

static const int32_t gSuccessorTable_templateGrammar_219 [5] = {8, 219,
  38, 227, -1} ;

static const int32_t gSuccessorTable_templateGrammar_221 [5] = {8, 228,
  40, 229, -1} ;

static const int32_t gSuccessorTable_templateGrammar_228 [5] = {8, 228,
  40, 231, -1} ;

static const int32_t * gSuccessorTable_templateGrammar [232] = {
gSuccessorTable_templateGrammar_0, gSuccessorTable_templateGrammar_1, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_4, gSuccessorTable_templateGrammar_5, gSuccessorTable_templateGrammar_6, gSuccessorTable_templateGrammar_7, 
  gSuccessorTable_templateGrammar_8, nullptr, nullptr, gSuccessorTable_templateGrammar_11, 
  nullptr, gSuccessorTable_templateGrammar_13, gSuccessorTable_templateGrammar_14, gSuccessorTable_templateGrammar_15, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_21, gSuccessorTable_templateGrammar_22, nullptr, 
  gSuccessorTable_templateGrammar_24, gSuccessorTable_templateGrammar_25, gSuccessorTable_templateGrammar_26, gSuccessorTable_templateGrammar_27, 
  gSuccessorTable_templateGrammar_28, gSuccessorTable_templateGrammar_29, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_34, gSuccessorTable_templateGrammar_35, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_38, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_42, nullptr, 
  gSuccessorTable_templateGrammar_44, nullptr, nullptr, gSuccessorTable_templateGrammar_47, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_50, gSuccessorTable_templateGrammar_51, 
  nullptr, gSuccessorTable_templateGrammar_53, nullptr, gSuccessorTable_templateGrammar_55, 
  gSuccessorTable_templateGrammar_56, gSuccessorTable_templateGrammar_57, gSuccessorTable_templateGrammar_58, gSuccessorTable_templateGrammar_59, 
  gSuccessorTable_templateGrammar_60, nullptr, gSuccessorTable_templateGrammar_62, gSuccessorTable_templateGrammar_63, 
  gSuccessorTable_templateGrammar_64, gSuccessorTable_templateGrammar_65, nullptr, gSuccessorTable_templateGrammar_67, 
  gSuccessorTable_templateGrammar_68, gSuccessorTable_templateGrammar_69, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_72, nullptr, gSuccessorTable_templateGrammar_74, gSuccessorTable_templateGrammar_75, 
  gSuccessorTable_templateGrammar_76, gSuccessorTable_templateGrammar_77, gSuccessorTable_templateGrammar_78, nullptr, 
  gSuccessorTable_templateGrammar_80, gSuccessorTable_templateGrammar_81, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_87, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_92, gSuccessorTable_templateGrammar_93, gSuccessorTable_templateGrammar_94, gSuccessorTable_templateGrammar_95, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_102, gSuccessorTable_templateGrammar_103, 
  gSuccessorTable_templateGrammar_104, gSuccessorTable_templateGrammar_105, gSuccessorTable_templateGrammar_106, gSuccessorTable_templateGrammar_107, 
  gSuccessorTable_templateGrammar_108, gSuccessorTable_templateGrammar_109, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_114, nullptr, 
  gSuccessorTable_templateGrammar_116, gSuccessorTable_templateGrammar_117, nullptr, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_121, gSuccessorTable_templateGrammar_122, nullptr, 
  gSuccessorTable_templateGrammar_124, nullptr, nullptr, gSuccessorTable_templateGrammar_127, 
  gSuccessorTable_templateGrammar_128, nullptr, gSuccessorTable_templateGrammar_130, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_152, gSuccessorTable_templateGrammar_153, nullptr, gSuccessorTable_templateGrammar_155, 
  nullptr, gSuccessorTable_templateGrammar_157, nullptr, gSuccessorTable_templateGrammar_159, 
  nullptr, gSuccessorTable_templateGrammar_161, gSuccessorTable_templateGrammar_162, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_167, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_172, nullptr, nullptr, nullptr, 
  nullptr, nullptr, gSuccessorTable_templateGrammar_178, gSuccessorTable_templateGrammar_179, 
  gSuccessorTable_templateGrammar_180, nullptr, gSuccessorTable_templateGrammar_182, gSuccessorTable_templateGrammar_183, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_187, 
  gSuccessorTable_templateGrammar_188, nullptr, nullptr, gSuccessorTable_templateGrammar_191, 
  nullptr, gSuccessorTable_templateGrammar_193, gSuccessorTable_templateGrammar_194, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_199, 
  gSuccessorTable_templateGrammar_200, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_204, nullptr, gSuccessorTable_templateGrammar_206, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_209, gSuccessorTable_templateGrammar_210, nullptr, 
  nullptr, gSuccessorTable_templateGrammar_213, nullptr, nullptr, 
  nullptr, nullptr, nullptr, gSuccessorTable_templateGrammar_219, 
  nullptr, gSuccessorTable_templateGrammar_221, nullptr, nullptr, 
  nullptr, nullptr, nullptr, nullptr, 
  gSuccessorTable_templateGrammar_228, nullptr, nullptr, nullptr} ;

//--------------------------------------------------------------------------------------------------
//
//                Production rules infos (left non terminal, size of right string)                  
//
//--------------------------------------------------------------------------------------------------

static const int32_t gProductionsTable_templateGrammar [125 * 2] = {
  0, 2,
  1, 2,
  2, 2,
  3, 2,
  4, 2,
  5, 2,
  5, 2,
  5, 2,
  5, 2,
  6, 1,
  6, 3,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 1,
  6, 2,
  6, 2,
  6, 4,
  6, 4,
  7, 1,
  8, 2,
  8, 1,
  8, 1,
  8, 5,
  8, 7,
  9, 1,
  10, 2,
  10, 1,
  10, 1,
  11, 7,
  8, 10,
  8, 4,
  12, 3,
  13, 0,
  13, 3,
  13, 3,
  14, 0,
  14, 3,
  15, 0,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  15, 2,
  16, 0,
  16, 3,
  16, 3,
  16, 3,
  16, 3,
  17, 0,
  17, 3,
  17, 3,
  17, 3,
  18, 0,
  18, 3,
  19, 0,
  19, 2,
  20, 5,
  20, 4,
  20, 6,
  20, 4,
  20, 3,
  21, 3,
  21, 4,
  22, 1,
  22, 1,
  22, 1,
  23, 0,
  23, 3,
  23, 3,
  24, 0,
  24, 2,
  25, 0,
  25, 5,
  26, 0,
  26, 2,
  27, 0,
  27, 2,
  28, 0,
  28, 2,
  29, 0,
  29, 2,
  30, 0,
  30, 2,
  31, 0,
  31, 2,
  32, 0,
  32, 1,
  32, 1,
  33, 0,
  33, 2,
  34, 0,
  34, 2,
  35, 0,
  35, 3,
  36, 0,
  36, 2,
  37, 0,
  37, 2,
  38, 0,
  38, 2,
  39, 0,
  39, 2,
  40, 0,
  40, 2,
  41, 0,
  41, 5,
  42, 0,
  42, 2,
  43, 0,
  43, 3,
  44, 0,
  44, 4,
  45, 0,
  45, 2,
  46, 2,
  46, 1,
  46, 3,
  47, 1,
  47, 0,
  48, 0,
  48, 1,
  49, 1
} ;

//--------------------------------------------------------------------------------------------------
//
//                          'expression_tpl' non terminal implementation                            
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 0) {
  rule_templateSyntax_expression_5F_tpl_i0_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                        'relation_term_tpl' non terminal implementation                           
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 1) {
  rule_templateSyntax_relation_5F_term_5F_tpl_i1_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'relation_factor_tpl' non terminal implementation                          
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_relation_5F_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 2) {
  rule_templateSyntax_relation_5F_factor_5F_tpl_i2_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                      'simple_expression_tpl' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_simple_5F_expression_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 3) {
  rule_templateSyntax_simple_5F_expression_5F_tpl_i3_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                             'term_tpl' non terminal implementation                               
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_term_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_term_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 4) {
  rule_templateSyntax_term_5F_tpl_i4_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                            'factor_tpl' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_factor_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_indexing(inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_indexing(inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_indexing(inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_factor_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_templateSyntax_factor_5F_tpl_i5_(parameter_1, inLexique) ;
    break ;
  case 6 :
      rule_templateSyntax_factor_5F_tpl_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_templateSyntax_factor_5F_tpl_i7_(parameter_1, inLexique) ;
    break ;
  case 8 :
      rule_templateSyntax_factor_5F_tpl_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'primary_tpl' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_primary_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_indexing(inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_indexing(inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_indexing(inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_indexing(inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_indexing(inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_indexing(inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_indexing(inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_indexing(inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_indexing(inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_indexing(inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_primary_5F_tpl_ (GGS_templateExpressionAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_templateSyntax_primary_5F_tpl_i9_(parameter_1, inLexique) ;
    break ;
  case 10 :
      rule_templateSyntax_primary_5F_tpl_i10_(parameter_1, inLexique) ;
    break ;
  case 11 :
      rule_templateSyntax_primary_5F_tpl_i11_(parameter_1, inLexique) ;
    break ;
  case 12 :
      rule_templateSyntax_primary_5F_tpl_i12_(parameter_1, inLexique) ;
    break ;
  case 13 :
      rule_templateSyntax_primary_5F_tpl_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_templateSyntax_primary_5F_tpl_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_templateSyntax_primary_5F_tpl_i15_(parameter_1, inLexique) ;
    break ;
  case 16 :
      rule_templateSyntax_primary_5F_tpl_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_templateSyntax_primary_5F_tpl_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_templateSyntax_primary_5F_tpl_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_templateSyntax_primary_5F_tpl_i19_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                    'output_expression_list_tpl' non terminal implementation                      
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_output_5F_expression_5F_list_5F_tpl_ (GGS_templateExpressionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 20) {
  rule_templateSyntax_output_5F_expression_5F_list_5F_tpl_i20_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                       'template_instruction' non terminal implementation                         
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_template_5F_instruction_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_indexing(inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_indexing(inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_indexing(inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_indexing(inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_indexing(inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_indexing(inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_instruction_ (GGS_templateInstructionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_templateSyntax_template_5F_instruction_i21_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_templateSyntax_template_5F_instruction_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_templateSyntax_template_5F_instruction_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_templateSyntax_template_5F_instruction_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_templateSyntax_template_5F_instruction_i25_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_templateSyntax_template_5F_instruction_i31_(parameter_1, inLexique) ;
    break ;
  case 32 :
      rule_templateSyntax_template_5F_instruction_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                   'template_parser_start_symbol' non terminal implementation                     
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_template_5F_parser_5F_start_5F_symbol_ (GGS_templateInstructionListAST &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 26) {
  rule_templateSyntax_template_5F_parser_5F_start_5F_symbol_i26_(parameter_1, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::performIndexing (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  scanner->enableIndexing () ;
  if (scanner->sourceText ().isValid ()) {
    const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                     gProductionsTable_templateGrammar) ;
    if (ok) {
      cGrammar_templateGrammar grammar ;
      grammar.nt_template_5F_parser_5F_start_5F_symbol_indexing (scanner) ;
    }
    scanner->generateIndexFile () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlyLexicalAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performLexicalAnalysis () ;
  }
  macroDetachSharedObject (scanner) ;
}

void cGrammar_templateGrammar::performOnlySyntaxAnalysis (Compiler * inCompiler,
             const String & inSourceFilePath) {
  Lexique_galgasTemplateScanner * scanner = nullptr ;
  macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, inSourceFilePath COMMA_HERE)) ;
  if (scanner->sourceText ().isValid ()) {
    scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                     gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                     gProductionsTable_templateGrammar) ;
  }
  macroDetachSharedObject (scanner) ;
}

//--------------------------------------------------------------------------------------------------
//
//                              Grammar start symbol implementation                                 
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::_performSourceFileParsing_ (Compiler * inCompiler,
                                GGS_lstring inFilePath,
                                GGS_templateInstructionListAST &  parameter_1
                                COMMA_LOCATION_ARGS) {
  if (inFilePath.isValid ()) {
    const GGS_string filePathAsString = inFilePath.readProperty_string () ;
    String filePath = filePathAsString.stringValue () ;
    if (! FileManager::isAbsolutePath (filePath)) {
      filePath = inCompiler->sourceFilePath ().deletingLastPathComponent ().appendingPathComponent (filePath) ;
    }
    if (FileManager::fileExistsAtPath (filePath)) {
      Lexique_galgasTemplateScanner * scanner = nullptr ;
      macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
        const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                         gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                         gProductionsTable_templateGrammar) ;
        if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
          cGrammar_templateGrammar grammar ;
          grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
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

void cGrammar_templateGrammar::_performSourceStringParsing_ (Compiler * inCompiler,
                                GGS_string inSourceString,
                                GGS_string inNameString,
                                GGS_templateInstructionListAST &  parameter_1
                                COMMA_UNUSED_LOCATION_ARGS) {
  if (inSourceString.isValid () && inNameString.isValid ()) {
    const String sourceString = inSourceString.stringValue () ;
    const String nameString = inNameString.stringValue () ;
    Lexique_galgasTemplateScanner * scanner = nullptr ;
    macroMyNew (scanner, Lexique_galgasTemplateScanner (inCompiler, sourceString, nameString COMMA_HERE)) ;
    if (scanner->sourceText ().isValid ()) {
      const bool ok = scanner->performBottomUpParsing (gActionTable_templateGrammar, gNonTerminalNames_templateGrammar,
                                                       gActionTableIndex_templateGrammar, gSuccessorTable_templateGrammar,
                                                       gProductionsTable_templateGrammar) ;
      if (ok && ! executionModeIsSyntaxAnalysisOnly ()) {
        cGrammar_templateGrammar grammar ;
        grammar.nt_template_5F_parser_5F_start_5F_symbol_ (parameter_1, scanner) ;
      }
    }
    macroDetachSharedObject (scanner) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'for_instruction_element' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_indexing (Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_indexing(inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_indexing(inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_indexing(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_element_ (GGS_lstringlist &  parameter_1,
                                Lexique_galgasTemplateScanner * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_templateSyntax_for_5F_instruction_5F_element_i27_(parameter_1, inLexique) ;
    break ;
  case 28 :
      rule_templateSyntax_for_5F_instruction_5F_element_i28_(parameter_1, inLexique) ;
    break ;
  case 29 :
      rule_templateSyntax_for_5F_instruction_5F_element_i29_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                'for_instruction_enumerated_object' non terminal implementation                   
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_for_5F_instruction_5F_enumerated_5F_object_ (GGS_lstringlist &  parameter_1,
                                GGS_location &  parameter_2,
                                GGS_templateExpressionAST &  parameter_3,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 30) {
  rule_templateSyntax_for_5F_instruction_5F_enumerated_5F_object_i30_(parameter_1, parameter_2, parameter_3, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                           'switch_case' non terminal implementation                              
//
//--------------------------------------------------------------------------------------------------

void cGrammar_templateGrammar::nt_switch_5F_case_indexing (Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 33) {
  rule_templateSyntax_switch_5F_case_i33_indexing(inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

void cGrammar_templateGrammar::nt_switch_5F_case_ (GGS__5B_lstring_5D_ &  parameter_1,
                                GGS_switchExtractedValuesListAST &  parameter_2,
                                Lexique_galgasTemplateScanner * inLexique) {
  if (inLexique->nextProductionIndex () == 33) {
  rule_templateSyntax_switch_5F_case_i33_(parameter_1, parameter_2, inLexique) ;
  }else{
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_0' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_0 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  34 35 36
  return inLexique->nextProductionIndex () - 33 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_1' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_1 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  37 38
  return inLexique->nextProductionIndex () - 36 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_2' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_2 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  39 40 41 42 43 44 45
  return inLexique->nextProductionIndex () - 38 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_3' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_3 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  46 47 48 49 50
  return inLexique->nextProductionIndex () - 45 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_4' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_4 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  51 52 53 54
  return inLexique->nextProductionIndex () - 50 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_5' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_5 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_6' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_6 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_7' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_7 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  59 60 61 62 63
  return inLexique->nextProductionIndex () - 58 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_8' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_8 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  64 65
  return inLexique->nextProductionIndex () - 63 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_9' non terminal implementation                        
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_9 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  66 67 68
  return inLexique->nextProductionIndex () - 65 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_10' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_10 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  69 70 71
  return inLexique->nextProductionIndex () - 68 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_11' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_11 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_12' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_12 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_13' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_13 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_14' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_14 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_15' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_15 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_16' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_16 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  82 83
  return inLexique->nextProductionIndex () - 81 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_17' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_17 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  84 85
  return inLexique->nextProductionIndex () - 83 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_18' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_18 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  86 87
  return inLexique->nextProductionIndex () - 85 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_19' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_19 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  88 89 90
  return inLexique->nextProductionIndex () - 87 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_20' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_20 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  91 92
  return inLexique->nextProductionIndex () - 90 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_21' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_21 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  93 94
  return inLexique->nextProductionIndex () - 92 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_22' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_22 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_23' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_23 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_24' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_24 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_25' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_25 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_26' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_26 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_27' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_27 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_28' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_28 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_29' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_29 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_30' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_30 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  111 112
  return inLexique->nextProductionIndex () - 110 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_31' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_31 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  113 114
  return inLexique->nextProductionIndex () - 112 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_32' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_32 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  115 116
  return inLexique->nextProductionIndex () - 114 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_33' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_33 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  117 118 119
  return inLexique->nextProductionIndex () - 116 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_34' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_34 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//--------------------------------------------------------------------------------------------------
//
//                     'select_templateSyntax_35' non terminal implementation                       
//
//--------------------------------------------------------------------------------------------------

int32_t cGrammar_templateGrammar::select_templateSyntax_35 (Lexique_galgasTemplateScanner * inLexique) {
// Productions numbers:  122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
// @procDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procDeclarationAST::objectCompare (const GGS_procDeclarationAST & inOperand) const {
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

GGS_procDeclarationAST::GGS_procDeclarationAST (void) :
GGS_externProcedureDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::
init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                           const GGS_bool & in_isFilePrivate,
                                                                           const GGS_lstring & in_mRoutineName,
                                                                           const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                           const GGS_bool & in_usefullProcedure,
                                                                           const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                           const GGS_location & in_mEndOfRoutineInstructionList,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cPtr_procDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_procDeclarationAST (inCompiler COMMA_THERE)) ;
  object->procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, in_mRoutineInstructionList, in_mEndOfRoutineInstructionList, inCompiler) ;
  const GGS_procDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::
procDeclarationAST_init_21_isPredefined_21_isFilePrivate_21__21__21_usefullProcedure_21__21_ (const GGS_bool & in_isPredefined,
                                                                                              const GGS_bool & in_isFilePrivate,
                                                                                              const GGS_lstring & in_mRoutineName,
                                                                                              const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                                                              const GGS_bool & in_usefullProcedure,
                                                                                              const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                                                              const GGS_location & in_mEndOfRoutineInstructionList,
                                                                                              Compiler * /* inCompiler */) {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST::GGS_procDeclarationAST (const cPtr_procDeclarationAST * inSourcePtr) :
GGS_externProcedureDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListAST GGS_procDeclarationAST::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListAST () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_procDeclarationAST::readProperty_mEndOfRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_procDeclarationAST * p = (cPtr_procDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procDeclarationAST) ;
    return p->mProperty_mEndOfRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procDeclarationAST::cPtr_procDeclarationAST (const GGS_bool & in_isPredefined,
                                                  const GGS_bool & in_isFilePrivate,
                                                  const GGS_lstring & in_mRoutineName,
                                                  const GGS_formalParameterListAST & in_mFormalArgumentListAST,
                                                  const GGS_bool & in_usefullProcedure,
                                                  const GGS_semanticInstructionListAST & in_mRoutineInstructionList,
                                                  const GGS_location & in_mEndOfRoutineInstructionList,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_externProcedureDeclarationAST (in_isPredefined, in_isFilePrivate, in_mRoutineName, in_mFormalArgumentListAST, in_usefullProcedure, inCompiler COMMA_THERE),
mProperty_mRoutineInstructionList (),
mProperty_mEndOfRoutineInstructionList () {
  mProperty_isPredefined = in_isPredefined ;
  mProperty_isFilePrivate = in_isFilePrivate ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mFormalArgumentListAST = in_mFormalArgumentListAST ;
  mProperty_usefullProcedure = in_usefullProcedure ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
  mProperty_mEndOfRoutineInstructionList = in_mEndOfRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

void cPtr_procDeclarationAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@procDeclarationAST:") ;
  mProperty_isPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_isFilePrivate.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_usefullProcedure.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_procDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procDeclarationAST (mProperty_isPredefined, mProperty_isFilePrivate, mProperty_mRoutineName, mProperty_mFormalArgumentListAST, mProperty_usefullProcedure, mProperty_mRoutineInstructionList, mProperty_mEndOfRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_externProcedureDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
    mProperty_mEndOfRoutineInstructionList.printNonNullClassInstanceProperties ("mEndOfRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procDeclarationAST ("procDeclarationAST",
                                                                       & kTypeDescriptor_GALGAS_externProcedureDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_procDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_procDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procDeclarationAST GGS_procDeclarationAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_procDeclarationAST result ;
  const GGS_procDeclarationAST * p = (const GGS_procDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_procDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("procDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @routineImplementationForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration::objectCompare (const GGS_routineImplementationForGeneration & inOperand) const {
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

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (void) :
GGS_routinePrototypeDeclarationForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::
init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                       const GGS_string & in_implementationCppFileName,
                                                                                       const GGS_string & in_routineMangledName,
                                                                                       const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                       const GGS_bool & in_mGenerateStatic,
                                                                                       const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cPtr_routineImplementationForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_routineImplementationForGeneration (inCompiler COMMA_THERE)) ;
  object->routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, in_mGenerateStatic, in_mRoutineInstructionList, inCompiler) ;
  const GGS_routineImplementationForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_routineImplementationForGeneration::
routineImplementationForGeneration_init_21_generateHeader_21_implementationCppFileName_21_routineMangledName_21__21__21_ (const GGS_bool & in_generateHeader,
                                                                                                                          const GGS_string & in_implementationCppFileName,
                                                                                                                          const GGS_string & in_routineMangledName,
                                                                                                                          const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                                                          const GGS_bool & in_mGenerateStatic,
                                                                                                                          const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                                                          Compiler * /* inCompiler */) {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration::GGS_routineImplementationForGeneration (const cPtr_routineImplementationForGeneration * inSourcePtr) :
GGS_routinePrototypeDeclarationForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_routineImplementationForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_routineImplementationForGeneration::readProperty_mGenerateStatic (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mGenerateStatic ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration GGS_routineImplementationForGeneration::readProperty_mRoutineInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticInstructionListForGeneration () ;
  }else{
    cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_routineImplementationForGeneration) ;
    return p->mProperty_mRoutineInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @routineImplementationForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_routineImplementationForGeneration::cPtr_routineImplementationForGeneration (const GGS_bool & in_generateHeader,
                                                                                  const GGS_string & in_implementationCppFileName,
                                                                                  const GGS_string & in_routineMangledName,
                                                                                  const GGS_formalParameterListForGeneration & in_mFormalArgumentList,
                                                                                  const GGS_bool & in_mGenerateStatic,
                                                                                  const GGS_semanticInstructionListForGeneration & in_mRoutineInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_routinePrototypeDeclarationForGeneration (in_generateHeader, in_implementationCppFileName, in_routineMangledName, in_mFormalArgumentList, inCompiler COMMA_THERE),
mProperty_mGenerateStatic (),
mProperty_mRoutineInstructionList () {
  mProperty_generateHeader = in_generateHeader ;
  mProperty_implementationCppFileName = in_implementationCppFileName ;
  mProperty_routineMangledName = in_routineMangledName ;
  mProperty_mFormalArgumentList = in_mFormalArgumentList ;
  mProperty_mGenerateStatic = in_mGenerateStatic ;
  mProperty_mRoutineInstructionList = in_mRoutineInstructionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_routineImplementationForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

void cPtr_routineImplementationForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@routineImplementationForGeneration:") ;
  mProperty_generateHeader.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_implementationCppFileName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_routineMangledName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFormalArgumentList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGenerateStatic.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_routineImplementationForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_routineImplementationForGeneration (mProperty_generateHeader, mProperty_implementationCppFileName, mProperty_routineMangledName, mProperty_mFormalArgumentList, mProperty_mGenerateStatic, mProperty_mRoutineInstructionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_routineImplementationForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_routinePrototypeDeclarationForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mGenerateStatic.printNonNullClassInstanceProperties ("mGenerateStatic") ;
    mProperty_mRoutineInstructionList.printNonNullClassInstanceProperties ("mRoutineInstructionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration ("routineImplementationForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineImplementationForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineImplementationForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineImplementationForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration result ;
  const GGS_routineImplementationForGeneration * p = (const GGS_routineImplementationForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineImplementationForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_routineImplementationForGeneration_2E_weak::objectCompare (const GGS_routineImplementationForGeneration_2E_weak & inOperand) const {
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

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (void) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak & GGS_routineImplementationForGeneration_2E_weak::operator = (const GGS_routineImplementationForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak::GGS_routineImplementationForGeneration_2E_weak (const GGS_routineImplementationForGeneration & inSource) :
GGS_routinePrototypeDeclarationForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_routineImplementationForGeneration result ;
  if (isValid ()) {
    const cPtr_routineImplementationForGeneration * p = (cPtr_routineImplementationForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_routineImplementationForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration GGS_routineImplementationForGeneration_2E_weak::bang_routineImplementationForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_routineImplementationForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_routineImplementationForGeneration) ;
      result = GGS_routineImplementationForGeneration ((cPtr_routineImplementationForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @routineImplementationForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ("routineImplementationForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_routineImplementationForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_routineImplementationForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_routineImplementationForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_routineImplementationForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_routineImplementationForGeneration_2E_weak GGS_routineImplementationForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_routineImplementationForGeneration_2E_weak result ;
  const GGS_routineImplementationForGeneration_2E_weak * p = (const GGS_routineImplementationForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_routineImplementationForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("routineImplementationForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @nonTerminalInstructionForGrammarAnalysis reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_nonTerminalInstructionForGrammarAnalysis::objectCompare (const GGS_nonTerminalInstructionForGrammarAnalysis & inOperand) const {
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

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (void) :
GGS_abstractSyntaxInstructionForGrammarAnalysis () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::
init_21__21__21_ (const GGS_location & in_mStartLocation,
                  const GGS_lstring & in_mNonterminalSymbolName,
                  const GGS_uint & in_mNonterminalSymbolIndex,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_nonTerminalInstructionForGrammarAnalysis * object = nullptr ;
  macroMyNew (object, cPtr_nonTerminalInstructionForGrammarAnalysis (inCompiler COMMA_THERE)) ;
  object->nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (in_mStartLocation, in_mNonterminalSymbolName, in_mNonterminalSymbolIndex, inCompiler) ;
  const GGS_nonTerminalInstructionForGrammarAnalysis result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_nonTerminalInstructionForGrammarAnalysis::
nonTerminalInstructionForGrammarAnalysis_init_21__21__21_ (const GGS_location & in_mStartLocation,
                                                           const GGS_lstring & in_mNonterminalSymbolName,
                                                           const GGS_uint & in_mNonterminalSymbolIndex,
                                                           Compiler * /* inCompiler */) {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis::GGS_nonTerminalInstructionForGrammarAnalysis (const cPtr_nonTerminalInstructionForGrammarAnalysis * inSourcePtr) :
GGS_abstractSyntaxInstructionForGrammarAnalysis (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_nonTerminalInstructionForGrammarAnalysis::readProperty_mNonterminalSymbolIndex (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_nonTerminalInstructionForGrammarAnalysis * p = (cPtr_nonTerminalInstructionForGrammarAnalysis *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_nonTerminalInstructionForGrammarAnalysis) ;
    return p->mProperty_mNonterminalSymbolIndex ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @nonTerminalInstructionForGrammarAnalysis class
//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
}

//--------------------------------------------------------------------------------------------------

cPtr_nonTerminalInstructionForGrammarAnalysis::cPtr_nonTerminalInstructionForGrammarAnalysis (const GGS_location & in_mStartLocation,
                                                                                              const GGS_lstring & in_mNonterminalSymbolName,
                                                                                              const GGS_uint & in_mNonterminalSymbolIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractSyntaxInstructionForGrammarAnalysis (in_mStartLocation, inCompiler COMMA_THERE),
mProperty_mNonterminalSymbolName (),
mProperty_mNonterminalSymbolIndex () {
  mProperty_mStartLocation = in_mStartLocation ;
  mProperty_mNonterminalSymbolName = in_mNonterminalSymbolName ;
  mProperty_mNonterminalSymbolIndex = in_mNonterminalSymbolIndex ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_nonTerminalInstructionForGrammarAnalysis::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

void cPtr_nonTerminalInstructionForGrammarAnalysis::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@nonTerminalInstructionForGrammarAnalysis:") ;
  mProperty_mStartLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNonterminalSymbolIndex.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_nonTerminalInstructionForGrammarAnalysis::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_nonTerminalInstructionForGrammarAnalysis (mProperty_mStartLocation, mProperty_mNonterminalSymbolName, mProperty_mNonterminalSymbolIndex, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_nonTerminalInstructionForGrammarAnalysis::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractSyntaxInstructionForGrammarAnalysis::printNonNullClassInstanceProperties () ;
    mProperty_mNonterminalSymbolName.printNonNullClassInstanceProperties ("mNonterminalSymbolName") ;
    mProperty_mNonterminalSymbolIndex.printNonNullClassInstanceProperties ("mNonterminalSymbolIndex") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @nonTerminalInstructionForGrammarAnalysis generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ("nonTerminalInstructionForGrammarAnalysis",
                                                                                             & kTypeDescriptor_GALGAS_abstractSyntaxInstructionForGrammarAnalysis) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalInstructionForGrammarAnalysis::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalInstructionForGrammarAnalysis ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_nonTerminalInstructionForGrammarAnalysis::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_nonTerminalInstructionForGrammarAnalysis (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalInstructionForGrammarAnalysis GGS_nonTerminalInstructionForGrammarAnalysis::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_nonTerminalInstructionForGrammarAnalysis result ;
  const GGS_nonTerminalInstructionForGrammarAnalysis * p = (const GGS_nonTerminalInstructionForGrammarAnalysis *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_nonTerminalInstructionForGrammarAnalysis *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("nonTerminalInstructionForGrammarAnalysis", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionAST::objectCompare (const GGS_classFuncExpressionAST & inOperand) const {
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

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::
init_21__21__21__21_ (const GGS_lstring & in_typeName,
                      const GGS_lstring & in_classFuncName,
                      const GGS_actualOutputArgumentList & in_expressions,
                      const GGS_location & in_locationForOldStyleCollectionInitializerError,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionAST (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionAST_init_21__21__21__21_ (in_typeName, in_classFuncName, in_expressions, in_locationForOldStyleCollectionInitializerError, inCompiler) ;
  const GGS_classFuncExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionAST::
classFuncExpressionAST_init_21__21__21__21_ (const GGS_lstring & in_typeName,
                                             const GGS_lstring & in_classFuncName,
                                             const GGS_actualOutputArgumentList & in_expressions,
                                             const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                             Compiler * /* inCompiler */) {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST::GGS_classFuncExpressionAST (const cPtr_classFuncExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_typeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_typeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_classFuncExpressionAST::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_classFuncExpressionAST::readProperty_expressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_expressions ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classFuncExpressionAST::readProperty_locationForOldStyleCollectionInitializerError (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_classFuncExpressionAST * p = (cPtr_classFuncExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionAST) ;
    return p->mProperty_locationForOldStyleCollectionInitializerError ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionAST::cPtr_classFuncExpressionAST (const GGS_lstring & in_typeName,
                                                          const GGS_lstring & in_classFuncName,
                                                          const GGS_actualOutputArgumentList & in_expressions,
                                                          const GGS_location & in_locationForOldStyleCollectionInitializerError,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_typeName (),
mProperty_classFuncName (),
mProperty_expressions (),
mProperty_locationForOldStyleCollectionInitializerError () {
  mProperty_typeName = in_typeName ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_expressions = in_expressions ;
  mProperty_locationForOldStyleCollectionInitializerError = in_locationForOldStyleCollectionInitializerError ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

void cPtr_classFuncExpressionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionAST:") ;
  mProperty_typeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressions.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_locationForOldStyleCollectionInitializerError.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionAST (mProperty_typeName, mProperty_classFuncName, mProperty_expressions, mProperty_locationForOldStyleCollectionInitializerError, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_typeName.printNonNullClassInstanceProperties ("typeName") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_expressions.printNonNullClassInstanceProperties ("expressions") ;
    mProperty_locationForOldStyleCollectionInitializerError.printNonNullClassInstanceProperties ("locationForOldStyleCollectionInitializerError") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionAST ("classFuncExpressionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionAST GGS_classFuncExpressionAST::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionAST result ;
  const GGS_classFuncExpressionAST * p = (const GGS_classFuncExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @classFuncExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration::objectCompare (const GGS_classFuncExpressionForGeneration & inOperand) const {
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

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                  const GGS_location & in_mLocation,
                                  const GGS_unifiedTypeMapEntry & in_classFuncType,
                                  const GGS_string & in_classFuncName,
                                  const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                  const GGS_bool & in_mHasCompilerArgument,
                                  const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_classFuncExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_classFuncExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (in_mResultType, in_mLocation, in_classFuncType, in_classFuncName, in_mEffectiveParameterList, in_mHasCompilerArgument, in_requiredTypes, inCompiler) ;
  const GGS_classFuncExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_classFuncExpressionForGeneration::
classFuncExpressionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                   const GGS_location & in_mLocation,
                                                                   const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                   const GGS_string & in_classFuncName,
                                                                   const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                   const GGS_bool & in_mHasCompilerArgument,
                                                                   const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration::GGS_classFuncExpressionForGeneration (const cPtr_classFuncExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classFuncExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_classFuncExpressionForGeneration::readProperty_classFuncType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_classFuncExpressionForGeneration::readProperty_classFuncName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_classFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionListForGeneration GGS_classFuncExpressionForGeneration::readProperty_mEffectiveParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionListForGeneration () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mEffectiveParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classFuncExpressionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_unifiedTypeMapEntry_5D_ GGS_classFuncExpressionForGeneration::readProperty_requiredTypes (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_unifiedTypeMapEntry_5D_ () ;
  }else{
    cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classFuncExpressionForGeneration) ;
    return p->mProperty_requiredTypes ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @classFuncExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
}

//--------------------------------------------------------------------------------------------------

cPtr_classFuncExpressionForGeneration::cPtr_classFuncExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                              const GGS_location & in_mLocation,
                                                                              const GGS_unifiedTypeMapEntry & in_classFuncType,
                                                                              const GGS_string & in_classFuncName,
                                                                              const GGS_semanticExpressionListForGeneration & in_mEffectiveParameterList,
                                                                              const GGS_bool & in_mHasCompilerArgument,
                                                                              const GGS__5B_unifiedTypeMapEntry_5D_ & in_requiredTypes,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_classFuncType (),
mProperty_classFuncName (),
mProperty_mEffectiveParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_requiredTypes () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_classFuncType = in_classFuncType ;
  mProperty_classFuncName = in_classFuncName ;
  mProperty_mEffectiveParameterList = in_mEffectiveParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_requiredTypes = in_requiredTypes ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_classFuncExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

void cPtr_classFuncExpressionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@classFuncExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_classFuncName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEffectiveParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_requiredTypes.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_classFuncExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_classFuncExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_classFuncType, mProperty_classFuncName, mProperty_mEffectiveParameterList, mProperty_mHasCompilerArgument, mProperty_requiredTypes, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_classFuncExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_classFuncType.printNonNullClassInstanceProperties ("classFuncType") ;
    mProperty_classFuncName.printNonNullClassInstanceProperties ("classFuncName") ;
    mProperty_mEffectiveParameterList.printNonNullClassInstanceProperties ("mEffectiveParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_requiredTypes.printNonNullClassInstanceProperties ("requiredTypes") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ("classFuncExpressionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration result ;
  const GGS_classFuncExpressionForGeneration * p = (const GGS_classFuncExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_classFuncExpressionForGeneration_2E_weak::objectCompare (const GGS_classFuncExpressionForGeneration_2E_weak & inOperand) const {
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

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (void) :
GGS_semanticExpressionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak & GGS_classFuncExpressionForGeneration_2E_weak::operator = (const GGS_classFuncExpressionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak::GGS_classFuncExpressionForGeneration_2E_weak (const GGS_classFuncExpressionForGeneration & inSource) :
GGS_semanticExpressionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_classFuncExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_classFuncExpressionForGeneration * p = (cPtr_classFuncExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_classFuncExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration GGS_classFuncExpressionForGeneration_2E_weak::bang_classFuncExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_classFuncExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_classFuncExpressionForGeneration) ;
      result = GGS_classFuncExpressionForGeneration ((cPtr_classFuncExpressionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @classFuncExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ("classFuncExpressionForGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classFuncExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classFuncExpressionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classFuncExpressionForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classFuncExpressionForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classFuncExpressionForGeneration_2E_weak GGS_classFuncExpressionForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_classFuncExpressionForGeneration_2E_weak result ;
  const GGS_classFuncExpressionForGeneration_2E_weak * p = (const GGS_classFuncExpressionForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classFuncExpressionForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classFuncExpressionForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @collectionValueAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_collectionValueAST::objectCompare (const GGS_collectionValueAST & inOperand) const {
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

GGS_collectionValueAST::GGS_collectionValueAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST::
init_21__21__21_ (const GGS_lstring & in_mTypeName,
                  const GGS_collectionValueElementList & in_mExpressionList,
                  const GGS_location & in_mEndOfCollectionValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_collectionValueAST * object = nullptr ;
  macroMyNew (object, cPtr_collectionValueAST (inCompiler COMMA_THERE)) ;
  object->collectionValueAST_init_21__21__21_ (in_mTypeName, in_mExpressionList, in_mEndOfCollectionValue, inCompiler) ;
  const GGS_collectionValueAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_collectionValueAST::
collectionValueAST_init_21__21__21_ (const GGS_lstring & in_mTypeName,
                                     const GGS_collectionValueElementList & in_mExpressionList,
                                     const GGS_location & in_mEndOfCollectionValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST::GGS_collectionValueAST (const cPtr_collectionValueAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_collectionValueAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_collectionValueAST::readProperty_mTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList GGS_collectionValueAST::readProperty_mExpressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementList () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mExpressionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_collectionValueAST::readProperty_mEndOfCollectionValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_collectionValueAST * p = (cPtr_collectionValueAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_collectionValueAST) ;
    return p->mProperty_mEndOfCollectionValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @collectionValueAST class
//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_collectionValueAST::cPtr_collectionValueAST (const GGS_lstring & in_mTypeName,
                                                  const GGS_collectionValueElementList & in_mExpressionList,
                                                  const GGS_location & in_mEndOfCollectionValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mTypeName (),
mProperty_mExpressionList (),
mProperty_mEndOfCollectionValue () {
  mProperty_mTypeName = in_mTypeName ;
  mProperty_mExpressionList = in_mExpressionList ;
  mProperty_mEndOfCollectionValue = in_mEndOfCollectionValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_collectionValueAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

void cPtr_collectionValueAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@collectionValueAST:") ;
  mProperty_mTypeName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfCollectionValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_collectionValueAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_collectionValueAST (mProperty_mTypeName, mProperty_mExpressionList, mProperty_mEndOfCollectionValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_collectionValueAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mTypeName.printNonNullClassInstanceProperties ("mTypeName") ;
    mProperty_mExpressionList.printNonNullClassInstanceProperties ("mExpressionList") ;
    mProperty_mEndOfCollectionValue.printNonNullClassInstanceProperties ("mEndOfCollectionValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @collectionValueAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueAST ("collectionValueAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_collectionValueAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_collectionValueAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueAST GGS_collectionValueAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_collectionValueAST result ;
  const GGS_collectionValueAST * p = (const GGS_collectionValueAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_collectionValueAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("collectionValueAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @expressionCollectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_expressionCollectionForGeneration::objectCompare (const GGS_expressionCollectionForGeneration & inOperand) const {
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

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_collectionValueElementListForGeneration & in_expressionList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_expressionCollectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_expressionCollectionForGeneration (inCompiler COMMA_THERE)) ;
  object->expressionCollectionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_expressionList, inCompiler) ;
  const GGS_expressionCollectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_expressionCollectionForGeneration::
expressionCollectionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration::GGS_expressionCollectionForGeneration (const cPtr_expressionCollectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_expressionCollectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementListForGeneration GGS_expressionCollectionForGeneration::readProperty_expressionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_collectionValueElementListForGeneration () ;
  }else{
    cPtr_expressionCollectionForGeneration * p = (cPtr_expressionCollectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_expressionCollectionForGeneration) ;
    return p->mProperty_expressionList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @expressionCollectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_expressionList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_expressionCollectionForGeneration::cPtr_expressionCollectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_collectionValueElementListForGeneration & in_expressionList,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_expressionList () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_expressionList = in_expressionList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_expressionCollectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

void cPtr_expressionCollectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@expressionCollectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_expressionList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_expressionCollectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_expressionCollectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_expressionList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_expressionCollectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_expressionList.printNonNullClassInstanceProperties ("expressionList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @expressionCollectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_expressionCollectionForGeneration ("expressionCollectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_expressionCollectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_expressionCollectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_expressionCollectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_expressionCollectionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_expressionCollectionForGeneration GGS_expressionCollectionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_expressionCollectionForGeneration result ;
  const GGS_expressionCollectionForGeneration * p = (const GGS_expressionCollectionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_expressionCollectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("expressionCollectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionAST::objectCompare (const GGS_varInExpressionAST & inOperand) const {
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

GGS_varInExpressionAST::GGS_varInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST::
init_21_ (const GGS_lstring & in_mVarName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionAST (inCompiler COMMA_THERE)) ;
  object->varInExpressionAST_init_21_ (in_mVarName, inCompiler) ;
  const GGS_varInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionAST::
varInExpressionAST_init_21_ (const GGS_lstring & in_mVarName,
                             Compiler * /* inCompiler */) {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST::GGS_varInExpressionAST (const cPtr_varInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_varInExpressionAST::readProperty_mVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_varInExpressionAST * p = (cPtr_varInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionAST) ;
    return p->mProperty_mVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionAST::cPtr_varInExpressionAST (const GGS_lstring & in_mVarName,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mVarName () {
  mProperty_mVarName = in_mVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

void cPtr_varInExpressionAST::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionAST:") ;
  mProperty_mVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionAST (mProperty_mVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mVarName.printNonNullClassInstanceProperties ("mVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionAST ("varInExpressionAST",
                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionAST GGS_varInExpressionAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_varInExpressionAST result ;
  const GGS_varInExpressionAST * p = (const GGS_varInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @varInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_varInExpressionForGeneration::objectCompare (const GGS_varInExpressionForGeneration & inOperand) const {
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

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mCppVarName,
                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_varInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_varInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->varInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mCppVarName, in_mNameForCheckingFormalParameterUsing, inCompiler) ;
  const GGS_varInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_varInExpressionForGeneration::
varInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                   const GGS_location & in_mLocation,
                                                   const GGS_string & in_mCppVarName,
                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                   Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration::GGS_varInExpressionForGeneration (const cPtr_varInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_varInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mCppVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mCppVarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_varInExpressionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_varInExpressionForGeneration * p = (cPtr_varInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_varInExpressionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @varInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
}

//--------------------------------------------------------------------------------------------------

cPtr_varInExpressionForGeneration::cPtr_varInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                      const GGS_location & in_mLocation,
                                                                      const GGS_string & in_mCppVarName,
                                                                      const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCppVarName (),
mProperty_mNameForCheckingFormalParameterUsing () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCppVarName = in_mCppVarName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_varInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

void cPtr_varInExpressionForGeneration::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("[@varInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCppVarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_varInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_varInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCppVarName, mProperty_mNameForCheckingFormalParameterUsing, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_varInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCppVarName.printNonNullClassInstanceProperties ("mCppVarName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @varInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_varInExpressionForGeneration ("varInExpressionForGeneration",
                                                                                 & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_varInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_varInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_varInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_varInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_varInExpressionForGeneration GGS_varInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_varInExpressionForGeneration result ;
  const GGS_varInExpressionForGeneration * p = (const GGS_varInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_varInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("varInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionExpressionAST::objectCompare (const GGS_optionExpressionAST & inOperand) const {
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

GGS_optionExpressionAST::GGS_optionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                  const GGS_lstring & in_mOptionEntryName,
                  const GGS_lstring & in_mOptionGetterName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_optionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_optionExpressionAST (inCompiler COMMA_THERE)) ;
  object->optionExpressionAST_init_21__21__21_ (in_mOptionComponentName, in_mOptionEntryName, in_mOptionGetterName, inCompiler) ;
  const GGS_optionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionExpressionAST::
optionExpressionAST_init_21__21__21_ (const GGS_lstring & in_mOptionComponentName,
                                      const GGS_lstring & in_mOptionEntryName,
                                      const GGS_lstring & in_mOptionGetterName,
                                      Compiler * /* inCompiler */) {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST::GGS_optionExpressionAST (const cPtr_optionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_optionExpressionAST::readProperty_mOptionGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_optionExpressionAST * p = (cPtr_optionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionExpressionAST) ;
    return p->mProperty_mOptionGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionExpressionAST::cPtr_optionExpressionAST (const GGS_lstring & in_mOptionComponentName,
                                                    const GGS_lstring & in_mOptionEntryName,
                                                    const GGS_lstring & in_mOptionGetterName,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName (),
mProperty_mOptionGetterName () {
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
  mProperty_mOptionGetterName = in_mOptionGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

void cPtr_optionExpressionAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionExpressionAST:") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionExpressionAST (mProperty_mOptionComponentName, mProperty_mOptionEntryName, mProperty_mOptionGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
    mProperty_mOptionGetterName.printNonNullClassInstanceProperties ("mOptionGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionExpressionAST ("optionExpressionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionExpressionAST GGS_optionExpressionAST::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_optionExpressionAST result ;
  const GGS_optionExpressionAST * p = (const GGS_optionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionValueExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionValueExpressionForGeneration::objectCompare (const GGS_optionValueExpressionForGeneration & inOperand) const {
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

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionValueExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionValueExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionValueExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionValueExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionValueExpressionForGeneration::
optionValueExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_bool & in_mOptionComponentIsPredefined,
                                                             const GGS_string & in_mOptionComponentName,
                                                             const GGS_string & in_mOptionEntryName,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration::GGS_optionValueExpressionForGeneration (const cPtr_optionValueExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionValueExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionValueExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionValueExpressionForGeneration * p = (cPtr_optionValueExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionValueExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionValueExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionValueExpressionForGeneration::cPtr_optionValueExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                  const GGS_string & in_mOptionComponentName,
                                                                                  const GGS_string & in_mOptionEntryName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionValueExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

void cPtr_optionValueExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@optionValueExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionValueExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionValueExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionValueExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionValueExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ("optionValueExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionValueExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionValueExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionValueExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionValueExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionValueExpressionForGeneration GGS_optionValueExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_optionValueExpressionForGeneration result ;
  const GGS_optionValueExpressionForGeneration * p = (const GGS_optionValueExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionValueExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionValueExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCharExpressionForGeneration::objectCompare (const GGS_optionCharExpressionForGeneration & inOperand) const {
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

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCharExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCharExpressionForGeneration::
optionCharExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_bool & in_mOptionComponentIsPredefined,
                                                            const GGS_string & in_mOptionComponentName,
                                                            const GGS_string & in_mOptionEntryName,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration::GGS_optionCharExpressionForGeneration (const cPtr_optionCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCharExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCharExpressionForGeneration * p = (cPtr_optionCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCharExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCharExpressionForGeneration::cPtr_optionCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                const GGS_string & in_mOptionComponentName,
                                                                                const GGS_string & in_mOptionEntryName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

void cPtr_optionCharExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ("optionCharExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCharExpressionForGeneration GGS_optionCharExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_optionCharExpressionForGeneration result ;
  const GGS_optionCharExpressionForGeneration * p = (const GGS_optionCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionStringExpressionForGeneration::objectCompare (const GGS_optionStringExpressionForGeneration & inOperand) const {
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

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionStringExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionStringExpressionForGeneration::
optionStringExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                              const GGS_location & in_mLocation,
                                                              const GGS_bool & in_mOptionComponentIsPredefined,
                                                              const GGS_string & in_mOptionComponentName,
                                                              const GGS_string & in_mOptionEntryName,
                                                              Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration::GGS_optionStringExpressionForGeneration (const cPtr_optionStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionStringExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionStringExpressionForGeneration * p = (cPtr_optionStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionStringExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionStringExpressionForGeneration::cPtr_optionStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                    const GGS_location & in_mLocation,
                                                                                    const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                    const GGS_string & in_mOptionComponentName,
                                                                                    const GGS_string & in_mOptionEntryName,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

void cPtr_optionStringExpressionForGeneration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@optionStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ("optionStringExpressionForGeneration",
                                                                                        & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionStringExpressionForGeneration GGS_optionStringExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_optionStringExpressionForGeneration result ;
  const GGS_optionStringExpressionForGeneration * p = (const GGS_optionStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @optionCommentExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_optionCommentExpressionForGeneration::objectCompare (const GGS_optionCommentExpressionForGeneration & inOperand) const {
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

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration::
init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                          const GGS_location & in_mLocation,
                          const GGS_bool & in_mOptionComponentIsPredefined,
                          const GGS_string & in_mOptionComponentName,
                          const GGS_string & in_mOptionEntryName,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_optionCommentExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_optionCommentExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->optionCommentExpressionForGeneration_init_21__21__21__21__21_ (in_mResultType, in_mLocation, in_mOptionComponentIsPredefined, in_mOptionComponentName, in_mOptionEntryName, inCompiler) ;
  const GGS_optionCommentExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_optionCommentExpressionForGeneration::
optionCommentExpressionForGeneration_init_21__21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                               const GGS_location & in_mLocation,
                                                               const GGS_bool & in_mOptionComponentIsPredefined,
                                                               const GGS_string & in_mOptionComponentName,
                                                               const GGS_string & in_mOptionEntryName,
                                                               Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration::GGS_optionCommentExpressionForGeneration (const cPtr_optionCommentExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_optionCommentExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentIsPredefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentIsPredefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_optionCommentExpressionForGeneration::readProperty_mOptionEntryName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_optionCommentExpressionForGeneration * p = (cPtr_optionCommentExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_optionCommentExpressionForGeneration) ;
    return p->mProperty_mOptionEntryName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @optionCommentExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_optionCommentExpressionForGeneration::cPtr_optionCommentExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bool & in_mOptionComponentIsPredefined,
                                                                                      const GGS_string & in_mOptionComponentName,
                                                                                      const GGS_string & in_mOptionEntryName,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mOptionComponentIsPredefined (),
mProperty_mOptionComponentName (),
mProperty_mOptionEntryName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mOptionComponentIsPredefined = in_mOptionComponentIsPredefined ;
  mProperty_mOptionComponentName = in_mOptionComponentName ;
  mProperty_mOptionEntryName = in_mOptionEntryName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_optionCommentExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

void cPtr_optionCommentExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@optionCommentExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentIsPredefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionEntryName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_optionCommentExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_optionCommentExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mOptionComponentIsPredefined, mProperty_mOptionComponentName, mProperty_mOptionEntryName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_optionCommentExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mOptionComponentIsPredefined.printNonNullClassInstanceProperties ("mOptionComponentIsPredefined") ;
    mProperty_mOptionComponentName.printNonNullClassInstanceProperties ("mOptionComponentName") ;
    mProperty_mOptionEntryName.printNonNullClassInstanceProperties ("mOptionEntryName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @optionCommentExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ("optionCommentExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionCommentExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionCommentExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionCommentExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionCommentExpressionForGeneration GGS_optionCommentExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionCommentExpressionForGeneration result ;
  const GGS_optionCommentExpressionForGeneration * p = (const GGS_optionCommentExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionCommentExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionCommentExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalCharExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalCharExpressionForGeneration::objectCompare (const GGS_literalCharExpressionForGeneration & inOperand) const {
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

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_char & in_mCharacter,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalCharExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalCharExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalCharExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mCharacter, inCompiler) ;
  const GGS_literalCharExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalCharExpressionForGeneration::
literalCharExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_char & in_mCharacter,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration::GGS_literalCharExpressionForGeneration (const cPtr_literalCharExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalCharExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_char GGS_literalCharExpressionForGeneration::readProperty_mCharacter (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_char () ;
  }else{
    cPtr_literalCharExpressionForGeneration * p = (cPtr_literalCharExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalCharExpressionForGeneration) ;
    return p->mProperty_mCharacter ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalCharExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mCharacter () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalCharExpressionForGeneration::cPtr_literalCharExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_char & in_mCharacter,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mCharacter () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mCharacter = in_mCharacter ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalCharExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

void cPtr_literalCharExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalCharExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCharacter.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalCharExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalCharExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mCharacter, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalCharExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mCharacter.printNonNullClassInstanceProperties ("mCharacter") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalCharExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ("literalCharExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalCharExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalCharExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalCharExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalCharExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalCharExpressionForGeneration GGS_literalCharExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalCharExpressionForGeneration result ;
  const GGS_literalCharExpressionForGeneration * p = (const GGS_literalCharExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalCharExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalCharExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionAST::objectCompare (const GGS_literalBigIntExpressionAST & inOperand) const {
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

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST::
init_21_ (const GGS_lbigint & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionAST (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionAST_init_21_ (in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionAST::
literalBigIntExpressionAST_init_21_ (const GGS_lbigint & in_mValue,
                                     Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST::GGS_literalBigIntExpressionAST (const cPtr_literalBigIntExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbigint GGS_literalBigIntExpressionAST::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbigint () ;
  }else{
    cPtr_literalBigIntExpressionAST * p = (cPtr_literalBigIntExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionAST) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionAST::cPtr_literalBigIntExpressionAST (const GGS_lbigint & in_mValue,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

void cPtr_literalBigIntExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionAST:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionAST (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionAST ("literalBigIntExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionAST GGS_literalBigIntExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionAST result ;
  const GGS_literalBigIntExpressionAST * p = (const GGS_literalBigIntExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalUIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUIntExpressionForGeneration::objectCompare (const GGS_literalUIntExpressionForGeneration & inOperand) const {
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

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUIntExpressionForGeneration::
literalUIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_uint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration::GGS_literalUIntExpressionForGeneration (const cPtr_literalUIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_literalUIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint () ;
  }else{
    cPtr_literalUIntExpressionForGeneration * p = (cPtr_literalUIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUIntExpressionForGeneration::cPtr_literalUIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_uint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

void cPtr_literalUIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ("literalUIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUIntExpressionForGeneration GGS_literalUIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUIntExpressionForGeneration result ;
  const GGS_literalUIntExpressionForGeneration * p = (const GGS_literalUIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalUInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalUInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalUInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_uint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalUInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalUInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalUInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalUInt_36__34_ExpressionForGeneration::
literalUInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_uint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration::GGS_literalUInt_36__34_ExpressionForGeneration (const cPtr_literalUInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_uint_36__34_ GGS_literalUInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_uint_36__34_ () ;
  }else{
    cPtr_literalUInt_36__34_ExpressionForGeneration * p = (cPtr_literalUInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalUInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalUInt_36__34_ExpressionForGeneration::cPtr_literalUInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_uint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalUInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalUInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalUInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalUInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalUInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalUInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalUInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ("literalUInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalUInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalUInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalUInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalUInt_36__34_ExpressionForGeneration GGS_literalUInt_36__34_ExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalUInt_36__34_ExpressionForGeneration result ;
  const GGS_literalUInt_36__34_ExpressionForGeneration * p = (const GGS_literalUInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalUInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalUInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalSIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSIntExpressionForGeneration::objectCompare (const GGS_literalSIntExpressionForGeneration & inOperand) const {
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

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSIntExpressionForGeneration::
literalSIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                     const GGS_location & in_mLocation,
                                                     const GGS_sint & in_mValue,
                                                     Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration::GGS_literalSIntExpressionForGeneration (const cPtr_literalSIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint GGS_literalSIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint () ;
  }else{
    cPtr_literalSIntExpressionForGeneration * p = (cPtr_literalSIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSIntExpressionForGeneration::cPtr_literalSIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                  const GGS_location & in_mLocation,
                                                                                  const GGS_sint & in_mValue,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

void cPtr_literalSIntExpressionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ("literalSIntExpressionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSIntExpressionForGeneration GGS_literalSIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSIntExpressionForGeneration result ;
  const GGS_literalSIntExpressionForGeneration * p = (const GGS_literalSIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalSInt_36__34_ExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalSInt_36__34_ExpressionForGeneration::objectCompare (const GGS_literalSInt_36__34_ExpressionForGeneration & inOperand) const {
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

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_sint_36__34_ & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalSInt_36__34_ExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalSInt_36__34_ExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalSInt_36__34_ExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalSInt_36__34_ExpressionForGeneration::
literalSInt_36__34_ExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                             const GGS_location & in_mLocation,
                                                             const GGS_sint_36__34_ & in_mValue,
                                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration::GGS_literalSInt_36__34_ExpressionForGeneration (const cPtr_literalSInt_36__34_ExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_sint_36__34_ GGS_literalSInt_36__34_ExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_sint_36__34_ () ;
  }else{
    cPtr_literalSInt_36__34_ExpressionForGeneration * p = (cPtr_literalSInt_36__34_ExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalSInt64ExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalSInt_36__34_ExpressionForGeneration::cPtr_literalSInt_36__34_ExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                                  const GGS_location & in_mLocation,
                                                                                                  const GGS_sint_36__34_ & in_mValue,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalSInt_36__34_ExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

void cPtr_literalSInt_36__34_ExpressionForGeneration::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@literalSInt64ExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalSInt_36__34_ExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalSInt_36__34_ExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalSInt_36__34_ExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalSInt64ExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ("literalSInt64ExpressionForGeneration",
                                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalSInt_36__34_ExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalSInt_36__34_ExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalSInt_36__34_ExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalSInt_36__34_ExpressionForGeneration GGS_literalSInt_36__34_ExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_literalSInt_36__34_ExpressionForGeneration result ;
  const GGS_literalSInt_36__34_ExpressionForGeneration * p = (const GGS_literalSInt_36__34_ExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalSInt_36__34_ExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalSInt64ExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalBigIntExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalBigIntExpressionForGeneration::objectCompare (const GGS_literalBigIntExpressionForGeneration & inOperand) const {
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

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_bigint & in_mValue,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalBigIntExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalBigIntExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalBigIntExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mValue, inCompiler) ;
  const GGS_literalBigIntExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalBigIntExpressionForGeneration::
literalBigIntExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_bigint & in_mValue,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration::GGS_literalBigIntExpressionForGeneration (const cPtr_literalBigIntExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalBigIntExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bigint GGS_literalBigIntExpressionForGeneration::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bigint () ;
  }else{
    cPtr_literalBigIntExpressionForGeneration * p = (cPtr_literalBigIntExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalBigIntExpressionForGeneration) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalBigIntExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalBigIntExpressionForGeneration::cPtr_literalBigIntExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_bigint & in_mValue,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalBigIntExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

void cPtr_literalBigIntExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalBigIntExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalBigIntExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalBigIntExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalBigIntExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalBigIntExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ("literalBigIntExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalBigIntExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalBigIntExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalBigIntExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalBigIntExpressionForGeneration GGS_literalBigIntExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalBigIntExpressionForGeneration result ;
  const GGS_literalBigIntExpressionForGeneration * p = (const GGS_literalBigIntExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalBigIntExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalBigIntExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @literalStringExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_literalStringExpressionForGeneration::objectCompare (const GGS_literalStringExpressionForGeneration & inOperand) const {
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

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_string & in_mString,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_literalStringExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_literalStringExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->literalStringExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mString, inCompiler) ;
  const GGS_literalStringExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_literalStringExpressionForGeneration::
literalStringExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                       const GGS_location & in_mLocation,
                                                       const GGS_string & in_mString,
                                                       Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration::GGS_literalStringExpressionForGeneration (const cPtr_literalStringExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_literalStringExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_literalStringExpressionForGeneration::readProperty_mString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_literalStringExpressionForGeneration * p = (cPtr_literalStringExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_literalStringExpressionForGeneration) ;
    return p->mProperty_mString ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @literalStringExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mString () {
}

//--------------------------------------------------------------------------------------------------

cPtr_literalStringExpressionForGeneration::cPtr_literalStringExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_string & in_mString,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mString () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mString = in_mString ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_literalStringExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

void cPtr_literalStringExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@literalStringExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_literalStringExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_literalStringExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mString, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_literalStringExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mString.printNonNullClassInstanceProperties ("mString") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @literalStringExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ("literalStringExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalStringExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_literalStringExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_literalStringExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_literalStringExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalStringExpressionForGeneration GGS_literalStringExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_literalStringExpressionForGeneration result ;
  const GGS_literalStringExpressionForGeneration * p = (const GGS_literalStringExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_literalStringExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("literalStringExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueIntrospectionExpressionAST::objectCompare (const GGS_lexiqueIntrospectionExpressionAST & inOperand) const {
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

GGS_lexiqueIntrospectionExpressionAST::GGS_lexiqueIntrospectionExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST::
init_21__21_ (const GGS_lstring & in_mLexiqueComponentName,
              const GGS_lstring & in_mLexiqueGetterName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionExpressionAST (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionExpressionAST_init_21__21_ (in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GGS_lexiqueIntrospectionExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionExpressionAST::
lexiqueIntrospectionExpressionAST_init_21__21_ (const GGS_lstring & in_mLexiqueComponentName,
                                                const GGS_lstring & in_mLexiqueGetterName,
                                                Compiler * /* inCompiler */) {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST::GGS_lexiqueIntrospectionExpressionAST (const cPtr_lexiqueIntrospectionExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_lexiqueIntrospectionExpressionAST::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_lexiqueIntrospectionExpressionAST * p = (cPtr_lexiqueIntrospectionExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionExpressionAST) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionExpressionAST::cPtr_lexiqueIntrospectionExpressionAST (const GGS_lstring & in_mLexiqueComponentName,
                                                                                const GGS_lstring & in_mLexiqueGetterName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueIntrospectionExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

void cPtr_lexiqueIntrospectionExpressionAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueIntrospectionExpressionAST:") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexiqueIntrospectionExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionExpressionAST (mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueIntrospectionExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueGetterName.printNonNullClassInstanceProperties ("mLexiqueGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexiqueIntrospectionExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ("lexiqueIntrospectionExpressionAST",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionExpressionAST GGS_lexiqueIntrospectionExpressionAST::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionExpressionAST result ;
  const GGS_lexiqueIntrospectionExpressionAST * p = (const GGS_lexiqueIntrospectionExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @lexiqueIntrospectionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_lexiqueIntrospectionForGeneration::objectCompare (const GGS_lexiqueIntrospectionForGeneration & inOperand) const {
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

GGS_lexiqueIntrospectionForGeneration::GGS_lexiqueIntrospectionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mLexiqueComponentName,
                      const GGS_string & in_mLexiqueGetterName,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_lexiqueIntrospectionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_lexiqueIntrospectionForGeneration (inCompiler COMMA_THERE)) ;
  object->lexiqueIntrospectionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mLexiqueComponentName, in_mLexiqueGetterName, inCompiler) ;
  const GGS_lexiqueIntrospectionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_lexiqueIntrospectionForGeneration::
lexiqueIntrospectionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                        const GGS_location & in_mLocation,
                                                        const GGS_string & in_mLexiqueComponentName,
                                                        const GGS_string & in_mLexiqueGetterName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration::GGS_lexiqueIntrospectionForGeneration (const cPtr_lexiqueIntrospectionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_lexiqueIntrospectionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_lexiqueIntrospectionForGeneration::readProperty_mLexiqueGetterName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_lexiqueIntrospectionForGeneration * p = (cPtr_lexiqueIntrospectionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_lexiqueIntrospectionForGeneration) ;
    return p->mProperty_mLexiqueGetterName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @lexiqueIntrospectionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_lexiqueIntrospectionForGeneration::cPtr_lexiqueIntrospectionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                const GGS_location & in_mLocation,
                                                                                const GGS_string & in_mLexiqueComponentName,
                                                                                const GGS_string & in_mLexiqueGetterName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mLexiqueComponentName (),
mProperty_mLexiqueGetterName () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mLexiqueComponentName = in_mLexiqueComponentName ;
  mProperty_mLexiqueGetterName = in_mLexiqueGetterName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_lexiqueIntrospectionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

void cPtr_lexiqueIntrospectionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@lexiqueIntrospectionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLexiqueGetterName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_lexiqueIntrospectionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_lexiqueIntrospectionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mLexiqueComponentName, mProperty_mLexiqueGetterName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_lexiqueIntrospectionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLexiqueComponentName.printNonNullClassInstanceProperties ("mLexiqueComponentName") ;
    mProperty_mLexiqueGetterName.printNonNullClassInstanceProperties ("mLexiqueGetterName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @lexiqueIntrospectionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ("lexiqueIntrospectionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_lexiqueIntrospectionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_lexiqueIntrospectionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_lexiqueIntrospectionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lexiqueIntrospectionForGeneration GGS_lexiqueIntrospectionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_lexiqueIntrospectionForGeneration result ;
  const GGS_lexiqueIntrospectionForGeneration * p = (const GGS_lexiqueIntrospectionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_lexiqueIntrospectionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("lexiqueIntrospectionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryMinusExpressionForGeneration::objectCompare (const GGS_unaryMinusExpressionForGeneration & inOperand) const {
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

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_unaryMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryMinusExpressionForGeneration::
unaryMinusExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                    const GGS_location & in_mLocation,
                                                    const GGS_semanticExpressionForGeneration & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration::GGS_unaryMinusExpressionForGeneration (const cPtr_unaryMinusExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_unaryMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryMinusExpressionForGeneration * p = (cPtr_unaryMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryMinusExpressionForGeneration::cPtr_unaryMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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

const GALGAS_TypeDescriptor * cPtr_unaryMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

void cPtr_unaryMinusExpressionForGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryMinusExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryMinusExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryMinusExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ("unaryMinusExpressionForGeneration",
                                                                                      & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryMinusExpressionForGeneration GGS_unaryMinusExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryMinusExpressionForGeneration result ;
  const GGS_unaryMinusExpressionForGeneration * p = (const GGS_unaryMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @notExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_notExpressionForGeneration::objectCompare (const GGS_notExpressionForGeneration & inOperand) const {
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

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_notExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_notExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->notExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_notExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_notExpressionForGeneration::
notExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                             const GGS_location & in_mLocation,
                                             const GGS_semanticExpressionForGeneration & in_mExpression,
                                             Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration::GGS_notExpressionForGeneration (const cPtr_notExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_notExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_notExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_notExpressionForGeneration * p = (cPtr_notExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_notExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @notExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_notExpressionForGeneration::cPtr_notExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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

const GALGAS_TypeDescriptor * cPtr_notExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

void cPtr_notExpressionForGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@notExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_notExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_notExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_notExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @notExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_notExpressionForGeneration ("notExpressionForGeneration",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_notExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_notExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_notExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_notExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_notExpressionForGeneration GGS_notExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_notExpressionForGeneration result ;
  const GGS_notExpressionForGeneration * p = (const GGS_notExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_notExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("notExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @unaryWrappingMinusExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unaryWrappingMinusExpressionForGeneration::objectCompare (const GGS_unaryWrappingMinusExpressionForGeneration & inOperand) const {
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

GGS_unaryWrappingMinusExpressionForGeneration::GGS_unaryWrappingMinusExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration::
init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                  const GGS_location & in_mLocation,
                  const GGS_semanticExpressionForGeneration & in_mExpression,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_unaryWrappingMinusExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_unaryWrappingMinusExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (in_mResultType, in_mLocation, in_mExpression, inCompiler) ;
  const GGS_unaryWrappingMinusExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_unaryWrappingMinusExpressionForGeneration::
unaryWrappingMinusExpressionForGeneration_init_21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                            const GGS_location & in_mLocation,
                                                            const GGS_semanticExpressionForGeneration & in_mExpression,
                                                            Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration::GGS_unaryWrappingMinusExpressionForGeneration (const cPtr_unaryWrappingMinusExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_unaryWrappingMinusExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_unaryWrappingMinusExpressionForGeneration * p = (cPtr_unaryWrappingMinusExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_unaryWrappingMinusExpressionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @unaryWrappingMinusExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_unaryWrappingMinusExpressionForGeneration::cPtr_unaryWrappingMinusExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
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

const GALGAS_TypeDescriptor * cPtr_unaryWrappingMinusExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

void cPtr_unaryWrappingMinusExpressionForGeneration::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@unaryWrappingMinusExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_unaryWrappingMinusExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_unaryWrappingMinusExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_unaryWrappingMinusExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @unaryWrappingMinusExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ("unaryWrappingMinusExpressionForGeneration",
                                                                                              & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unaryWrappingMinusExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unaryWrappingMinusExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_unaryWrappingMinusExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_unaryWrappingMinusExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_unaryWrappingMinusExpressionForGeneration GGS_unaryWrappingMinusExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_unaryWrappingMinusExpressionForGeneration result ;
  const GGS_unaryWrappingMinusExpressionForGeneration * p = (const GGS_unaryWrappingMinusExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_unaryWrappingMinusExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unaryWrappingMinusExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperObjectInstanciationInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperObjectInstanciationInExpressionAST::objectCompare (const GGS_filewrapperObjectInstanciationInExpressionAST & inOperand) const {
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

GGS_filewrapperObjectInstanciationInExpressionAST::GGS_filewrapperObjectInstanciationInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST::
init_21_ (const GGS_lstring & in_mFilewrapperName,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_filewrapperObjectInstanciationInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperObjectInstanciationInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperObjectInstanciationInExpressionAST_init_21_ (in_mFilewrapperName, inCompiler) ;
  const GGS_filewrapperObjectInstanciationInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperObjectInstanciationInExpressionAST::
filewrapperObjectInstanciationInExpressionAST_init_21_ (const GGS_lstring & in_mFilewrapperName,
                                                        Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST::GGS_filewrapperObjectInstanciationInExpressionAST (const cPtr_filewrapperObjectInstanciationInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperObjectInstanciationInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperObjectInstanciationInExpressionAST * p = (cPtr_filewrapperObjectInstanciationInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperObjectInstanciationInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperObjectInstanciationInExpressionAST::cPtr_filewrapperObjectInstanciationInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperObjectInstanciationInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

void cPtr_filewrapperObjectInstanciationInExpressionAST::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperObjectInstanciationInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperObjectInstanciationInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperObjectInstanciationInExpressionAST (mProperty_mFilewrapperName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperObjectInstanciationInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperObjectInstanciationInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ("filewrapperObjectInstanciationInExpressionAST",
                                                                                                  & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperObjectInstanciationInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperObjectInstanciationInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperObjectInstanciationInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperObjectInstanciationInExpressionAST GGS_filewrapperObjectInstanciationInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_filewrapperObjectInstanciationInExpressionAST result ;
  const GGS_filewrapperObjectInstanciationInExpressionAST * p = (const GGS_filewrapperObjectInstanciationInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperObjectInstanciationInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperObjectInstanciationInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionAST::objectCompare (const GGS_filewrapperInExpressionAST & inOperand) const {
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

GGS_filewrapperInExpressionAST::GGS_filewrapperInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST::
init_21__21_ (const GGS_lstring & in_mFilewrapperName,
              const GGS_lstring & in_mFilewrapperPath,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionAST_init_21__21_ (in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GGS_filewrapperInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionAST::
filewrapperInExpressionAST_init_21__21_ (const GGS_lstring & in_mFilewrapperName,
                                         const GGS_lstring & in_mFilewrapperPath,
                                         Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST::GGS_filewrapperInExpressionAST (const cPtr_filewrapperInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperInExpressionAST::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperInExpressionAST * p = (cPtr_filewrapperInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionAST) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionAST::cPtr_filewrapperInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                                  const GGS_lstring & in_mFilewrapperPath,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

void cPtr_filewrapperInExpressionAST::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperPath, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionAST ("filewrapperInExpressionAST",
                                                                               & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionAST GGS_filewrapperInExpressionAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_filewrapperInExpressionAST result ;
  const GGS_filewrapperInExpressionAST * p = (const GGS_filewrapperInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperTemplateInExpressionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperTemplateInExpressionAST::objectCompare (const GGS_filewrapperTemplateInExpressionAST & inOperand) const {
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

GGS_filewrapperTemplateInExpressionAST::GGS_filewrapperTemplateInExpressionAST (void) :
GGS_semanticExpressionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST GGS_filewrapperTemplateInExpressionAST::
init_21__21__21_ (const GGS_lstring & in_mFilewrapperName,
                  const GGS_lstring & in_mFilewrapperTemplateName,
                  const GGS_actualOutputArgumentList & in_mExpressions,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_filewrapperTemplateInExpressionAST * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperTemplateInExpressionAST (inCompiler COMMA_THERE)) ;
  object->filewrapperTemplateInExpressionAST_init_21__21__21_ (in_mFilewrapperName, in_mFilewrapperTemplateName, in_mExpressions, inCompiler) ;
  const GGS_filewrapperTemplateInExpressionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperTemplateInExpressionAST::
filewrapperTemplateInExpressionAST_init_21__21__21_ (const GGS_lstring & in_mFilewrapperName,
                                                     const GGS_lstring & in_mFilewrapperTemplateName,
                                                     const GGS_actualOutputArgumentList & in_mExpressions,
                                                     Compiler * /* inCompiler */) {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST::GGS_filewrapperTemplateInExpressionAST (const cPtr_filewrapperTemplateInExpressionAST * inSourcePtr) :
GGS_semanticExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperTemplateInExpressionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_filewrapperTemplateInExpressionAST::readProperty_mFilewrapperTemplateName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mFilewrapperTemplateName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList GGS_filewrapperTemplateInExpressionAST::readProperty_mExpressions (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualOutputArgumentList () ;
  }else{
    cPtr_filewrapperTemplateInExpressionAST * p = (cPtr_filewrapperTemplateInExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperTemplateInExpressionAST) ;
    return p->mProperty_mExpressions ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperTemplateInExpressionAST class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mExpressions () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperTemplateInExpressionAST::cPtr_filewrapperTemplateInExpressionAST (const GGS_lstring & in_mFilewrapperName,
                                                                                  const GGS_lstring & in_mFilewrapperTemplateName,
                                                                                  const GGS_actualOutputArgumentList & in_mExpressions,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionAST (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperTemplateName (),
mProperty_mExpressions () {
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  mProperty_mExpressions = in_mExpressions ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperTemplateInExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

void cPtr_filewrapperTemplateInExpressionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperTemplateInExpressionAST:") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpressions.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperTemplateInExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperTemplateInExpressionAST (mProperty_mFilewrapperName, mProperty_mFilewrapperTemplateName, mProperty_mExpressions, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperTemplateInExpressionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionAST::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperTemplateName.printNonNullClassInstanceProperties ("mFilewrapperTemplateName") ;
    mProperty_mExpressions.printNonNullClassInstanceProperties ("mExpressions") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateInExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ("filewrapperTemplateInExpressionAST",
                                                                                       & kTypeDescriptor_GALGAS_semanticExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateInExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperTemplateInExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperTemplateInExpressionAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateInExpressionAST GGS_filewrapperTemplateInExpressionAST::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_filewrapperTemplateInExpressionAST result ;
  const GGS_filewrapperTemplateInExpressionAST * p = (const GGS_filewrapperTemplateInExpressionAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperTemplateInExpressionAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperTemplateInExpressionAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @filewrapperInExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_filewrapperInExpressionForGeneration::objectCompare (const GGS_filewrapperInExpressionForGeneration & inOperand) const {
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

GGS_filewrapperInExpressionForGeneration::GGS_filewrapperInExpressionForGeneration (void) :
GGS_semanticExpressionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration::
init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                      const GGS_location & in_mLocation,
                      const GGS_string & in_mFilewrapperName,
                      const GGS_string & in_mFilewrapperPath,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_filewrapperInExpressionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_filewrapperInExpressionForGeneration (inCompiler COMMA_THERE)) ;
  object->filewrapperInExpressionForGeneration_init_21__21__21__21_ (in_mResultType, in_mLocation, in_mFilewrapperName, in_mFilewrapperPath, inCompiler) ;
  const GGS_filewrapperInExpressionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_filewrapperInExpressionForGeneration::
filewrapperInExpressionForGeneration_init_21__21__21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                           const GGS_location & in_mLocation,
                                                           const GGS_string & in_mFilewrapperName,
                                                           const GGS_string & in_mFilewrapperPath,
                                                           Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration::GGS_filewrapperInExpressionForGeneration (const cPtr_filewrapperInExpressionForGeneration * inSourcePtr) :
GGS_semanticExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_filewrapperInExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_filewrapperInExpressionForGeneration::readProperty_mFilewrapperPath (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_filewrapperInExpressionForGeneration * p = (cPtr_filewrapperInExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_filewrapperInExpressionForGeneration) ;
    return p->mProperty_mFilewrapperPath ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @filewrapperInExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
}

//--------------------------------------------------------------------------------------------------

cPtr_filewrapperInExpressionForGeneration::cPtr_filewrapperInExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                                      const GGS_location & in_mLocation,
                                                                                      const GGS_string & in_mFilewrapperName,
                                                                                      const GGS_string & in_mFilewrapperPath,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticExpressionForGeneration (in_mResultType, in_mLocation, inCompiler COMMA_THERE),
mProperty_mFilewrapperName (),
mProperty_mFilewrapperPath () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
  mProperty_mFilewrapperName = in_mFilewrapperName ;
  mProperty_mFilewrapperPath = in_mFilewrapperPath ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_filewrapperInExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

void cPtr_filewrapperInExpressionForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@filewrapperInExpressionForGeneration:") ;
  mProperty_mResultType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFilewrapperPath.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_filewrapperInExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_filewrapperInExpressionForGeneration (mProperty_mResultType, mProperty_mLocation, mProperty_mFilewrapperName, mProperty_mFilewrapperPath, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_filewrapperInExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFilewrapperName.printNonNullClassInstanceProperties ("mFilewrapperName") ;
    mProperty_mFilewrapperPath.printNonNullClassInstanceProperties ("mFilewrapperPath") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @filewrapperInExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ("filewrapperInExpressionForGeneration",
                                                                                         & kTypeDescriptor_GALGAS_semanticExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperInExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_filewrapperInExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_filewrapperInExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperInExpressionForGeneration GGS_filewrapperInExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_filewrapperInExpressionForGeneration result ;
  const GGS_filewrapperInExpressionForGeneration * p = (const GGS_filewrapperInExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_filewrapperInExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("filewrapperInExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

