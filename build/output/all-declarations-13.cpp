#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (void) :
mProperty_mExpression (),
mProperty_mInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mInstructionList (inSource.mProperty_mInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element & GGS_templateInstructionIfBranchListAST_2E_element::operator = (const GGS_templateInstructionIfBranchListAST_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element GGS_templateInstructionIfBranchListAST_2E_element::init_21__21_ (const GGS_templateExpressionAST & in_mExpression,
                                                                                                                   const GGS_templateInstructionListAST & in_mInstructionList,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionIfBranchListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionIfBranchListAST_2E_element::GGS_templateInstructionIfBranchListAST_2E_element (const GGS_templateExpressionAST & inOperand0,
                                                                                                      const GGS_templateInstructionListAST & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_mInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionIfBranchListAST_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_mInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_mInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionIfBranchListAST_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionIfBranchListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionIfBranchListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ("templateInstructionIfBranchListAST.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionIfBranchListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionIfBranchListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element & GGS_syntaxInstructionListForGrammarAnalysis_2E_element::operator = (const GGS_syntaxInstructionListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element GGS_syntaxInstructionListForGrammarAnalysis_2E_element::init_21_ (const GGS_abstractSyntaxInstructionForGrammarAnalysis & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxInstructionListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxInstructionListForGrammarAnalysis_2E_element::GGS_syntaxInstructionListForGrammarAnalysis_2E_element (const GGS_abstractSyntaxInstructionForGrammarAnalysis & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxInstructionListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxInstructionListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxInstructionListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @syntaxInstructionListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ("syntaxInstructionListForGrammarAnalysis.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxInstructionListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxInstructionListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mNonTerminalIndex (inSource.mProperty_mNonTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::operator = (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mNonTerminalIndex = inSource.mProperty_mNonTerminalIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                       const GGS_uint & in_mNonTerminalIndex,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                                          const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unusedNonTerminalSymbolMapForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unusedNonTerminalSymbolMapForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ("unusedNonTerminalSymbolMapForGrammarAnalysis.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil (void) {
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::description (String & ioString,
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
//     @unusedNonTerminalSymbolMapForGrammarAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ("unusedNonTerminalSymbolMapForGrammarAnalysis.element?",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (void) :
mProperty_mNonTerminalSymbol (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) :
mProperty_mNonTerminalSymbol (inSource.mProperty_mNonTerminalSymbol),
mProperty_mNonTerminalIndex (inSource.mProperty_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (inSource.mProperty_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::operator = (const GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mNonTerminalSymbol = inSource.mProperty_mNonTerminalSymbol ;
  mProperty_mNonTerminalIndex = inSource.mProperty_mNonTerminalIndex ;
  mProperty_mNonterminalSymbolParametersMap = inSource.mProperty_mNonterminalSymbolParametersMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::init_21__21__21_ (const GGS_lstring & in_mNonTerminalSymbol,
                                                                                                                                             const GGS_uint & in_mNonTerminalIndex,
                                                                                                                                             const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonTerminalSymbol = in_mNonTerminalSymbol ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                                            const GGS_uint & inOperand1,
                                                                                                                            const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_mNonTerminalSymbol (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mNonTerminalSymbol.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mNonTerminalSymbol.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalSymbolSortedListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mNonTerminalSymbol.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolSortedListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ("nonTerminalSymbolSortedListForGrammarAnalysis.element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (void) :
mProperty_mSyntaxInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (const GGS_branchListForGrammarAnalysis_2E_element & inSource) :
mProperty_mSyntaxInstructionList (inSource.mProperty_mSyntaxInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element & GGS_branchListForGrammarAnalysis_2E_element::operator = (const GGS_branchListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mSyntaxInstructionList = inSource.mProperty_mSyntaxInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element GGS_branchListForGrammarAnalysis_2E_element::init_21_ (const GGS_syntaxInstructionListForGrammarAnalysis & in_mSyntaxInstructionList,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_branchListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxInstructionList = in_mSyntaxInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_branchListForGrammarAnalysis_2E_element::GGS_branchListForGrammarAnalysis_2E_element (const GGS_syntaxInstructionListForGrammarAnalysis & inOperand0) :
mProperty_mSyntaxInstructionList (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_branchListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mSyntaxInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mSyntaxInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_branchListForGrammarAnalysis_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @branchListForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxInstructionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @branchListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ("branchListForGrammarAnalysis.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_branchListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_branchListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element::GGS_syntaxComponentListForGrammarAnalysis_2E_element (void) :
mProperty_mProductionRulesList (),
mProperty_mSyntaxComponentName () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element::GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) :
mProperty_mProductionRulesList (inSource.mProperty_mProductionRulesList),
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element & GGS_syntaxComponentListForGrammarAnalysis_2E_element::operator = (const GGS_syntaxComponentListForGrammarAnalysis_2E_element & inSource) {
  mProperty_mProductionRulesList = inSource.mProperty_mProductionRulesList ;
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element GGS_syntaxComponentListForGrammarAnalysis_2E_element::init_21__21_ (const GGS_productionRuleListForGrammarAnalysis & in_mProductionRulesList,
                                                                                                                         const GGS_lstring & in_mSyntaxComponentName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_syntaxComponentListForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProductionRulesList = in_mProductionRulesList ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxComponentListForGrammarAnalysis_2E_element::GGS_syntaxComponentListForGrammarAnalysis_2E_element (const GGS_productionRuleListForGrammarAnalysis & inOperand0,
                                                                                                            const GGS_lstring & inOperand1) :
mProperty_mProductionRulesList (inOperand0),
mProperty_mSyntaxComponentName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_syntaxComponentListForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mProductionRulesList.isValid () && mProperty_mSyntaxComponentName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mProductionRulesList.drop () ;
  mProperty_mSyntaxComponentName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_syntaxComponentListForGrammarAnalysis_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @syntaxComponentListForGrammarAnalysis.element:") ;
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
//     @syntaxComponentListForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ("syntaxComponentListForGrammarAnalysis.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxComponentListForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxComponentListForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mTerminalIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mTerminalIndex (inSource.mProperty_mTerminalIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::operator = (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mTerminalIndex = inSource.mProperty_mTerminalIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                       const GGS_uint & in_mTerminalIndex,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mTerminalIndex = in_mTerminalIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::GGS_terminalSymbolsMapForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                          const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mTerminalIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mTerminalIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mTerminalIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @terminalSymbolsMapForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTerminalIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @terminalSymbolsMapForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ("terminalSymbolsMapForGrammarAnalysis.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @terminalSymbolsMapForGrammarAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ (const GGS_terminalSymbolsMapForGrammarAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::init_nil (void) {
  GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_terminalSymbolsMapForGrammarAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::description (String & ioString,
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
//     @terminalSymbolsMapForGrammarAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ("terminalSymbolsMapForGrammarAnalysis.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_terminalSymbolsMapForGrammarAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (void) :
mProperty_mExpression (),
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (const GGS_collectionValueElementList_2E_element & inSource) :
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element & GGS_collectionValueElementList_2E_element::operator = (const GGS_collectionValueElementList_2E_element & inSource) {
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_collectionValueElementList_2E_element GGS_collectionValueElementList_2E_element::init_21__21_ (const GGS_semanticExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_location,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_collectionValueElementList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_collectionValueElementList_2E_element::GGS_collectionValueElementList_2E_element (const GGS_semanticExpressionAST & inOperand0,
                                                                                      const GGS_location & inOperand1) :
mProperty_mExpression (inOperand0),
mProperty_location (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_collectionValueElementList_2E_element::isValid (void) const {
  return mProperty_mExpression.isValid () && mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::drop (void) {
  mProperty_mExpression.drop () ;
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_collectionValueElementList_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @collectionValueElementList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @collectionValueElementList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ("collectionValueElementList.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_collectionValueElementList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_collectionValueElementList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element::GGS_actualOutputArgumentList_2E_element (void) :
mProperty_mActualSelector (),
mProperty_mExpression (),
mProperty_mEndOfExpressionLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element::GGS_actualOutputArgumentList_2E_element (const GGS_actualOutputArgumentList_2E_element & inSource) :
mProperty_mActualSelector (inSource.mProperty_mActualSelector),
mProperty_mExpression (inSource.mProperty_mExpression),
mProperty_mEndOfExpressionLocation (inSource.mProperty_mEndOfExpressionLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element & GGS_actualOutputArgumentList_2E_element::operator = (const GGS_actualOutputArgumentList_2E_element & inSource) {
  mProperty_mActualSelector = inSource.mProperty_mActualSelector ;
  mProperty_mExpression = inSource.mProperty_mExpression ;
  mProperty_mEndOfExpressionLocation = inSource.mProperty_mEndOfExpressionLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element GGS_actualOutputArgumentList_2E_element::init_21__21__21_ (const GGS_lstring & in_mActualSelector,
                                                                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                                                                   const GGS_location & in_mEndOfExpressionLocation,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualOutputArgumentList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualSelector = in_mActualSelector ;
  result.mProperty_mExpression = in_mExpression ;
  result.mProperty_mEndOfExpressionLocation = in_mEndOfExpressionLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualOutputArgumentList_2E_element::GGS_actualOutputArgumentList_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_semanticExpressionAST & inOperand1,
                                                                                  const GGS_location & inOperand2) :
mProperty_mActualSelector (inOperand0),
mProperty_mExpression (inOperand1),
mProperty_mEndOfExpressionLocation (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualOutputArgumentList_2E_element::isValid (void) const {
  return mProperty_mActualSelector.isValid () && mProperty_mExpression.isValid () && mProperty_mEndOfExpressionLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList_2E_element::drop (void) {
  mProperty_mActualSelector.drop () ;
  mProperty_mExpression.drop () ;
  mProperty_mEndOfExpressionLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualOutputArgumentList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualOutputArgumentList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mExpression.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfExpressionLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualOutputArgumentList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualOutputArgumentList_2E_element ("actualOutputArgumentList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualOutputArgumentList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualOutputArgumentList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess & GGS_AccessControlAST_2E_fileprivateAccess::operator = (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess GGS_AccessControlAST_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess::GGS_AccessControlAST_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ("AccessControlAST.fileprivateAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_::GGS_AccessControlAST_2E_fileprivateAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateAccess_3F_ GGS_AccessControlAST_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ("AccessControlAST.fileprivateAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess & GGS_AccessControlAST_2E_fileprivateSetAccess::operator = (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess GGS_AccessControlAST_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControlAST_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess::GGS_AccessControlAST_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControlAST.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControlAST.fileprivateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ("AccessControlAST.fileprivateSetAccess",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControlAST_2E_fileprivateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ (const GGS_AccessControlAST_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControlAST_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControlAST_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::description (String & ioString,
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
//     @AccessControlAST.fileprivateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ("AccessControlAST.fileprivateSetAccess?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControlAST_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControlAST_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_AccessControl_2E_protectedAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess & GGS_AccessControl_2E_protectedAccess::operator = (const GGS_AccessControl_2E_protectedAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess GGS_AccessControl_2E_protectedAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess::GGS_AccessControl_2E_protectedAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ("AccessControl.protectedAccess",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_::GGS_AccessControl_2E_protectedAccess_3F_ (const GGS_AccessControl_2E_protectedAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedAccess_3F_ GGS_AccessControl_2E_protectedAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ("AccessControl.protectedAccess?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess & GGS_AccessControl_2E_protectedSetAccess::operator = (const GGS_AccessControl_2E_protectedSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess GGS_AccessControl_2E_protectedSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_protectedSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess::GGS_AccessControl_2E_protectedSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.protectedSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.protectedSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ("AccessControl.protectedSetAccess",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_protectedSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_::GGS_AccessControl_2E_protectedSetAccess_3F_ (const GGS_AccessControl_2E_protectedSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_protectedSetAccess_3F_ GGS_AccessControl_2E_protectedSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_protectedSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_protectedSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_protectedSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_protectedSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.protectedSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ("AccessControl.protectedSetAccess?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_protectedSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_protectedSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_AccessControl_2E_privateAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess & GGS_AccessControl_2E_privateAccess::operator = (const GGS_AccessControl_2E_privateAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess GGS_AccessControl_2E_privateAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess::GGS_AccessControl_2E_privateAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ("AccessControl.privateAccess",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_::GGS_AccessControl_2E_privateAccess_3F_ (const GGS_AccessControl_2E_privateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateAccess_3F_ GGS_AccessControl_2E_privateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ("AccessControl.privateAccess?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (void) :
mProperty_declaringType () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_AccessControl_2E_privateSetAccess & inSource) :
mProperty_declaringType (inSource.mProperty_declaringType) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess & GGS_AccessControl_2E_privateSetAccess::operator = (const GGS_AccessControl_2E_privateSetAccess & inSource) {
  mProperty_declaringType = inSource.mProperty_declaringType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess GGS_AccessControl_2E_privateSetAccess::init_21_ (const GGS_unifiedTypeMapEntry & in_declaringType,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_privateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declaringType = in_declaringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess::GGS_AccessControl_2E_privateSetAccess (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_declaringType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess::isValid (void) const {
  return mProperty_declaringType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::drop (void) {
  mProperty_declaringType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.privateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declaringType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.privateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ("AccessControl.privateSetAccess",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_privateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_::GGS_AccessControl_2E_privateSetAccess_3F_ (const GGS_AccessControl_2E_privateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_privateSetAccess_3F_ GGS_AccessControl_2E_privateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_privateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_privateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_privateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_privateSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.privateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ("AccessControl.privateSetAccess?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_privateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_privateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess & GGS_AccessControl_2E_fileprivateAccess::operator = (const GGS_AccessControl_2E_fileprivateAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess GGS_AccessControl_2E_fileprivateAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess::GGS_AccessControl_2E_fileprivateAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.fileprivateAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ("AccessControl.fileprivateAccess",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_fileprivateAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_::GGS_AccessControl_2E_fileprivateAccess_3F_ (const GGS_AccessControl_2E_fileprivateAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateAccess_3F_ GGS_AccessControl_2E_fileprivateAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_fileprivateAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateAccess_3F_::description (String & ioString,
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
//     @AccessControl.fileprivateAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ("AccessControl.fileprivateAccess?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (void) :
mProperty_declarationLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) :
mProperty_declarationLocation (inSource.mProperty_declarationLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess & GGS_AccessControl_2E_fileprivateSetAccess::operator = (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) {
  mProperty_declarationLocation = inSource.mProperty_declarationLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess GGS_AccessControl_2E_fileprivateSetAccess::init_21_ (const GGS_location & in_declarationLocation,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_AccessControl_2E_fileprivateSetAccess result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_declarationLocation = in_declarationLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess::GGS_AccessControl_2E_fileprivateSetAccess (const GGS_location & inOperand0) :
mProperty_declarationLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess::isValid (void) const {
  return mProperty_declarationLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::drop (void) {
  mProperty_declarationLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @AccessControl.fileprivateSetAccess:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_declarationLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @AccessControl.fileprivateSetAccess generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ("AccessControl.fileprivateSetAccess",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateSetAccess::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess ;
}

//--------------------------------------------------------------------------------------------------
//Optional @AccessControl_2E_fileprivateSetAccess_3F_
//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_::GGS_AccessControl_2E_fileprivateSetAccess_3F_ (const GGS_AccessControl_2E_fileprivateSetAccess & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_AccessControl_2E_fileprivateSetAccess_3F_ GGS_AccessControl_2E_fileprivateSetAccess_3F_::init_nil (void) {
  GGS_AccessControl_2E_fileprivateSetAccess_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValid (void) const {
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

bool GGS_AccessControl_2E_fileprivateSetAccess_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_AccessControl_2E_fileprivateSetAccess () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_AccessControl_2E_fileprivateSetAccess_3F_::description (String & ioString,
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
//     @AccessControl.fileprivateSetAccess? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ("AccessControl.fileprivateSetAccess?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_AccessControl_2E_fileprivateSetAccess_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_AccessControl_2E_fileprivateSetAccess_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (void) :
mProperty_lkey (),
mProperty_mPropertyTypeIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (const GGS_propertyIndexMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mPropertyTypeIndex (inSource.mProperty_mPropertyTypeIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element & GGS_propertyIndexMap_2E_element::operator = (const GGS_propertyIndexMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mPropertyTypeIndex = inSource.mProperty_mPropertyTypeIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyIndexMap_2E_element GGS_propertyIndexMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                               const GGS_unifiedTypeMapEntry & in_mPropertyTypeIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyIndexMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mPropertyTypeIndex = in_mPropertyTypeIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element::GGS_propertyIndexMap_2E_element (const GGS_lstring & inOperand0,
                                                                  const GGS_unifiedTypeMapEntry & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mPropertyTypeIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mPropertyTypeIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mPropertyTypeIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyIndexMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyTypeIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyIndexMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ("propertyIndexMap.element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyIndexMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyIndexMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_::GGS_propertyIndexMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_::GGS_propertyIndexMap_2E_element_3F_ (const GGS_propertyIndexMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyIndexMap_2E_element_3F_ GGS_propertyIndexMap_2E_element_3F_::init_nil (void) {
  GGS_propertyIndexMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyIndexMap_2E_element_3F_::isValid (void) const {
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

bool GGS_propertyIndexMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyIndexMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyIndexMap_2E_element_3F_::description (String & ioString,
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
//     @propertyIndexMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ("propertyIndexMap.element?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyIndexMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyIndexMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element::GGS_nonterminalLabelMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element::GGS_nonterminalLabelMap_2E_element (const GGS_nonterminalLabelMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSignatureForGeneration (inSource.mProperty_mSignatureForGeneration),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element & GGS_nonterminalLabelMap_2E_element::operator = (const GGS_nonterminalLabelMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSignatureForGeneration = inSource.mProperty_mSignatureForGeneration ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element GGS_nonterminalLabelMap_2E_element::init_21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                             const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                             const GGS_formalParameterSignature & in_mSignature,
                                                                                             const GGS_location & in_mEndOfArgumentLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalLabelMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element::GGS_nonterminalLabelMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_formalParameterListForGeneration & inOperand1,
                                                                        const GGS_formalParameterSignature & inOperand2,
                                                                        const GGS_location & inOperand3) :
mProperty_lkey (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalLabelMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalLabelMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalLabelMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element ("nonterminalLabelMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalLabelMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @nonterminalLabelMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_::GGS_nonterminalLabelMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_::GGS_nonterminalLabelMap_2E_element_3F_ (const GGS_nonterminalLabelMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalLabelMap_2E_element_3F_ GGS_nonterminalLabelMap_2E_element_3F_::init_nil (void) {
  GGS_nonterminalLabelMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalLabelMap_2E_element_3F_::isValid (void) const {
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

bool GGS_nonterminalLabelMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_nonterminalLabelMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalLabelMap_2E_element_3F_::description (String & ioString,
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
//     @nonterminalLabelMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element_3F_ ("nonterminalLabelMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalLabelMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalLabelMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element::GGS_nonterminalMap_2E_element (void) :
mProperty_lkey (),
mProperty_mLabelMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element::GGS_nonterminalMap_2E_element (const GGS_nonterminalMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mLabelMap (inSource.mProperty_mLabelMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element & GGS_nonterminalMap_2E_element::operator = (const GGS_nonterminalMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mLabelMap = inSource.mProperty_mLabelMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonterminalMap_2E_element GGS_nonterminalMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_nonterminalLabelMap & in_mLabelMap,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mLabelMap = in_mLabelMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element::GGS_nonterminalMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_nonterminalLabelMap & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mLabelMap (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mLabelMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mLabelMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mLabelMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element ("nonterminalMap.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @nonterminalMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_::GGS_nonterminalMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_::GGS_nonterminalMap_2E_element_3F_ (const GGS_nonterminalMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalMap_2E_element_3F_ GGS_nonterminalMap_2E_element_3F_::init_nil (void) {
  GGS_nonterminalMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalMap_2E_element_3F_::isValid (void) const {
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

bool GGS_nonterminalMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_nonterminalMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalMap_2E_element_3F_::description (String & ioString,
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
//     @nonterminalMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalMap_2E_element_3F_ ("nonterminalMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element::GGS_ruleLabelImplementationList_2E_element (void) :
mProperty_mLabelName (),
mProperty_mSignatureForGeneration (),
mProperty_mSignature (),
mProperty_mEndOfArgumentLocation (),
mProperty_mInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element::GGS_ruleLabelImplementationList_2E_element (const GGS_ruleLabelImplementationList_2E_element & inSource) :
mProperty_mLabelName (inSource.mProperty_mLabelName),
mProperty_mSignatureForGeneration (inSource.mProperty_mSignatureForGeneration),
mProperty_mSignature (inSource.mProperty_mSignature),
mProperty_mEndOfArgumentLocation (inSource.mProperty_mEndOfArgumentLocation),
mProperty_mInstructionListForGeneration (inSource.mProperty_mInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element & GGS_ruleLabelImplementationList_2E_element::operator = (const GGS_ruleLabelImplementationList_2E_element & inSource) {
  mProperty_mLabelName = inSource.mProperty_mLabelName ;
  mProperty_mSignatureForGeneration = inSource.mProperty_mSignatureForGeneration ;
  mProperty_mSignature = inSource.mProperty_mSignature ;
  mProperty_mEndOfArgumentLocation = inSource.mProperty_mEndOfArgumentLocation ;
  mProperty_mInstructionListForGeneration = inSource.mProperty_mInstructionListForGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element GGS_ruleLabelImplementationList_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mLabelName,
                                                                                                                 const GGS_formalParameterListForGeneration & in_mSignatureForGeneration,
                                                                                                                 const GGS_formalParameterSignature & in_mSignature,
                                                                                                                 const GGS_location & in_mEndOfArgumentLocation,
                                                                                                                 const GGS_semanticInstructionListForGeneration & in_mInstructionListForGeneration,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleLabelImplementationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLabelName = in_mLabelName ;
  result.mProperty_mSignatureForGeneration = in_mSignatureForGeneration ;
  result.mProperty_mSignature = in_mSignature ;
  result.mProperty_mEndOfArgumentLocation = in_mEndOfArgumentLocation ;
  result.mProperty_mInstructionListForGeneration = in_mInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleLabelImplementationList_2E_element::GGS_ruleLabelImplementationList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_formalParameterListForGeneration & inOperand1,
                                                                                        const GGS_formalParameterSignature & inOperand2,
                                                                                        const GGS_location & inOperand3,
                                                                                        const GGS_semanticInstructionListForGeneration & inOperand4) :
mProperty_mLabelName (inOperand0),
mProperty_mSignatureForGeneration (inOperand1),
mProperty_mSignature (inOperand2),
mProperty_mEndOfArgumentLocation (inOperand3),
mProperty_mInstructionListForGeneration (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleLabelImplementationList_2E_element::isValid (void) const {
  return mProperty_mLabelName.isValid () && mProperty_mSignatureForGeneration.isValid () && mProperty_mSignature.isValid () && mProperty_mEndOfArgumentLocation.isValid () && mProperty_mInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList_2E_element::drop (void) {
  mProperty_mLabelName.drop () ;
  mProperty_mSignatureForGeneration.drop () ;
  mProperty_mSignature.drop () ;
  mProperty_mEndOfArgumentLocation.drop () ;
  mProperty_mInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleLabelImplementationList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleLabelImplementationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLabelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignatureForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSignature.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEndOfArgumentLocation.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @ruleLabelImplementationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleLabelImplementationList_2E_element ("ruleLabelImplementationList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleLabelImplementationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleLabelImplementationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (void) :
mProperty_mNonterminalName (),
mProperty_mRuleIndex (),
mProperty_mLabelImplementationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (const GGS_ruleDeclarationList_2E_element & inSource) :
mProperty_mNonterminalName (inSource.mProperty_mNonterminalName),
mProperty_mRuleIndex (inSource.mProperty_mRuleIndex),
mProperty_mLabelImplementationList (inSource.mProperty_mLabelImplementationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element & GGS_ruleDeclarationList_2E_element::operator = (const GGS_ruleDeclarationList_2E_element & inSource) {
  mProperty_mNonterminalName = inSource.mProperty_mNonterminalName ;
  mProperty_mRuleIndex = inSource.mProperty_mRuleIndex ;
  mProperty_mLabelImplementationList = inSource.mProperty_mLabelImplementationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element GGS_ruleDeclarationList_2E_element::init_21__21__21_ (const GGS_string & in_mNonterminalName,
                                                                                         const GGS_uint & in_mRuleIndex,
                                                                                         const GGS_ruleLabelImplementationList & in_mLabelImplementationList,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ruleDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mNonterminalName = in_mNonterminalName ;
  result.mProperty_mRuleIndex = in_mRuleIndex ;
  result.mProperty_mLabelImplementationList = in_mLabelImplementationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ruleDeclarationList_2E_element::GGS_ruleDeclarationList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_uint & inOperand1,
                                                                        const GGS_ruleLabelImplementationList & inOperand2) :
mProperty_mNonterminalName (inOperand0),
mProperty_mRuleIndex (inOperand1),
mProperty_mLabelImplementationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_ruleDeclarationList_2E_element::isValid (void) const {
  return mProperty_mNonterminalName.isValid () && mProperty_mRuleIndex.isValid () && mProperty_mLabelImplementationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::drop (void) {
  mProperty_mNonterminalName.drop () ;
  mProperty_mRuleIndex.drop () ;
  mProperty_mLabelImplementationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ruleDeclarationList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ruleDeclarationList.element:") ;
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
//     @ruleDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ("ruleDeclarationList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ruleDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ruleDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_mList () {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_mList (inSource.mProperty_mList) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element & GGS_genericExtensionMethodListMapDictionary_2E_element::operator = (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_mList = inSource.mProperty_mList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element GGS_genericExtensionMethodListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                                             const GGS_lstringlist & in_mList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_genericExtensionMethodListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_mList = in_mList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element::GGS_genericExtensionMethodListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_lstringlist & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @genericExtensionMethodListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @genericExtensionMethodListMapDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ("genericExtensionMethodListMapDictionary.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @genericExtensionMethodListMapDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ (const GGS_genericExtensionMethodListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_genericExtensionMethodListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_genericExtensionMethodListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::description (String & ioString,
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
//     @genericExtensionMethodListMapDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ("genericExtensionMethodListMapDictionary.element?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_genericExtensionMethodListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_genericExtensionMethodListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (void) :
mProperty_mEntry () {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntryList_2E_element & inSource) :
mProperty_mEntry (inSource.mProperty_mEntry) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element & GGS_unifiedTypeMapEntryList_2E_element::operator = (const GGS_unifiedTypeMapEntryList_2E_element & inSource) {
  mProperty_mEntry = inSource.mProperty_mEntry ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element GGS_unifiedTypeMapEntryList_2E_element::init_21_ (const GGS_unifiedTypeMapEntry & in_mEntry,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntryList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntry = in_mEntry ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntryList_2E_element::GGS_unifiedTypeMapEntryList_2E_element (const GGS_unifiedTypeMapEntry & inOperand0) :
mProperty_mEntry (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_unifiedTypeMapEntryList_2E_element::objectCompare (const GGS_unifiedTypeMapEntryList_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mEntry.objectCompare (inOperand.mProperty_mEntry) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_unifiedTypeMapEntryList_2E_element::isValid (void) const {
  return mProperty_mEntry.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::drop (void) {
  mProperty_mEntry.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_unifiedTypeMapEntryList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @unifiedTypeMapEntryList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEntry.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @unifiedTypeMapEntryList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ("unifiedTypeMapEntryList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_unifiedTypeMapEntryList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeMapEntryList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (void) :
mProperty_key (),
mProperty_typeList () {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (const GGS_descendantClassListMapDictionary_2E_element & inSource) :
mProperty_key (inSource.mProperty_key),
mProperty_typeList (inSource.mProperty_typeList) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element & GGS_descendantClassListMapDictionary_2E_element::operator = (const GGS_descendantClassListMapDictionary_2E_element & inSource) {
  mProperty_key = inSource.mProperty_key ;
  mProperty_typeList = inSource.mProperty_typeList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element GGS_descendantClassListMapDictionary_2E_element::init_21__21_ (const GGS_string & in_key,
                                                                                                               const GGS_unifiedTypeMapEntryList & in_typeList,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_descendantClassListMapDictionary_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_key = in_key ;
  result.mProperty_typeList = in_typeList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element::GGS_descendantClassListMapDictionary_2E_element (const GGS_string & inOperand0,
                                                                                                  const GGS_unifiedTypeMapEntryList & inOperand1) :
mProperty_key (inOperand0),
mProperty_typeList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_typeList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_typeList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @descendantClassListMapDictionary.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @descendantClassListMapDictionary.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ("descendantClassListMapDictionary.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMapDictionary_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @descendantClassListMapDictionary_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_::GGS_descendantClassListMapDictionary_2E_element_3F_ (const GGS_descendantClassListMapDictionary_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_descendantClassListMapDictionary_2E_element_3F_ GGS_descendantClassListMapDictionary_2E_element_3F_::init_nil (void) {
  GGS_descendantClassListMapDictionary_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValid (void) const {
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

bool GGS_descendantClassListMapDictionary_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_descendantClassListMapDictionary_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_descendantClassListMapDictionary_2E_element_3F_::description (String & ioString,
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
//     @descendantClassListMapDictionary.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ("descendantClassListMapDictionary.element?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_descendantClassListMapDictionary_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_descendantClassListMapDictionary_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element::GGS_extensionMethodMapForGlobalCheckings_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element::GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element & GGS_extensionMethodMapForGlobalCheckings_2E_element::operator = (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element GGS_extensionMethodMapForGlobalCheckings_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionMethodMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element::GGS_extensionMethodMapForGlobalCheckings_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForGlobalCheckings_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionMethodMapForGlobalCheckings.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionMethodMapForGlobalCheckings.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ("extensionMethodMapForGlobalCheckings.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionMethodMapForGlobalCheckings_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionMethodMapForGlobalCheckings_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::init_nil (void) {
  GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionMethodMapForGlobalCheckings_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::description (String & ioString,
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
//     @extensionMethodMapForGlobalCheckings.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ("extensionMethodMapForGlobalCheckings.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionMethodMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionMethodMapForGlobalCheckings_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element::GGS_extensionSetterMapForGlobalCheckings_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element::GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element & GGS_extensionSetterMapForGlobalCheckings_2E_element::operator = (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element GGS_extensionSetterMapForGlobalCheckings_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionSetterMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element::GGS_extensionSetterMapForGlobalCheckings_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForGlobalCheckings_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionSetterMapForGlobalCheckings.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionSetterMapForGlobalCheckings.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ("extensionSetterMapForGlobalCheckings.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionSetterMapForGlobalCheckings_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionSetterMapForGlobalCheckings_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::init_nil (void) {
  GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionSetterMapForGlobalCheckings_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::description (String & ioString,
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
//     @extensionSetterMapForGlobalCheckings.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ("extensionSetterMapForGlobalCheckings.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionSetterMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionSetterMapForGlobalCheckings_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element::GGS_extensionGetterMapForGlobalCheckings_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element::GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element & GGS_extensionGetterMapForGlobalCheckings_2E_element::operator = (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element GGS_extensionGetterMapForGlobalCheckings_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_extensionGetterMapForGlobalCheckings_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element::GGS_extensionGetterMapForGlobalCheckings_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForGlobalCheckings_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @extensionGetterMapForGlobalCheckings.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @extensionGetterMapForGlobalCheckings.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ("extensionGetterMapForGlobalCheckings.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForGlobalCheckings_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @extensionGetterMapForGlobalCheckings_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ (const GGS_extensionGetterMapForGlobalCheckings_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::init_nil (void) {
  GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::isValid (void) const {
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

bool GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_extensionGetterMapForGlobalCheckings_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::description (String & ioString,
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
//     @extensionGetterMapForGlobalCheckings.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ("extensionGetterMapForGlobalCheckings.element?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_extensionGetterMapForGlobalCheckings_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_extensionGetterMapForGlobalCheckings_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element & GGS_templateInstructionListForGeneration_2E_element::operator = (const GGS_templateInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element GGS_templateInstructionListForGeneration_2E_element::init_21_ (const GGS_templateInstructionForGeneration & in_mInstruction,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_templateInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_templateInstructionListForGeneration_2E_element::GGS_templateInstructionListForGeneration_2E_element (const GGS_templateInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_templateInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_templateInstructionListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @templateInstructionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @templateInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ("templateInstructionListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_templateInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element::GGS_formalParameterListForGeneration_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentPassingMode (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentName (),
mProperty_mFormalArgumentCppName () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element::GGS_formalParameterListForGeneration_2E_element (const GGS_formalParameterListForGeneration_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentPassingMode (inSource.mProperty_mFormalArgumentPassingMode),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mFormalArgumentCppName (inSource.mProperty_mFormalArgumentCppName) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element & GGS_formalParameterListForGeneration_2E_element::operator = (const GGS_formalParameterListForGeneration_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentPassingMode = inSource.mProperty_mFormalArgumentPassingMode ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mFormalArgumentCppName = inSource.mProperty_mFormalArgumentCppName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element GGS_formalParameterListForGeneration_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                                           const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingMode,
                                                                                                                           const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                           const GGS_lstring & in_mFormalArgumentName,
                                                                                                                           const GGS_string & in_mFormalArgumentCppName,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalParameterListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentPassingMode = in_mFormalArgumentPassingMode ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalParameterListForGeneration_2E_element::GGS_formalParameterListForGeneration_2E_element (const GGS_lstring & inOperand0,
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

bool GGS_formalParameterListForGeneration_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentPassingMode.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mFormalArgumentCppName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentPassingMode.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalParameterListForGeneration_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalParameterListForGeneration.element:") ;
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
//     @formalParameterListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalParameterListForGeneration_2E_element ("formalParameterListForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalParameterListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element::GGS_formalInputParameterListForGeneration_2E_element (void) :
mProperty_mFormalSelector (),
mProperty_mFormalArgumentType (),
mProperty_mFormalArgumentCppName (),
mProperty_mFormalArgumentName (),
mProperty_mIsConstant () {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element::GGS_formalInputParameterListForGeneration_2E_element (const GGS_formalInputParameterListForGeneration_2E_element & inSource) :
mProperty_mFormalSelector (inSource.mProperty_mFormalSelector),
mProperty_mFormalArgumentType (inSource.mProperty_mFormalArgumentType),
mProperty_mFormalArgumentCppName (inSource.mProperty_mFormalArgumentCppName),
mProperty_mFormalArgumentName (inSource.mProperty_mFormalArgumentName),
mProperty_mIsConstant (inSource.mProperty_mIsConstant) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element & GGS_formalInputParameterListForGeneration_2E_element::operator = (const GGS_formalInputParameterListForGeneration_2E_element & inSource) {
  mProperty_mFormalSelector = inSource.mProperty_mFormalSelector ;
  mProperty_mFormalArgumentType = inSource.mProperty_mFormalArgumentType ;
  mProperty_mFormalArgumentCppName = inSource.mProperty_mFormalArgumentCppName ;
  mProperty_mFormalArgumentName = inSource.mProperty_mFormalArgumentName ;
  mProperty_mIsConstant = inSource.mProperty_mIsConstant ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element GGS_formalInputParameterListForGeneration_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_mFormalSelector,
                                                                                                                                     const GGS_unifiedTypeMapEntry & in_mFormalArgumentType,
                                                                                                                                     const GGS_string & in_mFormalArgumentCppName,
                                                                                                                                     const GGS_lstring & in_mFormalArgumentName,
                                                                                                                                     const GGS_bool & in_mIsConstant,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_formalInputParameterListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalSelector = in_mFormalSelector ;
  result.mProperty_mFormalArgumentType = in_mFormalArgumentType ;
  result.mProperty_mFormalArgumentCppName = in_mFormalArgumentCppName ;
  result.mProperty_mFormalArgumentName = in_mFormalArgumentName ;
  result.mProperty_mIsConstant = in_mIsConstant ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_formalInputParameterListForGeneration_2E_element::GGS_formalInputParameterListForGeneration_2E_element (const GGS_lstring & inOperand0,
                                                                                                            const GGS_unifiedTypeMapEntry & inOperand1,
                                                                                                            const GGS_string & inOperand2,
                                                                                                            const GGS_lstring & inOperand3,
                                                                                                            const GGS_bool & inOperand4) :
mProperty_mFormalSelector (inOperand0),
mProperty_mFormalArgumentType (inOperand1),
mProperty_mFormalArgumentCppName (inOperand2),
mProperty_mFormalArgumentName (inOperand3),
mProperty_mIsConstant (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_formalInputParameterListForGeneration_2E_element::isValid (void) const {
  return mProperty_mFormalSelector.isValid () && mProperty_mFormalArgumentType.isValid () && mProperty_mFormalArgumentCppName.isValid () && mProperty_mFormalArgumentName.isValid () && mProperty_mIsConstant.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration_2E_element::drop (void) {
  mProperty_mFormalSelector.drop () ;
  mProperty_mFormalArgumentType.drop () ;
  mProperty_mFormalArgumentCppName.drop () ;
  mProperty_mFormalArgumentName.drop () ;
  mProperty_mIsConstant.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_formalInputParameterListForGeneration_2E_element::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @formalInputParameterListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFormalSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentCppName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsConstant.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @formalInputParameterListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2E_element ("formalInputParameterListForGeneration.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_formalInputParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_formalInputParameterListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (void) :
mProperty_mActualParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterListForGeneration_2E_element & inSource) :
mProperty_mActualParameter (inSource.mProperty_mActualParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element & GGS_actualParameterListForGeneration_2E_element::operator = (const GGS_actualParameterListForGeneration_2E_element & inSource) {
  mProperty_mActualParameter = inSource.mProperty_mActualParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element GGS_actualParameterListForGeneration_2E_element::init_21_ (const GGS_actualParameterForGeneration & in_mActualParameter,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actualParameterListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mActualParameter = in_mActualParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration_2E_element::GGS_actualParameterListForGeneration_2E_element (const GGS_actualParameterForGeneration & inOperand0) :
mProperty_mActualParameter (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_actualParameterListForGeneration_2E_element::isValid (void) const {
  return mProperty_mActualParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::drop (void) {
  mProperty_mActualParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actualParameterListForGeneration_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actualParameterListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mActualParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actualParameterListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actualParameterListForGeneration_2E_element ("actualParameterListForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actualParameterListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actualParameterListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element & GGS_semanticInstructionListForGeneration_2E_element::operator = (const GGS_semanticInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element GGS_semanticInstructionListForGeneration_2E_element::init_21_ (const GGS_semanticInstructionForGeneration & in_mInstruction,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_semanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionListForGeneration_2E_element::GGS_semanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionForGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_semanticInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_semanticInstructionListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @semanticInstructionListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ("semanticInstructionListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (void) :
mProperty_mInstructionList (),
mProperty_mEndOfInstructionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) :
mProperty_mInstructionList (inSource.mProperty_mInstructionList),
mProperty_mEndOfInstructionList (inSource.mProperty_mEndOfInstructionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element & GGS_listOfSemanticInstructionListForGeneration_2E_element::operator = (const GGS_listOfSemanticInstructionListForGeneration_2E_element & inSource) {
  mProperty_mInstructionList = inSource.mProperty_mInstructionList ;
  mProperty_mEndOfInstructionList = inSource.mProperty_mEndOfInstructionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element GGS_listOfSemanticInstructionListForGeneration_2E_element::init_21__21_ (const GGS_semanticInstructionListForGeneration & in_mInstructionList,
                                                                                                                                   const GGS_location & in_mEndOfInstructionList,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_listOfSemanticInstructionListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstructionList = in_mInstructionList ;
  result.mProperty_mEndOfInstructionList = in_mEndOfInstructionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_listOfSemanticInstructionListForGeneration_2E_element::GGS_listOfSemanticInstructionListForGeneration_2E_element (const GGS_semanticInstructionListForGeneration & inOperand0,
                                                                                                                      const GGS_location & inOperand1) :
mProperty_mInstructionList (inOperand0),
mProperty_mEndOfInstructionList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_listOfSemanticInstructionListForGeneration_2E_element::isValid (void) const {
  return mProperty_mInstructionList.isValid () && mProperty_mEndOfInstructionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::drop (void) {
  mProperty_mInstructionList.drop () ;
  mProperty_mEndOfInstructionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_listOfSemanticInstructionListForGeneration_2E_element::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @listOfSemanticInstructionListForGeneration.element:") ;
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
//     @listOfSemanticInstructionListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2E_element ("listOfSemanticInstructionListForGeneration.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_listOfSemanticInstructionListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_listOfSemanticInstructionListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element::GGS_signatureForGrammarAnalysis_2E_element (void) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (),
mProperty_mGalgasTypeNameForGrammarAnalysis () {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element::GGS_signatureForGrammarAnalysis_2E_element (const GGS_signatureForGrammarAnalysis_2E_element & inSource) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inSource.mProperty_mFormalArgumentPassingModeForGrammarAnalysis),
mProperty_mGalgasTypeNameForGrammarAnalysis (inSource.mProperty_mGalgasTypeNameForGrammarAnalysis) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element & GGS_signatureForGrammarAnalysis_2E_element::operator = (const GGS_signatureForGrammarAnalysis_2E_element & inSource) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis = inSource.mProperty_mFormalArgumentPassingModeForGrammarAnalysis ;
  mProperty_mGalgasTypeNameForGrammarAnalysis = inSource.mProperty_mGalgasTypeNameForGrammarAnalysis ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element GGS_signatureForGrammarAnalysis_2E_element::init_21__21_ (const GGS_formalArgumentPassingModeAST & in_mFormalArgumentPassingModeForGrammarAnalysis,
                                                                                                     const GGS_lstring & in_mGalgasTypeNameForGrammarAnalysis,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_signatureForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFormalArgumentPassingModeForGrammarAnalysis = in_mFormalArgumentPassingModeForGrammarAnalysis ;
  result.mProperty_mGalgasTypeNameForGrammarAnalysis = in_mGalgasTypeNameForGrammarAnalysis ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_signatureForGrammarAnalysis_2E_element::GGS_signatureForGrammarAnalysis_2E_element (const GGS_formalArgumentPassingModeAST & inOperand0,
                                                                                        const GGS_lstring & inOperand1) :
mProperty_mFormalArgumentPassingModeForGrammarAnalysis (inOperand0),
mProperty_mGalgasTypeNameForGrammarAnalysis (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_signatureForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_mFormalArgumentPassingModeForGrammarAnalysis.isValid () && mProperty_mGalgasTypeNameForGrammarAnalysis.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis_2E_element::drop (void) {
  mProperty_mFormalArgumentPassingModeForGrammarAnalysis.drop () ;
  mProperty_mGalgasTypeNameForGrammarAnalysis.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_signatureForGrammarAnalysis_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @signatureForGrammarAnalysis.element:") ;
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
//     @signatureForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2E_element ("signatureForGrammarAnalysis.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_signatureForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_signatureForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mFormalParametersList () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mFormalParametersList (inSource.mProperty_mFormalParametersList) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::operator = (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mFormalParametersList = inSource.mProperty_mFormalParametersList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                                                     const GGS_signatureForGrammarAnalysis & in_mFormalParametersList,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mFormalParametersList = in_mFormalParametersList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                                        const GGS_signatureForGrammarAnalysis & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mFormalParametersList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFormalParametersList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mFormalParametersList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonterminalSymbolLabelMapForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFormalParametersList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonterminalSymbolLabelMapForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ("nonterminalSymbolLabelMapForGrammarAnalysis.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ (const GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::init_nil (void) {
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::description (String & ioString,
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
//     @nonterminalSymbolLabelMapForGrammarAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ("nonterminalSymbolLabelMapForGrammarAnalysis.element?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (void) :
mProperty_lkey (),
mProperty_mNonTerminalIndex (),
mProperty_mNonterminalSymbolParametersMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mNonTerminalIndex (inSource.mProperty_mNonTerminalIndex),
mProperty_mNonterminalSymbolParametersMap (inSource.mProperty_mNonterminalSymbolParametersMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::operator = (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mNonTerminalIndex = inSource.mProperty_mNonTerminalIndex ;
  mProperty_mNonterminalSymbolParametersMap = inSource.mProperty_mNonterminalSymbolParametersMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                                               const GGS_uint & in_mNonTerminalIndex,
                                                                                                                               const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & in_mNonterminalSymbolParametersMap,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mNonTerminalIndex = in_mNonTerminalIndex ;
  result.mProperty_mNonterminalSymbolParametersMap = in_mNonterminalSymbolParametersMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element (const GGS_lstring & inOperand0,
                                                                                                              const GGS_uint & inOperand1,
                                                                                                              const GGS_nonterminalSymbolLabelMapForGrammarAnalysis & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mNonTerminalIndex (inOperand1),
mProperty_mNonterminalSymbolParametersMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mNonTerminalIndex.isValid () && mProperty_mNonterminalSymbolParametersMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mNonTerminalIndex.drop () ;
  mProperty_mNonterminalSymbolParametersMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalSymbolMapForGrammarAnalysis.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalIndex.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonterminalSymbolParametersMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalSymbolMapForGrammarAnalysis.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element ("nonTerminalSymbolMapForGrammarAnalysis.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ (const GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::init_nil (void) {
  GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::isValid (void) const {
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

bool GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::description (String & ioString,
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
//     @nonTerminalSymbolMapForGrammarAnalysis.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ("nonTerminalSymbolMapForGrammarAnalysis.element?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalSymbolMapForGrammarAnalysis_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (void) :
mProperty_mSyntaxComponentName (),
mProperty_mNonTerminalToAddCount () {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (const GGS_nonTerminalToAddList_2E_element & inSource) :
mProperty_mSyntaxComponentName (inSource.mProperty_mSyntaxComponentName),
mProperty_mNonTerminalToAddCount (inSource.mProperty_mNonTerminalToAddCount) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element & GGS_nonTerminalToAddList_2E_element::operator = (const GGS_nonTerminalToAddList_2E_element & inSource) {
  mProperty_mSyntaxComponentName = inSource.mProperty_mSyntaxComponentName ;
  mProperty_mNonTerminalToAddCount = inSource.mProperty_mNonTerminalToAddCount ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element GGS_nonTerminalToAddList_2E_element::init_21__21_ (const GGS_string & in_mSyntaxComponentName,
                                                                                       const GGS_uint & in_mNonTerminalToAddCount,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_nonTerminalToAddList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mSyntaxComponentName = in_mSyntaxComponentName ;
  result.mProperty_mNonTerminalToAddCount = in_mNonTerminalToAddCount ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_nonTerminalToAddList_2E_element::GGS_nonTerminalToAddList_2E_element (const GGS_string & inOperand0,
                                                                          const GGS_uint & inOperand1) :
mProperty_mSyntaxComponentName (inOperand0),
mProperty_mNonTerminalToAddCount (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_nonTerminalToAddList_2E_element::isValid (void) const {
  return mProperty_mSyntaxComponentName.isValid () && mProperty_mNonTerminalToAddCount.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::drop (void) {
  mProperty_mSyntaxComponentName.drop () ;
  mProperty_mNonTerminalToAddCount.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_nonTerminalToAddList_2E_element::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @nonTerminalToAddList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mSyntaxComponentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNonTerminalToAddCount.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @nonTerminalToAddList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ("nonTerminalToAddList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_nonTerminalToAddList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_nonTerminalToAddList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (void) :
mProperty_mFilewrapperTemplateName (),
mProperty_mFilewrapperTemplateFormalInputParameters (),
mProperty_mTemplateInstructionListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) :
mProperty_mFilewrapperTemplateName (inSource.mProperty_mFilewrapperTemplateName),
mProperty_mFilewrapperTemplateFormalInputParameters (inSource.mProperty_mFilewrapperTemplateFormalInputParameters),
mProperty_mTemplateInstructionListForGeneration (inSource.mProperty_mTemplateInstructionListForGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element & GGS_filewrapperTemplateListForGeneration_2E_element::operator = (const GGS_filewrapperTemplateListForGeneration_2E_element & inSource) {
  mProperty_mFilewrapperTemplateName = inSource.mProperty_mFilewrapperTemplateName ;
  mProperty_mFilewrapperTemplateFormalInputParameters = inSource.mProperty_mFilewrapperTemplateFormalInputParameters ;
  mProperty_mTemplateInstructionListForGeneration = inSource.mProperty_mTemplateInstructionListForGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element GGS_filewrapperTemplateListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mFilewrapperTemplateName,
                                                                                                                           const GGS_formalInputParameterListForGeneration & in_mFilewrapperTemplateFormalInputParameters,
                                                                                                                           const GGS_templateInstructionListForGeneration & in_mTemplateInstructionListForGeneration,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapperTemplateListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFilewrapperTemplateName = in_mFilewrapperTemplateName ;
  result.mProperty_mFilewrapperTemplateFormalInputParameters = in_mFilewrapperTemplateFormalInputParameters ;
  result.mProperty_mTemplateInstructionListForGeneration = in_mTemplateInstructionListForGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_filewrapperTemplateListForGeneration_2E_element::GGS_filewrapperTemplateListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                          const GGS_formalInputParameterListForGeneration & inOperand1,
                                                                                                          const GGS_templateInstructionListForGeneration & inOperand2) :
mProperty_mFilewrapperTemplateName (inOperand0),
mProperty_mFilewrapperTemplateFormalInputParameters (inOperand1),
mProperty_mTemplateInstructionListForGeneration (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_filewrapperTemplateListForGeneration_2E_element::isValid (void) const {
  return mProperty_mFilewrapperTemplateName.isValid () && mProperty_mFilewrapperTemplateFormalInputParameters.isValid () && mProperty_mTemplateInstructionListForGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::drop (void) {
  mProperty_mFilewrapperTemplateName.drop () ;
  mProperty_mFilewrapperTemplateFormalInputParameters.drop () ;
  mProperty_mTemplateInstructionListForGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_filewrapperTemplateListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @filewrapperTemplateListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFilewrapperTemplateName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFilewrapperTemplateFormalInputParameters.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTemplateInstructionListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @filewrapperTemplateListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ("filewrapperTemplateListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_filewrapperTemplateListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_filewrapperTemplateListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
mProperty_expression (inSource.mProperty_expression) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some & GGS_propertyInCollectionInitializationAST_2E_some::operator = (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some GGS_propertyInCollectionInitializationAST_2E_some::init_21_ (const GGS_semanticExpressionAST & in_expression,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionInitializationAST_2E_some result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some::GGS_propertyInCollectionInitializationAST_2E_some (const GGS_semanticExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionInitializationAST.some:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionInitializationAST.some generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ("propertyInCollectionInitializationAST.some",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST_2E_some::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyInCollectionInitializationAST_2E_some_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_::GGS_propertyInCollectionInitializationAST_2E_some_3F_ (const GGS_propertyInCollectionInitializationAST_2E_some & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionInitializationAST_2E_some_3F_ GGS_propertyInCollectionInitializationAST_2E_some_3F_::init_nil (void) {
  GGS_propertyInCollectionInitializationAST_2E_some_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValid (void) const {
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

bool GGS_propertyInCollectionInitializationAST_2E_some_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyInCollectionInitializationAST_2E_some () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyInCollectionInitializationAST_2E_some_3F_::objectCompare (const GGS_propertyInCollectionInitializationAST_2E_some_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionInitializationAST_2E_some_3F_::description (String & ioString,
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
//     @propertyInCollectionInitializationAST.some? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ("propertyInCollectionInitializationAST.some?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionInitializationAST_2E_some_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionInitializationAST_2E_some_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element::GGS_propertyInCollectionListAST_2E_element (void) :
mProperty_mutability (),
mProperty_typeName (),
mProperty_name (),
mProperty_accessControl (),
mProperty_hasSelector (),
mProperty_initialization () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element::GGS_propertyInCollectionListAST_2E_element (const GGS_propertyInCollectionListAST_2E_element & inSource) :
mProperty_mutability (inSource.mProperty_mutability),
mProperty_typeName (inSource.mProperty_typeName),
mProperty_name (inSource.mProperty_name),
mProperty_accessControl (inSource.mProperty_accessControl),
mProperty_hasSelector (inSource.mProperty_hasSelector),
mProperty_initialization (inSource.mProperty_initialization) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element & GGS_propertyInCollectionListAST_2E_element::operator = (const GGS_propertyInCollectionListAST_2E_element & inSource) {
  mProperty_mutability = inSource.mProperty_mutability ;
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_name = inSource.mProperty_name ;
  mProperty_accessControl = inSource.mProperty_accessControl ;
  mProperty_hasSelector = inSource.mProperty_hasSelector ;
  mProperty_initialization = inSource.mProperty_initialization ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element GGS_propertyInCollectionListAST_2E_element::init_21_mutability_21__21__21__21_hasSelector_21_initialization (const GGS_propertyMutability & in_mutability,
                                                                                                                                                        const GGS_lstring & in_typeName,
                                                                                                                                                        const GGS_lstring & in_name,
                                                                                                                                                        const GGS_AccessControlAST & in_accessControl,
                                                                                                                                                        const GGS_bool & in_hasSelector,
                                                                                                                                                        const GGS_propertyInCollectionInitializationAST & in_initialization,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyInCollectionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mutability = in_mutability ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_name = in_name ;
  result.mProperty_accessControl = in_accessControl ;
  result.mProperty_hasSelector = in_hasSelector ;
  result.mProperty_initialization = in_initialization ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyInCollectionListAST_2E_element::GGS_propertyInCollectionListAST_2E_element (const GGS_propertyMutability & inOperand0,
                                                                                        const GGS_lstring & inOperand1,
                                                                                        const GGS_lstring & inOperand2,
                                                                                        const GGS_AccessControlAST & inOperand3,
                                                                                        const GGS_bool & inOperand4,
                                                                                        const GGS_propertyInCollectionInitializationAST & inOperand5) :
mProperty_mutability (inOperand0),
mProperty_typeName (inOperand1),
mProperty_name (inOperand2),
mProperty_accessControl (inOperand3),
mProperty_hasSelector (inOperand4),
mProperty_initialization (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyInCollectionListAST_2E_element::isValid (void) const {
  return mProperty_mutability.isValid () && mProperty_typeName.isValid () && mProperty_name.isValid () && mProperty_accessControl.isValid () && mProperty_hasSelector.isValid () && mProperty_initialization.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST_2E_element::drop (void) {
  mProperty_mutability.drop () ;
  mProperty_typeName.drop () ;
  mProperty_name.drop () ;
  mProperty_accessControl.drop () ;
  mProperty_hasSelector.drop () ;
  mProperty_initialization.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyInCollectionListAST_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyInCollectionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mutability.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_name.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessControl.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_hasSelector.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_initialization.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyInCollectionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyInCollectionListAST_2E_element ("propertyInCollectionListAST.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyInCollectionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyInCollectionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element::GGS_insertMethodMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element::GGS_insertMethodMap_2E_element (const GGS_insertMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element & GGS_insertMethodMap_2E_element::operator = (const GGS_insertMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_insertMethodMap_2E_element GGS_insertMethodMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_insertMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element::GGS_insertMethodMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @insertMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @insertMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element ("insertMethodMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @insertMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_::GGS_insertMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_::GGS_insertMethodMap_2E_element_3F_ (const GGS_insertMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_insertMethodMap_2E_element_3F_ GGS_insertMethodMap_2E_element_3F_::init_nil (void) {
  GGS_insertMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_insertMethodMap_2E_element_3F_::isValid (void) const {
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

bool GGS_insertMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_insertMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_insertMethodMap_2E_element_3F_::description (String & ioString,
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
//     @insertMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_insertMethodMap_2E_element_3F_ ("insertMethodMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_insertMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_insertMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element::GGS_searchMethodMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element::GGS_searchMethodMap_2E_element (const GGS_searchMethodMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element & GGS_searchMethodMap_2E_element::operator = (const GGS_searchMethodMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_searchMethodMap_2E_element GGS_searchMethodMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_searchMethodMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element::GGS_searchMethodMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_searchMethodMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @searchMethodMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @searchMethodMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element ("searchMethodMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_searchMethodMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------
//Optional @searchMethodMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_::GGS_searchMethodMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_::GGS_searchMethodMap_2E_element_3F_ (const GGS_searchMethodMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_searchMethodMap_2E_element_3F_ GGS_searchMethodMap_2E_element_3F_::init_nil (void) {
  GGS_searchMethodMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_searchMethodMap_2E_element_3F_::isValid (void) const {
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

bool GGS_searchMethodMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_searchMethodMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_searchMethodMap_2E_element_3F_::description (String & ioString,
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
//     @searchMethodMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_searchMethodMap_2E_element_3F_ ("searchMethodMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_searchMethodMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_searchMethodMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_logAST::GGS_logAST (void) :
mProperty_mLogMessage (),
mProperty_mLogExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_logAST::GGS_logAST (const GGS_logAST & inSource) :
mProperty_mLogMessage (inSource.mProperty_mLogMessage),
mProperty_mLogExpression (inSource.mProperty_mLogExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_logAST & GGS_logAST::operator = (const GGS_logAST & inSource) {
  mProperty_mLogMessage = inSource.mProperty_mLogMessage ;
  mProperty_mLogExpression = inSource.mProperty_mLogExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_logAST GGS_logAST::init_21__21_ (const GGS_lstring & in_mLogMessage,
                                     const GGS_semanticExpressionAST & in_mLogExpression,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_logAST result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLogMessage = in_mLogMessage ;
  result.mProperty_mLogExpression = in_mLogExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logAST::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_logAST::GGS_logAST (const GGS_lstring & inOperand0,
                        const GGS_semanticExpressionAST & inOperand1) :
mProperty_mLogMessage (inOperand0),
mProperty_mLogExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_logAST::isValid (void) const {
  return mProperty_mLogMessage.isValid () && mProperty_mLogExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logAST::drop (void) {
  mProperty_mLogMessage.drop () ;
  mProperty_mLogExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_logAST::description (String & ioString,
                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @logAST:") ;
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
//     @logAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logAST ("logAST",
                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logAST ;
}

//--------------------------------------------------------------------------------------------------
// @semanticInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionAST::objectCompare (const GGS_semanticInstructionAST & inOperand) const {
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

GGS_semanticInstructionAST::GGS_semanticInstructionAST (void) :
GGS_syntaxInstructionAST () {
}


void cPtr_semanticInstructionAST::
semanticInstructionAST_init_21_ (const GGS_location & in_mInstructionLocation,
                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST::GGS_semanticInstructionAST (const cPtr_semanticInstructionAST * inSourcePtr) :
GGS_syntaxInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

cPtr_semanticInstructionAST::cPtr_semanticInstructionAST (const GGS_location & in_mInstructionLocation,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionAST::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionAST ("semanticInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticInstructionAST_2E_weak::objectCompare (const GGS_semanticInstructionAST_2E_weak & inOperand) const {
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

GGS_semanticInstructionAST_2E_weak::GGS_semanticInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST_2E_weak & GGS_semanticInstructionAST_2E_weak::operator = (const GGS_semanticInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST_2E_weak::GGS_semanticInstructionAST_2E_weak (const GGS_semanticInstructionAST & inSource) :
GGS_syntaxInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST_2E_weak GGS_semanticInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_semanticInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST GGS_semanticInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_semanticInstructionAST result ;
  if (isValid ()) {
    const cPtr_semanticInstructionAST * p = (cPtr_semanticInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_semanticInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticInstructionAST GGS_semanticInstructionAST_2E_weak::bang_semanticInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_semanticInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_semanticInstructionAST) ;
      result = GGS_semanticInstructionAST ((cPtr_semanticInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @semanticInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak ("semanticInstructionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @semanticExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_semanticExpressionForGeneration::objectCompare (const GGS_semanticExpressionForGeneration & inOperand) const {
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

GGS_semanticExpressionForGeneration::GGS_semanticExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_semanticExpressionForGeneration::
semanticExpressionForGeneration_init_21__21_ (const GGS_unifiedTypeMapEntry & in_mResultType,
                                              const GGS_location & in_mLocation,
                                              Compiler * /* inCompiler */) {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration::GGS_semanticExpressionForGeneration (const cPtr_semanticExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_semanticExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_semanticExpressionForGeneration::readProperty_mResultType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mResultType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_semanticExpressionForGeneration::readProperty_mLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_semanticExpressionForGeneration * p = (cPtr_semanticExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_semanticExpressionForGeneration) ;
    return p->mProperty_mLocation ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @semanticExpressionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mResultType (),
mProperty_mLocation () {
}

//--------------------------------------------------------------------------------------------------

cPtr_semanticExpressionForGeneration::cPtr_semanticExpressionForGeneration (const GGS_unifiedTypeMapEntry & in_mResultType,
                                                                            const GGS_location & in_mLocation,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE),
mProperty_mResultType (),
mProperty_mLocation () {
  mProperty_mResultType = in_mResultType ;
  mProperty_mLocation = in_mLocation ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_semanticExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
    mProperty_mResultType.printNonNullClassInstanceProperties ("mResultType") ;
    mProperty_mLocation.printNonNullClassInstanceProperties ("mLocation") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @semanticExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_semanticExpressionForGeneration ("semanticExpressionForGeneration",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_semanticExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_logInstructionForGeneration_2E_weak::objectCompare (const GGS_logInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (void) :
GGS_semanticInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak & GGS_logInstructionForGeneration_2E_weak::operator = (const GGS_logInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak::GGS_logInstructionForGeneration_2E_weak (const GGS_logInstructionForGeneration & inSource) :
GGS_semanticInstructionForGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration_2E_weak GGS_logInstructionForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_logInstructionForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_logInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_logInstructionForGeneration * p = (cPtr_logInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_logInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_logInstructionForGeneration GGS_logInstructionForGeneration_2E_weak::bang_logInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_logInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_logInstructionForGeneration) ;
      result = GGS_logInstructionForGeneration ((cPtr_logInstructionForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @logInstructionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ("logInstructionForGeneration.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_logInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_logInstructionForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @superMethodCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionAST::objectCompare (const GGS_superMethodCallInstructionAST & inOperand) const {
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

GGS_superMethodCallInstructionAST::GGS_superMethodCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mMethodName,
                  const GGS_actualParameterListAST & in_mActualParameterList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_superMethodCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_superMethodCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->superMethodCallInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, inCompiler) ;
  const GGS_superMethodCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionAST::
superMethodCallInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                const GGS_lstring & in_mMethodName,
                                                const GGS_actualParameterListAST & in_mActualParameterList,
                                                Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST::GGS_superMethodCallInstructionAST (const cPtr_superMethodCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superMethodCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_superMethodCallInstructionAST::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_superMethodCallInstructionAST * p = (cPtr_superMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionAST) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_superMethodCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_superMethodCallInstructionAST * p = (cPtr_superMethodCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superMethodCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionAST::cPtr_superMethodCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionAST::cPtr_superMethodCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mMethodName,
                                                                        const GGS_actualParameterListAST & in_mActualParameterList,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mMethodName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_superMethodCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionAST ;
}

void cPtr_superMethodCallInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@superMethodCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_superMethodCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superMethodCallInstructionAST (mProperty_mInstructionLocation, mProperty_mMethodName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superMethodCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST ("superMethodCallInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionAST_2E_weak::objectCompare (const GGS_superMethodCallInstructionAST_2E_weak & inOperand) const {
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

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak & GGS_superMethodCallInstructionAST_2E_weak::operator = (const GGS_superMethodCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak::GGS_superMethodCallInstructionAST_2E_weak (const GGS_superMethodCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST_2E_weak GGS_superMethodCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_superMethodCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_superMethodCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_superMethodCallInstructionAST * p = (cPtr_superMethodCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_superMethodCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionAST GGS_superMethodCallInstructionAST_2E_weak::bang_superMethodCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_superMethodCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_superMethodCallInstructionAST) ;
      result = GGS_superMethodCallInstructionAST ((cPtr_superMethodCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ("superMethodCallInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @superMethodCallInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_superMethodCallInstructionForGeneration::objectCompare (const GGS_superMethodCallInstructionForGeneration & inOperand) const {
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

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration GGS_superMethodCallInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_string & in_mMethodName,
                          const GGS_actualParameterListForGeneration & in_mActualParameterList,
                          const GGS_bool & in_mHasCompilerArgument,
                          const GGS_unifiedTypeMapEntry & in_mBaseType,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_superMethodCallInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_superMethodCallInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mMethodName, in_mActualParameterList, in_mHasCompilerArgument, in_mBaseType, inCompiler) ;
  const GGS_superMethodCallInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_superMethodCallInstructionForGeneration::
superMethodCallInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                  const GGS_string & in_mMethodName,
                                                                  const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                  const GGS_bool & in_mHasCompilerArgument,
                                                                  const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

GGS_superMethodCallInstructionForGeneration::GGS_superMethodCallInstructionForGeneration (const cPtr_superMethodCallInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_superMethodCallInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_superMethodCallInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_superMethodCallInstructionForGeneration::readProperty_mMethodName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mMethodName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_superMethodCallInstructionForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_superMethodCallInstructionForGeneration::readProperty_mHasCompilerArgument (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mHasCompilerArgument ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_superMethodCallInstructionForGeneration::readProperty_mBaseType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_superMethodCallInstructionForGeneration * p = (cPtr_superMethodCallInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_superMethodCallInstructionForGeneration) ;
    return p->mProperty_mBaseType ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @superMethodCallInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
}

//--------------------------------------------------------------------------------------------------

cPtr_superMethodCallInstructionForGeneration::cPtr_superMethodCallInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                            const GGS_string & in_mMethodName,
                                                                                            const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                            const GGS_bool & in_mHasCompilerArgument,
                                                                                            const GGS_unifiedTypeMapEntry & in_mBaseType,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mMethodName (),
mProperty_mActualParameterList (),
mProperty_mHasCompilerArgument (),
mProperty_mBaseType () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mMethodName = in_mMethodName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mHasCompilerArgument = in_mHasCompilerArgument ;
  mProperty_mBaseType = in_mBaseType ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_superMethodCallInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
}

void cPtr_superMethodCallInstructionForGeneration::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@superMethodCallInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mMethodName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasCompilerArgument.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBaseType.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_superMethodCallInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_superMethodCallInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mMethodName, mProperty_mActualParameterList, mProperty_mHasCompilerArgument, mProperty_mBaseType, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_superMethodCallInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mMethodName.printNonNullClassInstanceProperties ("mMethodName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mHasCompilerArgument.printNonNullClassInstanceProperties ("mHasCompilerArgument") ;
    mProperty_mBaseType.printNonNullClassInstanceProperties ("mBaseType") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @superMethodCallInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ("superMethodCallInstructionForGeneration",
                                                                                            & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_superMethodCallInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_superMethodCallInstructionForGeneration ;
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

const GALGAS_TypeDescriptor * cPtr_syntaxSendInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_syntaxSendInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST ("syntaxSendInstructionAST",
                                                                             & kTypeDescriptor_GALGAS_syntaxInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionAST_2E_weak::objectCompare (const GGS_syntaxSendInstructionAST_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionAST_2E_weak::GGS_syntaxSendInstructionAST_2E_weak (void) :
GGS_syntaxInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST_2E_weak & GGS_syntaxSendInstructionAST_2E_weak::operator = (const GGS_syntaxSendInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_syntaxSendInstructionAST result ;
  if (isValid ()) {
    const cPtr_syntaxSendInstructionAST * p = (cPtr_syntaxSendInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxSendInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionAST GGS_syntaxSendInstructionAST_2E_weak::bang_syntaxSendInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ("syntaxSendInstructionAST.weak",
                                                                                     & kTypeDescriptor_GALGAS_syntaxInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @syntaxSendInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration::objectCompare (const GGS_syntaxSendInstructionForGeneration & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration::GGS_syntaxSendInstructionForGeneration (void) :
GGS_syntaxInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionForGeneration & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_syntaxSendInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_syntaxSendInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->syntaxSendInstructionForGeneration_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_syntaxSendInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_syntaxSendInstructionForGeneration::
syntaxSendInstructionForGeneration_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                 const GGS_semanticExpressionForGeneration & in_mExpression,
                                                 Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration::GGS_syntaxSendInstructionForGeneration (const cPtr_syntaxSendInstructionForGeneration * inSourcePtr) :
GGS_syntaxInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_syntaxSendInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_syntaxSendInstructionForGeneration::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_syntaxSendInstructionForGeneration) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @syntaxSendInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_syntaxSendInstructionForGeneration::cPtr_syntaxSendInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_semanticExpressionForGeneration & in_mExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_syntaxInstructionForGeneration (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_syntaxSendInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

void cPtr_syntaxSendInstructionForGeneration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@syntaxSendInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_syntaxSendInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_syntaxSendInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_syntaxSendInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_syntaxInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @syntaxSendInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ("syntaxSendInstructionForGeneration",
                                                                                       & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_syntaxSendInstructionForGeneration_2E_weak::objectCompare (const GGS_syntaxSendInstructionForGeneration_2E_weak & inOperand) const {
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

GGS_syntaxSendInstructionForGeneration_2E_weak::GGS_syntaxSendInstructionForGeneration_2E_weak (void) :
GGS_syntaxInstructionForGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration_2E_weak & GGS_syntaxSendInstructionForGeneration_2E_weak::operator = (const GGS_syntaxSendInstructionForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (isValid ()) {
    const cPtr_syntaxSendInstructionForGeneration * p = (cPtr_syntaxSendInstructionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_syntaxSendInstructionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_syntaxSendInstructionForGeneration GGS_syntaxSendInstructionForGeneration_2E_weak::bang_syntaxSendInstructionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_syntaxSendInstructionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ("syntaxSendInstructionForGeneration.weak",
                                                                                               & kTypeDescriptor_GALGAS_syntaxInstructionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_syntaxSendInstructionForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration_2E_weak ;
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
                          const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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
                                              const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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

GGS__5B_fixitElementAST_5D_ GGS_errorInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_fixitElementAST_5D_ () ;
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
                                                    const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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

const GALGAS_TypeDescriptor * cPtr_errorInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_errorInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST ("errorInstructionAST",
                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionAST_2E_weak::objectCompare (const GGS_errorInstructionAST_2E_weak & inOperand) const {
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

GGS_errorInstructionAST_2E_weak::GGS_errorInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionAST_2E_weak & GGS_errorInstructionAST_2E_weak::operator = (const GGS_errorInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ("errorInstructionAST.weak",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @errorInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_errorInstructionForGeneration::objectCompare (const GGS_errorInstructionForGeneration & inOperand) const {
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

GGS_errorInstructionForGeneration::GGS_errorInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_errorInstructionForGeneration GGS_errorInstructionForGeneration::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                          const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                          const GGS_stringlist & in_mBuiltVariableCppNameList,
                          const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_errorInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_errorInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->errorInstructionForGeneration_init_21__21__21__21__21_ (in_mInstructionLocation, in_mReceiverExpression, in_mErrorExpression, in_mBuiltVariableCppNameList, in_mFixitListForGeneration, inCompiler) ;
  const GGS_errorInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_errorInstructionForGeneration::
errorInstructionForGeneration_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                        const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                                        const GGS_stringlist & in_mBuiltVariableCppNameList,
                                                        const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mErrorExpression = in_mErrorExpression ;
  mProperty_mBuiltVariableCppNameList = in_mBuiltVariableCppNameList ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_errorInstructionForGeneration::GGS_errorInstructionForGeneration (const cPtr_errorInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_errorInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_errorInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_errorInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_errorInstructionForGeneration::readProperty_mErrorExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mErrorExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_errorInstructionForGeneration::readProperty_mBuiltVariableCppNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mBuiltVariableCppNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ GGS_errorInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_fixitElementForGeneration_5D_ () ;
  }else{
    cPtr_errorInstructionForGeneration * p = (cPtr_errorInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_errorInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @errorInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mErrorExpression (),
mProperty_mBuiltVariableCppNameList (),
mProperty_mFixitListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_errorInstructionForGeneration::cPtr_errorInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                        const GGS_semanticExpressionForGeneration & in_mErrorExpression,
                                                                        const GGS_stringlist & in_mBuiltVariableCppNameList,
                                                                        const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mErrorExpression (),
mProperty_mBuiltVariableCppNameList (),
mProperty_mFixitListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mErrorExpression = in_mErrorExpression ;
  mProperty_mBuiltVariableCppNameList = in_mBuiltVariableCppNameList ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_errorInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

void cPtr_errorInstructionForGeneration::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@errorInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mErrorExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mBuiltVariableCppNameList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_errorInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_errorInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mErrorExpression, mProperty_mBuiltVariableCppNameList, mProperty_mFixitListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_errorInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mErrorExpression.printNonNullClassInstanceProperties ("mErrorExpression") ;
    mProperty_mBuiltVariableCppNameList.printNonNullClassInstanceProperties ("mBuiltVariableCppNameList") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @errorInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_errorInstructionForGeneration ("errorInstructionForGeneration",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_errorInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_errorInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @procCallInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST::objectCompare (const GGS_procCallInstructionAST & inOperand) const {
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

GGS_procCallInstructionAST::GGS_procCallInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST::
init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                  const GGS_lstring & in_mRoutineName,
                  const GGS_actualParameterListAST & in_mActualParameterList,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_procCallInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_procCallInstructionAST (inCompiler COMMA_THERE)) ;
  object->procCallInstructionAST_init_21__21__21_ (in_mInstructionLocation, in_mRoutineName, in_mActualParameterList, inCompiler) ;
  const GGS_procCallInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_procCallInstructionAST::
procCallInstructionAST_init_21__21__21_ (const GGS_location & in_mInstructionLocation,
                                         const GGS_lstring & in_mRoutineName,
                                         const GGS_actualParameterListAST & in_mActualParameterList,
                                         Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST::GGS_procCallInstructionAST (const cPtr_procCallInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_procCallInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_procCallInstructionAST::readProperty_mRoutineName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mRoutineName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_procCallInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_procCallInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @procCallInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_procCallInstructionAST::cPtr_procCallInstructionAST (const GGS_location & in_mInstructionLocation,
                                                          const GGS_lstring & in_mRoutineName,
                                                          const GGS_actualParameterListAST & in_mActualParameterList,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mRoutineName (),
mProperty_mActualParameterList () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mRoutineName = in_mRoutineName ;
  mProperty_mActualParameterList = in_mActualParameterList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_procCallInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

void cPtr_procCallInstructionAST::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@procCallInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRoutineName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_procCallInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_procCallInstructionAST (mProperty_mInstructionLocation, mProperty_mRoutineName, mProperty_mActualParameterList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_procCallInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mRoutineName.printNonNullClassInstanceProperties ("mRoutineName") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST ("procCallInstructionAST",
                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_procCallInstructionAST_2E_weak::objectCompare (const GGS_procCallInstructionAST_2E_weak & inOperand) const {
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

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak & GGS_procCallInstructionAST_2E_weak::operator = (const GGS_procCallInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak::GGS_procCallInstructionAST_2E_weak (const GGS_procCallInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST_2E_weak GGS_procCallInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_procCallInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_procCallInstructionAST result ;
  if (isValid ()) {
    const cPtr_procCallInstructionAST * p = (cPtr_procCallInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_procCallInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_procCallInstructionAST GGS_procCallInstructionAST_2E_weak::bang_procCallInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_procCallInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_procCallInstructionAST) ;
      result = GGS_procCallInstructionAST ((cPtr_procCallInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @procCallInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ("procCallInstructionAST.weak",
                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_procCallInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_procCallInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfDivEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST::objectCompare (const GGS_selfDivEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfDivEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfDivEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfDivEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfDivEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfDivEqualExpressionInstructionAST::
selfDivEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST::GGS_selfDivEqualExpressionInstructionAST (const cPtr_selfDivEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfDivEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfDivEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfDivEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfDivEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfDivEqualExpressionInstructionAST::cPtr_selfDivEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_semanticExpressionAST & in_mExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfDivEqualExpressionInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selfDivEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfDivEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfDivEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfDivEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ("selfDivEqualExpressionInstructionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfDivEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfDivEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfDivEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak & GGS_selfDivEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfDivEqualExpressionInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak::GGS_selfDivEqualExpressionInstructionAST_2E_weak (const GGS_selfDivEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST_2E_weak GGS_selfDivEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfDivEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfDivEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfDivEqualExpressionInstructionAST * p = (cPtr_selfDivEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfDivEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfDivEqualExpressionInstructionAST GGS_selfDivEqualExpressionInstructionAST_2E_weak::bang_selfDivEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfDivEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfDivEqualExpressionInstructionAST) ;
      result = GGS_selfDivEqualExpressionInstructionAST ((cPtr_selfDivEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfDivEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ("selfDivEqualExpressionInstructionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfDivEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfDivEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfPlusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfPlusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfPlusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfPlusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfPlusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfPlusEqualExpressionInstructionAST::
selfPlusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                    const GGS_semanticExpressionAST & in_mExpression,
                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST::GGS_selfPlusEqualExpressionInstructionAST (const cPtr_selfPlusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfPlusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfPlusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfPlusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfPlusEqualExpressionInstructionAST::cPtr_selfPlusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                        const GGS_semanticExpressionAST & in_mExpression,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfPlusEqualExpressionInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selfPlusEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfPlusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfPlusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfPlusEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ("selfPlusEqualExpressionInstructionAST",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfPlusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfPlusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfPlusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak & GGS_selfPlusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfPlusEqualExpressionInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak::GGS_selfPlusEqualExpressionInstructionAST_2E_weak (const GGS_selfPlusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST_2E_weak GGS_selfPlusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfPlusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfPlusEqualExpressionInstructionAST * p = (cPtr_selfPlusEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfPlusEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfPlusEqualExpressionInstructionAST GGS_selfPlusEqualExpressionInstructionAST_2E_weak::bang_selfPlusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfPlusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfPlusEqualExpressionInstructionAST) ;
      result = GGS_selfPlusEqualExpressionInstructionAST ((cPtr_selfPlusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfPlusEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ("selfPlusEqualExpressionInstructionAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfPlusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfPlusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfMinusEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMinusEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMinusEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMinusEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfMinusEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMinusEqualExpressionInstructionAST::
selfMinusEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                     const GGS_semanticExpressionAST & in_mExpression,
                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST::GGS_selfMinusEqualExpressionInstructionAST (const cPtr_selfMinusEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfMinusEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMinusEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMinusEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfMinusEqualExpressionInstructionAST::cPtr_selfMinusEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_semanticExpressionAST & in_mExpression,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfMinusEqualExpressionInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selfMinusEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMinusEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMinusEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfMinusEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ("selfMinusEqualExpressionInstructionAST",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMinusEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMinusEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfMinusEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak & GGS_selfMinusEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfMinusEqualExpressionInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak::GGS_selfMinusEqualExpressionInstructionAST_2E_weak (const GGS_selfMinusEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST_2E_weak GGS_selfMinusEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfMinusEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfMinusEqualExpressionInstructionAST * p = (cPtr_selfMinusEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfMinusEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMinusEqualExpressionInstructionAST GGS_selfMinusEqualExpressionInstructionAST_2E_weak::bang_selfMinusEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfMinusEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMinusEqualExpressionInstructionAST) ;
      result = GGS_selfMinusEqualExpressionInstructionAST ((cPtr_selfMinusEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfMinusEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ("selfMinusEqualExpressionInstructionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMinusEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMinusEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @selfMulEqualExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMulEqualExpressionInstructionAST::objectCompare (const GGS_selfMulEqualExpressionInstructionAST & inOperand) const {
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

GGS_selfMulEqualExpressionInstructionAST::GGS_selfMulEqualExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST::
init_21__21_ (const GGS_location & in_mInstructionLocation,
              const GGS_semanticExpressionAST & in_mExpression,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_selfMulEqualExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_selfMulEqualExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->selfMulEqualExpressionInstructionAST_init_21__21_ (in_mInstructionLocation, in_mExpression, inCompiler) ;
  const GGS_selfMulEqualExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_selfMulEqualExpressionInstructionAST::
selfMulEqualExpressionInstructionAST_init_21__21_ (const GGS_location & in_mInstructionLocation,
                                                   const GGS_semanticExpressionAST & in_mExpression,
                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST::GGS_selfMulEqualExpressionInstructionAST (const cPtr_selfMulEqualExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selfMulEqualExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_selfMulEqualExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_selfMulEqualExpressionInstructionAST * p = (cPtr_selfMulEqualExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selfMulEqualExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @selfMulEqualExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_selfMulEqualExpressionInstructionAST::cPtr_selfMulEqualExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                      const GGS_semanticExpressionAST & in_mExpression,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_selfMulEqualExpressionInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_selfMulEqualExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_selfMulEqualExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_selfMulEqualExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @selfMulEqualExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ("selfMulEqualExpressionInstructionAST",
                                                                                         & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMulEqualExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_selfMulEqualExpressionInstructionAST_2E_weak::objectCompare (const GGS_selfMulEqualExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_selfMulEqualExpressionInstructionAST_2E_weak::GGS_selfMulEqualExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak & GGS_selfMulEqualExpressionInstructionAST_2E_weak::operator = (const GGS_selfMulEqualExpressionInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak::GGS_selfMulEqualExpressionInstructionAST_2E_weak (const GGS_selfMulEqualExpressionInstructionAST & inSource) :
GGS_semanticInstructionAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST_2E_weak GGS_selfMulEqualExpressionInstructionAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_selfMulEqualExpressionInstructionAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_selfMulEqualExpressionInstructionAST result ;
  if (isValid ()) {
    const cPtr_selfMulEqualExpressionInstructionAST * p = (cPtr_selfMulEqualExpressionInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selfMulEqualExpressionInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selfMulEqualExpressionInstructionAST GGS_selfMulEqualExpressionInstructionAST_2E_weak::bang_selfMulEqualExpressionInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selfMulEqualExpressionInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_selfMulEqualExpressionInstructionAST) ;
      result = GGS_selfMulEqualExpressionInstructionAST ((cPtr_selfMulEqualExpressionInstructionAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @selfMulEqualExpressionInstructionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2E_weak ("selfMulEqualExpressionInstructionAST.weak",
                                                                                                 & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selfMulEqualExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selfMulEqualExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@opAssignmentOperator features'
//--------------------------------------------------------------------------------------------------

GGS_typeFeatures extensionGetter_features (const GGS_opAssignmentOperator & inObject,
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeFeatures result_result ; // Returned variable
  const GGS_opAssignmentOperator temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_opAssignmentOperator::Enumeration::invalid:
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_orAssign:
    {
      result_result = GGS_typeFeatures::class_func_orAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 395)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_xorAssign:
    {
      result_result = GGS_typeFeatures::class_func_xorAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 396)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_andAssign:
    {
      result_result = GGS_typeFeatures::class_func_andAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 397)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_plusAssign:
    {
      result_result = GGS_typeFeatures::class_func_plusAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 398)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_minusAssign:
    {
      result_result = GGS_typeFeatures::class_func_minusAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 399)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_mulAssign:
    {
      result_result = GGS_typeFeatures::class_func_mulAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 400)) ;
    }
    break ;
  case GGS_opAssignmentOperator::Enumeration::enum_divAssign:
    {
      result_result = GGS_typeFeatures::class_func_divAssignOperatorWithExpression (SOURCE_FILE ("instruction-concat.galgas4", 401)) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
// @opAssignExpressionInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignExpressionInstructionAST::objectCompare (const GGS_opAssignExpressionInstructionAST & inOperand) const {
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

GGS_opAssignExpressionInstructionAST::GGS_opAssignExpressionInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST GGS_opAssignExpressionInstructionAST::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_bool & in_mPrefixedBySelf,
                              const GGS_lstring & in_mReceiverName,
                              const GGS_lstringlist & in_mStructAttributeList,
                              const GGS_opAssignmentOperator & in_mOperator,
                              const GGS_semanticExpressionAST & in_mExpression,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_opAssignExpressionInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_opAssignExpressionInstructionAST (inCompiler COMMA_THERE)) ;
  object->opAssignExpressionInstructionAST_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mPrefixedBySelf, in_mReceiverName, in_mStructAttributeList, in_mOperator, in_mExpression, inCompiler) ;
  const GGS_opAssignExpressionInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_opAssignExpressionInstructionAST::
opAssignExpressionInstructionAST_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                               const GGS_bool & in_mPrefixedBySelf,
                                                               const GGS_lstring & in_mReceiverName,
                                                               const GGS_lstringlist & in_mStructAttributeList,
                                                               const GGS_opAssignmentOperator & in_mOperator,
                                                               const GGS_semanticExpressionAST & in_mExpression,
                                                               Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST::GGS_opAssignExpressionInstructionAST (const cPtr_opAssignExpressionInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opAssignExpressionInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_opAssignExpressionInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignExpressionInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_opAssignExpressionInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignExpressionInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_opAssignExpressionInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignExpressionInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignmentOperator GGS_opAssignExpressionInstructionAST::readProperty_mOperator (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_opAssignmentOperator () ;
  }else{
    cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignExpressionInstructionAST) ;
    return p->mProperty_mOperator ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_opAssignExpressionInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_opAssignExpressionInstructionAST * p = (cPtr_opAssignExpressionInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignExpressionInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @opAssignExpressionInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_opAssignExpressionInstructionAST::cPtr_opAssignExpressionInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mOperator (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_opAssignExpressionInstructionAST::cPtr_opAssignExpressionInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_bool & in_mPrefixedBySelf,
                                                                              const GGS_lstring & in_mReceiverName,
                                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                                              const GGS_opAssignmentOperator & in_mOperator,
                                                                              const GGS_semanticExpressionAST & in_mExpression,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mOperator (),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mOperator = in_mOperator ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_opAssignExpressionInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST ;
}

void cPtr_opAssignExpressionInstructionAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@opAssignExpressionInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOperator.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_opAssignExpressionInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_opAssignExpressionInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mOperator, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_opAssignExpressionInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mOperator.printNonNullClassInstanceProperties ("mOperator") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @opAssignExpressionInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST ("opAssignExpressionInstructionAST",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_opAssignExpressionInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignExpressionInstructionAST_2E_weak::objectCompare (const GGS_opAssignExpressionInstructionAST_2E_weak & inOperand) const {
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

GGS_opAssignExpressionInstructionAST_2E_weak::GGS_opAssignExpressionInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignExpressionInstructionAST_2E_weak & GGS_opAssignExpressionInstructionAST_2E_weak::operator = (const GGS_opAssignExpressionInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ("opAssignExpressionInstructionAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_opAssignExpressionInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignExpressionInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @plusPlusEqualElementInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusEqualElementInstructionAST::objectCompare (const GGS_plusPlusEqualElementInstructionAST & inOperand) const {
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

GGS_plusPlusEqualElementInstructionAST::GGS_plusPlusEqualElementInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST GGS_plusPlusEqualElementInstructionAST::
init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                          const GGS_bool & in_mPrefixedBySelf,
                          const GGS_lstring & in_mReceiverName,
                          const GGS_lstringlist & in_mStructAttributeList,
                          const GGS_semanticExpressionAST & in_mExpression,
                          Compiler * inCompiler
                          COMMA_LOCATION_ARGS) {
  cPtr_plusPlusEqualElementInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_plusPlusEqualElementInstructionAST (inCompiler COMMA_THERE)) ;
  object->plusPlusEqualElementInstructionAST_init_21__21__21__21__21_ (in_mInstructionLocation, in_mPrefixedBySelf, in_mReceiverName, in_mStructAttributeList, in_mExpression, inCompiler) ;
  const GGS_plusPlusEqualElementInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusEqualElementInstructionAST::
plusPlusEqualElementInstructionAST_init_21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                             const GGS_bool & in_mPrefixedBySelf,
                                                             const GGS_lstring & in_mReceiverName,
                                                             const GGS_lstringlist & in_mStructAttributeList,
                                                             const GGS_semanticExpressionAST & in_mExpression,
                                                             Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST::GGS_plusPlusEqualElementInstructionAST (const cPtr_plusPlusEqualElementInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusPlusEqualElementInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_plusPlusEqualElementInstructionAST::readProperty_mPrefixedBySelf (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_plusPlusEqualElementInstructionAST * p = (cPtr_plusPlusEqualElementInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusEqualElementInstructionAST) ;
    return p->mProperty_mPrefixedBySelf ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_plusPlusEqualElementInstructionAST::readProperty_mReceiverName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_plusPlusEqualElementInstructionAST * p = (cPtr_plusPlusEqualElementInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusEqualElementInstructionAST) ;
    return p->mProperty_mReceiverName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_plusPlusEqualElementInstructionAST::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_plusPlusEqualElementInstructionAST * p = (cPtr_plusPlusEqualElementInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusEqualElementInstructionAST) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_plusPlusEqualElementInstructionAST::readProperty_mExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_plusPlusEqualElementInstructionAST * p = (cPtr_plusPlusEqualElementInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusEqualElementInstructionAST) ;
    return p->mProperty_mExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusPlusEqualElementInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_plusPlusEqualElementInstructionAST::cPtr_plusPlusEqualElementInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_plusPlusEqualElementInstructionAST::cPtr_plusPlusEqualElementInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                                  const GGS_bool & in_mPrefixedBySelf,
                                                                                  const GGS_lstring & in_mReceiverName,
                                                                                  const GGS_lstringlist & in_mStructAttributeList,
                                                                                  const GGS_semanticExpressionAST & in_mExpression,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mPrefixedBySelf (),
mProperty_mReceiverName (),
mProperty_mStructAttributeList (),
mProperty_mExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mPrefixedBySelf = in_mPrefixedBySelf ;
  mProperty_mReceiverName = in_mReceiverName ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mExpression = in_mExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_plusPlusEqualElementInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST ;
}

void cPtr_plusPlusEqualElementInstructionAST::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@plusPlusEqualElementInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPrefixedBySelf.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_plusPlusEqualElementInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusPlusEqualElementInstructionAST (mProperty_mInstructionLocation, mProperty_mPrefixedBySelf, mProperty_mReceiverName, mProperty_mStructAttributeList, mProperty_mExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusPlusEqualElementInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mPrefixedBySelf.printNonNullClassInstanceProperties ("mPrefixedBySelf") ;
    mProperty_mReceiverName.printNonNullClassInstanceProperties ("mReceiverName") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mExpression.printNonNullClassInstanceProperties ("mExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @plusPlusEqualElementInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST ("plusPlusEqualElementInstructionAST",
                                                                                       & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_plusPlusEqualElementInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusEqualElementInstructionAST_2E_weak::objectCompare (const GGS_plusPlusEqualElementInstructionAST_2E_weak & inOperand) const {
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

GGS_plusPlusEqualElementInstructionAST_2E_weak::GGS_plusPlusEqualElementInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusEqualElementInstructionAST_2E_weak & GGS_plusPlusEqualElementInstructionAST_2E_weak::operator = (const GGS_plusPlusEqualElementInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST_2E_weak ("plusPlusEqualElementInstructionAST.weak",
                                                                                               & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_plusPlusEqualElementInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusEqualElementInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @opAssignInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_opAssignInstructionForGeneration::objectCompare (const GGS_opAssignInstructionForGeneration & inOperand) const {
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

GGS_opAssignInstructionForGeneration::GGS_opAssignInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_opAssignInstructionForGeneration GGS_opAssignInstructionForGeneration::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_unifiedTypeMapEntry & in_mTargetType,
                                  const GGS_string & in_mTargetVariableCppName,
                                  const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                  const GGS_lstringlist & in_mStructAttributeList,
                                  const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                  const GGS_string & in_mGeneratedMethod,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_opAssignInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_opAssignInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->opAssignInstructionForGeneration_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mTargetType, in_mTargetVariableCppName, in_mNameForCheckingFormalParameterUsing, in_mStructAttributeList, in_mSourceExpression, in_mGeneratedMethod, inCompiler) ;
  const GGS_opAssignInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_opAssignInstructionForGeneration::
opAssignInstructionForGeneration_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                   const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                   const GGS_string & in_mTargetVariableCppName,
                                                                   const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                   const GGS_lstringlist & in_mStructAttributeList,
                                                                   const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                   const GGS_string & in_mGeneratedMethod,
                                                                   Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVariableCppName = in_mTargetVariableCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mGeneratedMethod = in_mGeneratedMethod ;
}

//--------------------------------------------------------------------------------------------------

GGS_opAssignInstructionForGeneration::GGS_opAssignInstructionForGeneration (const cPtr_opAssignInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_opAssignInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_opAssignInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_opAssignInstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_opAssignInstructionForGeneration::readProperty_mTargetVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mTargetVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_opAssignInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_opAssignInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_opAssignInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_opAssignInstructionForGeneration::readProperty_mGeneratedMethod (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_opAssignInstructionForGeneration * p = (cPtr_opAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_opAssignInstructionForGeneration) ;
    return p->mProperty_mGeneratedMethod ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @opAssignInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_opAssignInstructionForGeneration::cPtr_opAssignInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mTargetType (),
mProperty_mTargetVariableCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mStructAttributeList (),
mProperty_mSourceExpression (),
mProperty_mGeneratedMethod () {
}

//--------------------------------------------------------------------------------------------------

cPtr_opAssignInstructionForGeneration::cPtr_opAssignInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                              const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                              const GGS_string & in_mTargetVariableCppName,
                                                                              const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                              const GGS_lstringlist & in_mStructAttributeList,
                                                                              const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                              const GGS_string & in_mGeneratedMethod,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mTargetType (),
mProperty_mTargetVariableCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mStructAttributeList (),
mProperty_mSourceExpression (),
mProperty_mGeneratedMethod () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVariableCppName = in_mTargetVariableCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mGeneratedMethod = in_mGeneratedMethod ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_opAssignInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignInstructionForGeneration ;
}

void cPtr_opAssignInstructionForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@opAssignInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGeneratedMethod.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_opAssignInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_opAssignInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTargetType, mProperty_mTargetVariableCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression, mProperty_mGeneratedMethod, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_opAssignInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVariableCppName.printNonNullClassInstanceProperties ("mTargetVariableCppName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mGeneratedMethod.printNonNullClassInstanceProperties ("mGeneratedMethod") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @opAssignInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_opAssignInstructionForGeneration ("opAssignInstructionForGeneration",
                                                                                     & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_opAssignInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_opAssignInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
// @plusPlusAssignInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_plusPlusAssignInstructionForGeneration::objectCompare (const GGS_plusPlusAssignInstructionForGeneration & inOperand) const {
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

GGS_plusPlusAssignInstructionForGeneration::GGS_plusPlusAssignInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration GGS_plusPlusAssignInstructionForGeneration::
init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                              const GGS_unifiedTypeMapEntry & in_mTargetType,
                              const GGS_string & in_mTargetVariableCppName,
                              const GGS_string & in_mNameForCheckingFormalParameterUsing,
                              const GGS_lstringlist & in_mStructAttributeList,
                              const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                              Compiler * inCompiler
                              COMMA_LOCATION_ARGS) {
  cPtr_plusPlusAssignInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_plusPlusAssignInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->plusPlusAssignInstructionForGeneration_init_21__21__21__21__21__21_ (in_mInstructionLocation, in_mTargetType, in_mTargetVariableCppName, in_mNameForCheckingFormalParameterUsing, in_mStructAttributeList, in_mSourceExpression, inCompiler) ;
  const GGS_plusPlusAssignInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_plusPlusAssignInstructionForGeneration::
plusPlusAssignInstructionForGeneration_init_21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                     const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                     const GGS_string & in_mTargetVariableCppName,
                                                                     const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                     const GGS_lstringlist & in_mStructAttributeList,
                                                                     const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                     Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVariableCppName = in_mTargetVariableCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

GGS_plusPlusAssignInstructionForGeneration::GGS_plusPlusAssignInstructionForGeneration (const cPtr_plusPlusAssignInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_plusPlusAssignInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_plusPlusAssignInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_unifiedTypeMapEntry GGS_plusPlusAssignInstructionForGeneration::readProperty_mTargetType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_unifiedTypeMapEntry () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mTargetType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_plusPlusAssignInstructionForGeneration::readProperty_mTargetVariableCppName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mTargetVariableCppName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_plusPlusAssignInstructionForGeneration::readProperty_mNameForCheckingFormalParameterUsing (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mNameForCheckingFormalParameterUsing ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_plusPlusAssignInstructionForGeneration::readProperty_mStructAttributeList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mStructAttributeList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_plusPlusAssignInstructionForGeneration::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_plusPlusAssignInstructionForGeneration * p = (cPtr_plusPlusAssignInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_plusPlusAssignInstructionForGeneration) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @plusPlusAssignInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_plusPlusAssignInstructionForGeneration::cPtr_plusPlusAssignInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mTargetType (),
mProperty_mTargetVariableCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mStructAttributeList (),
mProperty_mSourceExpression () {
}

//--------------------------------------------------------------------------------------------------

cPtr_plusPlusAssignInstructionForGeneration::cPtr_plusPlusAssignInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                          const GGS_unifiedTypeMapEntry & in_mTargetType,
                                                                                          const GGS_string & in_mTargetVariableCppName,
                                                                                          const GGS_string & in_mNameForCheckingFormalParameterUsing,
                                                                                          const GGS_lstringlist & in_mStructAttributeList,
                                                                                          const GGS_semanticExpressionForGeneration & in_mSourceExpression,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mTargetType (),
mProperty_mTargetVariableCppName (),
mProperty_mNameForCheckingFormalParameterUsing (),
mProperty_mStructAttributeList (),
mProperty_mSourceExpression () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mTargetType = in_mTargetType ;
  mProperty_mTargetVariableCppName = in_mTargetVariableCppName ;
  mProperty_mNameForCheckingFormalParameterUsing = in_mNameForCheckingFormalParameterUsing ;
  mProperty_mStructAttributeList = in_mStructAttributeList ;
  mProperty_mSourceExpression = in_mSourceExpression ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_plusPlusAssignInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration ;
}

void cPtr_plusPlusAssignInstructionForGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@plusPlusAssignInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTargetVariableCppName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameForCheckingFormalParameterUsing.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStructAttributeList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_plusPlusAssignInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_plusPlusAssignInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mTargetType, mProperty_mTargetVariableCppName, mProperty_mNameForCheckingFormalParameterUsing, mProperty_mStructAttributeList, mProperty_mSourceExpression, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_plusPlusAssignInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mTargetType.printNonNullClassInstanceProperties ("mTargetType") ;
    mProperty_mTargetVariableCppName.printNonNullClassInstanceProperties ("mTargetVariableCppName") ;
    mProperty_mNameForCheckingFormalParameterUsing.printNonNullClassInstanceProperties ("mNameForCheckingFormalParameterUsing") ;
    mProperty_mStructAttributeList.printNonNullClassInstanceProperties ("mStructAttributeList") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @plusPlusAssignInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration ("plusPlusAssignInstructionForGeneration",
                                                                                           & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_plusPlusAssignInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_plusPlusAssignInstructionForGeneration ;
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
                      const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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
                                            const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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

GGS__5B_fixitElementAST_5D_ GGS_warningInstructionAST::readProperty_mFixitListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_fixitElementAST_5D_ () ;
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
                                                        const GGS__5B_fixitElementAST_5D_ & in_mFixitListAST,
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

const GALGAS_TypeDescriptor * cPtr_warningInstructionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_warningInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST ("warningInstructionAST",
                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionAST_2E_weak::objectCompare (const GGS_warningInstructionAST_2E_weak & inOperand) const {
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

GGS_warningInstructionAST_2E_weak::GGS_warningInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST_2E_weak & GGS_warningInstructionAST_2E_weak::operator = (const GGS_warningInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST_2E_weak::unwrappedValue (void) const {
  GGS_warningInstructionAST result ;
  if (isValid ()) {
    const cPtr_warningInstructionAST * p = (cPtr_warningInstructionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_warningInstructionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionAST GGS_warningInstructionAST_2E_weak::bang_warningInstructionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_warningInstructionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ("warningInstructionAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @warningInstructionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_warningInstructionForGeneration::objectCompare (const GGS_warningInstructionForGeneration & inOperand) const {
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

GGS_warningInstructionForGeneration::GGS_warningInstructionForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_warningInstructionForGeneration GGS_warningInstructionForGeneration::
init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                      const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                      const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_warningInstructionForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_warningInstructionForGeneration (inCompiler COMMA_THERE)) ;
  object->warningInstructionForGeneration_init_21__21__21__21_ (in_mInstructionLocation, in_mReceiverExpression, in_mWarningExpression, in_mFixitListForGeneration, inCompiler) ;
  const GGS_warningInstructionForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_warningInstructionForGeneration::
warningInstructionForGeneration_init_21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                      const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                      const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                      const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                                                      Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mWarningExpression = in_mWarningExpression ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

GGS_warningInstructionForGeneration::GGS_warningInstructionForGeneration (const cPtr_warningInstructionForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_warningInstructionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_warningInstructionForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_warningInstructionForGeneration::readProperty_mReceiverExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mReceiverExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_warningInstructionForGeneration::readProperty_mWarningExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mWarningExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_fixitElementForGeneration_5D_ GGS_warningInstructionForGeneration::readProperty_mFixitListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_fixitElementForGeneration_5D_ () ;
  }else{
    cPtr_warningInstructionForGeneration * p = (cPtr_warningInstructionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_warningInstructionForGeneration) ;
    return p->mProperty_mFixitListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @warningInstructionForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mWarningExpression (),
mProperty_mFixitListForGeneration () {
}

//--------------------------------------------------------------------------------------------------

cPtr_warningInstructionForGeneration::cPtr_warningInstructionForGeneration (const GGS_location & in_mInstructionLocation,
                                                                            const GGS_semanticExpressionForGeneration & in_mReceiverExpression,
                                                                            const GGS_semanticExpressionForGeneration & in_mWarningExpression,
                                                                            const GGS__5B_fixitElementForGeneration_5D_ & in_mFixitListForGeneration,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mReceiverExpression (),
mProperty_mWarningExpression (),
mProperty_mFixitListForGeneration () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mReceiverExpression = in_mReceiverExpression ;
  mProperty_mWarningExpression = in_mWarningExpression ;
  mProperty_mFixitListForGeneration = in_mFixitListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_warningInstructionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

void cPtr_warningInstructionForGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@warningInstructionForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mReceiverExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mWarningExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mFixitListForGeneration.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_warningInstructionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_warningInstructionForGeneration (mProperty_mInstructionLocation, mProperty_mReceiverExpression, mProperty_mWarningExpression, mProperty_mFixitListForGeneration, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_warningInstructionForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mReceiverExpression.printNonNullClassInstanceProperties ("mReceiverExpression") ;
    mProperty_mWarningExpression.printNonNullClassInstanceProperties ("mWarningExpression") ;
    mProperty_mFixitListForGeneration.printNonNullClassInstanceProperties ("mFixitListForGeneration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @warningInstructionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_warningInstructionForGeneration ("warningInstructionForGeneration",
                                                                                    & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_warningInstructionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_warningInstructionForGeneration ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension proc '@CommaSeparatedExpressionList enterExpressionListInSemanticContext'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_enterExpressionListInSemanticContext (const GGS_CommaSeparatedExpressionList inObject,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_CommaSeparatedExpressionList temp_0 = inObject ;
  UpEnumerator_CommaSeparatedExpressionList enumerator_5874 (temp_0) ;
  while (enumerator_5874.hasCurrentObject ()) {
    switch (enumerator_5874.current (HERE).readProperty_mExpression ().enumValue ()) {
    case GGS_ifExpressionKind::Enumeration::invalid:
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_regularExp:
      {
        GGS_semanticExpressionAST extractedValue_5936_exp_0 ;
        GGS_location extractedValue_5941__1 ;
        enumerator_5874.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_regularExp (extractedValue_5936_exp_0, extractedValue_5941__1) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_5936_exp_0.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 168)) ;
      }
      break ;
    case GGS_ifExpressionKind::Enumeration::enum_letVarExp:
      {
        GGS_lstring extractedValue_6028__0 ;
        GGS_bool extractedValue_6028__1 ;
        GGS_semanticExpressionAST extractedValue_6031_exp_2 ;
        GGS_location extractedValue_6036__3 ;
        GGS_lstring extractedValue_6048_typeName_4 ;
        enumerator_5874.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_letVarExp (extractedValue_6028__0, extractedValue_6028__1, extractedValue_6031_exp_2, extractedValue_6036__3, extractedValue_6048_typeName_4) ;
        callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) extractedValue_6031_exp_2.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 170)) ;
        {
        GGS_unifiedTypeMapEntry joker_6160 ; // Joker input parameter
        extensionSetter_makeEntry (ioArgument_ioTypeMap, extractedValue_6048_typeName_4, joker_6160, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 171)) ;
        }
      }
      break ;
    }
    enumerator_5874.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Extension proc '@ifTestListForGeneration generateInstruction'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_generateInstruction (const GGS_ifTestListForGeneration inObject,
                                          GGS_stringset & ioArgument_ioInclusionSet,
                                          GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                          GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                          GGS_string & ioArgument_ioGeneratedCode,
                                          GGS_string & outArgument_outTestVar,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTestVar.drop () ; // Release 'out' argument
  outArgument_outTestVar = GGS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.getter_string (SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 407)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 407)) ;
  ioArgument_ioTemporaryVariableIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 408)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GalgasBool ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 409)).add_operation (GGS_string (" = GalgasBool::boolTrue ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 409)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 409)) ;
  const GGS_ifTestListForGeneration temp_0 = inObject ;
  UpEnumerator_ifTestListForGeneration enumerator_15837 (temp_0) ;
  while (enumerator_15837.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (GalgasBool::boolTrue == ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 411)).add_operation (GGS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 411)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 411)) ;
    {
    ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 412)) ;
    }
    switch (enumerator_15837.current (HERE).readProperty_mExpression ().enumValue ()) {
    case GGS_ifTestForGeneration::Enumeration::invalid:
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_regular:
      {
        GGS_semanticExpressionForGeneration extractedValue_16018_exp_0 ;
        enumerator_15837.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_regular (extractedValue_16018_exp_0) ;
        GGS_string var_cppVarName_16207 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16018_exp_0.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_16207, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 415)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(outArgument_outTestVar.add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 422)).add_operation (var_cppVarName_16207, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 422)).add_operation (GGS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 422)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 422)) ;
      }
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_letVarExp:
      {
        GGS_string extractedValue_16330_targetVarCppName_0 ;
        GGS_semanticExpressionForGeneration extractedValue_16348_exp_1 ;
        GGS_unifiedTypeMapEntry extractedValue_16353_targetType_2 ;
        GGS_unifiedTypeMapEntry extractedValue_16365_testType_3 ;
        enumerator_15837.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_letVarExp (extractedValue_16330_targetVarCppName_0, extractedValue_16348_exp_1, extractedValue_16353_targetType_2, extractedValue_16365_testType_3) ;
        extensionMethod_addHeaderFileName (extractedValue_16353_targetType_2, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 424)) ;
        extensionMethod_addHeaderFileName (extractedValue_16365_testType_3, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 425)) ;
        GGS_string var_targetTypeName_16499 = extensionGetter_identifierRepresentation (extractedValue_16353_targetType_2, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 426)) ;
        GGS_string var_testTypeName_16564 = extensionGetter_identifierRepresentation (extractedValue_16365_testType_3, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 427)) ;
        GGS_string var_cppVarName_16795 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_16348_exp_1.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_16795, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 428)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (var_targetTypeName_16499, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 435)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 435)).add_operation (extractedValue_16330_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 435)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 435)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" (dynamic_cast <const cPtr_").add_operation (var_testTypeName_16564, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 436)).add_operation (GGS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 436)).add_operation (var_cppVarName_16795, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 436)).add_operation (GGS_string (".ptr ())) ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 436)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 436)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (nullptr == ").add_operation (extractedValue_16330_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 437)).add_operation (GGS_string (".ptr ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 437)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 437)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 438)).add_operation (GGS_string (" = GalgasBool::boolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 438)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 438)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 439)) ;
      }
      break ;
    case GGS_ifTestForGeneration::Enumeration::enum_optionalExp:
      {
        GGS_string extractedValue_17221_targetVarCppName_0 ;
        GGS_bool extractedValue_17239_isConstant_1 ;
        GGS_semanticExpressionForGeneration extractedValue_17251_exp_2 ;
        GGS_unifiedTypeMapEntry extractedValue_17256_targetType_3 ;
        enumerator_15837.current (HERE).readProperty_mExpression ().getAssociatedValuesFor_optionalExp (extractedValue_17221_targetVarCppName_0, extractedValue_17239_isConstant_1, extractedValue_17251_exp_2, extractedValue_17256_targetType_3) ;
        GGS_string var_targetTypeName_17282 = extensionGetter_identifierRepresentation (extractedValue_17256_targetType_3, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 441)) ;
        GGS_string var_cppVarName_17517 ;
        callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) extractedValue_17251_exp_2.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName_17517, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 442)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = extractedValue_17239_isConstant_1.boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const "), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 450)) ;
          }
        }
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_").add_operation (var_targetTypeName_17282, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 452)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 452)).add_operation (extractedValue_17221_targetVarCppName_0, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 452)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 452)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string (" = ").add_operation (var_cppVarName_17517, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 453)).add_operation (GGS_string (".unwrappedValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 453)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 453)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("if (!").add_operation (var_cppVarName_17517, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 454)).add_operation (GGS_string (".isValuated ()) {\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 454)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 454)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("  ").add_operation (outArgument_outTestVar, inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 455)).add_operation (GGS_string (" = GalgasBool::boolFalse ;\n"), inCompiler COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 455)), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 455)) ;
        ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("instruction-comma-separated-expression.galgas4", 456)) ;
      }
      break ;
    }
    enumerator_15837.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
// @grammarInFileInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInFileInstructionAST::objectCompare (const GGS_grammarInFileInstructionAST & inOperand) const {
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

GGS_grammarInFileInstructionAST::GGS_grammarInFileInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInFileInstructionAST GGS_grammarInFileInstructionAST::
init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                  const GGS_lstring & in_mGrammarComponentName,
                                  const GGS_lstring & in_mLabelName,
                                  const GGS_semanticExpressionAST & in_mSourceExpression,
                                  const GGS_location & in_mEndOfSourceExpression,
                                  const GGS_actualParameterListAST & in_mActualParameterList,
                                  const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_grammarInFileInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_grammarInFileInstructionAST (inCompiler COMMA_THERE)) ;
  object->grammarInFileInstructionAST_init_21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarComponentName, in_mLabelName, in_mSourceExpression, in_mEndOfSourceExpression, in_mActualParameterList, in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_grammarInFileInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInFileInstructionAST::
grammarInFileInstructionAST_init_21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                              const GGS_lstring & in_mGrammarComponentName,
                                                              const GGS_lstring & in_mLabelName,
                                                              const GGS_semanticExpressionAST & in_mSourceExpression,
                                                              const GGS_location & in_mEndOfSourceExpression,
                                                              const GGS_actualParameterListAST & in_mActualParameterList,
                                                              const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                                              Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mEndOfSourceExpression = in_mEndOfSourceExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST::GGS_grammarInFileInstructionAST (const cPtr_grammarInFileInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInFileInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInFileInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInFileInstructionAST::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_grammarInFileInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInFileInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_grammarInFileInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_grammarInFileInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInFileInstructionAST * p = (cPtr_grammarInFileInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInFileInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInFileInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mGrammarComponentName (),
mProperty_mLabelName (),
mProperty_mSourceExpression (),
mProperty_mEndOfSourceExpression (),
mProperty_mActualParameterList (),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInFileInstructionAST::cPtr_grammarInFileInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                    const GGS_lstring & in_mGrammarComponentName,
                                                                    const GGS_lstring & in_mLabelName,
                                                                    const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                    const GGS_location & in_mEndOfSourceExpression,
                                                                    const GGS_actualParameterListAST & in_mActualParameterList,
                                                                    const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mGrammarComponentName (),
mProperty_mLabelName (),
mProperty_mSourceExpression (),
mProperty_mEndOfSourceExpression (),
mProperty_mActualParameterList (),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mEndOfSourceExpression = in_mEndOfSourceExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInFileInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

void cPtr_grammarInFileInstructionAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInFileInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInFileInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInFileInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInFileInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mEndOfSourceExpression.printNonNullClassInstanceProperties ("mEndOfSourceExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mAbstractGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInFileInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST ("grammarInFileInstructionAST",
                                                                                & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInFileInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInFileInstructionAST_2E_weak::objectCompare (const GGS_grammarInFileInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInFileInstructionAST_2E_weak::GGS_grammarInFileInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInFileInstructionAST_2E_weak & GGS_grammarInFileInstructionAST_2E_weak::operator = (const GGS_grammarInFileInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ("grammarInFileInstructionAST.weak",
                                                                                        & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInFileInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInFileInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInStringInstructionAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInStringInstructionAST::objectCompare (const GGS_grammarInStringInstructionAST & inOperand) const {
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

GGS_grammarInStringInstructionAST::GGS_grammarInStringInstructionAST (void) :
GGS_semanticInstructionAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInStringInstructionAST GGS_grammarInStringInstructionAST::
init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                          const GGS_lstring & in_mGrammarComponentName,
                                          const GGS_lstring & in_mLabelName,
                                          const GGS_semanticExpressionAST & in_mSourceExpression,
                                          const GGS_location & in_mEndOfSourceExpression,
                                          const GGS_semanticExpressionAST & in_mNameExpression,
                                          const GGS_location & in_mEndOfNameExpression,
                                          const GGS_actualParameterListAST & in_mActualParameterList,
                                          const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  cPtr_grammarInStringInstructionAST * object = nullptr ;
  macroMyNew (object, cPtr_grammarInStringInstructionAST (inCompiler COMMA_THERE)) ;
  object->grammarInStringInstructionAST_init_21__21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarComponentName, in_mLabelName, in_mSourceExpression, in_mEndOfSourceExpression, in_mNameExpression, in_mEndOfNameExpression, in_mActualParameterList, in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult, inCompiler) ;
  const GGS_grammarInStringInstructionAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInStringInstructionAST::
grammarInStringInstructionAST_init_21__21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mLabelName,
                                                                        const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                        const GGS_location & in_mEndOfSourceExpression,
                                                                        const GGS_semanticExpressionAST & in_mNameExpression,
                                                                        const GGS_location & in_mEndOfNameExpression,
                                                                        const GGS_actualParameterListAST & in_mActualParameterList,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                                                        Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mEndOfSourceExpression = in_mEndOfSourceExpression ;
  mProperty_mNameExpression = in_mNameExpression ;
  mProperty_mEndOfNameExpression = in_mEndOfNameExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST::GGS_grammarInStringInstructionAST (const cPtr_grammarInStringInstructionAST * inSourcePtr) :
GGS_semanticInstructionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInStringInstructionAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInStringInstructionAST::readProperty_mGrammarComponentName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mGrammarComponentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_grammarInStringInstructionAST::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_grammarInStringInstructionAST::readProperty_mSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInStringInstructionAST::readProperty_mEndOfSourceExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfSourceExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionAST GGS_grammarInStringInstructionAST::readProperty_mNameExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInStringInstructionAST::readProperty_mEndOfNameExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mEndOfNameExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListAST GGS_grammarInStringInstructionAST::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListAST () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult GGS_grammarInStringInstructionAST::readProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult () ;
  }else{
    cPtr_grammarInStringInstructionAST * p = (cPtr_grammarInStringInstructionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInStringInstructionAST) ;
    return p->mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInStringInstructionAST class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInStringInstructionAST::cPtr_grammarInStringInstructionAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (inCompiler COMMA_THERE),
mProperty_mGrammarComponentName (),
mProperty_mLabelName (),
mProperty_mSourceExpression (),
mProperty_mEndOfSourceExpression (),
mProperty_mNameExpression (),
mProperty_mEndOfNameExpression (),
mProperty_mActualParameterList (),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInStringInstructionAST::cPtr_grammarInStringInstructionAST (const GGS_location & in_mInstructionLocation,
                                                                        const GGS_lstring & in_mGrammarComponentName,
                                                                        const GGS_lstring & in_mLabelName,
                                                                        const GGS_semanticExpressionAST & in_mSourceExpression,
                                                                        const GGS_location & in_mEndOfSourceExpression,
                                                                        const GGS_semanticExpressionAST & in_mNameExpression,
                                                                        const GGS_location & in_mEndOfNameExpression,
                                                                        const GGS_actualParameterListAST & in_mActualParameterList,
                                                                        const GGS_abstractGrammarInstructionSyntaxDirectedTranslationResult & in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionAST (in_mInstructionLocation, inCompiler COMMA_THERE),
mProperty_mGrammarComponentName (),
mProperty_mLabelName (),
mProperty_mSourceExpression (),
mProperty_mEndOfSourceExpression (),
mProperty_mNameExpression (),
mProperty_mEndOfNameExpression (),
mProperty_mActualParameterList (),
mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarComponentName = in_mGrammarComponentName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceExpression = in_mSourceExpression ;
  mProperty_mEndOfSourceExpression = in_mEndOfSourceExpression ;
  mProperty_mNameExpression = in_mNameExpression ;
  mProperty_mEndOfNameExpression = in_mEndOfNameExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult = in_mAbstractGrammarInstructionSyntaxDirectedTranslationResult ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInStringInstructionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

void cPtr_grammarInStringInstructionAST::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInStringInstructionAST:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarComponentName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfSourceExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNameExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEndOfNameExpression.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_grammarInStringInstructionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInStringInstructionAST (mProperty_mInstructionLocation, mProperty_mGrammarComponentName, mProperty_mLabelName, mProperty_mSourceExpression, mProperty_mEndOfSourceExpression, mProperty_mNameExpression, mProperty_mEndOfNameExpression, mProperty_mActualParameterList, mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInStringInstructionAST::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionAST::printNonNullClassInstanceProperties () ;
    mProperty_mGrammarComponentName.printNonNullClassInstanceProperties ("mGrammarComponentName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceExpression.printNonNullClassInstanceProperties ("mSourceExpression") ;
    mProperty_mEndOfSourceExpression.printNonNullClassInstanceProperties ("mEndOfSourceExpression") ;
    mProperty_mNameExpression.printNonNullClassInstanceProperties ("mNameExpression") ;
    mProperty_mEndOfNameExpression.printNonNullClassInstanceProperties ("mEndOfNameExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mAbstractGrammarInstructionSyntaxDirectedTranslationResult.printNonNullClassInstanceProperties ("mAbstractGrammarInstructionSyntaxDirectedTranslationResult") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInStringInstructionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST ("grammarInStringInstructionAST",
                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInStringInstructionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInStringInstructionAST_2E_weak::objectCompare (const GGS_grammarInStringInstructionAST_2E_weak & inOperand) const {
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

GGS_grammarInStringInstructionAST_2E_weak::GGS_grammarInStringInstructionAST_2E_weak (void) :
GGS_semanticInstructionAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInStringInstructionAST_2E_weak & GGS_grammarInStringInstructionAST_2E_weak::operator = (const GGS_grammarInStringInstructionAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ("grammarInStringInstructionAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_semanticInstructionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInStringInstructionAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInStringInstructionAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
// @grammarInstructionWithSourceFileForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_grammarInstructionWithSourceFileForGeneration::objectCompare (const GGS_grammarInstructionWithSourceFileForGeneration & inOperand) const {
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

GGS_grammarInstructionWithSourceFileForGeneration::GGS_grammarInstructionWithSourceFileForGeneration (void) :
GGS_semanticInstructionForGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration GGS_grammarInstructionWithSourceFileForGeneration::
init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                      const GGS_string & in_mGrammarName,
                                      const GGS_string & in_mLabelName,
                                      const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                      const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                      const GGS_bool & in_mGrammarHasTranslateFeature,
                                      const GGS_stringlist & in_mAssignementList,
                                      const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  cPtr_grammarInstructionWithSourceFileForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_grammarInstructionWithSourceFileForGeneration (inCompiler COMMA_THERE)) ;
  object->grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (in_mInstructionLocation, in_mGrammarName, in_mLabelName, in_mSourceFileExpression, in_mActualParameterList, in_mGrammarHasTranslateFeature, in_mAssignementList, in_mSyntaxDirectedTranslationResultVarName, inCompiler) ;
  const GGS_grammarInstructionWithSourceFileForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionWithSourceFileForGeneration::
grammarInstructionWithSourceFileForGeneration_init_21__21__21__21__21__21__21__21_ (const GGS_location & in_mInstructionLocation,
                                                                                    const GGS_string & in_mGrammarName,
                                                                                    const GGS_string & in_mLabelName,
                                                                                    const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                    const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                    const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                    const GGS_stringlist & in_mAssignementList,
                                                                                    const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                    Compiler * /* inCompiler */) {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceFileExpression = in_mSourceFileExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

GGS_grammarInstructionWithSourceFileForGeneration::GGS_grammarInstructionWithSourceFileForGeneration (const cPtr_grammarInstructionWithSourceFileForGeneration * inSourcePtr) :
GGS_semanticInstructionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_grammarInstructionWithSourceFileForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_location GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mInstructionLocation (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_location () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mInstructionLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mLabelName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mLabelName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_semanticExpressionForGeneration GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mSourceFileExpression (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_semanticExpressionForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSourceFileExpression ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actualParameterListForGeneration GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mActualParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actualParameterListForGeneration () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mActualParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mGrammarHasTranslateFeature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mGrammarHasTranslateFeature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mAssignementList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_grammarInstructionWithSourceFileForGeneration::readProperty_mSyntaxDirectedTranslationResultVarName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_grammarInstructionWithSourceFileForGeneration * p = (cPtr_grammarInstructionWithSourceFileForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_grammarInstructionWithSourceFileForGeneration) ;
    return p->mProperty_mSyntaxDirectedTranslationResultVarName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @grammarInstructionWithSourceFileForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceFileExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_grammarInstructionWithSourceFileForGeneration::cPtr_grammarInstructionWithSourceFileForGeneration (const GGS_location & in_mInstructionLocation,
                                                                                                        const GGS_string & in_mGrammarName,
                                                                                                        const GGS_string & in_mLabelName,
                                                                                                        const GGS_semanticExpressionForGeneration & in_mSourceFileExpression,
                                                                                                        const GGS_actualParameterListForGeneration & in_mActualParameterList,
                                                                                                        const GGS_bool & in_mGrammarHasTranslateFeature,
                                                                                                        const GGS_stringlist & in_mAssignementList,
                                                                                                        const GGS_string & in_mSyntaxDirectedTranslationResultVarName,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_semanticInstructionForGeneration (inCompiler COMMA_THERE),
mProperty_mInstructionLocation (),
mProperty_mGrammarName (),
mProperty_mLabelName (),
mProperty_mSourceFileExpression (),
mProperty_mActualParameterList (),
mProperty_mGrammarHasTranslateFeature (),
mProperty_mAssignementList (),
mProperty_mSyntaxDirectedTranslationResultVarName () {
  mProperty_mInstructionLocation = in_mInstructionLocation ;
  mProperty_mGrammarName = in_mGrammarName ;
  mProperty_mLabelName = in_mLabelName ;
  mProperty_mSourceFileExpression = in_mSourceFileExpression ;
  mProperty_mActualParameterList = in_mActualParameterList ;
  mProperty_mGrammarHasTranslateFeature = in_mGrammarHasTranslateFeature ;
  mProperty_mAssignementList = in_mAssignementList ;
  mProperty_mSyntaxDirectedTranslationResultVarName = in_mSyntaxDirectedTranslationResultVarName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_grammarInstructionWithSourceFileForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

void cPtr_grammarInstructionWithSourceFileForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@grammarInstructionWithSourceFileForGeneration:") ;
  mProperty_mInstructionLocation.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mGrammarName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mLabelName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSourceFileExpression.description (ioString, inIndentation+1) ;
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

AbstractPtrClass * cPtr_grammarInstructionWithSourceFileForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_grammarInstructionWithSourceFileForGeneration (mProperty_mInstructionLocation, mProperty_mGrammarName, mProperty_mLabelName, mProperty_mSourceFileExpression, mProperty_mActualParameterList, mProperty_mGrammarHasTranslateFeature, mProperty_mAssignementList, mProperty_mSyntaxDirectedTranslationResultVarName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_grammarInstructionWithSourceFileForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_semanticInstructionForGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mInstructionLocation.printNonNullClassInstanceProperties ("mInstructionLocation") ;
    mProperty_mGrammarName.printNonNullClassInstanceProperties ("mGrammarName") ;
    mProperty_mLabelName.printNonNullClassInstanceProperties ("mLabelName") ;
    mProperty_mSourceFileExpression.printNonNullClassInstanceProperties ("mSourceFileExpression") ;
    mProperty_mActualParameterList.printNonNullClassInstanceProperties ("mActualParameterList") ;
    mProperty_mGrammarHasTranslateFeature.printNonNullClassInstanceProperties ("mGrammarHasTranslateFeature") ;
    mProperty_mAssignementList.printNonNullClassInstanceProperties ("mAssignementList") ;
    mProperty_mSyntaxDirectedTranslationResultVarName.printNonNullClassInstanceProperties ("mSyntaxDirectedTranslationResultVarName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @grammarInstructionWithSourceFileForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ("grammarInstructionWithSourceFileForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_semanticInstructionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_grammarInstructionWithSourceFileForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_grammarInstructionWithSourceFileForGeneration ;
}

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
                                          const GGS_stringlist & in_mAssignementList,
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
                                                                                              const GGS_stringlist & in_mAssignementList,
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

GGS_stringlist GGS_grammarInstructionWithSourceExpressionForGeneration::readProperty_mAssignementList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringlist () ;
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
                                                                                                                    const GGS_stringlist & in_mAssignementList,
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
                              const GGS_lstringlist & in_mReceiverStructProperties,
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
                                                       const GGS_lstringlist & in_mReceiverStructProperties,
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

GGS_lstringlist GGS_setterCallInstructionAST::readProperty_mReceiverStructProperties (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
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
                                                              const GGS_lstringlist & in_mReceiverStructProperties,
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

